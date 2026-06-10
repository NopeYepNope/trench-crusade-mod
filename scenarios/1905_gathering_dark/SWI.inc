##############################
# SWI country definition  #
##############################

country = {
  tag                = SWI
  capital            = 1019
  dissent            = 0
  manpower           = 80
  energy             = 2000
  metal              = 1000
  rare_materials     = 500
  oil                = 500
  supplies           = 500
  money              = 20
  transports         = 20

  ownedprovinces         = { 1019 1020 1021 }
  controlledprovinces    = { 1019 1020 1021 }
  nationalprovinces      = { 1019 1020 1021 }

  techapps = { 1010 1020 1030 1040 1160 1170 1180 2290 2800 3010 3020 3030 3110 3120 3130 3210 3220 3230 3410 3420 3430 4500 5600 5700 8010 8020 8040 }

  policy = {
    date = { year = 0 month = january day = 0 }
    democratic = 7
    political_left = 5
    freedom = 7
        interventionism = 4
    professional_army = 6
    defense_lobby = 7
    free_market = 6
  }

  landunit = {
    id       = { type = 14000 id = 51200 }
    name     = "SWI Army"
    location = 1019
    division = {
      id    = { type = 14000 id = 51201 }
      name  = "SWI Infantry Division"
      type  = infantry
      model = 1
      strength = 50
    }
  }
}
