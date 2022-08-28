#include "lampe.h"
#include "interrupteur.h"
#include "commutateur.h"
#include "trupteur.h"
#include "poussoir.h"

#pragma once
namespace LumièresMaisonsGUI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace Domotique;

	/// <summary>
	/// Description résumée de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
			// On initialise ici les composants ainsi que leurs associations 
			lampe1 = new Lampe();
			lampe2 = new Lampe();
			lampe3 = new Lampe();
			lampe4 = new Lampe();
			lampe5 = new Lampe();
			lampe6 = new Lampe();

			lampe = new Lampe();

			monInter1 = new Interrupteur();
			monInter2 = new Interrupteur();
			monInter3 = new Interrupteur();
			monInter4 = new Interrupteur();
			monInter5 = new Interrupteur();
			monInter6 = new Interrupteur();

			mInter1 = new Commutateur();
			mInter2 = new Commutateur();

			monTelerupteur = new TRupteur();

			monPoussoir1 = new Poussoir();
			monPoussoir2 = new Poussoir();
			monPoussoir3 = new Poussoir();

			monInter1->Cabler(lampe1);
			monInter2->Cabler(lampe2);
			monInter3->Cabler(lampe3);
			monInter4->Cabler(lampe4);
			monInter5->Cabler(lampe5);
			monInter6->Cabler(lampe6);

			mInter1->Cabler(mInter2, lampe1);
			mInter2->Cabler(mInter1, lampe1);

			monPoussoir1->Cabler(monTelerupteur);
			monPoussoir2->Cabler(monTelerupteur);
			monPoussoir3->Cabler(monTelerupteur);

			monTelerupteur->Cabler(lampe);

			timer1->Enabled=true;

		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

		///
		/// Objets graphiques
		///

	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  fichierToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  quitterToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  aProposToolStripMenuItem;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::PictureBox^  pictureBox3;
	private: System::Windows::Forms::PictureBox^  pictureBox4;
	private: System::Windows::Forms::PictureBox^  pictureBox5;
	private: System::Windows::Forms::PictureBox^  pictureBox6;
	private: System::Windows::Forms::VScrollBar^  vScrollBar1;

	protected: 

	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>
		/// Creation des lampes, interrupteurs, commutateurs, telerupteur et BP's
		Lampe *lampe1;
		Lampe *lampe2;
		Lampe *lampe3;
		Lampe *lampe4;
		Lampe *lampe5;
		Lampe *lampe6;

		Lampe *lampe;

		Interrupteur *monInter1;
		Interrupteur *monInter2;
		Interrupteur *monInter3;
		Interrupteur *monInter4;
		Interrupteur *monInter5;
		Interrupteur *monInter6;

		Commutateur *mInter1;
		Commutateur *mInter2;

		TRupteur *monTelerupteur;
		Poussoir *monPoussoir1;
		Poussoir *monPoussoir2;
		Poussoir *monPoussoir3;

	private: System::Windows::Forms::Timer^  timer1;
	private: System::ComponentModel::IContainer^  components;

		
