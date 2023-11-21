#open the trace file 
set n_tr_file [open new2.tr w]
$simu_gol_gol_rani trace-all $n_tr_file

#open the nam tracefile
set n_nam_file [open new2.nam w]
$simu_gol_gol_rani namtrace-all $n_nam_file

#difine a finish processure
proc finish {} {
     global simu_gol_gol_rani n_tr_file n_nam_file
     $simu_gol_gol_rani flush-trace
     close $n_nam_file
     exec nam new2.nam &
     exit 0
}


#for createing 6nodes with a for loop
for {set i 0} {$i<29} {incr i} {
set n($i) [$simu_gol_gol_rani node]
}

#for create the lebal 
$simu_gol_gol_rani at 0.0 "$n(0) label \"sink_node\""
$simu_gol_gol_rani at 0.0 "$n(1) label \"L1S1\""
$simu_gol_gol_rani at 0.0 "$n(2) label \"L1S2\""
$simu_gol_gol_rani at 0.0 "$n(3) label \"L1S3\""
$simu_gol_gol_rani at 0.0 "$n(4) label \"L2S1\""
$simu_gol_gol_rani at 0.0 "$n(5) label \"L2S2\""
$simu_gol_gol_rani at 0.0 "$n(6) label \"L2S3\""
$simu_gol_gol_rani at 0.0 "$n(7) label \"L2S4\""
$simu_gol_gol_rani at 0.0 "$n(😎 label \"L2S5\""
$simu_gol_gol_rani at 0.0 "$n(9) label \"L3S1\""
$simu_gol_gol_rani at 0.0 "$n(10) label \"L3S2\""
$simu_gol_gol_rani at 0.0 "$n(11) label \"L3S3\""
$simu_gol_gol_rani at 0.0 "$n(12) label \"L3S4\""
$simu_gol_gol_rani at 0.0 "$n(13) label \"L3S5\""
$simu_gol_gol_rani at 0.0 "$n(14) label \"L3S6\""
$simu_gol_gol_rani at 0.0 "$n(15) label \"L3S7\""
$simu_gol_gol_rani at 0.0 "$n(16) label \"L4S1\""
$simu_gol_gol_rani at 0.0 "$n(17) label \"L4S2\""
$simu_gol_gol_rani at 0.0 "$n(18) label \"L4S3\""
$simu_gol_gol_rani at 0.0 "$n(19) label \"L4S4\""
$simu_gol_gol_rani at 0.0 "$n(20) label \"L4S5\""
$simu_gol_gol_rani at 0.0 "$n(21) label \"L4S6\""
$simu_gol_gol_rani at 0.0 "$n(22) label \"L4S7\""
$simu_gol_gol_rani at 0.0 "$n(23) label \"L4S8\""
$simu_gol_gol_rani at 0.0 "$n(24) label \"L4S9\""
$simu_gol_gol_rani at 0.0 "$n(25) label \"L4S10\""
$simu_gol_gol_rani at 0.0 "$n(26) label \"L4S11\""
$simu_gol_gol_rani at 0.0 "$n(27) label \"L4S12\""
$simu_gol_gol_rani at 0.0 "$n(28) label \"L4S13\""

