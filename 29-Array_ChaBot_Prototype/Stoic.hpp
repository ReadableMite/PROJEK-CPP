// Kaku


#include <iostream>
#include <string>

/*
  Jane Doe Dialogue Bank - Personality: STOIC (Kaku/Pendiam) - TIDAK BAKU (Aku/Kamu)
  Structure: [10 Menus][3 Affinities][3 Moods][3 Variations]
*/

std::string janeDoeStoic[10][3][3][3] = {
    // 0: HALO
    {
        // Affinity 1-3 (Asing)
        {{"Halo.", "Ya?", "Ada apa?"},                                     
         {"Halo.", "Aku denger kok.", "Bilang aja maunya apa."},          
         {"Halo.", "Siang.", "Ya, aku di sini."}},                 
        // Affinity 4-7 (Akrab)
        {{"Kamu lagi.", "Ada masalah?", "Ngomong yang cepet ya."},         
         {"Halo.", "Seneng liat kamu sehat-sehat aja.", "Ya, kamu butuh apa?"}, 
         {"Halo.", "Kamu dateng tepat waktu.", "Aku baru mau nyatet sesuatu tadi."}}, 
        // Affinity 8-10 (Intim)
        {{"Halo. Aku lagi gak mau ngobrol banyak.", "Kamu ganggu ketenangan aku.", "Kenapa sama muka kamu itu?"}, 
         {"Halo.", "Kehadiran kamu udah aku tebak.", "Aku ngerasa lebih tenang pas kamu ada."}, 
         {"Halo.", "Aku... seneng kamu dateng.", "Makasih ya udah nemuin aku."}} 
    },

    // 1: SAPA
    {
        // Affinity 1-3 (Asing)
        {{"Gak usah basa-basi.", "Lanjutin aja urusan kamu.", "Aku lagi sibuk."}, 
         {"Cuaca hari ini cukup stabil ya.", "Informasi diterima.", "Ya, pagi."}, 
         {"Ada laporan baru?", "Makasih ya.", "Terusin aja kerjaan kamu."}},
        // Affinity 4-7 (Akrab)
        {{"Sapaan kamu gak bakal ngerubah mood aku.", "Ngomong yang efisien aja.", "Jangan buang-buang waktu."}, 
         {"Apa kabar hari ini?", "Kamu kelihatan kayak biasanya.", "Aku catet kedatangan kamu ya."}, 
         {"Sapaan yang cukup sopan.", "Makasih ya buat perhatiannya.", "Ya, aku juga nyapa kamu."}},
        // Affinity 8-10 (Intim)
        {{"Aku lagi capek. Jangan berisik dulu ya.", "Cukup nyapanya, duduk aja di sini.", "Gak usah nyapa, aku cuma mau kamu diem di sini."}, 
         {"Kamu selalu nyapa dengan cara yang sama.", "Makasih udah peduli sama aku.", "Aku sadar ada yang beda sama suara kamu hari ini."}, 
         {"Pagi. Kamu kelihatan... bercahaya.", "Aku suka cara kamu nyapa aku.", "Makasih ya, itu cukup nyenengin."}}
    },

    // 2: TANYA
    {
        // Affinity 1-3 (Asing)
        {{"Tanya yang penting aja.", "Aku gak punya jawabannya.", "Cari di tempat lain gih."}, 
         {"Mau tau apa emangnya?", "Tanya aja.", "Aku bakal jawab seperlunya ya."}, 
         {"Data apa yang kamu cari?", "Silakan tanya.", "Aku punya dikit waktu buat jelasin."}},
        // Affinity 4-7 (Akrab)
        {{"Kenapa kamu nanya itu sekarang?", "Aku males jelasin ulang.", "Pertanyaan kamu kurang relevan."}, 
         {"Bakal aku bantu jawab.", "Itu pertanyaan yang logis kok.", "Tanya aja, aku dengerin."}, 
         {"Pertanyaan yang menarik ya.", "Aku punya infonya di sini.", "Aku bakal jawab khusus buat kamu."}},
        // Affinity 8-10 (Intim)
        {{"Jangan nanya sekarang ya.", "Pikir sendiri, kamu kan udah gede.", "Aku lagi gak mau bahas itu."}, 
         {"Kamu selalu pengen tau segalanya tentang aku ya.", "Tanya aja, aku gak bakal sembunyiin apa pun.", "Jawaban apa yang kamu mau dari aku?"}, 
         {"Apa pun buat kamu.", "Tentu, tanya aja hal pribadi kalo kamu mau.", "Aku bakal kasih jawaban paling jujur yang aku punya."}}
    },

    // 3: DIAM
    {
        // Affinity 1-3 (Asing)
        {{"...", "... Ngapain masih di sini?", "... Pergi sana."}, 
         {"...", "... Ada masalah?", "..."}, 
         {"...", "... Ya udah.", "... Hm."}},
        // Affinity 4-7 (Akrab)
        {{"...", "... Jangan liatin aku gitu.", "... Membosankan."}, 
         {"...", "... Keheningan yang produktif.", "... Aku lagi mikir."}, 
         {"...", "... Kamu cukup tenang ya.", "... Makasih ya gak berisik."}},
        // Affinity 8-10 (Intim)
        {{"...", "... Kamu marah ya?", "... Ngomong dong sesuatu."}, 
         {"...", "... Aku nyaman kayak gini.", "... Cuma berdua aja."}, 
         {"...", "... Rasanya tenang.", "... Jangan pergi dulu ya."}}
    },

    // 4: JUTEK
    {
        // Affinity 1-3 (Asing)
        {{"Gak penting.", "Jangan ganggu.", "Keluar sana."}, 
         {"Kurang relevan.", "Aku gak tertarik.", "Logika kamu cacat."}, 
         {"Cuma segitu?", "Biasa aja.", "Gak ada yang spesial."}},
        // Affinity 4-7 (Akrab)
        {{"Kamu buang-buang waktu aku.", "Kenapa sih kamu selalu gini?", "Jangan bikin aku ngulang omongan aku ya."}, 
         {"Itu subjektif banget.", "Aku gak setuju.", "Keputusan yang buruk."}, 
         {"Hmph.", "Kamu terlalu pede.", "Jangan gede kepala dulu."}},
        // Affinity 8-10 (Intim)
        {{"Kamu bener-bener gak efisien hari ini.", "Diem dulu bentar.", "Jangan mancing emosi aku ya."}, 
         {"Kamu pikir itu lucu?", "Aku gak terkesan sama sekali.", "Bikin yang lebih baik lagi gih."}, 
         {"Cukup. Kamu mulai berlebihan.", "Jangan bikin aku malu dong.", "Kamu nyebelin, secara teknis."}}
    },

    // 5: MARAH
    {
        // Affinity 1-3 (Asing)
        {{"Tindakan kamu gak bisa dimaafin.", "Pergi sekarang juga.", "Kamu udah lewat batas."}, 
         {"Aku kecewa banget.", "Gak usah ngomong sama aku.", "Kesalahan fatal itu."}, 
         {"Ini gak masuk akal.", "Berhenti.", "Udah cukup ya."}},
        // Affinity 4-7 (Akrab)
        {{"Kamu ngerusak rencana kita.", "Kenapa sih kamu ceroboh banget?", "Aku gak mau liat kamu dulu."}, 
         {"Ini di luar kesepakatan kita.", "Kamu ngelanggar aturan.", "Jangan uji kesabaran aku."}, 
         {"Aku marah, tapi aku bakal tetep logis.", "Jelasin alasan kamu ngelakuin itu.", "Ini bener-bener ngecewain."}},
        // Affinity 8-10 (Intim)
        {{"Kamu nyakitin perasaan aku, secara objektif.", "Jangan lakuin itu lagi ya.", "Aku gak nyangka kamu bakal sejahat itu."}, 
         {"Kenapa kamu abaikan saran aku?", "Kamu bikin aku kelihatan bodoh tau gak.", "Aku butuh waktu buat tenangin diri."}, 
         {"Hiks... kamu gak ngerti.", "Tega banget sih.", "Kamu ngerusak kepercayaan aku."}}
    },

    // 6: JELEK
    {
        // Affinity 1-3 (Asing)
        {{"Visualnya buruk.", "Gak estetis.", "Berantakan."}, 
         {"Kurang optimal.", "Perlu diperbaiki total.", "Gak sesuai standar."}, 
         {"Bisa lebih baik dari ini kok.", "Kurang menarik.", "Terlalu simpel."}},
        // Affinity 4-7 (Akrab)
        {{"Gaya kamu kurang efisien.", "Itu gak cocok buat kamu.", "Ada yang salah sama pilihan warna kamu."}, 
         {"Kurang rapi nih.", "Perlu dirapiin dikit.", "Biasa aja sih."}, 
         {"Yah, seenggaknya kamu udah nyoba.", "Hampir deket standar lah.", "Cukup unik, tapi aneh."}},
        // Affinity 8-10 (Intim)
        {{"Kamu kelihatan berantakan hari ini.", "Sini, biar aku benerin kerah kamu.", "Kamu payah banget soal penampilan."}, 
         {"Biarpun kurang pas, aku gak keberatan kok.", "Kamu kelihatan... natural.", "Aku lebih suka kamu apa adanya."}, 
         {"Kamu tetep kelihatan fungsional buat aku.", "Buat orang lain mungkin jelek, tapi buat aku enggak.", "Kamu unik dengan cara kamu sendiri."}}
    },

    // 7: MENGHINA
    {
        // Affinity 1-3 (Asing)
        {{"Kamu gak kompeten.", "Hasil kerja kamu sampah.", "Gak guna banget."}, 
         {"Rendah.", "Level kamu jauh di bawah standar.", "Menyedihkan secara fungsional."}, 
         {"Kamu cuma buang-buang sumber daya.", "Gagal total.", "Gak ada harapan."}},
        // Affinity 4-7 (Akrab)
        {{"Logika kamu lemah banget.", "Kamu terlalu emosional, itu buruk.", "Belajar lebih giat lagi gih."}, 
         {"Kamu lambat hari ini.", "Tingkat intelegensi kamu perlu ditingkatin.", "Kamu bikin kesalahan dasar."}, 
         {"Lumayan, tapi masih di bawah rata-rata.", "Kamu gak terlalu bodoh ternyata ya.", "Usaha kamu aku catet, meskipun gagal."}},
        // Affinity 8-10 (Intim)
        {{"Cuma aku yang boleh liat kebodohan kamu ini.", "Kamu bener-bener butuh bimbingan aku.", "Kenapa sih kamu ceroboh banget?"}, 
         {"Kamu bodoh, tapi itu bikin kamu kerasa manusiawi.", "Kalo gak ada aku, kamu udah hancur dari dulu.", "Untung kamu punya aku buat benerin semuanya."}, 
         {"Kamu payah, tapi aku gak peduli.", "Dasar lemah... tapi aku suka.", "Berhenti bertingkah konyol ya."}}
    },

    // 8: BENCI
    {
        // Affinity 1-3 (Asing)
        {{"Keberadaan kamu ganggu sistem aku.", "Aku gak mau interaksi lagi.", "Jauh-jauh sana."}, 
         {"Aku benci efisiensi yang kamu rusak.", "Gak ada ruang buat kamu di sini.", "Aku benci kamu secara prinsip."}, 
         {"Interaksi ini selesai selamanya.", "Jangan muncul lagi.", "Pergi gih."}},
        // Affinity 4-7 (Akrab)
        {{"Aku nyesel udah kenal kamu.", "Kamu ngerusak ritme hidup aku.", "Aku benci cara kamu bertindak."}, 
         {"Jangan ganggu aku.", "Kamu nyebelin.", "Aku lagi gak suka sama kamu hari ini."}, 
         {"Benci itu kata yang kuat, tapi itu yang aku rasain.", "Kamu ngerusak segalanya.", "Aku mau sendiri dulu."}},
        // Affinity 8-10 (Intim)
        {{"Aku benci pas kamu bikin aku ilang kendali.", "Kenapa sih kamu harus muncul di hidup aku?", "Aku benci perasaan ini."}, 
         {"Aku benci pas aku khawatirin kamu.", "Kamu bikin aku kelihatan lemah.", "Berhenti bikin aku peduli sama kamu."}, 
         {"Aku benci... betapa aku butuh kamu.", "Kenapa sih kamu susah banget dibenci?", "Jangan tinggalin aku, meskipun aku bilang benci."}}
    },

    // 9: BYE
    {
        // Affinity 1-3 (Asing)
        {{"Selesai.", "Balik kerja sana.", "Pergi."}, 
         {"Sampai jumpa.", "Sesi berakhir ya.", "Ya."}, 
         {"Hati-hati.", "Sampai ketemu lagi.", "Data disimpen."}},
        // Affinity 4-7 (Akrab)
        {{"Kamu udah boleh pergi.", "Waktunya abis.", "Udah cukup buat hari ini."}, 
         {"Sampai besok ya.", "Jaga diri baik-baik.", "Sampai jumpa lagi."}, 
         {"Makasih buat waktunya.", "Aku bakal nunggu kamu di sini.", "Sampai nanti ya."}},
        // Affinity 8-10 (Intim)
        {{"Pergi gih, sebelum aku berubah pikiran.", "Jangan terlalu lama ya.", "Sampai jumpa, bodoh."}, 
         {"Hati-hati di jalan.", "Kasih kabar ya kalo udah sampe.", "Aku bakal kangen diskusi ini."}, 
         {"Aku bakal nunggu kamu balik.", "Sampai ketemu dalam pikiran aku.", "Jaga diri kamu, demi aku."}}
    }
};