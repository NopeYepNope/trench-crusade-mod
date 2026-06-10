##############################
# IRN country definition  #
##############################

country = {
  tag                = IRN
  capital            = 1086
  dissent            = 0
  manpower           = 120
  energy             = 2000
  metal              = 1000
  rare_materials     = 500
  oil                = 500
  supplies           = 500
  money              = 20
  transports         = 20

  ownedprovinces         = { 1038 1039 1040 1041 1043 1080 1081 1082 1083 1084 1085 1086 1087 1088 1089 1090 1091 1092 1093 1094 1095 2211 2212 }
  controlledprovinces    = { 1038 1039 1040 1041 1043 1080 1081 1082 1083 1084 1085 1086 1087 1088 1089 1090 1091 1092 1093 1094 1095 2211 2212 }
  nationalprovinces      = { 1038 1039 1040 1041 1043 1080 1081 1082 1083 1084 1085 1086 1087 1088 1089 1090 1091 1092 1093 1094 1095 2211 2212 }

  techapps = { 1010 1020 1030 1040 1160 1170 1180 2290 2800 3010 3020 3030 3110 3120 3130 3210 3220 3230 3410 3420 3430 4500 5600 5700 8010 8020 8040 }

  policy = {
    date = { year = 0 month = january day = 0 }
    democratic = 2
    political_left = 3
    freedom = 2
    open_society = 2
    interventionism = 8
    professional_army = 9
    defense_lobby = 9
    free_market = 3
  }

  landunit = {
    id       = { type = 14000 id = 52700 }
    name     = "IRN Army"
    location = 1086
    division = {
      id    = { type = 14000 id = 52701 }
      name  = "IRN Infantry Division"
      type  = infantry
      model = 1
      strength = 50
    }
  }
}
