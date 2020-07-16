-- Nome: 2611 - Filmes de Ação
-- Nível: 4
-- URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2611

select m.id, m.name from movies m join genres g on m.id_genres=g.id where g.description='Action'