#code for the link the nodes with eath other 
$simu_gol_gol_rani duplex-link $n(0) $n(1) 600Kb 10ms DropTail
$simu_gol_gol_rani duplex-link $n(0) $n(2) 600Kb 10ms DropTail
$simu_gol_gol_rani duplex-link $n(0) $n(3) 600Kb 10ms DropTail
$simu_gol_gol_rani duplex-link $n(1) $n(4) 600Kb 10ms DropTail
$simu_gol_gol_rani duplex-link $n(1) $n(5) 600Kb 10ms DropTail
$simu_gol_gol_rani duplex-link $n(2) $n(6) 600Kb 10ms DropTail
$simu_gol_gol_rani duplex-link $n(3) $n(7) 600Kb 10ms DropTail
$simu_gol_gol_rani duplex-link $n(3) $n(😎 600Kb 10ms DropTail
$simu_gol_gol_rani duplex-link $n(4) $n(9) 600Kb 10ms DropTail
$simu_gol_gol_rani duplex-link $n(5) $n(10) 600Kb 10ms DropTail
$simu_gol_gol_rani duplex-link $n(5) $n(11) 600Kb 10ms DropTail
$simu_gol_gol_rani duplex-link $n(6) $n(12) 600Kb 10ms DropTail
$simu_gol_gol_rani duplex-link $n(7) $n(13) 600Kb 10ms DropTail
$simu_gol_gol_rani duplex-link $n(😎 $n(14) 600Kb 10ms DropTail
$simu_gol_gol_rani duplex-link $n(😎 $n(15) 600Kb 10ms DropTail
$simu_gol_gol_rani duplex-link $n(9) $n(16) 600Kb 10ms DropTail
$simu_gol_gol_rani duplex-link $n(9) $n(17) 600Kb 10ms DropTail
$simu_gol_gol_rani duplex-link $n(10) $n(18) 600Kb 10ms DropTail
$simu_gol_gol_rani duplex-link $n(10) $n(19) 600Kb 10ms DropTail
$simu_gol_gol_rani duplex-link $n(11) $n(20) 600Kb 10ms DropTail
$simu_gol_gol_rani duplex-link $n(11) $n(21) 600Kb 10ms DropTail
$simu_gol_gol_rani duplex-link $n(12) $n(22) 600Kb 10ms DropTail
$simu_gol_gol_rani duplex-link $n(12) $n(23) 600Kb 10ms DropTail
$simu_gol_gol_rani duplex-link $n(13) $n(24) 600Kb 10ms DropTail
$simu_gol_gol_rani duplex-link $n(13) $n(25) 600Kb 10ms DropTail
$simu_gol_gol_rani duplex-link $n(14) $n(26) 600Kb 10ms DropTail
$simu_gol_gol_rani duplex-link $n(15) $n(27) 600Kb 10ms DropTail
$simu_gol_gol_rani duplex-link $n(15) $n(28) 600Kb 10ms DropTail

#creating the position 
$simu_gol_gol_rani duplex-link-op $n(0) $n(1) orient left
$simu_gol_gol_rani duplex-link-op $n(0) $n(2) orient down
$simu_gol_gol_rani duplex-link-op $n(0) $n(3) orient right-down
$simu_gol_gol_rani duplex-link-op $n(1) $n(4) orient left
$simu_gol_gol_rani duplex-link-op $n(1) $n(5) orient down
$simu_gol_gol_rani duplex-link-op $n(2) $n(6) orient down
$simu_gol_gol_rani duplex-link-op $n(3) $n(7) orient down
$simu_gol_gol_rani duplex-link-op $n(3) $n(😎 orient right-down
$simu_gol_gol_rani duplex-link-op $n(4) $n(9) orient left-down
$simu_gol_gol_rani duplex-link-op $n(5) $n(10) orient left-down
$simu_gol_gol_rani duplex-link-op $n(5) $n(11) orient down
$simu_gol_gol_rani duplex-link-op $n(6) $n(12) orient down
$simu_gol_gol_rani duplex-link-op $n(7) $n(13) orient down
$simu_gol_gol_rani duplex-link-op $n(😎 $n(14) orient down
$simu_gol_gol_rani duplex-link-op $n(😎 $n(15) orient right-down
$simu_gol_gol_rani duplex-link-op $n(9) $n(16) orient left
$simu_gol_gol_rani duplex-link-op $n(9) $n(17) orient left-down
$simu_gol_gol_rani duplex-link-op $n(10) $n(18) orient left-down
$simu_gol_gol_rani duplex-link-op $n(10) $n(19) orient down
$simu_gol_gol_rani duplex-link-op $n(11) $n(20) orient down
$simu_gol_gol_rani duplex-link-op $n(11) $n(21) orient right-down
$simu_gol_gol_rani duplex-link-op $n(12) $n(22) orient left-down
$simu_gol_gol_rani duplex-link-op $n(12) $n(23) orient down
$simu_gol_gol_rani duplex-link-op $n(13) $n(24) orient down
$simu_gol_gol_rani duplex-link-op $n(13) $n(25) orient right-down
$simu_gol_gol_rani duplex-link-op $n(14) $n(26) orient right-down
$simu_gol_gol_rani duplex-link-op $n(15) $n(27) orient right-down
$simu_gol_gol_rani duplex-link-op $n(15) $n(28) orient right



#set TCP protocal-->1
set tcp1 [new Agent/TCP]
$simu_gol_gol_rani attach-agent $n(0) $tcp1
set sink1 [new Agent/TCPSink]
$simu_gol_gol_rani attach-agent $n(1) $sink1



$simu_gol_gol_rani connect $tcp1 $sink1


set ftp1 [new Application/FTP]
$ftp1 set packetSize_ 1000
$ftp1 set rate_ 1mb
$ftp1 attach-agent $tcp1

#set TCP protocal-->2
set tcp2 [new Agent/TCP]
$simu_gol_gol_rani attach-agent $n(0) $tcp2
set sink2 [new Agent/TCPSink]
$simu_gol_gol_rani attach-agent $n(2) $sink2



$simu_gol_gol_rani connect $tcp2 $sink2


set ftp2 [new Application/FTP]
$ftp2 set packetSize_ 1000
$ftp2 set rate_ 1mb
$ftp2 attach-agent $tcp2


#set TCP protocal-->3
set tcp3 [new Agent/TCP]
$simu_gol_gol_rani attach-agent $n(0) $tcp3
set sink3 [new Agent/TCPSink]
$simu_gol_gol_rani attach-agent $n(3) $sink3



$simu_gol_gol_rani connect $tcp3 $sink3


set ftp3 [new Application/FTP]
$ftp3 set packetSize_ 1000
$ftp3 set rate_ 1mb
$ftp3 attach-agent $tcp3

#set TCP protocal-->4
set tcp4 [new Agent/TCP]
$simu_gol_gol_rani attach-agent $n(1) $tcp4
set sink4 [new Agent/TCPSink]
$simu_gol_gol_rani attach-agent $n(4) $sink4



$simu_gol_gol_rani connect $tcp4 $sink4


set ftp4 [new Application/FTP]
$ftp4 set packetSize_ 1000
$ftp4 set rate_ 1mb
$ftp4 attach-agent $tcp4


#set TCP protocal-->6
set tcp6 [new Agent/TCP]
$simu_gol_gol_rani attach-agent $n(1) $tcp6
set sink6 [new Agent/TCPSink]
$simu_gol_gol_rani attach-agent $n(5) $sink6



$simu_gol_gol_rani connect $tcp6 $sink6


set ftp6 [new Application/FTP]
$ftp6 set packetSize_ 1000
$ftp6 set rate_ 1mb
$ftp6 attach-agent $tcp6

#set TCP protocal-->7
set tcp7 [new Agent/TCP]
$simu_gol_gol_rani attach-agent $n(2) $tcp7
set sink7 [new Agent/TCPSink]
$simu_gol_gol_rani attach-agent $n(6) $sink7



$simu_gol_gol_rani connect $tcp7 $sink7


set ftp7 [new Application/FTP]
$ftp7 set packetSize_ 1000
$ftp7 set rate_ 1mb
$ftp7 attach-agent $tcp7


#set TCP protocal-->8
set tcp8 [new Agent/TCP]
$simu_gol_gol_rani attach-agent $n(3) $tcp8
set sink8 [new Agent/TCPSink]
$simu_gol_gol_rani attach-agent $n(7) $sink8



$simu_gol_gol_rani connect $tcp8 $sink8


set ftp8 [new Application/FTP]
$ftp8 set packetSize_ 1000
$ftp8 set rate_ 1mb
$ftp8 attach-agent $tcp8

#set TCP protocal-->9
set tcp9 [new Agent/TCP]
$simu_gol_gol_rani attach-agent $n(3) $tcp9
set sink9 [new Agent/TCPSink]
$simu_gol_gol_rani attach-agent $n(😎 $sink9



$simu_gol_gol_rani connect $tcp9 $sink9


set ftp9 [new Application/FTP]
$ftp9 set packetSize_ 1000
$ftp9 set rate_ 1mb
$ftp9 attach-agent $tcp9

#set TCP protocal-->10
set tcp10 [new Agent/TCP]
$simu_gol_gol_rani attach-agent $n(4) $tcp10
set sink10 [new Agent/TCPSink]
$simu_gol_gol_rani attach-agent $n(9) $sink10



$simu_gol_gol_rani connect $tcp10 $sink10


set ftp10 [new Application/FTP]
$ftp10 set packetSize_ 1000
$ftp10 set rate_ 1mb
$ftp10 attach-agent $tcp10

#set TCP protocal-->11
set tcp11 [new Agent/TCP]
$simu_gol_gol_rani attach-agent $n(4) $tcp11
set sink11 [new Agent/TCPSink]
$simu_gol_gol_rani attach-agent $n(9) $sink11



$simu_gol_gol_rani connect $tcp11 $sink11


set ftp11 [new Application/FTP]
$ftp11 set packetSize_ 1000
$ftp11 set rate_ 1mb
$ftp11 attach-agent $tcp11

#set TCP protocal-->12
set tcp12 [new Agent/TCP]
$simu_gol_gol_rani attach-agent $n(5) $tcp12
set sink12 [new Agent/TCPSink]
$simu_gol_gol_rani attach-agent $n(10) $sink12



$simu_gol_gol_rani connect $tcp12 $sink12


set ftp12 [new Application/FTP]
$ftp12 set packetSize_ 1000
$ftp12 set rate_ 1mb
$ftp12 attach-agent $tcp12

#set TCP protocal-->13
set tcp13 [new Agent/TCP]
$simu_gol_gol_rani attach-agent $n(5) $tcp13
set sink13 [new Agent/TCPSink]
$simu_gol_gol_rani attach-agent $n(11) $sink13



$simu_gol_gol_rani connect $tcp13 $sink13


set ftp13 [new Application/FTP]
$ftp13 set packetSize_ 1000
$ftp13 set rate_ 1mb
$ftp13 attach-agent $tcp13

#set TCP protocal-->14
set tcp14 [new Agent/TCP]
$simu_gol_gol_rani attach-agent $n(6) $tcp14
set sink14 [new Agent/TCPSink]
$simu_gol_gol_rani attach-agent $n(12) $sink14



$simu_gol_gol_rani connect $tcp14 $sink14


set ftp14 [new Application/FTP]
$ftp14 set packetSize_ 1000
$ftp14 set rate_ 1mb
$ftp14 attach-agent $tcp14

#set TCP protocal-->15
set tcp15 [new Agent/TCP]
$simu_gol_gol_rani attach-agent $n(7) $tcp15
set sink15 [new Agent/TCPSink]
$simu_gol_gol_rani attach-agent $n(13) $sink15



$simu_gol_gol_rani connect $tcp15 $sink15


set ftp15 [new Application/FTP]
$ftp15 set packetSize_ 1000
$ftp15 set rate_ 1mb
$ftp15 attach-agent $tcp15

#set TCP protocal-->16
set tcp16 [new Agent/TCP]
$simu_gol_gol_rani attach-agent $n(😎 $tcp16
set sink16 [new Agent/TCPSink]
$simu_gol_gol_rani attach-agent $n(14) $sink16



$simu_gol_gol_rani connect $tcp16 $sink16


set ftp16 [new Application/FTP]
$ftp16 set packetSize_ 1000
$ftp16 set rate_ 1mb
$ftp16 attach-agent $tcp16

#set TCP protocal-->17
set tcp17 [new Agent/TCP]
$simu_gol_gol_rani attach-agent $n(😎 $tcp17
set sink17 [new Agent/TCPSink]
$simu_gol_gol_rani attach-agent $n(15) $sink17



$simu_gol_gol_rani connect $tcp17 $sink17


set ftp17 [new Application/FTP]
$ftp17 set packetSize_ 1000
$ftp17 set rate_ 1mb
$ftp17 attach-agent $tcp17

#set TCP protocal-->18
set tcp18 [new Agent/TCP]
$simu_gol_gol_rani attach-agent $n(9) $tcp18
set sink18 [new Agent/TCPSink]
$simu_gol_gol_rani attach-agent $n(16) $sink18



$simu_gol_gol_rani connect $tcp18 $sink18


set ftp18 [new Application/FTP]
$ftp18 set packetSize_ 1000
$ftp18 set rate_ 1mb
$ftp18 attach-agent $tcp18


#set TCP protocal-->19
set tcp19 [new Agent/TCP]
$simu_gol_gol_rani attach-agent $n(9) $tcp19
set sink19 [new Agent/TCPSink]
$simu_gol_gol_rani attach-agent $n(17) $sink19



$simu_gol_gol_rani connect $tcp19 $sink19


set ftp19 [new Application/FTP]
$ftp19 set packetSize_ 1000
$ftp19 set rate_ 1mb
$ftp19 attach-agent $tcp19

#set TCP protocal-->20
set tcp20 [new Agent/TCP]
$simu_gol_gol_rani attach-agent $n(10) $tcp20
set sink20 [new Agent/TCPSink]
$simu_gol_gol_rani attach-agent $n(18) $sink20



$simu_gol_gol_rani connect $tcp20 $sink20


set ftp20 [new Application/FTP]
$ftp20 set packetSize_ 1000
$ftp20 set rate_ 1mb
$ftp20 attach-agent $tcp20

#set TCP protocal-->21
set tcp21 [new Agent/TCP]
$simu_gol_gol_rani attach-agent $n(10) $tcp21
set sink21 [new Agent/TCPSink]
$simu_gol_gol_rani attach-agent $n(19) $sink21



$simu_gol_gol_rani connect $tcp21 $sink21


set ftp21 [new Application/FTP]
$ftp21 set packetSize_ 1000
$ftp21 set rate_ 1mb
$ftp21 attach-agent $tcp21

#set TCP protocal-->22
set tcp22 [new Agent/TCP]
$simu_gol_gol_rani attach-agent $n(11) $tcp22
set sink22 [new Agent/TCPSink]
$simu_gol_gol_rani attach-agent $n(20) $sink22



$simu_gol_gol_rani connect $tcp22 $sink22


set ftp22 [new Application/FTP]
$ftp22 set packetSize_ 1000
$ftp22 set rate_ 1mb
$ftp22 attach-agent $tcp22


#set TCP protocal-->23
set tcp23 [new Agent/TCP]
$simu_gol_gol_rani attach-agent $n(11) $tcp23
set sink23 [new Agent/TCPSink]
$simu_gol_gol_rani attach-agent $n(21) $sink23



$simu_gol_gol_rani connect $tcp23 $sink23


set ftp23 [new Application/FTP]
$ftp23 set packetSize_ 1000
$ftp23 set rate_ 1mb
$ftp23 attach-agent $tcp23


#set TCP protocal-->24
set tcp24 [new Agent/TCP]
$simu_gol_gol_rani attach-agent $n(12) $tcp24
set sink24 [new Agent/TCPSink]
$simu_gol_gol_rani attach-agent $n(22) $sink24



$simu_gol_gol_rani connect $tcp24 $sink24


set ftp24 [new Application/FTP]
$ftp24 set packetSize_ 1000
$ftp24 set rate_ 1mb
$ftp24 attach-agent $tcp24

#set TCP protocal-->25
set tcp25 [new Agent/TCP]
$simu_gol_gol_rani attach-agent $n(12) $tcp25
set sink25 [new Agent/TCPSink]
$simu_gol_gol_rani attach-agent $n(23) $sink25



$simu_gol_gol_rani connect $tcp25 $sink25


set ftp25 [new Application/FTP]
$ftp25 set packetSize_ 1000
$ftp25 set rate_ 1mb
$ftp25 attach-agent $tcp25

#set TCP protocal-->26
set tcp26 [new Agent/TCP]
$simu_gol_gol_rani attach-agent $n(13) $tcp26
set sink26 [new Agent/TCPSink]
$simu_gol_gol_rani attach-agent $n(24) $sink26



$simu_gol_gol_rani connect $tcp26 $sink26


set ftp26 [new Application/FTP]
$ftp26 set packetSize_ 1000
$ftp26 set rate_ 1mb
$ftp26 attach-agent $tcp26

#set TCP protocal-->27
set tcp27 [new Agent/TCP]
$simu_gol_gol_rani attach-agent $n(13) $tcp27
set sink27 [new Agent/TCPSink]
$simu_gol_gol_rani attach-agent $n(25) $sink27



$simu_gol_gol_rani connect $tcp27 $sink27


set ftp27 [new Application/FTP]
$ftp27 set packetSize_ 1000
$ftp27 set rate_ 1mb
$ftp27 attach-agent $tcp27

#set TCP protocal-->28
set tcp28 [new Agent/TCP]
$simu_gol_gol_rani attach-agent $n(14) $tcp28
set sink28 [new Agent/TCPSink]
$simu_gol_gol_rani attach-agent $n(26) $sink28



$simu_gol_gol_rani connect $tcp28 $sink28


set ftp28 [new Application/FTP]
$ftp28 set packetSize_ 1000
$ftp28 set rate_ 1mb
$ftp28 attach-agent $tcp28

#set TCP protocal-->29
set tcp29 [new Agent/TCP]
$simu_gol_gol_rani attach-agent $n(15) $tcp29
set sink29 [new Agent/TCPSink]
$simu_gol_gol_rani attach-agent $n(27) $sink29



$simu_gol_gol_rani connect $tcp29 $sink29


set ftp29 [new Application/FTP]
$ftp29 set packetSize_ 1000
$ftp29 set rate_ 1mb
$ftp29 attach-agent $tcp29

#set TCP protocal-->30
set tcp30 [new Agent/TCP]
$simu_gol_gol_rani attach-agent $n(15) $tcp30
set sink30 [new Agent/TCPSink]
$simu_gol_gol_rani attach-agent $n(28) $sink30



$simu_gol_gol_rani connect $tcp30 $sink30


set ftp30 [new Application/FTP]
$ftp30 set packetSize_ 1000
$ftp30 set rate_ 1mb
$ftp30 attach-agent $tcp30




$simu_gol_gol_rani at 0.1 "$ftp1 start"
$simu_gol_gol_rani at 0.2 "$ftp1 stop"

$simu_gol_gol_rani at 0.3 "$ftp2 start"
$simu_gol_gol_rani at 0.4 "$ftp2 stop"

$simu_gol_gol_rani at 0.5 "$ftp3 start"
$simu_gol_gol_rani at 0.6 "$ftp3 stop"

$simu_gol_gol_rani at 0.7 "$ftp4 start"
$simu_gol_gol_rani at 0.8 "$ftp4 stop"

$simu_gol_gol_rani at 0.9 "$ftp6 start"
$simu_gol_gol_rani at 1.0 "$ftp6 stop"

$simu_gol_gol_rani at 1.1 "$ftp7 start"
$simu_gol_gol_rani at 1.2 "$ftp7 stop"

$simu_gol_gol_rani at 1.3 "$ftp8 start"
$simu_gol_gol_rani at 1.4 "$ftp8 stop"

$simu_gol_gol_rani at 1.5 "$ftp9 start"
$simu_gol_gol_rani at 1.6 "$ftp9 stop"

$simu_gol_gol_rani at 1.7 "$ftp10 start"
$simu_gol_gol_rani at 1.8 "$ftp10 stop"

$simu_gol_gol_rani at 1.9 "$ftp11 start"
$simu_gol_gol_rani at 2.0 "$ftp11 stop"

$simu_gol_gol_rani at 2.1 "$ftp12 start"
$simu_gol_gol_rani at 2.2 "$ftp12 stop"

$simu_gol_gol_rani at 2.3 "$ftp13 start"
$simu_gol_gol_rani at 2.4 "$ftp13 stop"

$simu_gol_gol_rani at 2.5 "$ftp14 start"
$simu_gol_gol_rani at 2.6 "$ftp14 stop"

$simu_gol_gol_rani at 2.7 "$ftp15 start"
$simu_gol_gol_rani at 2.8 "$ftp15 stop"

$simu_gol_gol_rani at 2.9 "$ftp16 start"
$simu_gol_gol_rani at 3.0 "$ftp16 stop"

$simu_gol_gol_rani at 3.1 "$ftp17 start"
$simu_gol_gol_rani at 3.2 "$ftp17 stop"

$simu_gol_gol_rani at 3.3 "$ftp18 start"
$simu_gol_gol_rani at 3.4 "$ftp18 stop"

$simu_gol_gol_rani at 3.5 "$ftp19 start"
$simu_gol_gol_rani at 3.6 "$ftp19 stop"

$simu_gol_gol_rani at 3.7 "$ftp20 start"
$simu_gol_gol_rani at 3.8 "$ftp20 stop"

$simu_gol_gol_rani at 3.9 "$ftp21 start"
$simu_gol_gol_rani at 4.0 "$ftp21 stop"

$simu_gol_gol_rani at 4.1 "$ftp22 start"
$simu_gol_gol_rani at 4.2 "$ftp22 stop"

$simu_gol_gol_rani at 4.3 "$ftp23 start"
$simu_gol_gol_rani at 4.4 "$ftp23 stop"

$simu_gol_gol_rani at 4.5 "$ftp24 start"
$simu_gol_gol_rani at 4.6 "$ftp24 stop"

$simu_gol_gol_rani at 4.7 "$ftp25 start"
$simu_gol_gol_rani at 4.8 "$ftp25 stop"

$simu_gol_gol_rani at 4.9 "$ftp26 start"
$simu_gol_gol_rani at 5.0 "$ftp26 stop"

$simu_gol_gol_rani at 5.1 "$ftp27 start"
$simu_gol_gol_rani at 5.2 "$ftp27 stop"

$simu_gol_gol_rani at 5.3 "$ftp28 start"
$simu_gol_gol_rani at 5.4 "$ftp28 stop"

$simu_gol_gol_rani at 5.5 "$ftp29 start"
$simu_gol_gol_rani at 5.6 "$ftp29 stop"

$simu_gol_gol_rani at 5.7 "$ftp30 start"
$simu_gol_gol_rani at 5.8 "$ftp30 stop"



$simu_gol_gol_rani at 6.1 "finish"

$simu_gol_gol_rani run
