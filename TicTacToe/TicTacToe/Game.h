#pragma once

#include "Gamemap.h"
#include "Gamer.h"

#include <Windows.h>

namespace TicTacToe {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Game
	/// </summary>
	public ref class Game : public System::Windows::Forms::Form
	{
	public:
		Game(void)
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
		~Game()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::StatusStrip^ statusStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ âèõ³äToolStripMenuItem;

	private: System::Windows::Forms::ToolStripStatusLabel^ status;
	private: System::Windows::Forms::ToolStripMenuItem^ íîâàÃğàToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ïîâåğíóòèñüToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ïğîÏğîãğàìóToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ âèõ³äToolStripMenuItem1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->âèõ³äToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->íîâàÃğàToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ïîâåğíóòèñüToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ïğîÏğîãğàìóToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->âèõ³äToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->statusStrip1 = (gcnew System::Windows::Forms::StatusStrip());
			this->status = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->menuStrip1->SuspendLayout();
			this->statusStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->GripMargin = System::Windows::Forms::Padding(2, 2, 0, 2);
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(40, 40);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->âèõ³äToolStripMenuItem,
					this->ïğîÏğîãğàìóToolStripMenuItem, this->âèõ³äToolStripMenuItem1
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1504, 52);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// âèõ³äToolStripMenuItem
			// 
			this->âèõ³äToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->íîâàÃğàToolStripMenuItem,
					this->ïîâåğíóòèñüToolStripMenuItem
			});
			this->âèõ³äToolStripMenuItem->Name = L"âèõ³äToolStripMenuItem";
			this->âèõ³äToolStripMenuItem->Size = System::Drawing::Size(126, 48);
			this->âèõ³äToolStripMenuItem->Text = L"Ìåíş";
			// 
			// íîâàÃğàToolStripMenuItem
			// 
			this->íîâàÃğàToolStripMenuItem->Name = L"íîâàÃğàToolStripMenuItem";
			this->íîâàÃğàToolStripMenuItem->Size = System::Drawing::Size(448, 54);
			this->íîâàÃğàToolStripMenuItem->Text = L"Íîâà ãğà";
			this->íîâàÃğàToolStripMenuItem->Click += gcnew System::EventHandler(this, &Game::íîâàÃğàToolStripMenuItem_Click);
			// 
			// ïîâåğíóòèñüToolStripMenuItem
			// 
			this->ïîâåğíóòèñüToolStripMenuItem->Name = L"ïîâåğíóòèñüToolStripMenuItem";
			this->ïîâåğíóòèñüToolStripMenuItem->Size = System::Drawing::Size(448, 54);
			this->ïîâåğíóòèñüToolStripMenuItem->Text = L"Ïîâåğíóòèñü";
			this->ïîâåğíóòèñüToolStripMenuItem->Click += gcnew System::EventHandler(this, &Game::ïîâåğíóòèñüToolStripMenuItem_Click);
			// 
			// ïğîÏğîãğàìóToolStripMenuItem
			// 
			this->ïğîÏğîãğàìóToolStripMenuItem->Name = L"ïğîÏğîãğàìóToolStripMenuItem";
			this->ïğîÏğîãğàìóToolStripMenuItem->Size = System::Drawing::Size(240, 48);
			this->ïğîÏğîãğàìóToolStripMenuItem->Text = L"Ïğî ïğîãğàìó";
			this->ïğîÏğîãğàìóToolStripMenuItem->Click += gcnew System::EventHandler(this, &Game::ïğîÏğîãğàìóToolStripMenuItem_Click);
			// 
			// âèõ³äToolStripMenuItem1
			// 
			this->âèõ³äToolStripMenuItem1->Name = L"âèõ³äToolStripMenuItem1";
			this->âèõ³äToolStripMenuItem1->Size = System::Drawing::Size(113, 48);
			this->âèõ³äToolStripMenuItem1->Text = L"Âèõ³ä";
			this->âèõ³äToolStripMenuItem1->Click += gcnew System::EventHandler(this, &Game::âèõ³äToolStripMenuItem1_Click);
			// 
			// statusStrip1
			// 
			this->statusStrip1->ImageScalingSize = System::Drawing::Size(40, 40);
			this->statusStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->status });
			this->statusStrip1->Location = System::Drawing::Point(0, 962);
			this->statusStrip1->Name = L"statusStrip1";
			this->statusStrip1->Size = System::Drawing::Size(1504, 54);
			this->statusStrip1->TabIndex = 1;
			this->statusStrip1->Text = L"Õğåñòèêè-íóëèêè";
			// 
			// status
			// 
			this->status->Name = L"status";
			this->status->Size = System::Drawing::Size(167, 41);
			this->status->Text = L"Õ³ä ãğàâöÿ:";
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dataGridView1->Location = System::Drawing::Point(0, 52);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 102;
			this->dataGridView1->RowTemplate->Height = 40;
			this->dataGridView1->Size = System::Drawing::Size(1504, 910);
			this->dataGridView1->TabIndex = 2;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Game::dataGridView1_CellContentClick);
			// 
			// Game
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(16, 31);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1504, 1016);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->statusStrip1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"Game";
			this->Text = L"Game";
			this->Load += gcnew System::EventHandler(this, &Game::Game_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->statusStrip1->ResumeLayout(false);
			this->statusStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		public: int rows;
		public: int columns;
		public: int length;
		public: int selectedGameMode;
		private: Random^ rand;

		private: void Update();
		private: void NewGame();
		private: void UpdateGameGrid();
		private: void CreateGameGrid(Vector2);
		private: System::Void SetPositionPlayer(Vector2);

	private: System::Void Game_Load(System::Object^ sender, System::EventArgs^ e);
	private: System::Void íîâàÃğàToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void ïîâåğíóòèñüToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void ïğîÏğîãğàìóToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void âèõ³äToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e);
	};
}
