cd /home/tang/gitcom/source
if [[ $? -gt 0 ]]; then 
    echo "没有当前文件夹or etc. "
else 
    echo "成功进入当前文件夹"
fi
cp -r /home/tang/gitcom/bolg/source/_posts .
if [[ $? -gt 0 ]]; then 
    echo "笔记copy失败 "
else 
    echo "笔记copy成功"
fi
cp -r /home/tang/works/cpps .
if [[ $? -gt 0 ]]; then 
    echo "code copy失败 "
else 
    echo "code copy成功"
fi

cd cpps 
sudo rm -rf .git

cd /home/tang/gitcom/source

git add .
git commit -m "$(date)"
git push -u origin main -v

