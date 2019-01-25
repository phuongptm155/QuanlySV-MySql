CREATE DATABASE  IF NOT EXISTS `sinhvien` /*!40100 DEFAULT CHARACTER SET utf8 */;
USE `sinhvien`;
-- MySQL dump 10.13  Distrib 5.7.17, for Win64 (x86_64)
--
-- Host: localhost    Database: sinhvien
-- ------------------------------------------------------
-- Server version	5.7.21-log

/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8 */;
/*!40103 SET @OLD_TIME_ZONE=@@TIME_ZONE */;
/*!40103 SET TIME_ZONE='+00:00' */;
/*!40014 SET @OLD_UNIQUE_CHECKS=@@UNIQUE_CHECKS, UNIQUE_CHECKS=0 */;
/*!40014 SET @OLD_FOREIGN_KEY_CHECKS=@@FOREIGN_KEY_CHECKS, FOREIGN_KEY_CHECKS=0 */;
/*!40101 SET @OLD_SQL_MODE=@@SQL_MODE, SQL_MODE='NO_AUTO_VALUE_ON_ZERO' */;
/*!40111 SET @OLD_SQL_NOTES=@@SQL_NOTES, SQL_NOTES=0 */;

--
-- Table structure for table `giangvien`
--

DROP TABLE IF EXISTS `giangvien`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `giangvien` (
  `MaGV` int(11) NOT NULL,
  `hovaten` varchar(45) DEFAULT NULL,
  `NgaySinh` date DEFAULT NULL,
  `Diachi` varchar(45) DEFAULT NULL,
  `SDT` int(11) DEFAULT NULL,
  `Email` varchar(45) DEFAULT NULL,
  PRIMARY KEY (`MaGV`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `giangvien`
--

LOCK TABLES `giangvien` WRITE;
/*!40000 ALTER TABLE `giangvien` DISABLE KEYS */;
INSERT INTO `giangvien` VALUES (1,'Trần Thị Bình','1998-11-04','Nguyễn Chí Thanh, Hà Nội',1659874125,'tranbinh@gmail.com'),(2,'Nguyễn Đức Nghĩa','1998-11-10','Hà Đông, Hà Nội',1659874125,'tranbinh@gmail.com'),(3,'Nguyễn Đức Huy','1985-06-19','Nam Đàn, Nghệ An',1238564789,'duchuy@gmail.com'),(4,'Trần Vĩnh Đức','1984-10-11','Nam Đàn, Nghệ An',1649875621,'vinhduc@gmail.com'),(5,'Trần Văn Sang','1984-10-22','Yên Sơn, Ninh Bình',965789412,'sangtran@gmail.com'),(6,'Trần Dư Tiền','1984-10-30','Mai Châu, Hoà Bình',945698754,'dutien1@gmail.com'),(7,'Dương Khắc Linh','1984-10-01','Mai Châu, Hoà Bình',987654321,'linhduong@gmail.com'),(8,'Tô Văn Khải','1980-05-29','Hậu Lộc, Thanh Hoá',1659875236,'khai@gmail.com');
/*!40000 ALTER TABLE `giangvien` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `gv_mh`
--

DROP TABLE IF EXISTS `gv_mh`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `gv_mh` (
  `monhoc_Malop` varchar(45) NOT NULL,
  `giangvien_MaGV` int(11) NOT NULL,
  `Sogio` int(11) DEFAULT NULL,
  PRIMARY KEY (`monhoc_Malop`,`giangvien_MaGV`),
  KEY `fk_gv_mh_giangvien1_idx` (`giangvien_MaGV`),
  CONSTRAINT `fk_gv_mh_giangvien1` FOREIGN KEY (`giangvien_MaGV`) REFERENCES `giangvien` (`MaGV`) ON DELETE CASCADE ON UPDATE CASCADE,
  CONSTRAINT `fk_gv_mh_monhoc1` FOREIGN KEY (`monhoc_Malop`) REFERENCES `monhoc` (`Malop`) ON DELETE CASCADE ON UPDATE CASCADE
) ENGINE=InnoDB DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `gv_mh`
--

LOCK TABLES `gv_mh` WRITE;
/*!40000 ALTER TABLE `gv_mh` DISABLE KEYS */;
INSERT INTO `gv_mh` VALUES ('100451',1,3),('100452',6,3),('100698',7,3),('100775',7,3),('101100',5,4),('101101',6,3),('101181',1,3),('101182',2,3),('101234',2,3),('101235',3,3),('101653',4,4),('101654',3,3),('101655',4,4);
/*!40000 ALTER TABLE `gv_mh` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `monhoc`
--

DROP TABLE IF EXISTS `monhoc`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `monhoc` (
  `Malop` varchar(45) NOT NULL,
  `MSMH` varchar(10) NOT NULL,
  `TenMH` varchar(45) DEFAULT NULL,
  `Tinchi` varchar(45) DEFAULT NULL,
  PRIMARY KEY (`Malop`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `monhoc`
--

LOCK TABLES `monhoc` WRITE;
/*!40000 ALTER TABLE `monhoc` DISABLE KEYS */;
INSERT INTO `monhoc` VALUES ('100451','IT3080','Mạng máy tính','3'),('100452','IT3080','Mạng máy tính','3'),('100698','IT4010','Hệ điều hành','3'),('100775','IT4020','Lập trình web','3'),('100776','IT4020','Lập trình web','3'),('101100','IT3000','Nhập môn CNTT','5'),('101101','IT3000','Nhập môn CNTT','5'),('101181','IT3020','Toán rời rạc','3'),('101182','IT3020','Toán rời rạc','3'),('101234','IT3040','Kiến trúc máy tính','3'),('101235','IT3040','Kiến trúc máy tính','3'),('101653','IT3010','Phương pháp tính','2'),('101654','IT3010','Phương pháp tính','2'),('101655','IT3060','Lập trình mạng','2');
/*!40000 ALTER TABLE `monhoc` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `sinhvien`
--

DROP TABLE IF EXISTS `sinhvien`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `sinhvien` (
  `MSSV` int(11) NOT NULL,
  `hovaten` varchar(45) DEFAULT NULL,
  `NgaySinh` date DEFAULT NULL,
  `Diachi` varchar(45) DEFAULT NULL,
  `SDT` int(11) DEFAULT NULL,
  `Email` varchar(45) DEFAULT NULL,
  PRIMARY KEY (`MSSV`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `sinhvien`
--

LOCK TABLES `sinhvien` WRITE;
/*!40000 ALTER TABLE `sinhvien` DISABLE KEYS */;
INSERT INTO `sinhvien` VALUES (20162256,'Nguyễn Trường Giang','1998-11-04','Hoài Đức,Hà Nội',1659874521,'giang12@gmail.com'),(20162257,'Tô Nguyêt Ánh','1998-11-04','Đống Đa, Hà Nội',1649875623,'nguyetanh@gmail.com'),(20162259,'Khúc Thừa Dụ','1998-11-04','Thanh Trì, Hà Nội',987456123,'thuadu@gmail.com'),(20162260,'Nguyến Mai Anh','1998-11-04','Nam Đàn, Nghệ An',987456123,'thuadu@gmail.com'),(20163111,'Nguyễn Văn Thanh','1998-11-04','Hải Hậu, Nam Định',987456142,'khongbietten@gmail.com'),(20164574,'Cao Bá Quát','1998-11-29','Thanh Xuân, Hà Nội',1654789654,'baquat@gmail.com'),(20164598,'Nguyễn Dư Thưà','1998-11-04','Hai Bà Trưng, Hà Nội',1649876521,'duthua@gmail.com'),(20166123,'Vương Minh Anh','1998-10-31','Mai Châu, Hoà Bình',1659874523,'minhanhh1cgmail.com'),(20166124,'Vương Minh Toàn','1998-11-09','Nghĩa Hưng, Nam Định',1659874516,'minhtoan@gmail.com'),(20166125,'Trần Giang Mai','1998-10-20','Nam Trực, Nam Định',1649876321,'giangmai@gmail.com'),(20166126,'Trần Tuấn Giang','1998-10-29','Trực Ninh, Nam Định',1649873265,'giangtran@gmail.com'),(20166127,'Vương Tuấn Khải','1998-10-19','Hậu Lộc, Thanh Hoá',1649873987,'tuankhai@gmail.com'),(20166598,'Phạm Thị Minh Phượng','1998-10-26','Hải Hậu, Nam Định',1657531234,'minhphuonghc113@gmail.com'),(20166618,'Vương Châu Đồng','1998-10-31','Nam Đàn,  Nghệ An',1649879632,'dongchau@gmail.com'),(20167541,'Trương Vĩnh Phúc','1998-11-08','Móng Cái, Quảng Ninh',1234569875,'vinhphuc@gmail.com'),(20169874,'Dương Minh Phúc','1998-09-30','Nghĩa Hưng , Nam Định',1657531441,'minhphuc113@gmail.com'),(20169875,'Hoà Thị Hường','1998-11-09','Hà Tây, Hà Nội',1649874562,'hoahuong@gmail.com'),(20169878,'Bùi Thị Mến','1998-10-28','Yến Sơn, Tuyên Quang',1649874562,'menbui@gmail.com');
/*!40000 ALTER TABLE `sinhvien` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `sinhvien_has_monhoc`
--

DROP TABLE IF EXISTS `sinhvien_has_monhoc`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `sinhvien_has_monhoc` (
  `sinhvien_MSSV` int(11) NOT NULL,
  `monhoc_Malop` varchar(45) NOT NULL,
  `DiemGK` float DEFAULT NULL,
  `DiemCK` float DEFAULT NULL,
  `heso` varchar(45) DEFAULT NULL,
  PRIMARY KEY (`sinhvien_MSSV`,`monhoc_Malop`),
  KEY `fk_sinhvien_has_monhoc_sinhvien1_idx` (`sinhvien_MSSV`),
  KEY `fk_sinhvien_has_monhoc_monhoc1_idx` (`monhoc_Malop`),
  CONSTRAINT `fk_sinhvien_has_monhoc_monhoc1` FOREIGN KEY (`monhoc_Malop`) REFERENCES `monhoc` (`Malop`) ON DELETE CASCADE ON UPDATE CASCADE,
  CONSTRAINT `fk_sinhvien_has_monhoc_sinhvien1` FOREIGN KEY (`sinhvien_MSSV`) REFERENCES `sinhvien` (`MSSV`) ON DELETE CASCADE ON UPDATE CASCADE
) ENGINE=InnoDB DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `sinhvien_has_monhoc`
--

LOCK TABLES `sinhvien_has_monhoc` WRITE;
/*!40000 ALTER TABLE `sinhvien_has_monhoc` DISABLE KEYS */;
INSERT INTO `sinhvien_has_monhoc` VALUES (20162256,'100698',6,7,'3-7'),(20162256,'100775',7,7,'3-7'),(20162256,'101101',7,7,'3-7'),(20162256,'101182',7,8,'3-7'),(20162256,'101235',7,8,'3-7'),(20162256,'101654',7,8,'3-7'),(20162257,'100452',3,7,'3-7'),(20162257,'100698',4,9,'3-7'),(20162257,'100775',8,9,'3-7'),(20162257,'101101',8,9,'3-7'),(20162257,'101182',8,10,'3-7'),(20162257,'101235',7,10,'3-7'),(20162257,'101655',7,8,'3-7'),(20162259,'100452',4,6,'3-7'),(20162259,'100698',8,6,'3-7'),(20162259,'100775',8,7,'3-7'),(20162259,'101101',8,4,'3-7'),(20162259,'101182',8,7,'3-7'),(20162259,'101235',8,9,'3-7'),(20162259,'101654',10,9,'3-7'),(20162260,'100451',10,9,'3-7'),(20162260,'100698',6.5,9,'3-7'),(20162260,'100775',6,9,'3-7'),(20162260,'101101',4,9,'3-7'),(20162260,'101182',4,7,'3-7'),(20162260,'101235',9,7,'3-7'),(20162260,'101654',9,7,'3-7'),(20163111,'100452',8,8,'3-7'),(20163111,'100698',9,8,'3-7'),(20163111,'100775',9,9,'3-7'),(20163111,'101101',9,4,'3-7'),(20163111,'101182',9,1,'3-7'),(20163111,'101235',9,6,'3-7'),(20163111,'101654',8,6,'3-7'),(20164574,'100452',7,8,'3-7'),(20164574,'100698',8,6,'3-7'),(20164574,'101100',8,8,'3-7'),(20164574,'101181',8,9,'3-7'),(20164574,'101234',8,9,'3-7'),(20164574,'101653',9,9,'3-7'),(20164574,'101655',9,2,'3-7'),(20164598,'100452',8,6,'3-7'),(20164598,'100775',8,8,'3-7'),(20164598,'101100',8,7,'3-7'),(20164598,'101181',9,7,'3-7'),(20164598,'101234',9,10,'3-7'),(20164598,'101654',8,6,'3-7'),(20164598,'101655',10,10,'3-7'),(20166123,'100451',5,10,'3-7'),(20166123,'100775',9,8,'3-7'),(20166123,'101100',7,8,'3-7'),(20166123,'101181',5,6,'3-7'),(20166123,'101234',7,6,'3-7'),(20166123,'101654',7,10,'3-7'),(20166124,'100451',5,8,'3-7'),(20166124,'101100',5,6,'3-7'),(20166124,'101182',9,6,'3-7'),(20166124,'101235',9,7,'3-7'),(20166124,'101654',9,7,'3-7'),(20166124,'101655',9,9,'3-7'),(20166125,'100452',3,9,'3-7'),(20166125,'101100',6,9,'3-7'),(20166125,'101181',6,9,'3-7'),(20166125,'101234',9,9,'3-7'),(20166125,'101653',8,8,'3-7'),(20166126,'101100',3,7,'3-7'),(20166126,'101181',2,7,'3-7'),(20166126,'101234',2,8,'3-7'),(20166126,'101654',3,6.5,'3-7'),(20166126,'101655',8,8,'3-7'),(20166127,'100451',3,6.5,'3-7'),(20166127,'101100',4,7,'3-7'),(20166127,'101234',5,7,'3-7'),(20166127,'101653',6,7,'3-7'),(20166127,'101655',9,7,'3-7'),(20166598,'100451',9,9,'3-7'),(20166598,'101101',9,9,'3-7'),(20166598,'101182',9,8,'3-7'),(20166598,'101235',9,10,'3-7'),(20166618,'100451',6,8.5,'3-7'),(20166618,'101182',6,8.5,'3-7'),(20166618,'101235',6,8.5,'3-7'),(20166618,'101653',7,8.5,'3-7'),(20166618,'101655',6.5,8.5,'3-7'),(20167541,'100451',6,9,'3-7'),(20167541,'101181',8,8,'3-7'),(20167541,'101235',9,8.5,'3-7'),(20167541,'101653',9,4,'3-7'),(20167541,'101655',9,4,'3-7'),(20169874,'100451',6,9,'3-7'),(20169874,'101100',9,5,'3-7'),(20169874,'101181',9,6,'3-7'),(20169874,'101234',9,7.5,'3-7'),(20169874,'101653',9,7.5,'3-7'),(20169875,'100451',7,9,'3-7'),(20169875,'101181',8,9,'3-7'),(20169875,'101653',9,9.5,'3-7'),(20169878,'100452',9,9.5,'3-7'),(20169878,'101100',9,3,'3-7'),(20169878,'101181',3,3,'3-7'),(20169878,'101234',3,5,'3-7'),(20169878,'101653',4,5,'3-7'),(20169878,'101655',4,5,'3-7');
/*!40000 ALTER TABLE `sinhvien_has_monhoc` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Dumping events for database 'sinhvien'
--

--
-- Dumping routines for database 'sinhvien'
--
/*!40103 SET TIME_ZONE=@OLD_TIME_ZONE */;

/*!40101 SET SQL_MODE=@OLD_SQL_MODE */;
/*!40014 SET FOREIGN_KEY_CHECKS=@OLD_FOREIGN_KEY_CHECKS */;
/*!40014 SET UNIQUE_CHECKS=@OLD_UNIQUE_CHECKS */;
/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
/*!40111 SET SQL_NOTES=@OLD_SQL_NOTES */;

-- Dump completed on 2018-05-11 21:09:17
