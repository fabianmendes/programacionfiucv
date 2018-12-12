object Form1: TForm1
  Left = 0
  Top = 0
  Caption = 'Form1'
  ClientHeight = 265
  ClientWidth = 551
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 8
    Top = 8
    Width = 140
    Height = 13
    Caption = 'A'#241'os en la empresa:  0 a'#241'os.'
  end
  object Label2: TLabel
    Left = 240
    Top = 136
    Width = 58
    Height = 13
    Caption = 'Respuesta: '
  end
  object RadioGroup1: TRadioGroup
    Left = 16
    Top = 78
    Width = 209
    Height = 153
    Caption = 'Seleccione su factor correspondiente: '
    Items.Strings = (
      'Gerente'
      'Supervisor'
      'Ingeniero de Planta'
      'T'#233'cnico Superior'
      'Secretar'#237'a'
      'Mensajero')
    TabOrder = 0
  end
  object Edit1: TEdit
    Left = 263
    Top = 88
    Width = 122
    Height = 21
    TabOrder = 1
    Text = ' Ingrese aqu'#237' su salario.'
    OnClick = Edit1Change
  end
  object TrackBar1: TTrackBar
    Left = 8
    Top = 27
    Width = 543
    Height = 45
    Max = 30
    Min = 1
    Position = 1
    TabOrder = 2
    OnChange = TrackBar1Change
  end
  object Button1: TButton
    Left = 416
    Top = 98
    Width = 97
    Height = 25
    Caption = 'CALCULAR'
    TabOrder = 3
    OnClick = Button1Click
  end
  object Edit2: TEdit
    Left = 320
    Top = 171
    Width = 121
    Height = 21
    Enabled = False
    TabOrder = 4
    Text = '..y cu'#225'nto quiere sacar.'
  end
  object Button2: TButton
    Left = 312
    Top = 198
    Width = 145
    Height = 25
    Caption = 'Ver el a'#241'o que no podr'#233' !'
    Enabled = False
    TabOrder = 5
  end
end
