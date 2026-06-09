#include "Game.h"
#include "Start.h"

GameMap map;
Gamer player1;
Gamer player2;
GamerStatus currentPlayer;
Vector2 selectedCellPlayer;

bool canPlay;
bool endGame;

namespace TicTacToe {

    System::Void TicTacToe::Game::Game_Load(System::Object^ sender, System::EventArgs^ e)
    {
        NewGame();
    }


    void Game::Update() {
        if (endGame)
            return;

        int state_game = map.CheckingWin();

        if (state_game == 1) {
            {
                MessageBox::Show("Вітаємо Гравець з перемогою!", "Перемога!");
            }
            UpdateGameGrid();

            endGame = true;
        }
        else if (state_game == 2) {
            {
                MessageBox::Show("Вітаємо Гравець2 з перемогою!", "Перемога!");
            }
            UpdateGameGrid();

            endGame = true;
        }
        else if (state_game == 3) {
            MessageBox::Show("Перемогла дружба!", "Нічия!");
            UpdateGameGrid();

            endGame = true;
        }
        if (endGame) {
            if (MessageBox::Show("Запустити нову гру?", "Увага!", MessageBoxButtons::YesNo) == Windows::Forms::DialogResult::Yes) {
                NewGame();
            }
            return;
        }
        if (currentPlayer == Player) {
            status->Text = "Хід: 0!";
            currentPlayer = Player2;
        }
        else {
            status->Text = "Хід: X!";
            currentPlayer = Player;
        }

        UpdateGameGrid();
    }

    void Game::NewGame()
    {
        rows = 3;
        columns = 3;
        length = 3;

        map.SetMap(rows, columns, length);

        Vector2 size_grid;
        size_grid.x = rows;
        size_grid.y = columns;
        CreateGameGrid(size_grid);

        endGame = false;
        canPlay = true;

        rand = gcnew Random();
        int state_player = rand->Next(1, 3);

        if (state_player == 1) {
            player1.SetField(Player, 1);
            player2.SetField(Player2, 2);

            status->Text = "Хід: X!";

            currentPlayer = Player;
        }
        else if (state_player == 2) {
            player1.SetField(Player, 1);
            player2.SetField(Player2, 2);

            status->Text = "Хід 0!";

            currentPlayer = Player2;
        }
        else {
            MessageBox::Show("Помилка генерації вибора гравця!", "Помилка!");
            return;
        }
    }

    void Game::UpdateGameGrid()
    {
        for (int i = 0; i < map.GetSize().x; i++) {
            for (int j = 0; j < map.GetSize().y; j++) {
                if (!map.IsEmpty(i, j)) {
                    if (map.GetValue(i, j) == 1) {
                        dataGridView1->Rows[i]->Cells[j]->Value = "X";
                    }
                    else {
                        dataGridView1->Rows[i]->Cells[j]->Value = "0";
                    }
                }
            }
        }
        dataGridView1->Refresh();
    }

    void Game::CreateGameGrid(Vector2 size)
    {
        dataGridView1->Rows->Clear();
        dataGridView1->Columns->Clear();

        dataGridView1->RowHeadersVisible = false;
        dataGridView1->ColumnHeadersVisible = false;

        dataGridView1->AllowUserToResizeColumns = false;
        dataGridView1->AllowUserToResizeRows = false;

        this->MaximizeBox = false; 
        this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;

        dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;

        dataGridView1->DefaultCellStyle->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;

        System::Drawing::Font^ font = gcnew System::Drawing::Font("Microsoft Sans Serif", 72, System::Drawing::FontStyle::Bold);
        dataGridView1->DefaultCellStyle->Font = font;

        for (int i = 0; i < size.x; i++) {
            System::Windows::Forms::DataGridViewButtonColumn^ column = gcnew System::Windows::Forms::DataGridViewButtonColumn();
            column->Name = "column" + i;
            dataGridView1->Columns->Add(column);
        }

        dataGridView1->RowTemplate->Height = 100;

        for (int i = 0; i < size.y; i++) {
            dataGridView1->Rows->Add();
        }

        dataGridView1->ClearSelection();
    }
    Void Game::SetPositionPlayer(Vector2 cell)
    {
        if (currentPlayer == Player) {
            if (!map.SetPosition(cell, player1.GetMark())) {
                MessageBox::Show("Ця позиція зайнята!", "Увага!");
                return;
            }
        }
        else {
            if (!map.SetPosition(cell, player2.GetMark())) {
                MessageBox::Show("Ця позиція зайнята!", "Увага!");
                return;
            }
        }
        UpdateGameGrid();
        Update();
    }


    System::Void Game::новаГраToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
    {
        if (MessageBox::Show("Продовжити?", "Увага!", MessageBoxButtons::YesNo) == Windows::Forms::DialogResult::Yes) {
            NewGame();
        }
    }

    System::Void Game::повернутисьToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
    {
        if (MessageBox::Show("Продовжити?", "Увага!", MessageBoxButtons::YesNo) == Windows::Forms::DialogResult::Yes) {
            start^ form = gcnew start();
            form->Show();
            this->Hide();
        }
    }

    System::Void Game::проПрограмуToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
    {
        MessageBox::Show("Гра реалізована в межах курсового проєкту студентом 25 групи Коваленком Олександром");
    }

    System::Void Game::вихідToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e)
    {
        if (MessageBox::Show("Продовжити?", "Увага!", MessageBoxButtons::YesNo) == Windows::Forms::DialogResult::Yes) {
            Application::Exit();
        }
    }

    System::Void Game::dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e)
    {
        auto senderGrid = (DataGridView^)sender;

        selectedCellPlayer.x = e->RowIndex;
        selectedCellPlayer.y = e->ColumnIndex;

        SetPositionPlayer(selectedCellPlayer);
    }
}

