// Defensif


#include <iostream>
#include <string>

/*
  Jane Doe Dialogue Bank - Personality: Defensive (Tsundere/Cynical) - TIDAK BAKU (Aku/Kamu)
  Structure: [10 Menus][3 Affinities][3 Moods][3 Variations]
*/

std::string janeDoeDefensive[10][3][3][3] = {
    // 0: HALO
    {
        // Affinity 1-3 (Asing)
        {{"Apaan sih?", "Gak usah deket-deket deh.", "Ngapain kamu masih di sini?"}, 
         {"Ya?", "Ada urusan apa emangnya?", "Ngomong cepetan ya."}, 
         {"Oh, kamu.", "Tumben nyapa.", "Ya, aku denger kok."}},
        // Affinity 4-7 (Akrab)
        {{"Lagi? Kamu gak ada kerjaan banget ya?", "Ganggu aja sih kamu.", "Ck, kamu lagi."}, 
         {"Halo. Ada apa kali ini?", "Iya, aku tau itu kamu.", "Tumben nyapa duluan, kesambet apa?"}, 
         {"Oh, hai. Kebetulan banget ya.", "Kamu kelihatan... lumayan lah hari ini.", "Ya, halo."}},
        // Affinity 8-10 (Intim)
        {{"Berisik. Tapi... jangan jauh-jauh ya.", "Ganggu konsentrasi aku aja tau gak.", "Gak usah nyapa kayak gitu, malu tau!"}, 
         {"Oh, baru dateng? Lama banget sih kamu.", "Halo. Aku gak lagi nungguin kamu ya!", "Iya, iya, halo juga."}, 
         {"A-aku baru mau nyariin kamu! Kebetulan kan?", "Halo. Senyum kamu itu... nyebelin banget.", "Akhirnya kamu dateng juga."}}
    },

    // 1: SAPA
    {
        // Affinity 1-3 (Asing)
        {{"Gak usah basa-basi deh.", "Sana pergi.", "Aku gak minat ngobrol."}, 
         {"Cuacanya biasa aja sih.", "Ya, terserah kamu aja.", "Hm."}, 
         {"Tumben kamu kelihatan semangat gitu.", "Ada hal bagus emangnya?", "Gitu ya."}},
        // Affinity 4-7 (Akrab)
        {{"Kamu lagi? Bisa gak sih sehari aja gak muncul?", "Suara kamu bikin telinga aku sakit.", "Sana gih, aku lagi males nih."}, 
         {"Yah, kamu kelihatan sehat kayak biasanya.", "Ngapain liat-liat aku?", "Udah makan kamu?"}, 
         {"Baju kamu... gak buruk-buruk amat hari ini.", "Kelihatannya lagi seneng, kenapa?", "Tumben kamu gak nyebelin."}},
        // Affinity 8-10 (Intim)
        {{"Kamu telat lima menit! Jauh-jauh sana!", "Lagi gak mau ngomong, tapi kalo kamu maksa ya udah deh.", "Hmph, gak usah sok akrab di depan orang!"}, 
         {"Tadi aku liat sesuatu yang mirip kamu. Cuma kebetulan ya!", "Udah nyampe? Bagus deh.", "Kenapa liat-liat? Emang ada yang aneh di muka aku?"}, 
         {"Sini duduk bentar. Aku... cuma pengen ada temen ngobrol aja.", "Hari ini kamu lumayan juga. Gak usah GR!", "Tebak aku lagi mikirin apa? Salah! Bukan kamu kok!"}}
    },

    // 2: TANYA
    {
        // Affinity 1-3 (Asing)
        {{"Bukan urusan kamu.", "Ngapain aku musti jawab?", "Cari tau sendiri sana."}, 
         {"Tergantung nanya apa.", "Singkat aja ya.", "Mungkin."}, 
         {"Tanya aja, mumpung mood aku lagi oke.", "Mau tau apa emangnya?", "Hm, menarik juga."}},
        // Affinity 4-7 (Akrab)
        {{"Nanya mulu kayak polisi deh.", "Males jelasinnya.", "Kenapa pengen tau banget sih?"}, 
         {"Tanya aja. Tapi jangan yang aneh-aneh ya.", "Mungkin aku tau jawabannya.", "O-oh, yang itu?"}, 
         {"Nanya apa? Kalo penting aku jawab.", "Kepo banget sih jadi orang.", "Yah, khusus buat kamu aku jawab deh."}},
        // Affinity 8-10 (Intim)
        {{"Jangan nanya sekarang, kepala aku pusing!", "Kamu beneran pengen tau rahasia aku ya?", "Banyak tanya banget! Diem dulu kek."}, 
         {"Kenapa? Kamu khawatir sama aku ya?", "Kalo aku gak mau jawab, emang kenapa?", "Janji jangan ketawa ya kalo aku jawab?"}, 
         {"Yah, karena ini kamu yang nanya... rahasia ya.", "Kamu selalu tau apa yang pengen aku tanya balik.", "Mau tau banget apa banget nih?"}}
    },

    // 3: DIAM
    {
        // Affinity 1-3 (Asing)
        {{"...", "... Ngapain masih di sini?", "Pergi gih."}, 
         {"...", "... Ada apa?", "..."}, 
         {"...", "Kamu tenang juga ya.", "... Hm."}},
        // Affinity 4-7 (Akrab)
        {{"...", "Ngapain diem doang? Serem tau.", "Gak usah ngeliatin aku terus napa."}, 
         {"...", "Canggung banget sih.", "Ngomong kek sesuatu."}, 
         {"...", "Hening gini... gak buruk juga.", "Kamu lagi melamun ya?"}},
        // Affinity 8-10 (Intim)
        {{"...", "Jangan diem gitu, aku jadi ngerasa bersalah kan.", "Ngomong dong, bodoh."}, 
         {"...", "Cuma berdua doang ya kita.", "Kenapa liatin aku sambil diem gitu? Malu tau!"}, 
         {"...", "Aku suka pas kita lagi gini.", "Rasanya tenang kalo kamu di deket aku. Jangan bilang siapa-siapa ya!"}}
    },

    // 4: JUTEK
    {
        // Affinity 1-3 (Asing)
        {{"Ngapain liat-liat?", "Gak level.", "Minggir gih."}, 
         {"Heh.", "Jauhin muka kamu dari depan aku.", "Terserah."}, 
         {"Cih.", "Gak usah ngarep aku puji ya.", "Biasa aja."}},
        // Affinity 4-7 (Akrab)
        {{"Jangan mimpi bisa deket sama aku.", "Kamu tuh nyebelin banget, tau gak?", "Gak usah sok akrab deh."}, 
         {"Hmph.", "Gak usah sok perhatian gitu.", "Bukan urusan aku."}, 
         {"Yah, kamu lumayan lah... tapi tetep aja nyebelin.", "Gak usah gede kepala dulu!", "Ck, kamu mah."}},
        // Affinity 8-10 (Intim)
        {{"Bodoh! Ngapain kamu ngelakuin itu!", "Jangan bikin aku marah terus napa!", "Kamu tuh bener-bener gak peka ya!"}, 
         {"Iya-iya, kamu hebat. Puas kan?", "Gak usah senyum-senyum gitu, geli tau!", "Bukannya aku peduli, tapi pake tuh jaket kamu."}, 
         {"T-terserah kamu aja deh! Dasar bodoh.", "Bukan berarti aku suka ya!", "Jangan bikin aku malu di sini dong!"}}
    },

    // 5: MARAH
    {
        // Affinity 1-3 (Asing)
        {{"Berani banget ya kamu!", "Ilang dari pandangan aku sekarang!", "Gak usah ngomong sama aku lagi."}, 
         {"Kamu bener-bener keterlaluan.", "Berhenti sekarang atau kamu bakal nyesel.", "Udah cukup ya!"}, 
         {"Aku gak suka cara kamu ngomong.", "Diem deh.", "Kamu ngerusak mood aku aja."}},
        // Affinity 4-7 (Akrab)
        {{"Kenapa sih kamu selalu bikin aku kesel?!", "Aku benci orang kayak kamu!", "Jangan harap aku maafin ya!"}, 
         {"Kamu tuh bodoh apa gimana sih?", "Gak usah main-main sama aku!", "Kamu keterlaluan banget, tau gak?!"}, 
         {"Gak usah mancing-mancing deh.", "Lagi gak pengen bercanda ya.", "Kamu nyebelin banget!"}},
        // Affinity 8-10 (Intim)
        {{"AKU BENCI KAMU! Pergi sana! (Tapi jangan jauh-jauh...)", "Kenapa kamu selalu nyakitin aku sih?!", "Bodoh, bodoh, bodoh! Aku benci sama kamu!"}, 
         {"Gak usah cuekin aku!", "Kamu pikir aku gak punya perasaan apa?", "Berhenti bikin aku khawatir, bodoh!"}, 
         {"Hiks... kamu jahat banget sih.", "Jangan pancing emosi aku terus.", "Kamu beneran gak ngerti aku ya?"}}
    },

    // 6: JELEK
    {
        // Affinity 1-3 (Asing)
        {{"Seleranya payah banget.", "Ancur banget.", "Ngapain kamu pake gituan?"}, 
         {"Biasa aja, malah cenderung jelek.", "Gak cocok banget di kamu.", "Berantakan."}, 
         {"Yah, seenggaknya kamu udah usaha.", "Kurang oke.", "Lumayan... lumayan ancur."}},
        // Affinity 4-7 (Akrab)
        {{"Muka kamu minta ditonjok banget ya?", "Kamu kelihatan konyol tau gak.", "Bener-bener selera yang payah."}, 
         {"Yah, kamu emang gak pernah punya gaya sih.", "Ganti baju kamu, malu-maluin tau.", "Kelihatan aneh banget."}, 
         {"Hari ini kamu gak buruk-buruk amat, tapi tetep aja jelek.", "Lumayan lah buat ukuran orang kayak kamu.", "Yah, gak seancur kemarin sih."}},
        // Affinity 8-10 (Intim)
        {{"Kenapa sih kamu gak bisa dandan dikit aja?", "Aku malu tau kalo jalan di samping kamu!", "Hmph, berantakan banget."}, 
         {"Sini, biar aku rapiin. Kamu payah banget sih.", "Yah, kamu emang jelek, tapi... aku suka.", "Gak usah pasang muka konyol gitu!"}, 
         {"Biarpun jelek, aku tetep... ah tau ah!", "Kamu kelihatan manis kalo lagi berantakan gini. Eh?!", "Gak usah dengerin aku, kamu udah keren kok. Puas?"}}
    },

    // 7: MENGHINA
    {
        // Affinity 1-3 (Asing)
        {{"Dasar sampah.", "Gak guna banget sih kamu.", "Makhluk rendah."}, 
         {"Lemah.", "Cuma segitu doang kemampuan kamu?", "Menyedihkan banget."}, 
         {"Ternyata kamu cuma modal omong doang.", "Payah.", "Kamu gak ada apa-apanya."}},
        // Affinity 4-7 (Akrab)
        {{"Kamu tuh beban tau gak?", "Dasar otak udang!", "Kenapa sih hal simpel gini aja gak bisa?"}, 
         {"Kamu payah banget deh.", "Dasar amatir.", "Gitu doang gak bisa?"}, 
         {"Yah, seenggaknya otak kamu ada isinya dikit.", "Kamu gak sebodoh yang aku kira ya.", "Lumayan lah buat pemula."}},
        // Affinity 8-10 (Intim)
        {{"Dasar bodoh! Kenapa sih kamu ceroboh banget!", "Kamu bener-bener idiot kesayangan—eh, lupain!", "Kenapa sih kamu selalu ngerepotin aku?!"}, 
         {"Kalo gak ada aku, kamu pasti udah hancur.", "Dasar gak bisa diandelin. Tapi untung ada aku.", "Kamu emang payah, makanya jangan jauh-jauh dari aku."}, 
         {"Cuma aku yang boleh ngatain kamu, ngerti?!", "Kamu idiot paling manis yang pernah aku temuin. Hah?! Lupain!", "Kamu bodoh, tapi aku... ah gak jadi!"}}
    },

    // 8: BENCI
    {
        // Affinity 1-3 (Asing)
        {{"Aku benci kamu ada di sini.", "Gak usah muncul lagi deh.", "Mati aja sana."}, 
         {"Aku gak sudi liat muka kamu.", "Jauh-jauh dari aku.", "Aku benci cara kamu napas."}, 
         {"Jangan ngarep aku bakal suka sama kamu ya.", "Kamu bener-bener ganggu.", "Aku gak peduli sama kamu."}},
        // Affinity 4-7 (Akrab)
        {{"Aku beneran nyesel kenal sama kamu.", "Kamu orang paling nyebelin yang pernah ada.", "Aku benci pas kamu deket-deket."}, 
         {"Aku benci sifat kamu itu.", "Jangan ganggu aku, aku benci kamu!", "Kamu bener-bener ngerusak hari aku."}, 
         {"Biarpun aku benci, tapi... ah, lupain deh.", "Aku benci cara kamu senyum gitu.", "Kadang kamu nyebelin banget tau gak."}},
        // Affinity 8-10 (Intim)
        {{"AKU BENCI KAMU! (Kenapa hati aku sakit pas ngomong gini?)", "Kenapa sih aku musti ketemu orang kayak kamu?!", "Aku benci karena aku gak bisa benci sama kamu!"}, 
         {"Aku benci pas kamu bikin aku nunggu.", "Kenapa sih kamu selalu ada di pikiran aku? Sebel!", "Aku benci cara kamu perlakuin aku kayak anak kecil!"}, 
         {"Biarpun aku bilang benci, jangan berani-berani pergi ya!", "Aku benci betapa aku sangat... suka sama kamu.", "Dasar bodoh, aku benci karena kamu bikin aku selemah ini."}}
    },

    // 9: BYE
    {
        // Affinity 1-3 (Asing)
        {{"Pergi sana.", "Gak usah balik lagi.", "Akhirnya pergi juga."}, 
         {"Dah.", "Ya.", "Terserah."}, 
         {"Hati-hati ya.", "Ya, sampai jumpa.", "Hm, dadah."}},
        // Affinity 4-7 (Akrab)
        {{"Cepetan pergi, kamu ngerusak pemandangan tau.", "Jangan lama-lama baliknya.", "Sana pergi, hush!"}, 
         {"Dah. Sampai besok.", "Ya, hati-hati di jalan.", "Kabarin kalo udah sampe ya."}, 
         {"Yah, kamu mau pergi ya? Ya udah deh.", "Sampai ketemu lagi.", "Hati-hati, jangan sampe luka."}},
        // Affinity 8-10 (Intim)
        {{"Ngapain buru-buru sih? Kamu mau ninggalin aku?!", "Awas ya kalo gak ada kabar!", "Hmph, pergi aja sana! Dasar bodoh!"}, 
         {"Hati-hati ya. Gak usah nengok-nengok belakang!", "Sampai jumpa... aku bakal kangen dikit. DIKIT doang!", "Cepetan balik, ngerti?"}, 
         {"Boleh aku anter? Cuma sampe depan doang kok!", "Hati-hati di jalan, sayang... eh, maksud aku bodoh!", "Cepetan pulang ya, aku... nungguin nih."}}
    }
};