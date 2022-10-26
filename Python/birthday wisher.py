

import datetime as dt
import pandas as pd
import random as r
import smtplib

my_email = "email"
password = "password"




today = (dt.datetime.now().month, dt.datetime.now().day)


data = pd.read_csv('birthdays.csv')
birthdays_dict = {(data_row.month, data_row.day): data_row.values for (index, data_row) in data.iterrows()}
# print(birthdays_dict[(5, 17)])




if today in birthdays_dict:
    person=birthdays_dict[today]

    with open(f"./letter_templates/letter_{r.randint(1, 3)}.txt",'r') as file:
        mail=file.read()
        mail = mail.replace("[NAME]", person[0],1)
        print(mail)
        with smtplib.SMTP('smtp.gmail.com',port=587) as connection:
            connection.starttls()
            connection.login(user=my_email,password=password)
            connection.sendmail(from_addr=my_email, to_addrs=person[1],
                                msg=f"subject:Happy Birthday\n\n{mail}")


