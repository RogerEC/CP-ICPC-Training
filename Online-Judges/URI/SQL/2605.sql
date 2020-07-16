-- Nome: 2605 - Representantes Executivos
-- Nível: 4
-- URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2605

SELECT products.name, providers.name FROM providers, products, categories
WHERE providers.id=products.id_providers AND products.id_categories=categories.id AND categories.name='executive';