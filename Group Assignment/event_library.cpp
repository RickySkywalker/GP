#include "event.h"

// USSR events
EVENT e50("WE WILL BURY YOU", "", USSR, 4, 0, 0);
EVENT e7("SOCIALIST", "", USSR, 3, 0, 0);
EVENT e51("BERZHNEV DOCTRINE", "", USSR, 3, 0, 0);
EVENT e61("OPEC", "Founded to allow oil producing countries to have more control over the price of oil, and thereby state revenues, OPEC has grown into an institution that controls two-thirds of the world’s oil reserves and generates roughly half of the world’s oil exports. The creation of OPEC was a major blow to the control of the global oil market by the Western giants like Exxon and British Petroleum. While OPEC does include non-Middle Eastern countries such as Venezuela, Indonesia and Nigeria, it is heavily dominated by countries from that region. As a result, OPEC has intervened in the political crises there. Most famously, OPEC refused oil exports to Western countries supporting Israel in the Yom Kippur (or October) War. This resulted in a 400% increase in oil prices and required rationing in the West. /n /n VP+1", USSR, 3, 1, 0);
EVENT e30("DECOLONIZATION", "", USSR, 2, 0, 0);
EVENT e9("VIETNAM REVOLTS", "", USSR, 2, 2, 0);
EVENT e107("CHE", "", USSR, 3, 2, 0);
EVENT e87("THE REFORMER", "", USSR, 3, 0, 0);
EVENT e90("GLASNOST", "", USSR, 4, 0, 0);
EVENT e95("LATIN AMERICAN DEBT CRISIS", "", USSR, 3, 0, 0);
EVENT* USSR_event_arr[] = {&e50, &e7, &e51, &e61, &e30, &e9, &e107, &e87, &e90, &e95};

// Mutual events

EVENT e34("NUCLEAR TEST BAN", "", NO, 4, 2, 2);
EVENT e32("UN INTERVENTION", "", NO, 3, 0, 0);
EVENT e20("OLYMPIC GAMES", "", NO, 2, 2, 0);
EVENT e3("ONE SMALL STEP...", "", NO, 3, 0, 0);
EVENT e57("ABM TREATY", "", NO, 3, 0, 2);
EVENT e46("HOW I LEARNED TO STOP WORRYING", "", NO, 2, 0, -2);
EVENT e92("TERRORISM", "", NO, 3, 0, 0);
EVENT e40("CUBAN MISSILE CRISIS", "", NO, 3, 0, -2);
EVENT e47("JUNTA", "", NO, 3, 0, 0);
EVENT e100("WARGAMES", "", NO, 4, 0, 0);
EVENT* Mutual_event_arr[] = {&e34, &e32, &e20, &e3, &e57,&e46, &e92, &e40, &e47, &e100};

// USA events
EVENT e74("THE VOICE OF AMERICA", "", USA, 3, 1, 0);
EVENT e66("PUPPET GOVERNMENTS", "", USA, 2, 2, 0);
EVENT e23("MARSHALL PLAN", "", USA, 4, 0, 0);
EVENT e85("STAR WARS", "", USA, 3, 0, 0);
EVENT e106("NORAD", "", USA, 3, 0, 0);
EVENT e26("CIA", "", USA, 3, 2, 0);
EVENT e21("NATO", "", USA, 4, 0, 0);
EVENT e96("TEAR DOWN THIS WALL", "", USA, 3, 3, 0);
EVENT e29("EAST EUROPEAN UNREST", "", USA, 3, 2, 0);
EVENT e77("ASK NOT WHAT YOUR COUNTRY CAN DO FOR YOU", "", USA, 3, 1, 0);
EVENT* USA_event_arr[] = {&e74, &e66, &e23, &e85, &e106,
             &e26, &e21, &e96, &e29, &e77};















