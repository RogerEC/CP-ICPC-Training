-- Nome: 2625 - Máscara de CPF
-- Nível: 4
-- URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2625

SELECT CONCAT(SUBSTRING(cpf,1,3),'.',
              SUBSTRING(cpf,4,3),'.',
              SUBSTRING(cpf,7,3),'-',
              SUBSTRING(cpf,10,2))
FROM natural_person;