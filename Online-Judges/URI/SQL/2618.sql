-- Nome: 2618 - Produtos Importados
-- Nível: 1
-- URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2618

select p.name, f.name, c.name from products p join providers f on p.id_providers=f.id join categories c on c.id=p.id_categories where f.name='Sansul SA' and c.name='Imported'