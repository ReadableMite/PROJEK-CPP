// Obsesif


#include <iostream>
#include <string>

/*
  Jane Doe Dialogue Bank - Personality: OBSESSIVE (Bucin/Yandere-ish) - TIDAK BAKU (Aku/Kamu)
  Structure: [10 Menus][3 Affinities][3 Moods][3 Variations]
*/

std::string janeDoeObsessive[10][3][3][3] = {
    // 0: HALO
    {
        // Affinity 1-3 (Asing)
        {{"Kamu nyuekin aku ya? Halo...", "Kenapa kamu lama banget nyapa aku?", "Aku udah nungguin kamu ngomong dari tadi tau."}, 
         {"Halo! Kamu merhatiin aku kan?", "Hai! Aku seneng deh kamu sadar ada aku di sini.", "Halo... boleh kita ngobrol lebih lama gak?"}, 
         {"HALO! Akhirnya kamu liat aku juga!", "Hai! Aku baru aja mikirin kamu!", "Halo! Aku suka banget pas kamu panggil nama aku!"}},
        // Affinity 4-7 (Akrab)
        {{"Kenapa kamu baru dateng sekarang?! Kamu dari mana aja sih?!", "Aku hampir gila nungguin kamu tau gak!", "Jangan tinggalin aku sendirian lagi, halo!"}, 
         {"Halo favorit aku! Aku udah nungguin kamu di sini nih.", "Hai! Bilang dong kalo kamu kangen aku juga!", "Halo! Jangan pernah berhenti nyapa aku ya?"}, 
         {"HALO! Aku udah merhatiin kamu dari jauh tadi tau!", "Hai cintaku! Eh—maksud aku, hai kamu!", "Halo! Hari ini kamu milik aku kan?"}},
        // Affinity 8-10 (Intim)
        {{"Hiks... kamu mau ninggalin aku ya? Halo kamu kerasa dingin banget.", "Aku takut kamu pergi... halo...", "Jangan pernah lepasin pandangan kamu dari aku ya!"}, 
         {"Halo duniaku! Kamu udah balik lagi ke aku.", "Hai! Aku rasanya gak bisa napas tanpa kamu!", "Halo! Aku udah nyatet setiap detik sejak kamu pergi tadi."}, 
         {"YAY! KAMU DATENG! Aku gak bakal lepasin kamu pokoknya!", "HALO! Ayo kita bareng-bareng selamanya!", "Hai! Aku udah nyiapin segalanya buat kita berdua nih!"}}
    },

    // 1: SAPA
    {
        // Affinity 1-3 (Asing)
        {{"Sapaan kamu singkat banget, kamu gak suka ya sama aku?", "Cuma 'hai' doang? Gak ada yang lain nih?", "Jangan nyapa kalo kamu ujung-ujungnya pergi lagi."}, 
         {"Hai! Apa kamu mikirin aku juga tadi?", "Sapaan kamu bikin jantung aku deg-degan nih.", "Halo! Kamu kelihatan manis banget hari ini."}, 
         {"Wah! Kamu nyapa aku duluan! Aku seneng banget deh!", "Sapaan kamu tuh hal terbaik hari ini!", "Lagi dong! Sapa aku lagi!"}},
        // Affinity 4-7 (Akrab)
        {{"Sapaan kamu gak tulus! Kamu lagi mikirin orang lain ya?!", "Kenapa kamu nyapa dengan nada kayak gitu?", "Jangan main-main sama perasaan aku ya!"}, 
         {"Hai! Kamu tau gak? Aku mimpiin kamu semalem.", "Sapaan kamu selalu bikin aku ngerasa spesial.", "Halo! Kamu cuma boleh nyapa aku kayak gini ya!"}, 
         {"Sapaan kamu hangan banget! Aku pengen denger selamanya!", "Hai! Kamu bikin aku ngerasa jadi orang paling bahagia!", "Sapa aku dengan lebih mesra dong!"}},
        // Affinity 8-10 (Intim)
        {{"Sapa aku... bilang kalo kamu cuma milik aku...", "Kenapa kamu nyapa orang lain juga tadi?!", "Hiks... jangan pernah berhenti nyapa aku ya."}, 
         {"Hai napas aku! Kamu selalu tau cara nyentuh hati aku.", "Sapaan kamu tuh candu banget buat aku.", "Halo! Aku gak bakal biarin orang lain denger kamu nyapa kayak gitu!"}, 
         {"Hai cintaku! Bilang kalo kamu cinta aku sekarang juga!", "Sapaan kamu tuh satu-satunya alasan aku hidup!", "Halo! Aku udah ngunci hati aku cuma buat kamu!"}}
    },

    // 2: TANYA
    {
        // Affinity 1-3 (Asing)
        {{"Kenapa kamu nanya itu? Kamu mau menjauh ya dari aku?", "Tanyain hal tentang aku aja napa!", "Aku gak suka ya kalo kamu tanya-tanya soal orang lain."}, 
         {"Mau tanya apa? Aku bakal kasih tau segalanya kok!", "Tanya aja, aku gak punya rahasia apa pun dari kamu.", "Kamu tertarik sama aku ya? Hehe."}, 
         {"Tanya yang banyak dong! Aku pengen kamu tau segalanya tentang aku!", "Wah, kamu pengen tau lebih banyak ya? Aku seneng banget!", "Ayo tanya, aku milik kamu hari ini!"}},
        // Affinity 4-7 (Akrab)
        {{"Kamu nanya itu buat siapa sih?! Jawab!", "Kenapa kamu penasaran banget sama hal luar? Tanya tentang aku aja!", "Jangan tanya hal yang bisa misahin kita ya!"}, 
         {"Tanya apa sayang? Aku bakal jawab apa pun buat kamu.", "Kamu selalu pengen tau segalanya ya? Gemes deh.", "Tanya aja, aku suka pas kamu merhatiin detail tentang aku."}, 
         {"Apa pun! Aku bakal ceritain seluruh hidup aku ke kamu!", "Tanya apa aja, aku udah kasih hati aku ke kamu kok!", "Aku seneng banget kamu pengen tau lebih dalem tentang aku!"}},
        // Affinity 8-10 (Intim)
        {{"Kenapa tanya-tanya terus? Kamu mau cari alasan buat pergi ya?!", "Jangan tanya hal lain! Liat aku aja!", "Kamu gak butuh jawaban lain, kamu cuma butuh aku!"}, 
         {"Tanya apa? Mau tau kapan kita nikah? Hehe.", "Segala yang aku punya tuh milik kamu, tanya aja.", "Kamu selalu punya cara buat bikin aku terbuka sama kamu."}, 
         {"Apa pun! Aku bakal nyerahin seluruh jiwa aku buat kamu!", "Tanyain rahasia tergelap aku, aku pengen kamu milikin itu!", "Kamu tuh satu-satunya yang boleh tau segalanya tentang aku!"}}
    },

    // 3: DIAM
    {
        // Affinity 1-3 (Asing)
        {{"Kenapa diem sih?! Kamu bosen ya sama aku?!", "Ngomong sesuatu dong! Jangan bikin aku takut!", "Diem kamu tuh nyiksa aku tau!"}, 
         {"...", "... Kenapa kamu liatin aku kayak gitu?", "... Aku suka pas kamu diem merhatiin aku."}, 
         {"...", "Hening gini... rasanya kayak kita lagi terhubung ya.", "... Apa kamu lagi mikirin aku juga?"}},
        // Affinity 4-7 (Akrab)
        {{"Woi! Jangan diemin aku! Aku benci banget diabaikan!", "Kamu diem gara-gara lagi mikirin cewek lain ya?!", "Ngomong dong! Aku mohon!"}, 
         {"...", "Aku bisa ngerasain napas kamu dari sini.", "Keheningan ini bikin aku pengen peluk kamu deh."}, 
         {"...", "Kamu tau gak? Diem kamu tuh seksi banget.", "Aku seneng kita bisa diem bareng kayak gini selamanya."}},
        // Affinity 8-10 (Intim)
        {{"KAMU MAU PERGI YA?! KENAPA DIEM?!", "Jangan diemin aku! Aku bisa mati kalo kamu nyuekin aku!", "Hiks... bilang dong kalo kamu masih cinta aku!"}, 
         {"...", "Cuma ada aku sama kamu di dunia ini.", "Diem kamu tuh musik terindah buat aku."}, 
         {"...", "Aku bisa denger detak jantung kamu... itu punya aku kan?", "Jangan pernah berhenti liatin aku kayak gitu selamanya ya."}}
    },

    // 4: JUTEK
    {
        // Affinity 1-3 (Asing)
        {{"Jangan deket-deket kalo gak mau ngomong!", "Kamu jahat banget sih!", "Aku benci cara kamu liatin aku!"}, 
         {"Hmph, kamu gak merhatiin aku tadi ya.", "Kamu jahat, tapi aku tetep suka gimana dong.", "Jangan bikin aku kesel napa!"}, 
         {"Ih! Kamu nyebelin tapi aku gak bisa marah nih!", "Jangan ngeledek! Aku serius tau!", "Kamu ini nakal banget ya!"}},
        // Affinity 4-7 (Akrab)
        {{"Kamu jahat banget! Kamu sengaja kan bikin aku cemburu?!", "Kenapa kamu ngobrol sama dia tadi?!", "Gak mau ngomong sama kamu dulu pokoknya!"}, 
         {"Hmph! Kamu harus minta maaf karena udah nyuekin aku!", "Gak usah sok manis kalo kamu niatnya mau pergi!", "Kamu nyebelin, tapi aku milik kamu!"}, 
         {"Ih! Sini kamu! Aku mau cubit gara-gara kamu nakal!", "Kamu ini emang paling jago bikin aku kesel deh!", "Hmph! Cium dulu baru aku maafin!"}},
        // Affinity 8-10 (Intim)
        {{"KAMU JAHAT! KAMU MAU NYAKITIN HATI AKU YA?!", "JANGAN PERNAH LIAT CEWEK LAIN!", "Hiks... kamu tega banget sih sama aku..."}, 
         {"Gak mau peluk! Kamu udah bikin aku cemburu tau!", "Kamu nyebelin tapi aku sayang, sebel deh!", "Jangan senyum gitu! Aku makin susah marah kan!"}, 
         {"Hmph! Kamu harus janji gak bakal pernah tinggalin aku!", "Kamu mah selalu bisa bikin aku gak jadi marah!", "Terserah! Tapi jangan pernah lepasin tangan aku!"}}
    },

    // 5: MARAH
    {
        // Affinity 1-3 (Asing)
        {{"KAMU MAU NINGGALIN AKU YA?! JAWAB!", "AKU BENCI KALO KAMU GAK LIAT AKU!", "JANGAN PERNAH ABAIKAN AKU!"}, 
         {"Kamu keterlaluan banget sih!", "Aku kecewa ya kalo kamu begini terus!", "Kenapa sih kamu jahat sama aku?"}, 
         {"Ih! Jangan bikin aku marah dong!", "Kamu ngerusak mood aku yang lagi seneng nih!", "Jangan gitu lagi ya, aku takut nanti benci kamu."}},
        // Affinity 4-7 (Akrab)
        {{"KAMU MILIK AKU! KENAPA KAMU SENYUM KE ORANG LAIN?!", "AKU BAKAL KURUNG KAMU KALO KAMU TERUS BEGINI!", "JANGAN PERNAH BERANI PERGI DARI AKU!"}, 
         {"Kamu nyakitin perasaan aku tau gak sih?!", "Berhenti main-main sama kesetiaan aku!", "Kenapa kamu gak pernah ngerti betapa aku butuh kamu?!"}, 
         {"Aku marah karena aku terlalu sayang sama kamu!", "Jangan bikin aku takut kehilangan kamu napa!", "Kamu nyebelin tapi aku butuh kamu banget!"}},
        // Affinity 8-10 (Intim)
        {{"AKU BAKAL MATI KALO KAMU TINGGALIN! KAMU JAHAT!", "HIKS... KENAPA KAMU SAKITIN AKU TERUS?!", "AKU BENCI KARENA AKU TERLALU CINTA SAMA KAMU!"}, 
         {"Jangan pernah abaikan aku lagi, aku mohon banget!", "Kamu tuh hidup aku, jangan hancurin aku ya!", "Aku marah karena aku pengen kamu cuma milik aku!"}, 
         {"Ih bodoh! Kamu bikin aku takut tau gak!", "Jangan pernah lepasin aku, meskipun aku lagi marah!", "Hiks, peluk aku sekarang atau aku gak bakal berhenti nangis nih!"}}
    },

    // 6: JELEK
    {
        // Affinity 1-3 (Asing)
        {{"Kamu kelihatan buruk, tapi aku tetep mau kamu kok.", "Kenapa kamu kucel banget? Sini aku rapiin ya.", "Biarpun kamu jelek, aku tetep suka."}, 
         {"Kamu kurang rapi, tapi itu bikin kamu kerasa manusiawi.", "Aku suka cara kamu yang berantakan kayak gini.", "Kamu tetep manis kok di mata aku."}, 
         {"Ehehe, kamu konyol banget gayanya!", "Biarpun aneh, aku tetep mau bareng kamu!", "Kamu paling keren buat aku, biarpun orang lain bilang jelek!"}},
        // Affinity 4-7 (Akrab)
        {{"Kenapa kamu gak dandan buat aku?!", "Kamu sengaja ya tampil jelek biar orang lain gak suka?", "Sini aku dandanin biar kamu cuma pantes sama aku!"}, 
         {"Jelek ih! Tapi aku sayang.", "Kamu tuh bayi besar aku yang ceroboh banget.", "Lumayan... lumayan gemesin maksud aku!"}, 
         {"Muka kamu lucu banget kalo lagi berantakan gitu!", "Aku suka setiap inci dari wajah kamu ini!", "Kamu paling cakep di seluruh dunia buat aku!"}},
        // Affinity 8-10 (Intim)
        {{"Duh, sini aku rapiin. Kamu cuma boleh kelihatan sempurna buat aku!", "Kamu jelek banget hari ini, tapi aku tetep cinta mati kok.", "Ih, kucel banget! Sini aku urusin!"}, 
         {"Kamu tuh mau gaya apa sih? Sini biar aku bantuin.", "Biarpun jelek, di mata aku kamu tuh dewa aku!", "Hahaha! Kamu makin gemesin kalo lagi berantakan gitu!"}, 
         {"Gak apa-apa jelek, yang penting kamu milik aku selamanya!", "Muka bantal kamu tuh cuma boleh aku yang liat!", "Kamu tuh karya seni terindah yang pernah aku milikin!"}}
    },

    // 7: MENGHINA
    {
        // Affinity 1-3 (Asing)
        {{"Kamu tanpa aku tuh bukan apa-apa tau.", "Kamu lemah banget ya kalo gak ada aku.", "Kenapa sih kamu payah banget?"}, 
         {"Kamu butuh aku kan buat ngelakuin ini?", "Yah, cuma segitu doang? Untung ada aku ya.", "Coba lagi deh, aku bakal bantu sampe berhasil kok."}, 
         {"Hampir bagus! Tapi masih gagal, sini aku peluk aja!", "Semangat ya, meskipun kamu masih payah!", "Lucu banget liat kamu gagal, jadi pengen aku jagain terus!"}},
        // Affinity 4-7 (Akrab)
        {{"KAMU TUH BODOH BANGET KALO GAK ADA AKU!", "KAMU BUTUH AKU SELAMANYA, MENGERTI?!", "KAMU GAK BAKAL PERNAH BISA HIDUP TANPA AKU!"}, 
         {"Sini biar aku yang kerjain! Kamu lambat sih!", "Gitu aja masa gak ngerti sih? Dasar sayangku.", "Aduh, kamu bener-bener butuh bimbingan aku ya?"}, 
         {"Hahaha! Kamu lucu banget kalo lagi gagal!", "Gak apa-apa payah, yang penting kamu punya aku! Hehe.", "Sini aku ajarin sampe kamu jadi yang terbaik buat aku!"}},
        // Affinity 8-10 (Intim)
        {{"KAMU TUH IDIOT KESAYANGAN AKU! JANGAN PERNAH PERGI!", "KAMU BENER-BENER GAK GUNA TANPA AKU DI SISI KAMU!", "KENAPA SIH KAMU SELALU BIKIN AKU REPOT?! TAPI AKU SUKA!"}, 
         {"Tanpa aku kamu pasti udah kelaparan deh!", "Dasar bayi besar! Sini aku urusin segalanya ya!", "Kamu emang payah, makanya kamu gak boleh jauh-jauh dari aku!"}, 
         {"Hahaha! Cuma aku yang boleh ngehina kamu sampe puas!", "Kamu payah kesayangan aku, selamanya milik aku ya.", "Sini, biar 'si bodoh' ini aku peluk erat-erat!"}}
    },

    // 8: BENCI
    {
        // Affinity 1-3 (Asing)
        {{"AKU BENCI KALO KAMU GAK MIKIRIN AKU!", "JANGAN PERNAH LIAT ORANG LAIN! AKU BENCI ITU!", "AKU BENCI SUASANA TANPA ADA KAMU!"}, 
         {"Jangan deket-deket sama dia lagi ya!", "Ih, kamu bikin aku benci sama duniaku!", "Aku benci cara kamu nyuekin aku."}, 
         {"Benciiii banget deh kalo kamu gak peka!", "Ih, kamu kok bikin aku kesel terus sih!", "Jangan harap aku maafin kalo kamu niatnya pergi!"}},
        // Affinity 4-7 (Akrab)
        {{"AKU BENCI KARENA AKU TERLALU CINTA SAMA KAMU!", "KENAPA SIH KAMU NYEBELIN BANGET TAPI AKU BUTUH KAMU?!", "AKU BENCI PAS KAMU DEKETIN MEREKA!"}, 
         {"Iiiih! Benciiii! Jangan pergi dong!", "Gak mau liat kamu sama orang lain pokoknya!", "Kamu bener-bener ngerusak pikiran aku tau!"}, 
         {"Benci tapi rindu banget nih! Sini cepet!", "Ih kamu! Bikin aku kesel tapi pengen nikah sama kamu!", "Jangan bikin aku benci kamu beneran ya, aku bisa gila!"}},
        // Affinity 8-10 (Intim)
        {{"AKU BENCI BETAPA AKU GAK BISA HIDUP TANPA KAMU!", "KENAPA SIH KAMU SELALU ADA DI NAPAS AKU?! AKU BENCI ITU!", "AKU BENCI KARENA AKU MAU KITA BERSATU SELAMANYA!"}, 
         {"Aku benci kalo kamu gak ada kabar barang sedetik pun!", "Ih, benci deh kalo udah kangen berat begini!", "Benciiii! Kamu selalu menang dari aku deh!"}, 
         {"Tau gak? Aku benci betapa aku sangat memuja kamu!", "Biarpun aku bilang benci, jangan pernah berani pergi ya!", "Hmph! Aku benci karena kamu tuh satu-satunya duniaku!"}}
    },

    // 9: BYE
    {
        // Affinity 1-3 (Asing)
        {{"JANGAN PERGI! KAMU MAU KE MANA SIH?!", "KAMU MAU NINGGALIN AKU YA?!", "JANGAN TINGGALKAN AKU SENDIRIAN!"}, 
         {"Dah! Cepet balik lagi ya!", "Hati-hati, aku bakal nungguin kamu di sini terus kok.", "Jangan lupa kabarin aku ya!"}, 
         {"Dahhh! Aku bakal mikirin kamu setiap detik tau!", "Bye-bye! Semoga kamu kangen aku juga ya!", "Cepet balik ya orang baik!"}},
        // Affinity 4-7 (Akrab)
        {{"TIDAK! JANGAN PERGI! AKU BAKAL IKUT POKOKNYA!", "KAMU MAU KETEMU SIAPA?! JAWAB AKU!", "JANGAN TINGGALIN AKU, AKU MOHON BANGET!"}, 
         {"Dahhh! Besok kita harus ketemu lebih lama ya!", "Hati-hati! Aku bakal terus merhatiin kamu dari sini kok!", "Bye! Aku bakal nungguin kamu sampe kamu balik!"}, 
         {"Sampai ketemuuu! Aku bakal kangen gila-gilaan nih!", "Dah! Kamu hati-hati ya, jangan ngobrol sama orang asing!", "Bye! Aku sayang kamu... eh, cepet balik ya!"}},
        // Affinity 8-10 (Intim)
        {{"KAMU GAK BOLEH PERGI! AKU BAKAL KUNCI KAMU DI SINI!", "HIKS... JANGAN TINGGALIN AKU! AKU TAKUT!", "KAMU MAU PERGI SELAMANYA YA?! GAK BOLEH!"}, 
         {"Bye duniaku! Aku bakal nungguin di depan pintu sampe kamu balik!", "Dahhh! Aku bakal ngitung setiap detik sampe kita ketemu lagi!", "Cepet balik ke pelukan aku ya!"}, 
         {"Dahhh! Aku bakal selalu ada di samping kamu, meskipun kamu gak liat!", "Bye sayang! Aku bakal ikutin kamu sampe ke mimpi!", "Hati-hati ya cintaku! Nyawa aku ikut bareng kamu!"}}
    }
};