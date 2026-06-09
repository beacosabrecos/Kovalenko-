#pragma once

namespace TicTacToe {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for start
	/// </summary>
	public ref class start : public System::Windows::Forms::Form
	{
	public:
		start(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~start()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ õğåñòèêèíóëèêèToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ïğîÏğîãğàìóToolStripMenuItem;
	private: System::Windows::Forms::Button^ buttonstart;


	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;


	private: System::ComponentModel::IContainer^ components;


	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->õğåñòèêèíóëèêèToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ïğîÏğîãğàìóToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->buttonstart = (gcnew System::Windows::Forms::Button());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.1F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(396, 89);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(402, 53);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Õğåñòèêè-íóëèêè";
			this->label1->Click += gcnew System::EventHandler(this, &start::label1_Click);
			// 
			// menuStrip1
			// 
			this->menuStrip1->GripMargin = System::Windows::Forms::Padding(2, 2, 0, 2);
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(40, 40);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->õğåñòèêèíóëèêèToolStripMenuItem,
					this->ïğîÏğîãğàìóToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1184, 49);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// õğåñòèêèíóëèêèToolStripMenuItem
			// 
			this->õğåñòèêèíóëèêèToolStripMenuItem->Name = L"õğåñòèêèíóëèêèToolStripMenuItem";
			this->õğåñòèêèíóëèêèToolStripMenuItem->Size = System::Drawing::Size(113, 45);
			this->õğåñòèêèíóëèêèToolStripMenuItem->Text = L"Âèõ³ä";
			this->õğåñòèêèíóëèêèToolStripMenuItem->Click += gcnew System::EventHandler(this, &start::õğåñòèêèíóëèêèToolStripMenuItem_Click);
			// 
			// ïğîÏğîãğàìóToolStripMenuItem
			// 
			this->ïğîÏğîãğàìóToolStripMenuItem->Name = L"ïğîÏğîãğàìóToolStripMenuItem";
			this->ïğîÏğîãğàìóToolStripMenuItem->Size = System::Drawing::Size(240, 45);
			this->ïğîÏğîãğàìóToolStripMenuItem->Text = L"Ïğî ïğîãğàìó";
			this->ïğîÏğîãğàìóToolStripMenuItem->Click += gcnew System::EventHandler(this, &start::ïğîÏğîãğàìóToolStripMenuItem_Click);
			// 
			// buttonstart
			// 
			this->buttonstart->Font = (gcnew System::Drawing::Font(L"Times New Roman", 27.9F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonstart->Location = System::Drawing::Point(275, 266);
			this->buttonstart->Name = L"buttonstart";
			this->buttonstart->Size = System::Drawing::Size(622, 139);
			this->buttonstart->TabIndex = 2;
			this->buttonstart->Text = L"Ïî÷àòè ãğó";
			this->buttonstart->UseVisualStyleBackColor = true;
			this->buttonstart->Click += gcnew System::EventHandler(this, &start::buttonstart_Click);
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->ImageScalingSize = System::Drawing::Size(40, 40);
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(61, 4);
			// 
			// start
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(16, 31);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1184, 632);
			this->Controls->Add(this->buttonstart);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->MaximumSize = System::Drawing::Size(1216, 720);
			this->MinimumSize = System::Drawing::Size(1216, 720);
			this->Name = L"start";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"start";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void õğåñòèêèíóëèêèToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void ïğîÏğîãğàìóToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void buttonstart_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void numericUpDown2_ValueChanged(System::Object^ sender, System::EventArgs^ e){
}
};
}
