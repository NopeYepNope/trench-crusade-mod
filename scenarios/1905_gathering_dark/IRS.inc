##############################
# Country definition for IRS #
##############################

country = {
  tag                = IRS
  capital            = 783
  dissent            = 4
  manpower           = 160
  energy             = 3000
  metal              = 1500
  rare_materials     = 750
  oil                = 800
  supplies           = 700
  money              = 40
  transports         = 20

  ownedprovinces         = { 783 784 785 786 787 788 700 701 }
  controlledprovinces    = { 783 784 785 786 787 788 700 701 }
  nationalprovinces      = { 783 784 785 786 787 788 700 701 }

  techapps               = { 1010 1020 1030 1040 1160 1170 1180 2290 2800 3010 3020 3030 3110 3120 3130 3210 3220 3230 3410 3420 3430 4500 5600 5700 8010 8020 8040 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic = 7
    political_left = 5
    freedom = 7
    open_society = 6
    interventionism = 4
    professional_army = 6
    defense_lobby = 7
    market_economy = 6
  }

  landunit = {
    id       = { type = 14000 id = 51100 }
    name     = "IRS Army"
    location = 783
    division = {
      id             = { type = 14000 id = 51101 }
      name           = "IRS Infantry Division"
      type           = infantry
      model          = 1
      strength       = 50
    }
    division = {
      id             = { type = 14000 id = 51102 }
      name           = "IRS Cavalry"
      type           = cavalry
      model          = 1
      strength       = 40
    }
  }
}
