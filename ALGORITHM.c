lexer
{
    int c = 0;
    bool f = false;
    int len = string.length();
    while not eof do
    {
        state="S";
        while not eof do (c < len)
        {
            if (f)
            {
                f= false;
            }

            char ch = nextchar();

            switch (state)
            {

                case state of "S": {
                    case state of
                    'v':
                        state = "1";
                        ch = nextchar();
                        break;

                    'c':
                        state = "7";
                        ch = nextchar();
                        break;

                    'n':
                        state = "24";
                        ch = nextchar();
                        break;

                    't':
                        state = "56";
                        ch = nextchar();
                        break;

                    's':
                        state = "61";
                        ch = nextchar();
                        break;

                    'm':
                        state = "84";
                        ch = nextchar();
                        break;

                    ',':
                        state = "90";
                        ch = nextchar();
                        f = true;
                        break;

                    [0-9]:
                        state = "91";
                        ch = nextchar();
                        f = true;
                        break;

                    '.':
                        state = "96";
                        ch = nextchar();
                        f = true;
                        break;

                    '\t':
                        state = "97";
                        ch = nextchar();
                        break;

                    '?':
                        state = "98";
                        ch = nextchar();
                        f = true;
                        break;

                    Default:
                        f = true;

                    end case
                }
                case state of "1": 
                {
                    case state of 'a':
                        state = "2";
                        ch = nextchar();
                        break;
                }

                case state of "2": 
                {
                    case state of 'r':
                        state = "3";
                        ch = nextchar();
                        break;
                }

                case state of "3": 
                {
                    case state of 't':
                        state = "4";
                        ch = nextchar();
                        break;
                }

                case state of "4": 
                {
                    case state of 'u':
                        state = "5";
                        ch = nextchar();
                        break;
                }

                case state of "5": 
                {
                    case state of 'l':
                    state = "6";
                    ch = nextchar();
                    f = true;
                    break;
                }

                

                case state of "7": 
                {
                    case state of 'h':
                    state = "8";
                    ch = nextchar();
                    break;

                    case state of 'e':
                    state = "15";
                    ch = nextchar();
                    break;


                    'Default':
                    f=true;

                }

                case state of "8": 
                {
                    case state of 'o':
                    state = "9";
                    ch = nextchar();
                    break;

                    case state of 'h':
                    state = "13";
                    ch = nextchar();
                    break;


                    'Default':
                    f=true;

                }

                case state of "9": 
                {
                    case state of 'r':
                    state = "10";
                    ch = nextchar();
                    break;
                }

                case state of "10": 
                {
                    case state of 'a':
                    state = "11";
                    ch = nextchar();
                    break;
                }

                case state of "11": 
                {
                    case state of 's':
                    state = "12";
                    ch = nextchar();
                    f = true;
                    break;
                }

                case state of "13": 
                {
                    case state of 'e':
                    state = "14";
                    ch = nextchar();
                    f = true;
                    break;
                }

                case state of "15": 
                {
                    case state of 'n':
                    state = "16";
                    ch = nextchar();
                    break;
                }

                case state of "16": 
                {
                    case state of 't':
                    state = "17";
                    ch = nextchar();
                    break;
                }

                case state of "17": 
                {
                    case state of 'i':
                    state = "18";
                    ch = nextchar();
                    break;
                }

                case state of "18": 
                {
                    case state of 'm':
                    state = "19";
                    ch = nextchar();
                    break;
                }

                case state of "19": 
                {
                    case state of 'e':
                    state = "20";
                    ch = nextchar();
                    break;
                }

                case state of "20": 
                {
                    case state of 't':
                    state = "21";
                    ch = nextchar();
                    break;
                }

                case state of "21": 
                {
                    case state of 'e':
                    state = "22";
                    ch = nextchar();
                    break;
                }

                case state of "22": 
                {
                    case state of 'r':
                    state = "23";
                    ch = nextchar();
                    f = true;
                    break;
                }

                case state of "24": 
                {
                    case state of 'i':
                    state = "25";
                    ch = nextchar();
                    break;

                    case state of 'u':
                    state = "47";
                    ch = nextchar();
                    break;


                    'Default':
                    f=true;

                }

                case state of "25": 
                {
                    case state of '\t':
                    state = "25";
                    ch = nextchar();
                    break;

                    case state of 'l':
                    state = "26";
                    ch = nextchar();
                    break;

                    case state of 'p':
                    state = "32";
                    ch = nextchar();
                    break;

                    case state of 't':
                    state = "40";
                    ch = nextchar();
                    break;


                    'Default':
                    f=true;

                }



                case state of "26": 
                {
                    case state of 'a':
                    state = "27";
                    ch = nextchar();
                    break;
                }
                case state of "27": 
                {
                    case state of 'm':
                    state = "28";
                    ch = nextchar();
                    break;
                }
                case state of "28": 
                {
                    case state of 'b':
                    state = "29";
                    ch = nextchar();
                    break;
                }
                case state of "29": 
                {
                    case state of 'a':
                    state = "30";
                    ch = nextchar();
                    break;
                }
                case state of "30": 
                {
                    case state of 'i':
                    state = "31";
                    ch = nextchar();
                    f = true;
                    break;
                }

                case state of "32": 
                {
                    case state of 'a':
                    state = "33";
                    ch = nextchar();
                    break;
                }
                case state of "33": 
                {
                    case state of 'r':
                    state = "34";
                    ch = nextchar();
                    break;
                }
                case state of "34": 
                {
                    case state of 'i':
                    state = "35";
                    ch = nextchar();
                    break;
                }
                case state of "35": 
                {
                    case state of 'm':
                    state = "36";
                    ch = nextchar();
                    break;
                }
                case state of "36": 
                {
                    case state of 'i':
                    state = "37";
                    ch = nextchar();
                    break;
                }
                case state of "37": 
                {
                    case state of 't':
                    state = "38";
                    ch = nextchar();
                    break;
                }
                case state of "38": 
                {
                    case state of 'i':
                    state = "39";
                    ch = nextchar();
                    f=true;
                    break;
                }
                case state of "38": 
                {
                    case state of 'i':
                    state = "39";
                    ch = nextchar();
                    f=true;
                    break;
                }
                
                case state of "40": 
                {
                    case state of 'r':
                    state = "41";
                    ch = nextchar();
                    break;
                }
                case state of "41": 
                {
                    case state of 'i':
                    state = "42";
                    ch = nextchar();
                    break;
                }
                case state of "42": 
                {
                    case state of 'j':
                    state = "43";
                    ch = nextchar();
                    break;
                }
                case state of "43": 
                {
                    case state of 'i':
                    state = "44";
                    ch = nextchar();
                    break;
                }
                case state of "44": 
                {
                    case state of 'y':
                    state = "45";
                    ch = nextchar();
                    break;
                }
                case state of "45": 
                {
                    case state of 'a':
                    state = "46";
                    ch = nextchar();
                    f=true;
                    break;
                }

                case state of "47": 
                {
                    case state of '\t':
                    state = "47";
                    ch = nextchar();
                    break;

                    case state of 'x':
                    state = "48";
                    ch = nextchar();
                    break;
                }
                case state of "48": 
                {
                    case state of 'e':
                    state = "49";
                    ch = nextchar();
                    break;
                }
                case state of "49": 
                {
                    case state of 't':
                    state = "50";
                    ch = nextchar();
                    break;
                }
                case state of "50": 
                {
                    case state of 'r':
                    state = "51";
                    ch = nextchar();
                    break;
                }
                case state of "51": 
                {
                    case state of 'a':
                    state = "52";
                    ch = nextchar();
                    break;
                }
                case state of "52": 
                {
                    case state of 'f':
                    state = "53";
                    ch = nextchar();
                    break;
                }
                case state of "53": 
                {
                    case state of 'a':
                    state = "54";
                    ch = nextchar();
                    break;
                }
                case state of "54": 
                {
                    case state of 'l':
                    state = "55";
                    ch = nextchar();
                    f=true;
                    break;
                }
                
                case state of "56": 
                {
                    case state of 'h':
                    state = "57";
                    ch = nextchar();
                    break;
                }
                case state of "57": 
                {
                    case state of 'a':
                    state = "58";
                    ch = nextchar();
                    break;
                }
                case state of "58": 
                {
                    case state of 's':
                    state = "59";
                    ch = nextchar();
                    break;
                }
                case state of "59": 
                {
                    case state of 'e':
                    state = "60";
                    ch = nextchar();
                    f=true;
                    break;
                }
                
    
                case state of "61": 
                {
                    case state of 'h':
                    state = "62";
                    ch = nextchar();
                    break;

                    case state of 'q':
                    state = "64";
                    ch = nextchar();
                    break;

                    'Default':
                    f=true;

                }

                case state of "62": 
                {
                    case state of 'u':
                    state = "63";
                    ch = nextchar();
                    break;

                    'Default':
                    f=true;

                }

                case state of "64": 
                {
                    case state of 'u':
                    state = "65";
                    ch = nextchar();
                    break;
                }
                case state of "65": 
                {
                    case state of 'a':
                    state = "66";
                    ch = nextchar();
                    break;
                }
                case state of "66": 
                {
                    case state of 'r':
                    state = "67";
                    ch = nextchar();
                    break;
                }
                case state of "67": 
                {
                    case state of 'e':
                    state = "68";
                    ch = nextchar();
                    break;
                }
                case state of "68": 
                {
                    case state of 'm':
                    state = "69";
                    ch = nextchar();
                    break;

                    case state of 'c':
                    state = "74";
                    ch = nextchar();
                    break;

                }
                case state of "69": 
                {
                    case state of 'e':
                    state = "70";
                    ch = nextchar();
                    break;
                }
                case state of "70": 
                {
                    case state of 't':
                    state = "71";
                    ch = nextchar();
                    break;
                }
                case state of "71": 
                {
                    case state of 'e':
                    state = "72";
                    ch = nextchar();
                    break;
                }
                case state of "72": 
                {
                    case state of 'r':
                    state = "73";
                    ch = nextchar();
                    f=true;
                    break;
                }

                case state of "62": 
                {
                    case state of 'u':
                    state = "63";
                    ch = nextchar();
                    break;

                    'Default':
                    f=true;

                }

                case state of "74": 
                {
                    case state of 'e':
                    state = "75";
                    ch = nextchar();
                    break;
                }
                case state of "75": 
                {
                    case state of 'n':
                    state = "76";
                    ch = nextchar();
                    break;
                }
                case state of "76": 
                {
                    case state of 't':
                    state = "77";
                    ch = nextchar();
                    break;
                }
                case state of "77": 
                {
                    case state of 'i':
                    state = "78";
                    ch = nextchar();
                    break;
                }
                case state of "78": 
                {
                    case state of 'm':
                    state = "79";
                    ch = nextchar();
                    break;

                }
                case state of "79": 
                {
                    case state of 'e':
                    state = "80";
                    ch = nextchar();
                    break;
                }
                case state of "80": 
                {
                    case state of 't':
                    state = "81";
                    ch = nextchar();
                    break;
                }
                case state of "81": 
                {
                    case state of 'e':
                    state = "82";
                    ch = nextchar();
                    break;
                }
                case state of "82": 
                {
                    case state of 'r':
                    state = "83";
                    ch = nextchar();
                    f=true;
                    break;
                }

                case state of "78": 
                {
                    case state of 'm':
                    state = "79";
                    ch = nextchar();
                    break;

                }
                case state of "84": 
                {
                    case state of 'e':
                    state = "85";
                    ch = nextchar();
                    break;
                }
                case state of "85": 
                {
                    case state of 't':
                    state = "86";
                    ch = nextchar();
                    break;
                }
                case state of "86": 
                {
                    case state of 'e':
                    state = "87";
                    ch = nextchar();
                    break;
                }
                case state of "87": 
                {
                    case state of 'r':
                    state = "88";
                    ch = nextchar();
                    break;
                }
                case state of "88": 
                {
                    case state of 's':
                    state = "89";
                    ch = nextchar();
                    f=true;
                    break;
                }

                case state of "91": 
                {
                    case state of [0-9]:
                    state = "91";
                    ch = nextchar();
                    break;

                    '.':
                    state = "93";
                    ch = nextchar();
                    break;

                    default:
                    state = "92";
                    f = true;
                }
                case state of "93": {
                    case state of 
                    [0-9]:
                    state = "94";
                    ch = nextchar();
                    break;

                    default:
                    f = true;
                }
                case state of "94": {
                    case state of 
                    [0-9]:
                    ch = nextchar();

                    default:
                    state = "95";
                    f = true;
                }




                
            }
            }
            case state of

            "6"|"14"|"12"|"23"|"31"|"39"|"46"|"55"|"60"|"63"|"73"|"83"|"89":
            print(" keyword");

            "90":
            print("separator");
            "92":
            print("Int");
            "95":
            print("Float");
            "96":
            print("eos");
            "97":
            print("WhiteSpace");
            "98":
            print("Qmark");
            default:
            print("invalid input");
            ch := nextchar();

            end case;
    }
}
