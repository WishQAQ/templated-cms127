<li><a href="{dede:field name='typeurl'/}" class="nav{dede:field name='currentstyle'/}"><ins>{dede:field name='typename'/}</ins></a>
{dede:field name='id' runphp='yes'}
global $dsql;
$sql = "Select typedir,typename from dede_arctype where reid=".@me." order by sortrank limit 0,5";
$dsql->SetQuery($sql);//将SQL查询语句格式化
$dsql->Execute();//执行SQL操作
$ns = $dsql->GetTotalRow();
if($ns>0){
//通过循环输出执行查询中的结果
$xinfo='<ul>';
while($row = $dsql->GetArray()){
$xinfo.='<li><a href="'.str_replace('{cmspath}','',$row['typedir']).'">'.$row['typename'].'</a></li>';
}
$xinfo.='</ul>';
@me=$xinfo;
}else{@me='';}
{/dede:field}
</li>