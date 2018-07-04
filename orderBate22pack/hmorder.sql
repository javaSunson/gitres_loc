/*
SQLyog Ultimate v12.09 (64 bit)
MySQL - 5.7.21 : Database - hmorder
*********************************************************************
*/

/*!40101 SET NAMES utf8 */;

/*!40101 SET SQL_MODE=''*/;

/*!40014 SET @OLD_UNIQUE_CHECKS=@@UNIQUE_CHECKS, UNIQUE_CHECKS=0 */;
/*!40014 SET @OLD_FOREIGN_KEY_CHECKS=@@FOREIGN_KEY_CHECKS, FOREIGN_KEY_CHECKS=0 */;
/*!40101 SET @OLD_SQL_MODE=@@SQL_MODE, SQL_MODE='NO_AUTO_VALUE_ON_ZERO' */;
/*!40111 SET @OLD_SQL_NOTES=@@SQL_NOTES, SQL_NOTES=0 */;
CREATE DATABASE /*!32312 IF NOT EXISTS*/`hmorder` /*!40100 DEFAULT CHARACTER SET utf8 */;

USE `hmorder`;

/*Table structure for table `aduser` */

DROP TABLE IF EXISTS `aduser`;

CREATE TABLE `aduser` (
  `username` varchar(8) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8;

/*Data for the table `aduser` */

insert  into `aduser`(`username`) values ('admin');

/*Table structure for table `cold` */

DROP TABLE IF EXISTS `cold`;

CREATE TABLE `cold` (
  `id` int(3) NOT NULL,
  `mealname` varchar(20) DEFAULT NULL,
  `price` float DEFAULT NULL,
  `discount` int(3) DEFAULT NULL,
  `info` varchar(30) DEFAULT NULL,
  PRIMARY KEY (`id`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8;

/*Data for the table `cold` */

insert  into `cold`(`id`,`mealname`,`price`,`discount`,`info`) values (101,'凉拌牛肉',46,10,NULL),(102,'清炒苦瓜',5,NULL,NULL),(103,'老醋花生',4,NULL,NULL),(104,'松花蛋',8,NULL,NULL),(105,'蛋炒饭',23,NULL,NULL),(108,'陕西凉皮',8,NULL,NULL),(109,'蓑衣黄瓜',5,NULL,NULL),(110,'冰粥',3,NULL,NULL);

/*Table structure for table `drink` */

DROP TABLE IF EXISTS `drink`;

CREATE TABLE `drink` (
  `id` int(3) NOT NULL,
  `mealname` varchar(20) DEFAULT NULL,
  `price` float DEFAULT NULL,
  `discount` int(3) DEFAULT NULL,
  `info` varchar(30) DEFAULT NULL,
  PRIMARY KEY (`id`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8;

/*Data for the table `drink` */

insert  into `drink`(`id`,`mealname`,`price`,`discount`,`info`) values (101,'青岛啤酒',6,10,NULL),(102,'果啤1664',22,10,NULL),(103,'茅台',56,10,NULL),(104,'王老吉',9,10,NULL),(105,'茶派',5,10,NULL),(106,'农夫山泉',2,NULL,NULL),(109,'脉动',6,NULL,NULL);

/*Table structure for table `fish` */

DROP TABLE IF EXISTS `fish`;

CREATE TABLE `fish` (
  `id` int(3) NOT NULL,
  `mealname` varchar(20) DEFAULT NULL,
  `price` float DEFAULT NULL,
  `discount` int(3) DEFAULT NULL,
  `info` varchar(30) DEFAULT NULL,
  PRIMARY KEY (`id`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8;

/*Data for the table `fish` */

insert  into `fish`(`id`,`mealname`,`price`,`discount`,`info`) values (101,'青岛大虾',35,10,NULL),(102,'铁板鱿鱼',28,10,NULL),(103,'澳洲龙虾',120,10,NULL),(104,'大闸蟹',50,10,NULL),(105,'清炒海螺',28,10,NULL),(106,'炸海星',4,NULL,NULL),(107,'炒河蟹',30,NULL,NULL),(108,'油焖大虾',39,NULL,NULL);

/*Table structure for table `hot` */

DROP TABLE IF EXISTS `hot`;

CREATE TABLE `hot` (
  `id` int(3) NOT NULL,
  `mealname` varchar(20) DEFAULT NULL,
  `price` float DEFAULT NULL,
  `discount` int(3) DEFAULT NULL,
  `info` varchar(30) DEFAULT NULL,
  PRIMARY KEY (`id`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8;

/*Data for the table `hot` */

insert  into `hot`(`id`,`mealname`,`price`,`discount`,`info`) values (101,'辣子鸡',28.2,9,'今日9折'),(102,'清炒木耳',10,10,NULL),(103,'酱肘子',54,10,NULL),(104,'焖竹笋',56,10,'好吃不胖'),(105,'葱包烩',16,10,NULL),(107,'临沂糁汤',16,NULL,NULL),(108,'德州扒鸡',21,NULL,NULL),(109,'水煮肉片',42,NULL,NULL),(110,'京酱肉丝',10,NULL,NULL),(111,'黄焖鸡',13,NULL,NULL),(113,'蒜黄炒蛋',23,NULL,NULL);

/*Table structure for table `uses` */

DROP TABLE IF EXISTS `uses`;

CREATE TABLE `uses` (
  `usename` varchar(10) DEFAULT NULL,
  `password` varchar(18) NOT NULL,
  `lever` varchar(3) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8;

/*Data for the table `uses` */

insert  into `uses`(`usename`,`password`,`lever`) values ('admin','888888','7'),('martin','950305',NULL);

/*!40101 SET SQL_MODE=@OLD_SQL_MODE */;
/*!40014 SET FOREIGN_KEY_CHECKS=@OLD_FOREIGN_KEY_CHECKS */;
/*!40014 SET UNIQUE_CHECKS=@OLD_UNIQUE_CHECKS */;
/*!40111 SET SQL_NOTES=@OLD_SQL_NOTES */;
