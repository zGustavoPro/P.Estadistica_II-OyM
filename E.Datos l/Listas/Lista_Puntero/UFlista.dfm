object Form2: TForm2
  Left = 0
  Top = 0
  Caption = 'Form2'
  ClientHeight = 433
  ClientWidth = 622
  Color = clAqua
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -12
  Font.Name = 'Segoe UI'
  Font.Style = []
  TextHeight = 15
  object Label1: TLabel
    Left = 232
    Top = 24
    Width = 100
    Height = 23
    Caption = 'Lista(Vector)'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -17
    Font.Name = 'Segoe UI'
    Font.Style = [fsBold, fsItalic]
    ParentFont = False
  end
  object Button1: TButton
    Left = 24
    Top = 120
    Width = 75
    Height = 25
    Caption = 'crear'
    TabOrder = 0
    OnClick = Button1Click
  end
  object Button2: TButton
    Left = 24
    Top = 169
    Width = 75
    Height = 25
    Caption = 'Ins_Prim'
    TabOrder = 1
    OnClick = Button2Click
  end
  object Button3: TButton
    Left = 24
    Top = 216
    Width = 75
    Height = 25
    Caption = 'Ins_Ult'
    TabOrder = 2
    OnClick = Button3Click
  end
  object Button4: TButton
    Left = 24
    Top = 264
    Width = 75
    Height = 25
    Caption = 'Mostrar'
    TabOrder = 3
    OnClick = Button4Click
  end
  object Edit1: TEdit
    Left = 128
    Top = 170
    Width = 121
    Height = 23
    TabOrder = 4
  end
  object Edit2: TEdit
    Left = 128
    Top = 217
    Width = 121
    Height = 23
    TabOrder = 5
  end
  object Button5: TButton
    Left = 24
    Top = 400
    Width = 75
    Height = 25
    Caption = 'Salir'
    TabOrder = 6
    OnClick = Button5Click
  end
end
