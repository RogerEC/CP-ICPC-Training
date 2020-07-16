-- Nome: 2613 - Filmes em Promoção
-- Nível: 2
-- URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2613

select m.id, m.name from movies m join prices p on m.id_prices=p.id where p.value < 2