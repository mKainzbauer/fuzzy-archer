<p id="graphMenu">
    <a class="btn" href="index.html#">$gettext("Live")</a>
    <a class="btn" href="day.html#">$gettext("24 Hours")</a>
    <a class="btn" href="week.html#">$gettext("Week")</a>
    <a class="btn" href="month.html#">$gettext("Month")</a>
    <a class="btn" href="year.html#">$gettext("Year")</a>
</p>
<script type="text/javascript">
## 'raw' makes Cheetah skip this section so it doesn't get confused by the dollar characters in the js
#raw

        let href = window.location.href;

        let graphMenu = document.getElementById("graphMenu");
        if(graphMenu != null) {
          let indexLink = document.getElementById("indexHtml");
          indexLink.classList.add("active");
          indexLink.href = "#";
          if(href.endsWith("/")) {
            href += "index.html#";
          }
          let listItems = document.evaluate("a", graphMenu, null, XPathResult.ORDERED_NODE_SNAPSHOT_TYPE, null);
          for(let i = 0; i < listItems.snapshotLength; i++) {
            let item = listItems.snapshotItem(i);
            if(href.includes(item.href)) {
              item.classList.add("btn-primary");
              item.classList.add("primaryLive");
              item.href = "#";
            } else {
              item.classList.add("btn-light");
              item.classList.add("primaryLight");
            }
            if(window.innerWidth < 768) {
              item.href += "graphMenu";
            }
          }
        }

        let listItems = document.evaluate("li/a", document.getElementById("navbarList"), null, XPathResult.UNORDERED_NODE_ITERATOR_TYPE, null);
        let item = listItems.iterateNext();
        while(item != null) {
          if(href.includes(item.href)) {
            item.classList.add("active");
            item.href = "#";
            break;
          }
          item = listItems.iterateNext();
        }
#end raw
</script>