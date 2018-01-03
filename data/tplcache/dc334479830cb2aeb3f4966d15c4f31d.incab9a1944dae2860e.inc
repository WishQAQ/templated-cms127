<?php
$z[0]=Array("field","",13,41);
$z[0][4]['name']="typeurl";
$z[1]=Array("field","",53,86);
$z[1][4]['name']="currentstyle";
$z[2]=Array("field","",93,122);
$z[2][4]['name']="typename";
$z[3]=Array("field","\r\nglobal \$dsql;\r\n\$sql = \"Select typedir,typename from dede_arctype where reid=\".@me.\" order by sortrank limit 0,5\";\r\n\$dsql->SetQuery(\$sql);//将SQL查询语句格式化\r\n\$dsql->Execute();//执行SQL操作\r\n\$ns = \$dsql->GetTotalRow();\r\nif(\$ns>0){\r\n//通过循环输出执行查询中的结果\r\n\$xinfo='<ul>';\r\nwhile(\$row = \$dsql->GetArray()){\r\n\$xinfo.='<li><a href=\"'.str_replace('{cmspath}','',\$row['typedir']).'\">'.\$row['typename'].'</a></li>';\r\n}\r\n\$xinfo.='</ul>';\r\n@me=\$xinfo;\r\n}else{@me='';}\r\n",134,679);
$z[3][4]['name']="id";
$z[3][4]['runphp']="yes";

?>