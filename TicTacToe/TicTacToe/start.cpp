#include "start.h"
#include "Game.h"

using namespace System;
using namespace System::Windows::Forms;

int main(array<String^>^ args) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);

    TicTacToe::start form;
    Application::Run(% form);

    return 0;
}

System::Void TicTacToe::start::хрестикинуликиToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    if (MessageBox::Show("Ви дійсно хочете вийти з гри?", "Вихід", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes)
    {
        Application::Exit();
    }
}


System::Void TicTacToe::start::проПрограмуToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    MessageBox::Show("Гра реалізована в межах курсового проєкту студентом 25 групи Коваленком Олександром");
}

System::Void TicTacToe::start::buttonstart_Click(System::Object^ sender, System::EventArgs^ e)
{
    Game^ gameForm = gcnew Game();

    gameForm->Show();
    this->Hide();
}