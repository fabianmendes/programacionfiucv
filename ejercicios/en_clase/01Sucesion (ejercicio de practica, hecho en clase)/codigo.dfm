object Form1: TForm1
  Left = 0
  Top = 0
  Caption = 'Ejercicio hecho en clase: Sucesi'#243'n. 1'
  ClientHeight = 218
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
    Left = 13
    Top = 47
    Width = 111
    Height = 15
    Caption = '  Valor de equis (X) : '
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -12
    Font.Name = 'Arial'
    Font.Style = []
    ParentFont = False
  end
  object Label2: TLabel
    Left = 275
    Top = 47
    Width = 112
    Height = 15
    Caption = 'Tolerancia deseada:'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -12
    Font.Name = 'Arial'
    Font.Style = []
    ParentFont = False
    OnClick = Label2Click
  end
  object Label3: TLabel
    Left = 77
    Top = 168
    Width = 391
    Height = 15
    Caption = 
      'Aqu'#237' le diremos si la sucesi'#243'n diverge o converge, y de hacerlo:' +
      ' donde..'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -12
    Font.Name = 'Arial'
    Font.Style = []
    ParentFont = False
  end
  object Label4: TLabel
    Left = 127
    Top = 169
    Width = 3
    Height = 13
  end
  object Edit1: TEdit
    Left = 127
    Top = 45
    Width = 129
    Height = 21
    TabOrder = 0
    Text = 'Introduzca un N'#176' entero.'
  end
  object Edit2: TEdit
    Left = 393
    Top = 45
    Width = 127
    Height = 21
    TabOrder = 1
    Text = 'Introduzca un N'#176' entero.'
  end
  object Button1: TButton
    Left = 208
    Top = 96
    Width = 121
    Height = 33
    Caption = 'CALCULAR'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'Arial'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 2
    OnClick = Button1Click
  end
end