#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->fichierToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->quitterToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aProposToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->vScrollBar1 = (gcnew System::Windows::Forms::VScrollBar());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox6))->BeginInit();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->fichierToolStripMenuItem, 
				this->toolStripMenuItem1});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(705, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// fichierToolStripMenuItem
			// 
			this->fichierToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) {this->quitterToolStripMenuItem});
			this->fichierToolStripMenuItem->Name = L"fichierToolStripMenuItem";
			this->fichierToolStripMenuItem->Size = System::Drawing::Size(54, 20);
			this->fichierToolStripMenuItem->Text = L"Fichier";
			// 
			// quitterToolStripMenuItem
			// 
			this->quitterToolStripMenuItem->Name = L"quitterToolStripMenuItem";
			this->quitterToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->quitterToolStripMenuItem->Text = L"Quitter";
			this->quitterToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::quitterToolStripMenuItem_Click);
			// 
			// toolStripMenuItem1
			// 
			this->toolStripMenuItem1->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) {this->aProposToolStripMenuItem});
			this->toolStripMenuItem1->Name = L"toolStripMenuItem1";
			this->toolStripMenuItem1->Size = System::Drawing::Size(24, 20);
			this->toolStripMenuItem1->Text = L"\?";
			// 
			// aProposToolStripMenuItem
			// 
			this->aProposToolStripMenuItem->Name = L"aProposToolStripMenuItem";
			this->aProposToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->aProposToolStripMenuItem->Text = L"À propos";
			this->aProposToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::aProposToolStripMenuItem_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(132, 262);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(19, 20);
			this->button1->TabIndex = 1;
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(292, 219);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(19, 20);
			this->button2->TabIndex = 2;
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(111, 219);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(19, 20);
			this->button3->TabIndex = 3;
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(387, 74);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(19, 20);
			this->button4->TabIndex = 4;
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(581, 282);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(19, 20);
			this->button5->TabIndex = 5;
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(490, 369);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(19, 20);
			this->button6->TabIndex = 6;
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Black;
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->pictureBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox1->Location = System::Drawing::Point(327, 369);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(333, 50);
			this->pictureBox1->TabIndex = 7;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::Black;
			this->pictureBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->pictureBox2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox2->Location = System::Drawing::Point(292, 44);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(368, 50);
			this->pictureBox2->TabIndex = 8;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackColor = System::Drawing::Color::Black;
			this->pictureBox3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->pictureBox3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox3->Location = System::Drawing::Point(581, 100);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(79, 263);
			this->pictureBox3->TabIndex = 9;
			this->pictureBox3->TabStop = false;
			// 
			// pictureBox4
			// 
			this->pictureBox4->BackColor = System::Drawing::Color::Yellow;
			this->pictureBox4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->pictureBox4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox4->Location = System::Drawing::Point(97, 219);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(224, 37);
			this->pictureBox4->TabIndex = 10;
			this->pictureBox4->TabStop = false;
			// 
			// pictureBox5
			// 
			this->pictureBox5->BackColor = System::Drawing::Color::Black;
			this->pictureBox5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->pictureBox5->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox5->Location = System::Drawing::Point(327, 100);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(248, 263);
			this->pictureBox5->TabIndex = 11;
			this->pictureBox5->TabStop = false;
			// 
			// pictureBox6
			// 
			this->pictureBox6->BackColor = System::Drawing::Color::Black;
			this->pictureBox6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->pictureBox6->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox6->Location = System::Drawing::Point(97, 262);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(138, 93);
			this->pictureBox6->TabIndex = 12;
			this->pictureBox6->TabStop = false;
			// 
			// vScrollBar1
			// 
			this->vScrollBar1->Location = System::Drawing::Point(327, 181);
			this->vScrollBar1->Name = L"vScrollBar1";
			this->vScrollBar1->Size = System::Drawing::Size(22, 31);
			this->vScrollBar1->TabIndex = 13;
			// 
			// timer1
			// 
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::timer1_Tick);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(705, 458);
			this->Controls->Add(this->vScrollBar1);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->menuStrip1);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->pictureBox6);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox5);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"Eclairage d\'une maison";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox6))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void quitterToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
			 {
				 Application::Exit();
			 }
	private: System::Void aProposToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
			 {
			MessageBox::Show( "Eclairage d'une maison.\nActivité 6 du TP Domotique\nVersion 1.0.0\nDate 15/10/2018\n","",
			MessageBoxButtons::OK,
			MessageBoxIcon::Asterisk); 
			 }

private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			mInter1->Basculer(); 
		 }
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			mInter2->Basculer();
		 }

private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) 
		 {
			 // Vérification des états des interrupteurs

			 bool etatPic6 = monInter5->EstFerme();

			 // Verification de la lampe pour le va et vient

			 bool etatPic4Inter1 = lampe1->EstAllumee();
			 bool etatPic4Inter2 = lampe1->EstAllumee();

			 // Verification des lampes pour le telerupteur + BP

			 bool etatPic1_2_3 = monTelerupteur->EstActionne();

			 // Allumage des pièces = Changement de couleur du pannel

			 if(etatPic4Inter1 == false) // pièce vaEtvient
			 this->pictureBox4->BackColor = Color::Yellow;
			 else this->pictureBox4->BackColor = Color::Black;
			 if(etatPic4Inter2 == false) // pièce vaEtvient
			 this->pictureBox4->BackColor = Color::Yellow;
			 else this->pictureBox4->BackColor = Color::Black;

			 if(etatPic1_2_3 == true) // 3 pièces telerupteur
			 {
				 this->pictureBox1->BackColor = Color::Yellow;
				 this->pictureBox2->BackColor = Color::Yellow;
				 this->pictureBox3->BackColor = Color::Yellow;
			 }
			 else
			 {
				 this->pictureBox1->BackColor = Color::Black;
				 this->pictureBox2->BackColor = Color::Black;
				 this->pictureBox3->BackColor = Color::Black;
			 }

			 if(etatPic6 == true) // pièce à interrupteur
			 this->pictureBox6->BackColor = Color::Yellow;
			 else this->pictureBox6->BackColor = Color::Black;
		 }

private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			monPoussoir1->Impulser();		
		 }
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			monPoussoir2->Impulser();
		 }
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			monPoussoir3->Impulser();			
		 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 bool etat5 = monInter5->EstFerme();
			 if (etat5 == true) monInter5->Ouvrir();
			 else monInter5->Fermer();
		 }

};
}
