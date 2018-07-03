
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_NX_OS_device_40.hpp"
#include "Cisco_NX_OS_device_41.hpp"

using namespace ydk;

namespace cisco_nx_os {
namespace Cisco_NX_OS_device {

System::ArpItems::InstItems::DomItems::DomList::DomstatsadjItems::DomstatsadjItems()
    :
    adjadd{YType::uint32, "adjAdd"},
    adjdel{YType::uint32, "adjDel"},
    adjtimeout{YType::uint32, "adjTimeout"},
    resolved{YType::uint64, "resolved"},
    incomplete{YType::uint64, "incomplete"},
    total{YType::uint64, "total"}
{

    yang_name = "domstatsadj-items"; yang_parent_name = "Dom-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ArpItems::InstItems::DomItems::DomList::DomstatsadjItems::~DomstatsadjItems()
{
}

bool System::ArpItems::InstItems::DomItems::DomList::DomstatsadjItems::has_data() const
{
    if (is_presence_container) return true;
    return adjadd.is_set
	|| adjdel.is_set
	|| adjtimeout.is_set
	|| resolved.is_set
	|| incomplete.is_set
	|| total.is_set;
}

bool System::ArpItems::InstItems::DomItems::DomList::DomstatsadjItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adjadd.yfilter)
	|| ydk::is_set(adjdel.yfilter)
	|| ydk::is_set(adjtimeout.yfilter)
	|| ydk::is_set(resolved.yfilter)
	|| ydk::is_set(incomplete.yfilter)
	|| ydk::is_set(total.yfilter);
}

std::string System::ArpItems::InstItems::DomItems::DomList::DomstatsadjItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "domstatsadj-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ArpItems::InstItems::DomItems::DomList::DomstatsadjItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adjadd.is_set || is_set(adjadd.yfilter)) leaf_name_data.push_back(adjadd.get_name_leafdata());
    if (adjdel.is_set || is_set(adjdel.yfilter)) leaf_name_data.push_back(adjdel.get_name_leafdata());
    if (adjtimeout.is_set || is_set(adjtimeout.yfilter)) leaf_name_data.push_back(adjtimeout.get_name_leafdata());
    if (resolved.is_set || is_set(resolved.yfilter)) leaf_name_data.push_back(resolved.get_name_leafdata());
    if (incomplete.is_set || is_set(incomplete.yfilter)) leaf_name_data.push_back(incomplete.get_name_leafdata());
    if (total.is_set || is_set(total.yfilter)) leaf_name_data.push_back(total.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::ArpItems::InstItems::DomItems::DomList::DomstatsadjItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ArpItems::InstItems::DomItems::DomList::DomstatsadjItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::ArpItems::InstItems::DomItems::DomList::DomstatsadjItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "adjAdd")
    {
        adjadd = value;
        adjadd.value_namespace = name_space;
        adjadd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adjDel")
    {
        adjdel = value;
        adjdel.value_namespace = name_space;
        adjdel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adjTimeout")
    {
        adjtimeout = value;
        adjtimeout.value_namespace = name_space;
        adjtimeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "resolved")
    {
        resolved = value;
        resolved.value_namespace = name_space;
        resolved.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "incomplete")
    {
        incomplete = value;
        incomplete.value_namespace = name_space;
        incomplete.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total")
    {
        total = value;
        total.value_namespace = name_space;
        total.value_namespace_prefix = name_space_prefix;
    }
}

void System::ArpItems::InstItems::DomItems::DomList::DomstatsadjItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adjAdd")
    {
        adjadd.yfilter = yfilter;
    }
    if(value_path == "adjDel")
    {
        adjdel.yfilter = yfilter;
    }
    if(value_path == "adjTimeout")
    {
        adjtimeout.yfilter = yfilter;
    }
    if(value_path == "resolved")
    {
        resolved.yfilter = yfilter;
    }
    if(value_path == "incomplete")
    {
        incomplete.yfilter = yfilter;
    }
    if(value_path == "total")
    {
        total.yfilter = yfilter;
    }
}

bool System::ArpItems::InstItems::DomItems::DomList::DomstatsadjItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "adjAdd" || name == "adjDel" || name == "adjTimeout" || name == "resolved" || name == "incomplete" || name == "total")
        return true;
    return false;
}

System::ArpItems::InstItems::DomItems::DomList::DomstatsmiscItems::DomstatsmiscItems()
    :
    clientmsg{YType::uint32, "clientMsg"},
    clientmsgfail{YType::uint32, "clientMsgFail"},
    iftimeoutmsgfail{YType::uint32, "ifTimeoutMsgFail"},
    ifstatusmsgfail{YType::uint32, "ifStatusMsgFail"}
{

    yang_name = "domstatsmisc-items"; yang_parent_name = "Dom-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ArpItems::InstItems::DomItems::DomList::DomstatsmiscItems::~DomstatsmiscItems()
{
}

bool System::ArpItems::InstItems::DomItems::DomList::DomstatsmiscItems::has_data() const
{
    if (is_presence_container) return true;
    return clientmsg.is_set
	|| clientmsgfail.is_set
	|| iftimeoutmsgfail.is_set
	|| ifstatusmsgfail.is_set;
}

bool System::ArpItems::InstItems::DomItems::DomList::DomstatsmiscItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(clientmsg.yfilter)
	|| ydk::is_set(clientmsgfail.yfilter)
	|| ydk::is_set(iftimeoutmsgfail.yfilter)
	|| ydk::is_set(ifstatusmsgfail.yfilter);
}

std::string System::ArpItems::InstItems::DomItems::DomList::DomstatsmiscItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "domstatsmisc-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ArpItems::InstItems::DomItems::DomList::DomstatsmiscItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (clientmsg.is_set || is_set(clientmsg.yfilter)) leaf_name_data.push_back(clientmsg.get_name_leafdata());
    if (clientmsgfail.is_set || is_set(clientmsgfail.yfilter)) leaf_name_data.push_back(clientmsgfail.get_name_leafdata());
    if (iftimeoutmsgfail.is_set || is_set(iftimeoutmsgfail.yfilter)) leaf_name_data.push_back(iftimeoutmsgfail.get_name_leafdata());
    if (ifstatusmsgfail.is_set || is_set(ifstatusmsgfail.yfilter)) leaf_name_data.push_back(ifstatusmsgfail.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::ArpItems::InstItems::DomItems::DomList::DomstatsmiscItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ArpItems::InstItems::DomItems::DomList::DomstatsmiscItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::ArpItems::InstItems::DomItems::DomList::DomstatsmiscItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "clientMsg")
    {
        clientmsg = value;
        clientmsg.value_namespace = name_space;
        clientmsg.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clientMsgFail")
    {
        clientmsgfail = value;
        clientmsgfail.value_namespace = name_space;
        clientmsgfail.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ifTimeoutMsgFail")
    {
        iftimeoutmsgfail = value;
        iftimeoutmsgfail.value_namespace = name_space;
        iftimeoutmsgfail.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ifStatusMsgFail")
    {
        ifstatusmsgfail = value;
        ifstatusmsgfail.value_namespace = name_space;
        ifstatusmsgfail.value_namespace_prefix = name_space_prefix;
    }
}

void System::ArpItems::InstItems::DomItems::DomList::DomstatsmiscItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "clientMsg")
    {
        clientmsg.yfilter = yfilter;
    }
    if(value_path == "clientMsgFail")
    {
        clientmsgfail.yfilter = yfilter;
    }
    if(value_path == "ifTimeoutMsgFail")
    {
        iftimeoutmsgfail.yfilter = yfilter;
    }
    if(value_path == "ifStatusMsgFail")
    {
        ifstatusmsgfail.yfilter = yfilter;
    }
}

bool System::ArpItems::InstItems::DomItems::DomList::DomstatsmiscItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "clientMsg" || name == "clientMsgFail" || name == "ifTimeoutMsgFail" || name == "ifStatusMsgFail")
        return true;
    return false;
}

System::ArpItems::InstItems::DomItems::DomList::IfItems::IfItems()
    :
    if_list(this, {"id"})
{

    yang_name = "if-items"; yang_parent_name = "Dom-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ArpItems::InstItems::DomItems::DomList::IfItems::~IfItems()
{
}

bool System::ArpItems::InstItems::DomItems::DomList::IfItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<if_list.len(); index++)
    {
        if(if_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ArpItems::InstItems::DomItems::DomList::IfItems::has_operation() const
{
    for (std::size_t index=0; index<if_list.len(); index++)
    {
        if(if_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ArpItems::InstItems::DomItems::DomList::IfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "if-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ArpItems::InstItems::DomItems::DomList::IfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::ArpItems::InstItems::DomItems::DomList::IfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "If-list")
    {
        auto c = std::make_shared<System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList>();
        c->parent = this;
        if_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ArpItems::InstItems::DomItems::DomList::IfItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : if_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::ArpItems::InstItems::DomItems::DomList::IfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ArpItems::InstItems::DomItems::DomList::IfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ArpItems::InstItems::DomItems::DomList::IfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "If-list")
        return true;
    return false;
}

System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::IfList()
    :
    id{YType::str, "id"},
    timeout{YType::uint16, "timeout"},
    gratuitousrequest{YType::enumeration, "gratuitousRequest"},
    gratuitousupdate{YType::enumeration, "gratuitousUpdate"},
    gratuitoushsrpdup{YType::enumeration, "gratuitousHsrpDup"},
    proxyarp{YType::enumeration, "proxyArp"},
    localproxyarp{YType::enumeration, "localProxyArp"},
    localproxyarpnohwflood{YType::enumeration, "localProxyArpNoHwFlood"},
    deleteadjonmacdelete{YType::enumeration, "deleteAdjOnMacDelete"},
    refreshtimerformacdelete{YType::uint16, "refreshTimerForMacDelete"},
    duplicateipdetectionforunnumberedsvi{YType::enumeration, "duplicateIpDetectionForUnnumberedSvi"},
    configerror{YType::str, "configError"},
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    adminst{YType::enumeration, "adminSt"}
        ,
    sadj_items(std::make_shared<System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems>())
    , ifstatstx_items(std::make_shared<System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatstxItems>())
    , ifstatsrx_items(std::make_shared<System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsrxItems>())
    , ifstatsadj_items(std::make_shared<System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsadjItems>())
    , ifstatsmisc_items(std::make_shared<System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsmiscItems>())
    , ifstatsmh_items(std::make_shared<System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsmhItems>())
    , rtvrfmbr_items(std::make_shared<System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::RtvrfMbrItems>())
    , rtnwpathtoif_items(std::make_shared<System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems>())
{
    sadj_items->parent = this;
    ifstatstx_items->parent = this;
    ifstatsrx_items->parent = this;
    ifstatsadj_items->parent = this;
    ifstatsmisc_items->parent = this;
    ifstatsmh_items->parent = this;
    rtvrfmbr_items->parent = this;
    rtnwpathtoif_items->parent = this;

    yang_name = "If-list"; yang_parent_name = "if-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::~IfList()
{
}

bool System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| timeout.is_set
	|| gratuitousrequest.is_set
	|| gratuitousupdate.is_set
	|| gratuitoushsrpdup.is_set
	|| proxyarp.is_set
	|| localproxyarp.is_set
	|| localproxyarpnohwflood.is_set
	|| deleteadjonmacdelete.is_set
	|| refreshtimerformacdelete.is_set
	|| duplicateipdetectionforunnumberedsvi.is_set
	|| configerror.is_set
	|| name.is_set
	|| descr.is_set
	|| adminst.is_set
	|| (sadj_items !=  nullptr && sadj_items->has_data())
	|| (ifstatstx_items !=  nullptr && ifstatstx_items->has_data())
	|| (ifstatsrx_items !=  nullptr && ifstatsrx_items->has_data())
	|| (ifstatsadj_items !=  nullptr && ifstatsadj_items->has_data())
	|| (ifstatsmisc_items !=  nullptr && ifstatsmisc_items->has_data())
	|| (ifstatsmh_items !=  nullptr && ifstatsmh_items->has_data())
	|| (rtvrfmbr_items !=  nullptr && rtvrfmbr_items->has_data())
	|| (rtnwpathtoif_items !=  nullptr && rtnwpathtoif_items->has_data());
}

bool System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(timeout.yfilter)
	|| ydk::is_set(gratuitousrequest.yfilter)
	|| ydk::is_set(gratuitousupdate.yfilter)
	|| ydk::is_set(gratuitoushsrpdup.yfilter)
	|| ydk::is_set(proxyarp.yfilter)
	|| ydk::is_set(localproxyarp.yfilter)
	|| ydk::is_set(localproxyarpnohwflood.yfilter)
	|| ydk::is_set(deleteadjonmacdelete.yfilter)
	|| ydk::is_set(refreshtimerformacdelete.yfilter)
	|| ydk::is_set(duplicateipdetectionforunnumberedsvi.yfilter)
	|| ydk::is_set(configerror.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| (sadj_items !=  nullptr && sadj_items->has_operation())
	|| (ifstatstx_items !=  nullptr && ifstatstx_items->has_operation())
	|| (ifstatsrx_items !=  nullptr && ifstatsrx_items->has_operation())
	|| (ifstatsadj_items !=  nullptr && ifstatsadj_items->has_operation())
	|| (ifstatsmisc_items !=  nullptr && ifstatsmisc_items->has_operation())
	|| (ifstatsmh_items !=  nullptr && ifstatsmh_items->has_operation())
	|| (rtvrfmbr_items !=  nullptr && rtvrfmbr_items->has_operation())
	|| (rtnwpathtoif_items !=  nullptr && rtnwpathtoif_items->has_operation());
}

std::string System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "If-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (timeout.is_set || is_set(timeout.yfilter)) leaf_name_data.push_back(timeout.get_name_leafdata());
    if (gratuitousrequest.is_set || is_set(gratuitousrequest.yfilter)) leaf_name_data.push_back(gratuitousrequest.get_name_leafdata());
    if (gratuitousupdate.is_set || is_set(gratuitousupdate.yfilter)) leaf_name_data.push_back(gratuitousupdate.get_name_leafdata());
    if (gratuitoushsrpdup.is_set || is_set(gratuitoushsrpdup.yfilter)) leaf_name_data.push_back(gratuitoushsrpdup.get_name_leafdata());
    if (proxyarp.is_set || is_set(proxyarp.yfilter)) leaf_name_data.push_back(proxyarp.get_name_leafdata());
    if (localproxyarp.is_set || is_set(localproxyarp.yfilter)) leaf_name_data.push_back(localproxyarp.get_name_leafdata());
    if (localproxyarpnohwflood.is_set || is_set(localproxyarpnohwflood.yfilter)) leaf_name_data.push_back(localproxyarpnohwflood.get_name_leafdata());
    if (deleteadjonmacdelete.is_set || is_set(deleteadjonmacdelete.yfilter)) leaf_name_data.push_back(deleteadjonmacdelete.get_name_leafdata());
    if (refreshtimerformacdelete.is_set || is_set(refreshtimerformacdelete.yfilter)) leaf_name_data.push_back(refreshtimerformacdelete.get_name_leafdata());
    if (duplicateipdetectionforunnumberedsvi.is_set || is_set(duplicateipdetectionforunnumberedsvi.yfilter)) leaf_name_data.push_back(duplicateipdetectionforunnumberedsvi.get_name_leafdata());
    if (configerror.is_set || is_set(configerror.yfilter)) leaf_name_data.push_back(configerror.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sadj-items")
    {
        if(sadj_items == nullptr)
        {
            sadj_items = std::make_shared<System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems>();
        }
        return sadj_items;
    }

    if(child_yang_name == "ifstatstx-items")
    {
        if(ifstatstx_items == nullptr)
        {
            ifstatstx_items = std::make_shared<System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatstxItems>();
        }
        return ifstatstx_items;
    }

    if(child_yang_name == "ifstatsrx-items")
    {
        if(ifstatsrx_items == nullptr)
        {
            ifstatsrx_items = std::make_shared<System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsrxItems>();
        }
        return ifstatsrx_items;
    }

    if(child_yang_name == "ifstatsadj-items")
    {
        if(ifstatsadj_items == nullptr)
        {
            ifstatsadj_items = std::make_shared<System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsadjItems>();
        }
        return ifstatsadj_items;
    }

    if(child_yang_name == "ifstatsmisc-items")
    {
        if(ifstatsmisc_items == nullptr)
        {
            ifstatsmisc_items = std::make_shared<System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsmiscItems>();
        }
        return ifstatsmisc_items;
    }

    if(child_yang_name == "ifstatsmh-items")
    {
        if(ifstatsmh_items == nullptr)
        {
            ifstatsmh_items = std::make_shared<System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsmhItems>();
        }
        return ifstatsmh_items;
    }

    if(child_yang_name == "rtvrfMbr-items")
    {
        if(rtvrfmbr_items == nullptr)
        {
            rtvrfmbr_items = std::make_shared<System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::RtvrfMbrItems>();
        }
        return rtvrfmbr_items;
    }

    if(child_yang_name == "rtnwPathToIf-items")
    {
        if(rtnwpathtoif_items == nullptr)
        {
            rtnwpathtoif_items = std::make_shared<System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems>();
        }
        return rtnwpathtoif_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(sadj_items != nullptr)
    {
        children["sadj-items"] = sadj_items;
    }

    if(ifstatstx_items != nullptr)
    {
        children["ifstatstx-items"] = ifstatstx_items;
    }

    if(ifstatsrx_items != nullptr)
    {
        children["ifstatsrx-items"] = ifstatsrx_items;
    }

    if(ifstatsadj_items != nullptr)
    {
        children["ifstatsadj-items"] = ifstatsadj_items;
    }

    if(ifstatsmisc_items != nullptr)
    {
        children["ifstatsmisc-items"] = ifstatsmisc_items;
    }

    if(ifstatsmh_items != nullptr)
    {
        children["ifstatsmh-items"] = ifstatsmh_items;
    }

    if(rtvrfmbr_items != nullptr)
    {
        children["rtvrfMbr-items"] = rtvrfmbr_items;
    }

    if(rtnwpathtoif_items != nullptr)
    {
        children["rtnwPathToIf-items"] = rtnwpathtoif_items;
    }

    return children;
}

void System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timeout")
    {
        timeout = value;
        timeout.value_namespace = name_space;
        timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "gratuitousRequest")
    {
        gratuitousrequest = value;
        gratuitousrequest.value_namespace = name_space;
        gratuitousrequest.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "gratuitousUpdate")
    {
        gratuitousupdate = value;
        gratuitousupdate.value_namespace = name_space;
        gratuitousupdate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "gratuitousHsrpDup")
    {
        gratuitoushsrpdup = value;
        gratuitoushsrpdup.value_namespace = name_space;
        gratuitoushsrpdup.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "proxyArp")
    {
        proxyarp = value;
        proxyarp.value_namespace = name_space;
        proxyarp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "localProxyArp")
    {
        localproxyarp = value;
        localproxyarp.value_namespace = name_space;
        localproxyarp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "localProxyArpNoHwFlood")
    {
        localproxyarpnohwflood = value;
        localproxyarpnohwflood.value_namespace = name_space;
        localproxyarpnohwflood.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "deleteAdjOnMacDelete")
    {
        deleteadjonmacdelete = value;
        deleteadjonmacdelete.value_namespace = name_space;
        deleteadjonmacdelete.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "refreshTimerForMacDelete")
    {
        refreshtimerformacdelete = value;
        refreshtimerformacdelete.value_namespace = name_space;
        refreshtimerformacdelete.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "duplicateIpDetectionForUnnumberedSvi")
    {
        duplicateipdetectionforunnumberedsvi = value;
        duplicateipdetectionforunnumberedsvi.value_namespace = name_space;
        duplicateipdetectionforunnumberedsvi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configError")
    {
        configerror = value;
        configerror.value_namespace = name_space;
        configerror.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adminSt")
    {
        adminst = value;
        adminst.value_namespace = name_space;
        adminst.value_namespace_prefix = name_space_prefix;
    }
}

void System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "timeout")
    {
        timeout.yfilter = yfilter;
    }
    if(value_path == "gratuitousRequest")
    {
        gratuitousrequest.yfilter = yfilter;
    }
    if(value_path == "gratuitousUpdate")
    {
        gratuitousupdate.yfilter = yfilter;
    }
    if(value_path == "gratuitousHsrpDup")
    {
        gratuitoushsrpdup.yfilter = yfilter;
    }
    if(value_path == "proxyArp")
    {
        proxyarp.yfilter = yfilter;
    }
    if(value_path == "localProxyArp")
    {
        localproxyarp.yfilter = yfilter;
    }
    if(value_path == "localProxyArpNoHwFlood")
    {
        localproxyarpnohwflood.yfilter = yfilter;
    }
    if(value_path == "deleteAdjOnMacDelete")
    {
        deleteadjonmacdelete.yfilter = yfilter;
    }
    if(value_path == "refreshTimerForMacDelete")
    {
        refreshtimerformacdelete.yfilter = yfilter;
    }
    if(value_path == "duplicateIpDetectionForUnnumberedSvi")
    {
        duplicateipdetectionforunnumberedsvi.yfilter = yfilter;
    }
    if(value_path == "configError")
    {
        configerror.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
}

bool System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sadj-items" || name == "ifstatstx-items" || name == "ifstatsrx-items" || name == "ifstatsadj-items" || name == "ifstatsmisc-items" || name == "ifstatsmh-items" || name == "rtvrfMbr-items" || name == "rtnwPathToIf-items" || name == "id" || name == "timeout" || name == "gratuitousRequest" || name == "gratuitousUpdate" || name == "gratuitousHsrpDup" || name == "proxyArp" || name == "localProxyArp" || name == "localProxyArpNoHwFlood" || name == "deleteAdjOnMacDelete" || name == "refreshTimerForMacDelete" || name == "duplicateIpDetectionForUnnumberedSvi" || name == "configError" || name == "name" || name == "descr" || name == "adminSt")
        return true;
    return false;
}

System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems::SadjItems()
    :
    stadjep_list(this, {"ip"})
{

    yang_name = "sadj-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems::~SadjItems()
{
}

bool System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<stadjep_list.len(); index++)
    {
        if(stadjep_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems::has_operation() const
{
    for (std::size_t index=0; index<stadjep_list.len(); index++)
    {
        if(stadjep_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sadj-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "StAdjEp-list")
    {
        auto c = std::make_shared<System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems::StAdjEpList>();
        c->parent = this;
        stadjep_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : stadjep_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "StAdjEp-list")
        return true;
    return false;
}

System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems::StAdjEpList::StAdjEpList()
    :
    ip{YType::str, "ip"},
    operst{YType::enumeration, "operSt"},
    operstqual{YType::enumeration, "operStQual"},
    name{YType::str, "name"},
    mac{YType::str, "mac"},
    upts{YType::str, "upTS"}
        ,
    rtctrlradjeptostadjep_items(std::make_shared<System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems::StAdjEpList::RtCtrlrAdjEpToStAdjEpItems>())
    , rtfvepdefreftostadjep_items(std::make_shared<System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems::StAdjEpList::RtfvEpDefRefToStAdjEpItems>())
{
    rtctrlradjeptostadjep_items->parent = this;
    rtfvepdefreftostadjep_items->parent = this;

    yang_name = "StAdjEp-list"; yang_parent_name = "sadj-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems::StAdjEpList::~StAdjEpList()
{
}

bool System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems::StAdjEpList::has_data() const
{
    if (is_presence_container) return true;
    return ip.is_set
	|| operst.is_set
	|| operstqual.is_set
	|| name.is_set
	|| mac.is_set
	|| upts.is_set
	|| (rtctrlradjeptostadjep_items !=  nullptr && rtctrlradjeptostadjep_items->has_data())
	|| (rtfvepdefreftostadjep_items !=  nullptr && rtfvepdefreftostadjep_items->has_data());
}

bool System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems::StAdjEpList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(operstqual.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(mac.yfilter)
	|| ydk::is_set(upts.yfilter)
	|| (rtctrlradjeptostadjep_items !=  nullptr && rtctrlradjeptostadjep_items->has_operation())
	|| (rtfvepdefreftostadjep_items !=  nullptr && rtfvepdefreftostadjep_items->has_operation());
}

std::string System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems::StAdjEpList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "StAdjEp-list";
    ADD_KEY_TOKEN(ip, "ip");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems::StAdjEpList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (operstqual.is_set || is_set(operstqual.yfilter)) leaf_name_data.push_back(operstqual.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (mac.is_set || is_set(mac.yfilter)) leaf_name_data.push_back(mac.get_name_leafdata());
    if (upts.is_set || is_set(upts.yfilter)) leaf_name_data.push_back(upts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems::StAdjEpList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rtCtrlrAdjEpToStAdjEp-items")
    {
        if(rtctrlradjeptostadjep_items == nullptr)
        {
            rtctrlradjeptostadjep_items = std::make_shared<System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems::StAdjEpList::RtCtrlrAdjEpToStAdjEpItems>();
        }
        return rtctrlradjeptostadjep_items;
    }

    if(child_yang_name == "rtfvEpDefRefToStAdjEp-items")
    {
        if(rtfvepdefreftostadjep_items == nullptr)
        {
            rtfvepdefreftostadjep_items = std::make_shared<System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems::StAdjEpList::RtfvEpDefRefToStAdjEpItems>();
        }
        return rtfvepdefreftostadjep_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems::StAdjEpList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(rtctrlradjeptostadjep_items != nullptr)
    {
        children["rtCtrlrAdjEpToStAdjEp-items"] = rtctrlradjeptostadjep_items;
    }

    if(rtfvepdefreftostadjep_items != nullptr)
    {
        children["rtfvEpDefRefToStAdjEp-items"] = rtfvepdefreftostadjep_items;
    }

    return children;
}

void System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems::StAdjEpList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip")
    {
        ip = value;
        ip.value_namespace = name_space;
        ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operStQual")
    {
        operstqual = value;
        operstqual.value_namespace = name_space;
        operstqual.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac")
    {
        mac = value;
        mac.value_namespace = name_space;
        mac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "upTS")
    {
        upts = value;
        upts.value_namespace = name_space;
        upts.value_namespace_prefix = name_space_prefix;
    }
}

void System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems::StAdjEpList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "operStQual")
    {
        operstqual.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "mac")
    {
        mac.yfilter = yfilter;
    }
    if(value_path == "upTS")
    {
        upts.yfilter = yfilter;
    }
}

bool System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems::StAdjEpList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rtCtrlrAdjEpToStAdjEp-items" || name == "rtfvEpDefRefToStAdjEp-items" || name == "ip" || name == "operSt" || name == "operStQual" || name == "name" || name == "mac" || name == "upTS")
        return true;
    return false;
}

System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems::StAdjEpList::RtCtrlrAdjEpToStAdjEpItems::RtCtrlrAdjEpToStAdjEpItems()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "rtCtrlrAdjEpToStAdjEp-items"; yang_parent_name = "StAdjEp-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems::StAdjEpList::RtCtrlrAdjEpToStAdjEpItems::~RtCtrlrAdjEpToStAdjEpItems()
{
}

bool System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems::StAdjEpList::RtCtrlrAdjEpToStAdjEpItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems::StAdjEpList::RtCtrlrAdjEpToStAdjEpItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems::StAdjEpList::RtCtrlrAdjEpToStAdjEpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtCtrlrAdjEpToStAdjEp-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems::StAdjEpList::RtCtrlrAdjEpToStAdjEpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems::StAdjEpList::RtCtrlrAdjEpToStAdjEpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems::StAdjEpList::RtCtrlrAdjEpToStAdjEpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems::StAdjEpList::RtCtrlrAdjEpToStAdjEpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tCl")
    {
        tcl = value;
        tcl.value_namespace = name_space;
        tcl.value_namespace_prefix = name_space_prefix;
    }
}

void System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems::StAdjEpList::RtCtrlrAdjEpToStAdjEpItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
    if(value_path == "tCl")
    {
        tcl.yfilter = yfilter;
    }
}

bool System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems::StAdjEpList::RtCtrlrAdjEpToStAdjEpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems::StAdjEpList::RtfvEpDefRefToStAdjEpItems::RtfvEpDefRefToStAdjEpItems()
    :
    rtfvepdefreftostadjep_list(this, {"tdn"})
{

    yang_name = "rtfvEpDefRefToStAdjEp-items"; yang_parent_name = "StAdjEp-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems::StAdjEpList::RtfvEpDefRefToStAdjEpItems::~RtfvEpDefRefToStAdjEpItems()
{
}

bool System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems::StAdjEpList::RtfvEpDefRefToStAdjEpItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rtfvepdefreftostadjep_list.len(); index++)
    {
        if(rtfvepdefreftostadjep_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems::StAdjEpList::RtfvEpDefRefToStAdjEpItems::has_operation() const
{
    for (std::size_t index=0; index<rtfvepdefreftostadjep_list.len(); index++)
    {
        if(rtfvepdefreftostadjep_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems::StAdjEpList::RtfvEpDefRefToStAdjEpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtfvEpDefRefToStAdjEp-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems::StAdjEpList::RtfvEpDefRefToStAdjEpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems::StAdjEpList::RtfvEpDefRefToStAdjEpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RtFvEpDefRefToStAdjEp-list")
    {
        auto c = std::make_shared<System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems::StAdjEpList::RtfvEpDefRefToStAdjEpItems::RtFvEpDefRefToStAdjEpList>();
        c->parent = this;
        rtfvepdefreftostadjep_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems::StAdjEpList::RtfvEpDefRefToStAdjEpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : rtfvepdefreftostadjep_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems::StAdjEpList::RtfvEpDefRefToStAdjEpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems::StAdjEpList::RtfvEpDefRefToStAdjEpItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems::StAdjEpList::RtfvEpDefRefToStAdjEpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RtFvEpDefRefToStAdjEp-list")
        return true;
    return false;
}

System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems::StAdjEpList::RtfvEpDefRefToStAdjEpItems::RtFvEpDefRefToStAdjEpList::RtFvEpDefRefToStAdjEpList()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "RtFvEpDefRefToStAdjEp-list"; yang_parent_name = "rtfvEpDefRefToStAdjEp-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems::StAdjEpList::RtfvEpDefRefToStAdjEpItems::RtFvEpDefRefToStAdjEpList::~RtFvEpDefRefToStAdjEpList()
{
}

bool System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems::StAdjEpList::RtfvEpDefRefToStAdjEpItems::RtFvEpDefRefToStAdjEpList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems::StAdjEpList::RtfvEpDefRefToStAdjEpItems::RtFvEpDefRefToStAdjEpList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems::StAdjEpList::RtfvEpDefRefToStAdjEpItems::RtFvEpDefRefToStAdjEpList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RtFvEpDefRefToStAdjEp-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems::StAdjEpList::RtfvEpDefRefToStAdjEpItems::RtFvEpDefRefToStAdjEpList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems::StAdjEpList::RtfvEpDefRefToStAdjEpItems::RtFvEpDefRefToStAdjEpList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems::StAdjEpList::RtfvEpDefRefToStAdjEpItems::RtFvEpDefRefToStAdjEpList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems::StAdjEpList::RtfvEpDefRefToStAdjEpItems::RtFvEpDefRefToStAdjEpList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tCl")
    {
        tcl = value;
        tcl.value_namespace = name_space;
        tcl.value_namespace_prefix = name_space_prefix;
    }
}

void System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems::StAdjEpList::RtfvEpDefRefToStAdjEpItems::RtFvEpDefRefToStAdjEpList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
    if(value_path == "tCl")
    {
        tcl.yfilter = yfilter;
    }
}

bool System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems::StAdjEpList::RtfvEpDefRefToStAdjEpItems::RtFvEpDefRefToStAdjEpList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatstxItems::IfstatstxItems()
    :
    pktsent{YType::uint32, "pktSent"},
    pktsentreq{YType::uint32, "pktSentReq"},
    pktsentrsp{YType::uint32, "pktSentRsp"},
    pktsentreql2{YType::uint32, "pktSentReqL2"},
    pktsentrspl2{YType::uint32, "pktSentRspL2"},
    pktsentgratreq{YType::uint32, "pktSentGratReq"},
    pktsenttunnel{YType::uint32, "pktSentTunnel"},
    pktsentdrop{YType::uint32, "pktSentDrop"},
    pktsendsrvport{YType::uint32, "pktSendSrvPort"},
    pktsendfbrcport{YType::uint32, "pktSendFbrcPort"},
    pktsendfixupcore{YType::uint32, "pktSendFixupCore"},
    pktsendfixupserver{YType::uint32, "pktSendFixupServer"},
    pktsendfixuprarp{YType::uint32, "pktSendFixupRarp"},
    pktsendanycastglean{YType::uint32, "pktSendAnyCastGlean"},
    pktsentfailinvpkt{YType::uint32, "pktSentFailInvPkt"},
    pktsentfailmbufop{YType::uint32, "pktSentFailMbufOp"},
    pktsentfailnoifindex{YType::uint32, "pktSentFailNoIfindex"},
    pktsentfailnovlanforsvi{YType::uint32, "pktSentFailNoVlanForSvi"},
    pktsentfailunsupportedint{YType::uint32, "pktSentFailUnsupportedInt"},
    pktsentfailimdown{YType::uint32, "pktSentFailImDown"},
    pktsentfailinvsrcip{YType::uint32, "pktSentFailInvSrcIp"},
    pktsentfailinvdstip{YType::uint32, "pktSentFailInvDstIp"},
    pktsentfailownip{YType::uint32, "pktSentFailOwnIp"},
    pktsentfailctxtnotcreated{YType::uint32, "pktSentFailCtxtNotCreated"},
    pktsentfailbadctxtid{YType::uint32, "pktSentFailBadCtxtId"},
    pktsentfailunattachedip{YType::uint32, "pktSentFailUnattachedIp"},
    pktsentfailadjaddfailure{YType::uint32, "pktSentFailAdjAddFailure"},
    pktsentfailnosrcip{YType::uint32, "pktSentFailNoSrcIp"},
    pktsentfailnomac{YType::uint32, "pktSentFailNoMac"},
    pktsentfailclientenqfailed{YType::uint32, "pktSentFailClientEnqFailed"},
    pktsentfailproxydstnotrchbl{YType::uint32, "pktSentFailProxyDstNotRchbl"},
    pktskiprespenhancedproxydestnotreach{YType::uint32, "pktSkipRespEnhancedProxyDestNotReach"},
    pktskiprespenhancedproxyl2porttrack{YType::uint32, "pktSkipRespEnhancedProxyL2portTrack"},
    pktsentfailinvlocalproxy{YType::uint32, "pktSentFailInvLocalProxy"},
    pktsentfailinvproxy{YType::uint32, "pktSentFailInvProxy"},
    pktsentfailvipgroupnotactive{YType::uint32, "pktSentFailVipGroupNotActive"}
{

    yang_name = "ifstatstx-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatstxItems::~IfstatstxItems()
{
}

bool System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatstxItems::has_data() const
{
    if (is_presence_container) return true;
    return pktsent.is_set
	|| pktsentreq.is_set
	|| pktsentrsp.is_set
	|| pktsentreql2.is_set
	|| pktsentrspl2.is_set
	|| pktsentgratreq.is_set
	|| pktsenttunnel.is_set
	|| pktsentdrop.is_set
	|| pktsendsrvport.is_set
	|| pktsendfbrcport.is_set
	|| pktsendfixupcore.is_set
	|| pktsendfixupserver.is_set
	|| pktsendfixuprarp.is_set
	|| pktsendanycastglean.is_set
	|| pktsentfailinvpkt.is_set
	|| pktsentfailmbufop.is_set
	|| pktsentfailnoifindex.is_set
	|| pktsentfailnovlanforsvi.is_set
	|| pktsentfailunsupportedint.is_set
	|| pktsentfailimdown.is_set
	|| pktsentfailinvsrcip.is_set
	|| pktsentfailinvdstip.is_set
	|| pktsentfailownip.is_set
	|| pktsentfailctxtnotcreated.is_set
	|| pktsentfailbadctxtid.is_set
	|| pktsentfailunattachedip.is_set
	|| pktsentfailadjaddfailure.is_set
	|| pktsentfailnosrcip.is_set
	|| pktsentfailnomac.is_set
	|| pktsentfailclientenqfailed.is_set
	|| pktsentfailproxydstnotrchbl.is_set
	|| pktskiprespenhancedproxydestnotreach.is_set
	|| pktskiprespenhancedproxyl2porttrack.is_set
	|| pktsentfailinvlocalproxy.is_set
	|| pktsentfailinvproxy.is_set
	|| pktsentfailvipgroupnotactive.is_set;
}

bool System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatstxItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pktsent.yfilter)
	|| ydk::is_set(pktsentreq.yfilter)
	|| ydk::is_set(pktsentrsp.yfilter)
	|| ydk::is_set(pktsentreql2.yfilter)
	|| ydk::is_set(pktsentrspl2.yfilter)
	|| ydk::is_set(pktsentgratreq.yfilter)
	|| ydk::is_set(pktsenttunnel.yfilter)
	|| ydk::is_set(pktsentdrop.yfilter)
	|| ydk::is_set(pktsendsrvport.yfilter)
	|| ydk::is_set(pktsendfbrcport.yfilter)
	|| ydk::is_set(pktsendfixupcore.yfilter)
	|| ydk::is_set(pktsendfixupserver.yfilter)
	|| ydk::is_set(pktsendfixuprarp.yfilter)
	|| ydk::is_set(pktsendanycastglean.yfilter)
	|| ydk::is_set(pktsentfailinvpkt.yfilter)
	|| ydk::is_set(pktsentfailmbufop.yfilter)
	|| ydk::is_set(pktsentfailnoifindex.yfilter)
	|| ydk::is_set(pktsentfailnovlanforsvi.yfilter)
	|| ydk::is_set(pktsentfailunsupportedint.yfilter)
	|| ydk::is_set(pktsentfailimdown.yfilter)
	|| ydk::is_set(pktsentfailinvsrcip.yfilter)
	|| ydk::is_set(pktsentfailinvdstip.yfilter)
	|| ydk::is_set(pktsentfailownip.yfilter)
	|| ydk::is_set(pktsentfailctxtnotcreated.yfilter)
	|| ydk::is_set(pktsentfailbadctxtid.yfilter)
	|| ydk::is_set(pktsentfailunattachedip.yfilter)
	|| ydk::is_set(pktsentfailadjaddfailure.yfilter)
	|| ydk::is_set(pktsentfailnosrcip.yfilter)
	|| ydk::is_set(pktsentfailnomac.yfilter)
	|| ydk::is_set(pktsentfailclientenqfailed.yfilter)
	|| ydk::is_set(pktsentfailproxydstnotrchbl.yfilter)
	|| ydk::is_set(pktskiprespenhancedproxydestnotreach.yfilter)
	|| ydk::is_set(pktskiprespenhancedproxyl2porttrack.yfilter)
	|| ydk::is_set(pktsentfailinvlocalproxy.yfilter)
	|| ydk::is_set(pktsentfailinvproxy.yfilter)
	|| ydk::is_set(pktsentfailvipgroupnotactive.yfilter);
}

std::string System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatstxItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ifstatstx-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatstxItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pktsent.is_set || is_set(pktsent.yfilter)) leaf_name_data.push_back(pktsent.get_name_leafdata());
    if (pktsentreq.is_set || is_set(pktsentreq.yfilter)) leaf_name_data.push_back(pktsentreq.get_name_leafdata());
    if (pktsentrsp.is_set || is_set(pktsentrsp.yfilter)) leaf_name_data.push_back(pktsentrsp.get_name_leafdata());
    if (pktsentreql2.is_set || is_set(pktsentreql2.yfilter)) leaf_name_data.push_back(pktsentreql2.get_name_leafdata());
    if (pktsentrspl2.is_set || is_set(pktsentrspl2.yfilter)) leaf_name_data.push_back(pktsentrspl2.get_name_leafdata());
    if (pktsentgratreq.is_set || is_set(pktsentgratreq.yfilter)) leaf_name_data.push_back(pktsentgratreq.get_name_leafdata());
    if (pktsenttunnel.is_set || is_set(pktsenttunnel.yfilter)) leaf_name_data.push_back(pktsenttunnel.get_name_leafdata());
    if (pktsentdrop.is_set || is_set(pktsentdrop.yfilter)) leaf_name_data.push_back(pktsentdrop.get_name_leafdata());
    if (pktsendsrvport.is_set || is_set(pktsendsrvport.yfilter)) leaf_name_data.push_back(pktsendsrvport.get_name_leafdata());
    if (pktsendfbrcport.is_set || is_set(pktsendfbrcport.yfilter)) leaf_name_data.push_back(pktsendfbrcport.get_name_leafdata());
    if (pktsendfixupcore.is_set || is_set(pktsendfixupcore.yfilter)) leaf_name_data.push_back(pktsendfixupcore.get_name_leafdata());
    if (pktsendfixupserver.is_set || is_set(pktsendfixupserver.yfilter)) leaf_name_data.push_back(pktsendfixupserver.get_name_leafdata());
    if (pktsendfixuprarp.is_set || is_set(pktsendfixuprarp.yfilter)) leaf_name_data.push_back(pktsendfixuprarp.get_name_leafdata());
    if (pktsendanycastglean.is_set || is_set(pktsendanycastglean.yfilter)) leaf_name_data.push_back(pktsendanycastglean.get_name_leafdata());
    if (pktsentfailinvpkt.is_set || is_set(pktsentfailinvpkt.yfilter)) leaf_name_data.push_back(pktsentfailinvpkt.get_name_leafdata());
    if (pktsentfailmbufop.is_set || is_set(pktsentfailmbufop.yfilter)) leaf_name_data.push_back(pktsentfailmbufop.get_name_leafdata());
    if (pktsentfailnoifindex.is_set || is_set(pktsentfailnoifindex.yfilter)) leaf_name_data.push_back(pktsentfailnoifindex.get_name_leafdata());
    if (pktsentfailnovlanforsvi.is_set || is_set(pktsentfailnovlanforsvi.yfilter)) leaf_name_data.push_back(pktsentfailnovlanforsvi.get_name_leafdata());
    if (pktsentfailunsupportedint.is_set || is_set(pktsentfailunsupportedint.yfilter)) leaf_name_data.push_back(pktsentfailunsupportedint.get_name_leafdata());
    if (pktsentfailimdown.is_set || is_set(pktsentfailimdown.yfilter)) leaf_name_data.push_back(pktsentfailimdown.get_name_leafdata());
    if (pktsentfailinvsrcip.is_set || is_set(pktsentfailinvsrcip.yfilter)) leaf_name_data.push_back(pktsentfailinvsrcip.get_name_leafdata());
    if (pktsentfailinvdstip.is_set || is_set(pktsentfailinvdstip.yfilter)) leaf_name_data.push_back(pktsentfailinvdstip.get_name_leafdata());
    if (pktsentfailownip.is_set || is_set(pktsentfailownip.yfilter)) leaf_name_data.push_back(pktsentfailownip.get_name_leafdata());
    if (pktsentfailctxtnotcreated.is_set || is_set(pktsentfailctxtnotcreated.yfilter)) leaf_name_data.push_back(pktsentfailctxtnotcreated.get_name_leafdata());
    if (pktsentfailbadctxtid.is_set || is_set(pktsentfailbadctxtid.yfilter)) leaf_name_data.push_back(pktsentfailbadctxtid.get_name_leafdata());
    if (pktsentfailunattachedip.is_set || is_set(pktsentfailunattachedip.yfilter)) leaf_name_data.push_back(pktsentfailunattachedip.get_name_leafdata());
    if (pktsentfailadjaddfailure.is_set || is_set(pktsentfailadjaddfailure.yfilter)) leaf_name_data.push_back(pktsentfailadjaddfailure.get_name_leafdata());
    if (pktsentfailnosrcip.is_set || is_set(pktsentfailnosrcip.yfilter)) leaf_name_data.push_back(pktsentfailnosrcip.get_name_leafdata());
    if (pktsentfailnomac.is_set || is_set(pktsentfailnomac.yfilter)) leaf_name_data.push_back(pktsentfailnomac.get_name_leafdata());
    if (pktsentfailclientenqfailed.is_set || is_set(pktsentfailclientenqfailed.yfilter)) leaf_name_data.push_back(pktsentfailclientenqfailed.get_name_leafdata());
    if (pktsentfailproxydstnotrchbl.is_set || is_set(pktsentfailproxydstnotrchbl.yfilter)) leaf_name_data.push_back(pktsentfailproxydstnotrchbl.get_name_leafdata());
    if (pktskiprespenhancedproxydestnotreach.is_set || is_set(pktskiprespenhancedproxydestnotreach.yfilter)) leaf_name_data.push_back(pktskiprespenhancedproxydestnotreach.get_name_leafdata());
    if (pktskiprespenhancedproxyl2porttrack.is_set || is_set(pktskiprespenhancedproxyl2porttrack.yfilter)) leaf_name_data.push_back(pktskiprespenhancedproxyl2porttrack.get_name_leafdata());
    if (pktsentfailinvlocalproxy.is_set || is_set(pktsentfailinvlocalproxy.yfilter)) leaf_name_data.push_back(pktsentfailinvlocalproxy.get_name_leafdata());
    if (pktsentfailinvproxy.is_set || is_set(pktsentfailinvproxy.yfilter)) leaf_name_data.push_back(pktsentfailinvproxy.get_name_leafdata());
    if (pktsentfailvipgroupnotactive.is_set || is_set(pktsentfailvipgroupnotactive.yfilter)) leaf_name_data.push_back(pktsentfailvipgroupnotactive.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatstxItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatstxItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatstxItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pktSent")
    {
        pktsent = value;
        pktsent.value_namespace = name_space;
        pktsent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pktSentReq")
    {
        pktsentreq = value;
        pktsentreq.value_namespace = name_space;
        pktsentreq.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pktSentRsp")
    {
        pktsentrsp = value;
        pktsentrsp.value_namespace = name_space;
        pktsentrsp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pktSentReqL2")
    {
        pktsentreql2 = value;
        pktsentreql2.value_namespace = name_space;
        pktsentreql2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pktSentRspL2")
    {
        pktsentrspl2 = value;
        pktsentrspl2.value_namespace = name_space;
        pktsentrspl2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pktSentGratReq")
    {
        pktsentgratreq = value;
        pktsentgratreq.value_namespace = name_space;
        pktsentgratreq.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pktSentTunnel")
    {
        pktsenttunnel = value;
        pktsenttunnel.value_namespace = name_space;
        pktsenttunnel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pktSentDrop")
    {
        pktsentdrop = value;
        pktsentdrop.value_namespace = name_space;
        pktsentdrop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pktSendSrvPort")
    {
        pktsendsrvport = value;
        pktsendsrvport.value_namespace = name_space;
        pktsendsrvport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pktSendFbrcPort")
    {
        pktsendfbrcport = value;
        pktsendfbrcport.value_namespace = name_space;
        pktsendfbrcport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pktSendFixupCore")
    {
        pktsendfixupcore = value;
        pktsendfixupcore.value_namespace = name_space;
        pktsendfixupcore.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pktSendFixupServer")
    {
        pktsendfixupserver = value;
        pktsendfixupserver.value_namespace = name_space;
        pktsendfixupserver.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pktSendFixupRarp")
    {
        pktsendfixuprarp = value;
        pktsendfixuprarp.value_namespace = name_space;
        pktsendfixuprarp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pktSendAnyCastGlean")
    {
        pktsendanycastglean = value;
        pktsendanycastglean.value_namespace = name_space;
        pktsendanycastglean.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pktSentFailInvPkt")
    {
        pktsentfailinvpkt = value;
        pktsentfailinvpkt.value_namespace = name_space;
        pktsentfailinvpkt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pktSentFailMbufOp")
    {
        pktsentfailmbufop = value;
        pktsentfailmbufop.value_namespace = name_space;
        pktsentfailmbufop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pktSentFailNoIfindex")
    {
        pktsentfailnoifindex = value;
        pktsentfailnoifindex.value_namespace = name_space;
        pktsentfailnoifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pktSentFailNoVlanForSvi")
    {
        pktsentfailnovlanforsvi = value;
        pktsentfailnovlanforsvi.value_namespace = name_space;
        pktsentfailnovlanforsvi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pktSentFailUnsupportedInt")
    {
        pktsentfailunsupportedint = value;
        pktsentfailunsupportedint.value_namespace = name_space;
        pktsentfailunsupportedint.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pktSentFailImDown")
    {
        pktsentfailimdown = value;
        pktsentfailimdown.value_namespace = name_space;
        pktsentfailimdown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pktSentFailInvSrcIp")
    {
        pktsentfailinvsrcip = value;
        pktsentfailinvsrcip.value_namespace = name_space;
        pktsentfailinvsrcip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pktSentFailInvDstIp")
    {
        pktsentfailinvdstip = value;
        pktsentfailinvdstip.value_namespace = name_space;
        pktsentfailinvdstip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pktSentFailOwnIp")
    {
        pktsentfailownip = value;
        pktsentfailownip.value_namespace = name_space;
        pktsentfailownip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pktSentFailCtxtNotCreated")
    {
        pktsentfailctxtnotcreated = value;
        pktsentfailctxtnotcreated.value_namespace = name_space;
        pktsentfailctxtnotcreated.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pktSentFailBadCtxtId")
    {
        pktsentfailbadctxtid = value;
        pktsentfailbadctxtid.value_namespace = name_space;
        pktsentfailbadctxtid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pktSentFailUnattachedIp")
    {
        pktsentfailunattachedip = value;
        pktsentfailunattachedip.value_namespace = name_space;
        pktsentfailunattachedip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pktSentFailAdjAddFailure")
    {
        pktsentfailadjaddfailure = value;
        pktsentfailadjaddfailure.value_namespace = name_space;
        pktsentfailadjaddfailure.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pktSentFailNoSrcIp")
    {
        pktsentfailnosrcip = value;
        pktsentfailnosrcip.value_namespace = name_space;
        pktsentfailnosrcip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pktSentFailNoMac")
    {
        pktsentfailnomac = value;
        pktsentfailnomac.value_namespace = name_space;
        pktsentfailnomac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pktSentFailClientEnqFailed")
    {
        pktsentfailclientenqfailed = value;
        pktsentfailclientenqfailed.value_namespace = name_space;
        pktsentfailclientenqfailed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pktSentFailProxyDstNotRchbl")
    {
        pktsentfailproxydstnotrchbl = value;
        pktsentfailproxydstnotrchbl.value_namespace = name_space;
        pktsentfailproxydstnotrchbl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pktSkipRespEnhancedProxyDestNotReach")
    {
        pktskiprespenhancedproxydestnotreach = value;
        pktskiprespenhancedproxydestnotreach.value_namespace = name_space;
        pktskiprespenhancedproxydestnotreach.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pktSkipRespEnhancedProxyL2portTrack")
    {
        pktskiprespenhancedproxyl2porttrack = value;
        pktskiprespenhancedproxyl2porttrack.value_namespace = name_space;
        pktskiprespenhancedproxyl2porttrack.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pktSentFailInvLocalProxy")
    {
        pktsentfailinvlocalproxy = value;
        pktsentfailinvlocalproxy.value_namespace = name_space;
        pktsentfailinvlocalproxy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pktSentFailInvProxy")
    {
        pktsentfailinvproxy = value;
        pktsentfailinvproxy.value_namespace = name_space;
        pktsentfailinvproxy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pktSentFailVipGroupNotActive")
    {
        pktsentfailvipgroupnotactive = value;
        pktsentfailvipgroupnotactive.value_namespace = name_space;
        pktsentfailvipgroupnotactive.value_namespace_prefix = name_space_prefix;
    }
}

void System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatstxItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pktSent")
    {
        pktsent.yfilter = yfilter;
    }
    if(value_path == "pktSentReq")
    {
        pktsentreq.yfilter = yfilter;
    }
    if(value_path == "pktSentRsp")
    {
        pktsentrsp.yfilter = yfilter;
    }
    if(value_path == "pktSentReqL2")
    {
        pktsentreql2.yfilter = yfilter;
    }
    if(value_path == "pktSentRspL2")
    {
        pktsentrspl2.yfilter = yfilter;
    }
    if(value_path == "pktSentGratReq")
    {
        pktsentgratreq.yfilter = yfilter;
    }
    if(value_path == "pktSentTunnel")
    {
        pktsenttunnel.yfilter = yfilter;
    }
    if(value_path == "pktSentDrop")
    {
        pktsentdrop.yfilter = yfilter;
    }
    if(value_path == "pktSendSrvPort")
    {
        pktsendsrvport.yfilter = yfilter;
    }
    if(value_path == "pktSendFbrcPort")
    {
        pktsendfbrcport.yfilter = yfilter;
    }
    if(value_path == "pktSendFixupCore")
    {
        pktsendfixupcore.yfilter = yfilter;
    }
    if(value_path == "pktSendFixupServer")
    {
        pktsendfixupserver.yfilter = yfilter;
    }
    if(value_path == "pktSendFixupRarp")
    {
        pktsendfixuprarp.yfilter = yfilter;
    }
    if(value_path == "pktSendAnyCastGlean")
    {
        pktsendanycastglean.yfilter = yfilter;
    }
    if(value_path == "pktSentFailInvPkt")
    {
        pktsentfailinvpkt.yfilter = yfilter;
    }
    if(value_path == "pktSentFailMbufOp")
    {
        pktsentfailmbufop.yfilter = yfilter;
    }
    if(value_path == "pktSentFailNoIfindex")
    {
        pktsentfailnoifindex.yfilter = yfilter;
    }
    if(value_path == "pktSentFailNoVlanForSvi")
    {
        pktsentfailnovlanforsvi.yfilter = yfilter;
    }
    if(value_path == "pktSentFailUnsupportedInt")
    {
        pktsentfailunsupportedint.yfilter = yfilter;
    }
    if(value_path == "pktSentFailImDown")
    {
        pktsentfailimdown.yfilter = yfilter;
    }
    if(value_path == "pktSentFailInvSrcIp")
    {
        pktsentfailinvsrcip.yfilter = yfilter;
    }
    if(value_path == "pktSentFailInvDstIp")
    {
        pktsentfailinvdstip.yfilter = yfilter;
    }
    if(value_path == "pktSentFailOwnIp")
    {
        pktsentfailownip.yfilter = yfilter;
    }
    if(value_path == "pktSentFailCtxtNotCreated")
    {
        pktsentfailctxtnotcreated.yfilter = yfilter;
    }
    if(value_path == "pktSentFailBadCtxtId")
    {
        pktsentfailbadctxtid.yfilter = yfilter;
    }
    if(value_path == "pktSentFailUnattachedIp")
    {
        pktsentfailunattachedip.yfilter = yfilter;
    }
    if(value_path == "pktSentFailAdjAddFailure")
    {
        pktsentfailadjaddfailure.yfilter = yfilter;
    }
    if(value_path == "pktSentFailNoSrcIp")
    {
        pktsentfailnosrcip.yfilter = yfilter;
    }
    if(value_path == "pktSentFailNoMac")
    {
        pktsentfailnomac.yfilter = yfilter;
    }
    if(value_path == "pktSentFailClientEnqFailed")
    {
        pktsentfailclientenqfailed.yfilter = yfilter;
    }
    if(value_path == "pktSentFailProxyDstNotRchbl")
    {
        pktsentfailproxydstnotrchbl.yfilter = yfilter;
    }
    if(value_path == "pktSkipRespEnhancedProxyDestNotReach")
    {
        pktskiprespenhancedproxydestnotreach.yfilter = yfilter;
    }
    if(value_path == "pktSkipRespEnhancedProxyL2portTrack")
    {
        pktskiprespenhancedproxyl2porttrack.yfilter = yfilter;
    }
    if(value_path == "pktSentFailInvLocalProxy")
    {
        pktsentfailinvlocalproxy.yfilter = yfilter;
    }
    if(value_path == "pktSentFailInvProxy")
    {
        pktsentfailinvproxy.yfilter = yfilter;
    }
    if(value_path == "pktSentFailVipGroupNotActive")
    {
        pktsentfailvipgroupnotactive.yfilter = yfilter;
    }
}

bool System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatstxItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pktSent" || name == "pktSentReq" || name == "pktSentRsp" || name == "pktSentReqL2" || name == "pktSentRspL2" || name == "pktSentGratReq" || name == "pktSentTunnel" || name == "pktSentDrop" || name == "pktSendSrvPort" || name == "pktSendFbrcPort" || name == "pktSendFixupCore" || name == "pktSendFixupServer" || name == "pktSendFixupRarp" || name == "pktSendAnyCastGlean" || name == "pktSentFailInvPkt" || name == "pktSentFailMbufOp" || name == "pktSentFailNoIfindex" || name == "pktSentFailNoVlanForSvi" || name == "pktSentFailUnsupportedInt" || name == "pktSentFailImDown" || name == "pktSentFailInvSrcIp" || name == "pktSentFailInvDstIp" || name == "pktSentFailOwnIp" || name == "pktSentFailCtxtNotCreated" || name == "pktSentFailBadCtxtId" || name == "pktSentFailUnattachedIp" || name == "pktSentFailAdjAddFailure" || name == "pktSentFailNoSrcIp" || name == "pktSentFailNoMac" || name == "pktSentFailClientEnqFailed" || name == "pktSentFailProxyDstNotRchbl" || name == "pktSkipRespEnhancedProxyDestNotReach" || name == "pktSkipRespEnhancedProxyL2portTrack" || name == "pktSentFailInvLocalProxy" || name == "pktSentFailInvProxy" || name == "pktSentFailVipGroupNotActive")
        return true;
    return false;
}

System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsrxItems::IfstatsrxItems()
    :
    pktrcvd{YType::uint32, "pktRcvd"},
    pktrcvdreq{YType::uint32, "pktRcvdReq"},
    pktrcvdrsp{YType::uint32, "pktRcvdRsp"},
    pktrcvdproxyarp{YType::uint32, "pktRcvdProxyArp"},
    pktrcvdlocalproxyarp{YType::uint32, "pktRcvdLocalProxyArp"},
    pktrcvdenhancedproxyarp{YType::uint32, "pktRcvdEnhancedProxyArp"},
    pktrcvdenhancedproxyanycastarp{YType::uint32, "pktRcvdEnhancedProxyAnycastArp"},
    pktrcvdenhancedproxyl2porttrackarp{YType::uint32, "pktRcvdEnhancedProxyL2portTrackArp"},
    pktrcvdserverport{YType::uint32, "pktRcvdServerPort"},
    pktrcvdreql2{YType::uint32, "pktRcvdReqL2"},
    pktrcvdrspl2{YType::uint32, "pktRcvdRspL2"},
    pktrcvdtunnel{YType::uint32, "pktRcvdTunnel"},
    pktrcvdfastpath{YType::uint32, "pktRcvdFastpath"},
    pktrcvdsnoop{YType::uint32, "pktRcvdSnoop"},
    pktrcvddrp{YType::uint32, "pktRcvdDrp"},
    pktrcvdmbufop{YType::uint32, "pktRcvdMbufOp"},
    pktrcvddrpbadif{YType::uint32, "pktRcvdDrpBadIf"},
    pktrcvddrpbadlen{YType::uint32, "pktRcvdDrpBadLen"},
    pktrcvddrpbadproto{YType::uint32, "pktRcvdDrpBadProto"},
    pktrcvddropbadhrd{YType::uint32, "pktRcvdDropBadHrd"},
    pktrcvddrpbadl2addrlen{YType::uint32, "pktRcvdDrpBadL2AddrLen"},
    pktrcvddrpbadl3addrlen{YType::uint32, "pktRcvdDrpBadL3AddrLen"},
    pktrcvddrpinvalsrcip{YType::uint32, "pktRcvdDrpInvalSrcIp"},
    pktrcvddrpdirbcast{YType::uint32, "pktRcvdDrpDirBcast"},
    pktrcvddrpinvaldstip{YType::uint32, "pktRcvdDrpInvalDstIp"},
    pktrcvddrpbadsrcmac{YType::uint32, "pktRcvdDrpBadSrcMac"},
    pktrcvddrpownsrcmac{YType::uint32, "pktRcvdDrpOwnSrcMac"},
    pktrcvddrpownsrcip{YType::uint32, "pktRcvdDrpOwnSrcIp"},
    pktrcvddrparpifnomem{YType::uint32, "pktRcvdDrpArpIfNoMem"},
    pktrcvddrpnotforus{YType::uint32, "pktRcvdDrpNotForUs"},
    pktrcvdlearnanddropnotforus{YType::uint32, "pktRcvdLearnAndDropNotForUs"},
    pktrcvddrpsubnetmismatch{YType::uint32, "pktRcvdDrpSubnetMismatch"},
    pktrcvddrpnotinit{YType::uint32, "pktRcvdDrpNotInit"},
    pktrcvddrpbadctxt{YType::uint32, "pktRcvdDrpBadCtxt"},
    pktrcvddrpctxtnotcreated{YType::uint32, "pktRcvdDrpCtxtNotCreated"},
    pktrcvddrpl2localproxyarp{YType::uint32, "pktRcvdDrpL2LocalProxyArp"},
    pktrcvddrpl2purel2pkt{YType::uint32, "pktRcvdDrpL2PureL2Pkt"},
    pktrcvddrpl2prtuntrusted{YType::uint32, "pktRcvdDrpL2PrtUntrusted"},
    pktrcvddrpstdbyfhrpvip{YType::uint32, "pktRcvdDrpStdbyFhrpVip"},
    pktrcvddrpgratonproxyarp{YType::uint32, "pktRcvdDrpGratOnProxyArp"},
    pktrcvddrparprequestignore{YType::uint32, "pktRcvdDrpArpRequestIgnore"},
    pktrcvddrpl2fmqueryfail{YType::uint32, "pktRcvdDrpL2FmQueryFail"},
    pktrcvddrptunnelfail{YType::uint32, "pktRcvdDrpTunnelFail"},
    pktrcvddrprsponhsrpstbyactivevmac{YType::uint32, "pktRcvdDrpRspOnHsrpStbyActiveVmac"},
    pktrcvdfailimdown{YType::uint32, "pktRcvdFailImDown"}
{

    yang_name = "ifstatsrx-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsrxItems::~IfstatsrxItems()
{
}

bool System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsrxItems::has_data() const
{
    if (is_presence_container) return true;
    return pktrcvd.is_set
	|| pktrcvdreq.is_set
	|| pktrcvdrsp.is_set
	|| pktrcvdproxyarp.is_set
	|| pktrcvdlocalproxyarp.is_set
	|| pktrcvdenhancedproxyarp.is_set
	|| pktrcvdenhancedproxyanycastarp.is_set
	|| pktrcvdenhancedproxyl2porttrackarp.is_set
	|| pktrcvdserverport.is_set
	|| pktrcvdreql2.is_set
	|| pktrcvdrspl2.is_set
	|| pktrcvdtunnel.is_set
	|| pktrcvdfastpath.is_set
	|| pktrcvdsnoop.is_set
	|| pktrcvddrp.is_set
	|| pktrcvdmbufop.is_set
	|| pktrcvddrpbadif.is_set
	|| pktrcvddrpbadlen.is_set
	|| pktrcvddrpbadproto.is_set
	|| pktrcvddropbadhrd.is_set
	|| pktrcvddrpbadl2addrlen.is_set
	|| pktrcvddrpbadl3addrlen.is_set
	|| pktrcvddrpinvalsrcip.is_set
	|| pktrcvddrpdirbcast.is_set
	|| pktrcvddrpinvaldstip.is_set
	|| pktrcvddrpbadsrcmac.is_set
	|| pktrcvddrpownsrcmac.is_set
	|| pktrcvddrpownsrcip.is_set
	|| pktrcvddrparpifnomem.is_set
	|| pktrcvddrpnotforus.is_set
	|| pktrcvdlearnanddropnotforus.is_set
	|| pktrcvddrpsubnetmismatch.is_set
	|| pktrcvddrpnotinit.is_set
	|| pktrcvddrpbadctxt.is_set
	|| pktrcvddrpctxtnotcreated.is_set
	|| pktrcvddrpl2localproxyarp.is_set
	|| pktrcvddrpl2purel2pkt.is_set
	|| pktrcvddrpl2prtuntrusted.is_set
	|| pktrcvddrpstdbyfhrpvip.is_set
	|| pktrcvddrpgratonproxyarp.is_set
	|| pktrcvddrparprequestignore.is_set
	|| pktrcvddrpl2fmqueryfail.is_set
	|| pktrcvddrptunnelfail.is_set
	|| pktrcvddrprsponhsrpstbyactivevmac.is_set
	|| pktrcvdfailimdown.is_set;
}

bool System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsrxItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pktrcvd.yfilter)
	|| ydk::is_set(pktrcvdreq.yfilter)
	|| ydk::is_set(pktrcvdrsp.yfilter)
	|| ydk::is_set(pktrcvdproxyarp.yfilter)
	|| ydk::is_set(pktrcvdlocalproxyarp.yfilter)
	|| ydk::is_set(pktrcvdenhancedproxyarp.yfilter)
	|| ydk::is_set(pktrcvdenhancedproxyanycastarp.yfilter)
	|| ydk::is_set(pktrcvdenhancedproxyl2porttrackarp.yfilter)
	|| ydk::is_set(pktrcvdserverport.yfilter)
	|| ydk::is_set(pktrcvdreql2.yfilter)
	|| ydk::is_set(pktrcvdrspl2.yfilter)
	|| ydk::is_set(pktrcvdtunnel.yfilter)
	|| ydk::is_set(pktrcvdfastpath.yfilter)
	|| ydk::is_set(pktrcvdsnoop.yfilter)
	|| ydk::is_set(pktrcvddrp.yfilter)
	|| ydk::is_set(pktrcvdmbufop.yfilter)
	|| ydk::is_set(pktrcvddrpbadif.yfilter)
	|| ydk::is_set(pktrcvddrpbadlen.yfilter)
	|| ydk::is_set(pktrcvddrpbadproto.yfilter)
	|| ydk::is_set(pktrcvddropbadhrd.yfilter)
	|| ydk::is_set(pktrcvddrpbadl2addrlen.yfilter)
	|| ydk::is_set(pktrcvddrpbadl3addrlen.yfilter)
	|| ydk::is_set(pktrcvddrpinvalsrcip.yfilter)
	|| ydk::is_set(pktrcvddrpdirbcast.yfilter)
	|| ydk::is_set(pktrcvddrpinvaldstip.yfilter)
	|| ydk::is_set(pktrcvddrpbadsrcmac.yfilter)
	|| ydk::is_set(pktrcvddrpownsrcmac.yfilter)
	|| ydk::is_set(pktrcvddrpownsrcip.yfilter)
	|| ydk::is_set(pktrcvddrparpifnomem.yfilter)
	|| ydk::is_set(pktrcvddrpnotforus.yfilter)
	|| ydk::is_set(pktrcvdlearnanddropnotforus.yfilter)
	|| ydk::is_set(pktrcvddrpsubnetmismatch.yfilter)
	|| ydk::is_set(pktrcvddrpnotinit.yfilter)
	|| ydk::is_set(pktrcvddrpbadctxt.yfilter)
	|| ydk::is_set(pktrcvddrpctxtnotcreated.yfilter)
	|| ydk::is_set(pktrcvddrpl2localproxyarp.yfilter)
	|| ydk::is_set(pktrcvddrpl2purel2pkt.yfilter)
	|| ydk::is_set(pktrcvddrpl2prtuntrusted.yfilter)
	|| ydk::is_set(pktrcvddrpstdbyfhrpvip.yfilter)
	|| ydk::is_set(pktrcvddrpgratonproxyarp.yfilter)
	|| ydk::is_set(pktrcvddrparprequestignore.yfilter)
	|| ydk::is_set(pktrcvddrpl2fmqueryfail.yfilter)
	|| ydk::is_set(pktrcvddrptunnelfail.yfilter)
	|| ydk::is_set(pktrcvddrprsponhsrpstbyactivevmac.yfilter)
	|| ydk::is_set(pktrcvdfailimdown.yfilter);
}

std::string System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsrxItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ifstatsrx-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsrxItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pktrcvd.is_set || is_set(pktrcvd.yfilter)) leaf_name_data.push_back(pktrcvd.get_name_leafdata());
    if (pktrcvdreq.is_set || is_set(pktrcvdreq.yfilter)) leaf_name_data.push_back(pktrcvdreq.get_name_leafdata());
    if (pktrcvdrsp.is_set || is_set(pktrcvdrsp.yfilter)) leaf_name_data.push_back(pktrcvdrsp.get_name_leafdata());
    if (pktrcvdproxyarp.is_set || is_set(pktrcvdproxyarp.yfilter)) leaf_name_data.push_back(pktrcvdproxyarp.get_name_leafdata());
    if (pktrcvdlocalproxyarp.is_set || is_set(pktrcvdlocalproxyarp.yfilter)) leaf_name_data.push_back(pktrcvdlocalproxyarp.get_name_leafdata());
    if (pktrcvdenhancedproxyarp.is_set || is_set(pktrcvdenhancedproxyarp.yfilter)) leaf_name_data.push_back(pktrcvdenhancedproxyarp.get_name_leafdata());
    if (pktrcvdenhancedproxyanycastarp.is_set || is_set(pktrcvdenhancedproxyanycastarp.yfilter)) leaf_name_data.push_back(pktrcvdenhancedproxyanycastarp.get_name_leafdata());
    if (pktrcvdenhancedproxyl2porttrackarp.is_set || is_set(pktrcvdenhancedproxyl2porttrackarp.yfilter)) leaf_name_data.push_back(pktrcvdenhancedproxyl2porttrackarp.get_name_leafdata());
    if (pktrcvdserverport.is_set || is_set(pktrcvdserverport.yfilter)) leaf_name_data.push_back(pktrcvdserverport.get_name_leafdata());
    if (pktrcvdreql2.is_set || is_set(pktrcvdreql2.yfilter)) leaf_name_data.push_back(pktrcvdreql2.get_name_leafdata());
    if (pktrcvdrspl2.is_set || is_set(pktrcvdrspl2.yfilter)) leaf_name_data.push_back(pktrcvdrspl2.get_name_leafdata());
    if (pktrcvdtunnel.is_set || is_set(pktrcvdtunnel.yfilter)) leaf_name_data.push_back(pktrcvdtunnel.get_name_leafdata());
    if (pktrcvdfastpath.is_set || is_set(pktrcvdfastpath.yfilter)) leaf_name_data.push_back(pktrcvdfastpath.get_name_leafdata());
    if (pktrcvdsnoop.is_set || is_set(pktrcvdsnoop.yfilter)) leaf_name_data.push_back(pktrcvdsnoop.get_name_leafdata());
    if (pktrcvddrp.is_set || is_set(pktrcvddrp.yfilter)) leaf_name_data.push_back(pktrcvddrp.get_name_leafdata());
    if (pktrcvdmbufop.is_set || is_set(pktrcvdmbufop.yfilter)) leaf_name_data.push_back(pktrcvdmbufop.get_name_leafdata());
    if (pktrcvddrpbadif.is_set || is_set(pktrcvddrpbadif.yfilter)) leaf_name_data.push_back(pktrcvddrpbadif.get_name_leafdata());
    if (pktrcvddrpbadlen.is_set || is_set(pktrcvddrpbadlen.yfilter)) leaf_name_data.push_back(pktrcvddrpbadlen.get_name_leafdata());
    if (pktrcvddrpbadproto.is_set || is_set(pktrcvddrpbadproto.yfilter)) leaf_name_data.push_back(pktrcvddrpbadproto.get_name_leafdata());
    if (pktrcvddropbadhrd.is_set || is_set(pktrcvddropbadhrd.yfilter)) leaf_name_data.push_back(pktrcvddropbadhrd.get_name_leafdata());
    if (pktrcvddrpbadl2addrlen.is_set || is_set(pktrcvddrpbadl2addrlen.yfilter)) leaf_name_data.push_back(pktrcvddrpbadl2addrlen.get_name_leafdata());
    if (pktrcvddrpbadl3addrlen.is_set || is_set(pktrcvddrpbadl3addrlen.yfilter)) leaf_name_data.push_back(pktrcvddrpbadl3addrlen.get_name_leafdata());
    if (pktrcvddrpinvalsrcip.is_set || is_set(pktrcvddrpinvalsrcip.yfilter)) leaf_name_data.push_back(pktrcvddrpinvalsrcip.get_name_leafdata());
    if (pktrcvddrpdirbcast.is_set || is_set(pktrcvddrpdirbcast.yfilter)) leaf_name_data.push_back(pktrcvddrpdirbcast.get_name_leafdata());
    if (pktrcvddrpinvaldstip.is_set || is_set(pktrcvddrpinvaldstip.yfilter)) leaf_name_data.push_back(pktrcvddrpinvaldstip.get_name_leafdata());
    if (pktrcvddrpbadsrcmac.is_set || is_set(pktrcvddrpbadsrcmac.yfilter)) leaf_name_data.push_back(pktrcvddrpbadsrcmac.get_name_leafdata());
    if (pktrcvddrpownsrcmac.is_set || is_set(pktrcvddrpownsrcmac.yfilter)) leaf_name_data.push_back(pktrcvddrpownsrcmac.get_name_leafdata());
    if (pktrcvddrpownsrcip.is_set || is_set(pktrcvddrpownsrcip.yfilter)) leaf_name_data.push_back(pktrcvddrpownsrcip.get_name_leafdata());
    if (pktrcvddrparpifnomem.is_set || is_set(pktrcvddrparpifnomem.yfilter)) leaf_name_data.push_back(pktrcvddrparpifnomem.get_name_leafdata());
    if (pktrcvddrpnotforus.is_set || is_set(pktrcvddrpnotforus.yfilter)) leaf_name_data.push_back(pktrcvddrpnotforus.get_name_leafdata());
    if (pktrcvdlearnanddropnotforus.is_set || is_set(pktrcvdlearnanddropnotforus.yfilter)) leaf_name_data.push_back(pktrcvdlearnanddropnotforus.get_name_leafdata());
    if (pktrcvddrpsubnetmismatch.is_set || is_set(pktrcvddrpsubnetmismatch.yfilter)) leaf_name_data.push_back(pktrcvddrpsubnetmismatch.get_name_leafdata());
    if (pktrcvddrpnotinit.is_set || is_set(pktrcvddrpnotinit.yfilter)) leaf_name_data.push_back(pktrcvddrpnotinit.get_name_leafdata());
    if (pktrcvddrpbadctxt.is_set || is_set(pktrcvddrpbadctxt.yfilter)) leaf_name_data.push_back(pktrcvddrpbadctxt.get_name_leafdata());
    if (pktrcvddrpctxtnotcreated.is_set || is_set(pktrcvddrpctxtnotcreated.yfilter)) leaf_name_data.push_back(pktrcvddrpctxtnotcreated.get_name_leafdata());
    if (pktrcvddrpl2localproxyarp.is_set || is_set(pktrcvddrpl2localproxyarp.yfilter)) leaf_name_data.push_back(pktrcvddrpl2localproxyarp.get_name_leafdata());
    if (pktrcvddrpl2purel2pkt.is_set || is_set(pktrcvddrpl2purel2pkt.yfilter)) leaf_name_data.push_back(pktrcvddrpl2purel2pkt.get_name_leafdata());
    if (pktrcvddrpl2prtuntrusted.is_set || is_set(pktrcvddrpl2prtuntrusted.yfilter)) leaf_name_data.push_back(pktrcvddrpl2prtuntrusted.get_name_leafdata());
    if (pktrcvddrpstdbyfhrpvip.is_set || is_set(pktrcvddrpstdbyfhrpvip.yfilter)) leaf_name_data.push_back(pktrcvddrpstdbyfhrpvip.get_name_leafdata());
    if (pktrcvddrpgratonproxyarp.is_set || is_set(pktrcvddrpgratonproxyarp.yfilter)) leaf_name_data.push_back(pktrcvddrpgratonproxyarp.get_name_leafdata());
    if (pktrcvddrparprequestignore.is_set || is_set(pktrcvddrparprequestignore.yfilter)) leaf_name_data.push_back(pktrcvddrparprequestignore.get_name_leafdata());
    if (pktrcvddrpl2fmqueryfail.is_set || is_set(pktrcvddrpl2fmqueryfail.yfilter)) leaf_name_data.push_back(pktrcvddrpl2fmqueryfail.get_name_leafdata());
    if (pktrcvddrptunnelfail.is_set || is_set(pktrcvddrptunnelfail.yfilter)) leaf_name_data.push_back(pktrcvddrptunnelfail.get_name_leafdata());
    if (pktrcvddrprsponhsrpstbyactivevmac.is_set || is_set(pktrcvddrprsponhsrpstbyactivevmac.yfilter)) leaf_name_data.push_back(pktrcvddrprsponhsrpstbyactivevmac.get_name_leafdata());
    if (pktrcvdfailimdown.is_set || is_set(pktrcvdfailimdown.yfilter)) leaf_name_data.push_back(pktrcvdfailimdown.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsrxItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsrxItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsrxItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pktRcvd")
    {
        pktrcvd = value;
        pktrcvd.value_namespace = name_space;
        pktrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pktRcvdReq")
    {
        pktrcvdreq = value;
        pktrcvdreq.value_namespace = name_space;
        pktrcvdreq.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pktRcvdRsp")
    {
        pktrcvdrsp = value;
        pktrcvdrsp.value_namespace = name_space;
        pktrcvdrsp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pktRcvdProxyArp")
    {
        pktrcvdproxyarp = value;
        pktrcvdproxyarp.value_namespace = name_space;
        pktrcvdproxyarp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pktRcvdLocalProxyArp")
    {
        pktrcvdlocalproxyarp = value;
        pktrcvdlocalproxyarp.value_namespace = name_space;
        pktrcvdlocalproxyarp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pktRcvdEnhancedProxyArp")
    {
        pktrcvdenhancedproxyarp = value;
        pktrcvdenhancedproxyarp.value_namespace = name_space;
        pktrcvdenhancedproxyarp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pktRcvdEnhancedProxyAnycastArp")
    {
        pktrcvdenhancedproxyanycastarp = value;
        pktrcvdenhancedproxyanycastarp.value_namespace = name_space;
        pktrcvdenhancedproxyanycastarp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pktRcvdEnhancedProxyL2portTrackArp")
    {
        pktrcvdenhancedproxyl2porttrackarp = value;
        pktrcvdenhancedproxyl2porttrackarp.value_namespace = name_space;
        pktrcvdenhancedproxyl2porttrackarp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pktRcvdServerPort")
    {
        pktrcvdserverport = value;
        pktrcvdserverport.value_namespace = name_space;
        pktrcvdserverport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pktRcvdReqL2")
    {
        pktrcvdreql2 = value;
        pktrcvdreql2.value_namespace = name_space;
        pktrcvdreql2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pktRcvdRspL2")
    {
        pktrcvdrspl2 = value;
        pktrcvdrspl2.value_namespace = name_space;
        pktrcvdrspl2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pktRcvdTunnel")
    {
        pktrcvdtunnel = value;
        pktrcvdtunnel.value_namespace = name_space;
        pktrcvdtunnel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pktRcvdFastpath")
    {
        pktrcvdfastpath = value;
        pktrcvdfastpath.value_namespace = name_space;
        pktrcvdfastpath.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pktRcvdSnoop")
    {
        pktrcvdsnoop = value;
        pktrcvdsnoop.value_namespace = name_space;
        pktrcvdsnoop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pktRcvdDrp")
    {
        pktrcvddrp = value;
        pktrcvddrp.value_namespace = name_space;
        pktrcvddrp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pktRcvdMbufOp")
    {
        pktrcvdmbufop = value;
        pktrcvdmbufop.value_namespace = name_space;
        pktrcvdmbufop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pktRcvdDrpBadIf")
    {
        pktrcvddrpbadif = value;
        pktrcvddrpbadif.value_namespace = name_space;
        pktrcvddrpbadif.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pktRcvdDrpBadLen")
    {
        pktrcvddrpbadlen = value;
        pktrcvddrpbadlen.value_namespace = name_space;
        pktrcvddrpbadlen.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pktRcvdDrpBadProto")
    {
        pktrcvddrpbadproto = value;
        pktrcvddrpbadproto.value_namespace = name_space;
        pktrcvddrpbadproto.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pktRcvdDropBadHrd")
    {
        pktrcvddropbadhrd = value;
        pktrcvddropbadhrd.value_namespace = name_space;
        pktrcvddropbadhrd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pktRcvdDrpBadL2AddrLen")
    {
        pktrcvddrpbadl2addrlen = value;
        pktrcvddrpbadl2addrlen.value_namespace = name_space;
        pktrcvddrpbadl2addrlen.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pktRcvdDrpBadL3AddrLen")
    {
        pktrcvddrpbadl3addrlen = value;
        pktrcvddrpbadl3addrlen.value_namespace = name_space;
        pktrcvddrpbadl3addrlen.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pktRcvdDrpInvalSrcIp")
    {
        pktrcvddrpinvalsrcip = value;
        pktrcvddrpinvalsrcip.value_namespace = name_space;
        pktrcvddrpinvalsrcip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pktRcvdDrpDirBcast")
    {
        pktrcvddrpdirbcast = value;
        pktrcvddrpdirbcast.value_namespace = name_space;
        pktrcvddrpdirbcast.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pktRcvdDrpInvalDstIp")
    {
        pktrcvddrpinvaldstip = value;
        pktrcvddrpinvaldstip.value_namespace = name_space;
        pktrcvddrpinvaldstip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pktRcvdDrpBadSrcMac")
    {
        pktrcvddrpbadsrcmac = value;
        pktrcvddrpbadsrcmac.value_namespace = name_space;
        pktrcvddrpbadsrcmac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pktRcvdDrpOwnSrcMac")
    {
        pktrcvddrpownsrcmac = value;
        pktrcvddrpownsrcmac.value_namespace = name_space;
        pktrcvddrpownsrcmac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pktRcvdDrpOwnSrcIp")
    {
        pktrcvddrpownsrcip = value;
        pktrcvddrpownsrcip.value_namespace = name_space;
        pktrcvddrpownsrcip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pktRcvdDrpArpIfNoMem")
    {
        pktrcvddrparpifnomem = value;
        pktrcvddrparpifnomem.value_namespace = name_space;
        pktrcvddrparpifnomem.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pktRcvdDrpNotForUs")
    {
        pktrcvddrpnotforus = value;
        pktrcvddrpnotforus.value_namespace = name_space;
        pktrcvddrpnotforus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pktRcvdLearnAndDropNotForUs")
    {
        pktrcvdlearnanddropnotforus = value;
        pktrcvdlearnanddropnotforus.value_namespace = name_space;
        pktrcvdlearnanddropnotforus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pktRcvdDrpSubnetMismatch")
    {
        pktrcvddrpsubnetmismatch = value;
        pktrcvddrpsubnetmismatch.value_namespace = name_space;
        pktrcvddrpsubnetmismatch.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pktRcvdDrpNotInit")
    {
        pktrcvddrpnotinit = value;
        pktrcvddrpnotinit.value_namespace = name_space;
        pktrcvddrpnotinit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pktRcvdDrpBadCtxt")
    {
        pktrcvddrpbadctxt = value;
        pktrcvddrpbadctxt.value_namespace = name_space;
        pktrcvddrpbadctxt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pktRcvdDrpCtxtNotCreated")
    {
        pktrcvddrpctxtnotcreated = value;
        pktrcvddrpctxtnotcreated.value_namespace = name_space;
        pktrcvddrpctxtnotcreated.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pktRcvdDrpL2LocalProxyArp")
    {
        pktrcvddrpl2localproxyarp = value;
        pktrcvddrpl2localproxyarp.value_namespace = name_space;
        pktrcvddrpl2localproxyarp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pktRcvdDrpL2PureL2Pkt")
    {
        pktrcvddrpl2purel2pkt = value;
        pktrcvddrpl2purel2pkt.value_namespace = name_space;
        pktrcvddrpl2purel2pkt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pktRcvdDrpL2PrtUntrusted")
    {
        pktrcvddrpl2prtuntrusted = value;
        pktrcvddrpl2prtuntrusted.value_namespace = name_space;
        pktrcvddrpl2prtuntrusted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pktRcvdDrpStdbyFhrpVip")
    {
        pktrcvddrpstdbyfhrpvip = value;
        pktrcvddrpstdbyfhrpvip.value_namespace = name_space;
        pktrcvddrpstdbyfhrpvip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pktRcvdDrpGratOnProxyArp")
    {
        pktrcvddrpgratonproxyarp = value;
        pktrcvddrpgratonproxyarp.value_namespace = name_space;
        pktrcvddrpgratonproxyarp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pktRcvdDrpArpRequestIgnore")
    {
        pktrcvddrparprequestignore = value;
        pktrcvddrparprequestignore.value_namespace = name_space;
        pktrcvddrparprequestignore.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pktRcvdDrpL2FmQueryFail")
    {
        pktrcvddrpl2fmqueryfail = value;
        pktrcvddrpl2fmqueryfail.value_namespace = name_space;
        pktrcvddrpl2fmqueryfail.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pktRcvdDrpTunnelFail")
    {
        pktrcvddrptunnelfail = value;
        pktrcvddrptunnelfail.value_namespace = name_space;
        pktrcvddrptunnelfail.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pktRcvdDrpRspOnHsrpStbyActiveVmac")
    {
        pktrcvddrprsponhsrpstbyactivevmac = value;
        pktrcvddrprsponhsrpstbyactivevmac.value_namespace = name_space;
        pktrcvddrprsponhsrpstbyactivevmac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pktRcvdFailImDown")
    {
        pktrcvdfailimdown = value;
        pktrcvdfailimdown.value_namespace = name_space;
        pktrcvdfailimdown.value_namespace_prefix = name_space_prefix;
    }
}

void System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsrxItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pktRcvd")
    {
        pktrcvd.yfilter = yfilter;
    }
    if(value_path == "pktRcvdReq")
    {
        pktrcvdreq.yfilter = yfilter;
    }
    if(value_path == "pktRcvdRsp")
    {
        pktrcvdrsp.yfilter = yfilter;
    }
    if(value_path == "pktRcvdProxyArp")
    {
        pktrcvdproxyarp.yfilter = yfilter;
    }
    if(value_path == "pktRcvdLocalProxyArp")
    {
        pktrcvdlocalproxyarp.yfilter = yfilter;
    }
    if(value_path == "pktRcvdEnhancedProxyArp")
    {
        pktrcvdenhancedproxyarp.yfilter = yfilter;
    }
    if(value_path == "pktRcvdEnhancedProxyAnycastArp")
    {
        pktrcvdenhancedproxyanycastarp.yfilter = yfilter;
    }
    if(value_path == "pktRcvdEnhancedProxyL2portTrackArp")
    {
        pktrcvdenhancedproxyl2porttrackarp.yfilter = yfilter;
    }
    if(value_path == "pktRcvdServerPort")
    {
        pktrcvdserverport.yfilter = yfilter;
    }
    if(value_path == "pktRcvdReqL2")
    {
        pktrcvdreql2.yfilter = yfilter;
    }
    if(value_path == "pktRcvdRspL2")
    {
        pktrcvdrspl2.yfilter = yfilter;
    }
    if(value_path == "pktRcvdTunnel")
    {
        pktrcvdtunnel.yfilter = yfilter;
    }
    if(value_path == "pktRcvdFastpath")
    {
        pktrcvdfastpath.yfilter = yfilter;
    }
    if(value_path == "pktRcvdSnoop")
    {
        pktrcvdsnoop.yfilter = yfilter;
    }
    if(value_path == "pktRcvdDrp")
    {
        pktrcvddrp.yfilter = yfilter;
    }
    if(value_path == "pktRcvdMbufOp")
    {
        pktrcvdmbufop.yfilter = yfilter;
    }
    if(value_path == "pktRcvdDrpBadIf")
    {
        pktrcvddrpbadif.yfilter = yfilter;
    }
    if(value_path == "pktRcvdDrpBadLen")
    {
        pktrcvddrpbadlen.yfilter = yfilter;
    }
    if(value_path == "pktRcvdDrpBadProto")
    {
        pktrcvddrpbadproto.yfilter = yfilter;
    }
    if(value_path == "pktRcvdDropBadHrd")
    {
        pktrcvddropbadhrd.yfilter = yfilter;
    }
    if(value_path == "pktRcvdDrpBadL2AddrLen")
    {
        pktrcvddrpbadl2addrlen.yfilter = yfilter;
    }
    if(value_path == "pktRcvdDrpBadL3AddrLen")
    {
        pktrcvddrpbadl3addrlen.yfilter = yfilter;
    }
    if(value_path == "pktRcvdDrpInvalSrcIp")
    {
        pktrcvddrpinvalsrcip.yfilter = yfilter;
    }
    if(value_path == "pktRcvdDrpDirBcast")
    {
        pktrcvddrpdirbcast.yfilter = yfilter;
    }
    if(value_path == "pktRcvdDrpInvalDstIp")
    {
        pktrcvddrpinvaldstip.yfilter = yfilter;
    }
    if(value_path == "pktRcvdDrpBadSrcMac")
    {
        pktrcvddrpbadsrcmac.yfilter = yfilter;
    }
    if(value_path == "pktRcvdDrpOwnSrcMac")
    {
        pktrcvddrpownsrcmac.yfilter = yfilter;
    }
    if(value_path == "pktRcvdDrpOwnSrcIp")
    {
        pktrcvddrpownsrcip.yfilter = yfilter;
    }
    if(value_path == "pktRcvdDrpArpIfNoMem")
    {
        pktrcvddrparpifnomem.yfilter = yfilter;
    }
    if(value_path == "pktRcvdDrpNotForUs")
    {
        pktrcvddrpnotforus.yfilter = yfilter;
    }
    if(value_path == "pktRcvdLearnAndDropNotForUs")
    {
        pktrcvdlearnanddropnotforus.yfilter = yfilter;
    }
    if(value_path == "pktRcvdDrpSubnetMismatch")
    {
        pktrcvddrpsubnetmismatch.yfilter = yfilter;
    }
    if(value_path == "pktRcvdDrpNotInit")
    {
        pktrcvddrpnotinit.yfilter = yfilter;
    }
    if(value_path == "pktRcvdDrpBadCtxt")
    {
        pktrcvddrpbadctxt.yfilter = yfilter;
    }
    if(value_path == "pktRcvdDrpCtxtNotCreated")
    {
        pktrcvddrpctxtnotcreated.yfilter = yfilter;
    }
    if(value_path == "pktRcvdDrpL2LocalProxyArp")
    {
        pktrcvddrpl2localproxyarp.yfilter = yfilter;
    }
    if(value_path == "pktRcvdDrpL2PureL2Pkt")
    {
        pktrcvddrpl2purel2pkt.yfilter = yfilter;
    }
    if(value_path == "pktRcvdDrpL2PrtUntrusted")
    {
        pktrcvddrpl2prtuntrusted.yfilter = yfilter;
    }
    if(value_path == "pktRcvdDrpStdbyFhrpVip")
    {
        pktrcvddrpstdbyfhrpvip.yfilter = yfilter;
    }
    if(value_path == "pktRcvdDrpGratOnProxyArp")
    {
        pktrcvddrpgratonproxyarp.yfilter = yfilter;
    }
    if(value_path == "pktRcvdDrpArpRequestIgnore")
    {
        pktrcvddrparprequestignore.yfilter = yfilter;
    }
    if(value_path == "pktRcvdDrpL2FmQueryFail")
    {
        pktrcvddrpl2fmqueryfail.yfilter = yfilter;
    }
    if(value_path == "pktRcvdDrpTunnelFail")
    {
        pktrcvddrptunnelfail.yfilter = yfilter;
    }
    if(value_path == "pktRcvdDrpRspOnHsrpStbyActiveVmac")
    {
        pktrcvddrprsponhsrpstbyactivevmac.yfilter = yfilter;
    }
    if(value_path == "pktRcvdFailImDown")
    {
        pktrcvdfailimdown.yfilter = yfilter;
    }
}

bool System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsrxItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pktRcvd" || name == "pktRcvdReq" || name == "pktRcvdRsp" || name == "pktRcvdProxyArp" || name == "pktRcvdLocalProxyArp" || name == "pktRcvdEnhancedProxyArp" || name == "pktRcvdEnhancedProxyAnycastArp" || name == "pktRcvdEnhancedProxyL2portTrackArp" || name == "pktRcvdServerPort" || name == "pktRcvdReqL2" || name == "pktRcvdRspL2" || name == "pktRcvdTunnel" || name == "pktRcvdFastpath" || name == "pktRcvdSnoop" || name == "pktRcvdDrp" || name == "pktRcvdMbufOp" || name == "pktRcvdDrpBadIf" || name == "pktRcvdDrpBadLen" || name == "pktRcvdDrpBadProto" || name == "pktRcvdDropBadHrd" || name == "pktRcvdDrpBadL2AddrLen" || name == "pktRcvdDrpBadL3AddrLen" || name == "pktRcvdDrpInvalSrcIp" || name == "pktRcvdDrpDirBcast" || name == "pktRcvdDrpInvalDstIp" || name == "pktRcvdDrpBadSrcMac" || name == "pktRcvdDrpOwnSrcMac" || name == "pktRcvdDrpOwnSrcIp" || name == "pktRcvdDrpArpIfNoMem" || name == "pktRcvdDrpNotForUs" || name == "pktRcvdLearnAndDropNotForUs" || name == "pktRcvdDrpSubnetMismatch" || name == "pktRcvdDrpNotInit" || name == "pktRcvdDrpBadCtxt" || name == "pktRcvdDrpCtxtNotCreated" || name == "pktRcvdDrpL2LocalProxyArp" || name == "pktRcvdDrpL2PureL2Pkt" || name == "pktRcvdDrpL2PrtUntrusted" || name == "pktRcvdDrpStdbyFhrpVip" || name == "pktRcvdDrpGratOnProxyArp" || name == "pktRcvdDrpArpRequestIgnore" || name == "pktRcvdDrpL2FmQueryFail" || name == "pktRcvdDrpTunnelFail" || name == "pktRcvdDrpRspOnHsrpStbyActiveVmac" || name == "pktRcvdFailImDown")
        return true;
    return false;
}

System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsadjItems::IfstatsadjItems()
    :
    adjadd{YType::uint32, "adjAdd"},
    adjdel{YType::uint32, "adjDel"},
    adjtimeout{YType::uint32, "adjTimeout"}
{

    yang_name = "ifstatsadj-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsadjItems::~IfstatsadjItems()
{
}

bool System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsadjItems::has_data() const
{
    if (is_presence_container) return true;
    return adjadd.is_set
	|| adjdel.is_set
	|| adjtimeout.is_set;
}

bool System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsadjItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adjadd.yfilter)
	|| ydk::is_set(adjdel.yfilter)
	|| ydk::is_set(adjtimeout.yfilter);
}

std::string System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsadjItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ifstatsadj-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsadjItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adjadd.is_set || is_set(adjadd.yfilter)) leaf_name_data.push_back(adjadd.get_name_leafdata());
    if (adjdel.is_set || is_set(adjdel.yfilter)) leaf_name_data.push_back(adjdel.get_name_leafdata());
    if (adjtimeout.is_set || is_set(adjtimeout.yfilter)) leaf_name_data.push_back(adjtimeout.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsadjItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsadjItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsadjItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "adjAdd")
    {
        adjadd = value;
        adjadd.value_namespace = name_space;
        adjadd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adjDel")
    {
        adjdel = value;
        adjdel.value_namespace = name_space;
        adjdel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adjTimeout")
    {
        adjtimeout = value;
        adjtimeout.value_namespace = name_space;
        adjtimeout.value_namespace_prefix = name_space_prefix;
    }
}

void System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsadjItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adjAdd")
    {
        adjadd.yfilter = yfilter;
    }
    if(value_path == "adjDel")
    {
        adjdel.yfilter = yfilter;
    }
    if(value_path == "adjTimeout")
    {
        adjtimeout.yfilter = yfilter;
    }
}

bool System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsadjItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "adjAdd" || name == "adjDel" || name == "adjTimeout")
        return true;
    return false;
}

System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsmiscItems::IfstatsmiscItems()
    :
    clientmsg{YType::uint32, "clientMsg"},
    clientmsgfail{YType::uint32, "clientMsgFail"},
    iftimeoutmsgfail{YType::uint32, "ifTimeoutMsgFail"},
    ifstatusmsgfail{YType::uint32, "ifStatusMsgFail"}
{

    yang_name = "ifstatsmisc-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsmiscItems::~IfstatsmiscItems()
{
}

bool System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsmiscItems::has_data() const
{
    if (is_presence_container) return true;
    return clientmsg.is_set
	|| clientmsgfail.is_set
	|| iftimeoutmsgfail.is_set
	|| ifstatusmsgfail.is_set;
}

bool System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsmiscItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(clientmsg.yfilter)
	|| ydk::is_set(clientmsgfail.yfilter)
	|| ydk::is_set(iftimeoutmsgfail.yfilter)
	|| ydk::is_set(ifstatusmsgfail.yfilter);
}

std::string System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsmiscItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ifstatsmisc-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsmiscItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (clientmsg.is_set || is_set(clientmsg.yfilter)) leaf_name_data.push_back(clientmsg.get_name_leafdata());
    if (clientmsgfail.is_set || is_set(clientmsgfail.yfilter)) leaf_name_data.push_back(clientmsgfail.get_name_leafdata());
    if (iftimeoutmsgfail.is_set || is_set(iftimeoutmsgfail.yfilter)) leaf_name_data.push_back(iftimeoutmsgfail.get_name_leafdata());
    if (ifstatusmsgfail.is_set || is_set(ifstatusmsgfail.yfilter)) leaf_name_data.push_back(ifstatusmsgfail.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsmiscItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsmiscItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsmiscItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "clientMsg")
    {
        clientmsg = value;
        clientmsg.value_namespace = name_space;
        clientmsg.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clientMsgFail")
    {
        clientmsgfail = value;
        clientmsgfail.value_namespace = name_space;
        clientmsgfail.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ifTimeoutMsgFail")
    {
        iftimeoutmsgfail = value;
        iftimeoutmsgfail.value_namespace = name_space;
        iftimeoutmsgfail.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ifStatusMsgFail")
    {
        ifstatusmsgfail = value;
        ifstatusmsgfail.value_namespace = name_space;
        ifstatusmsgfail.value_namespace_prefix = name_space_prefix;
    }
}

void System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsmiscItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "clientMsg")
    {
        clientmsg.yfilter = yfilter;
    }
    if(value_path == "clientMsgFail")
    {
        clientmsgfail.yfilter = yfilter;
    }
    if(value_path == "ifTimeoutMsgFail")
    {
        iftimeoutmsgfail.yfilter = yfilter;
    }
    if(value_path == "ifStatusMsgFail")
    {
        ifstatusmsgfail.yfilter = yfilter;
    }
}

bool System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsmiscItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "clientMsg" || name == "clientMsgFail" || name == "ifTimeoutMsgFail" || name == "ifStatusMsgFail")
        return true;
    return false;
}

System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsmhItems::IfstatsmhItems()
    :
    recvaddfrml2rib{YType::uint32, "recvaddfrml2rib"},
    processaddfrml2rib{YType::uint32, "processaddfrml2rib"},
    recvdelfrml2rib{YType::uint32, "recvdelfrml2rib"},
    processdelfrml2rib{YType::uint32, "processdelfrml2rib"},
    recvpcshutfrml2rib{YType::uint32, "recvpcshutfrml2rib"},
    processpcshutfrml2rib{YType::uint32, "processpcshutfrml2rib"},
    recvremoteupdfrml2rib{YType::uint32, "recvremoteupdfrml2rib"},
    processremoteupdfrml2rib{YType::uint32, "processremoteupdfrml2rib"},
    psadderrinvalidflags{YType::uint32, "psadderrinvalidflags"},
    psdelerrinvalidflags{YType::uint32, "psdelerrinvalidflags"},
    psadderrinvalidcurrstate{YType::uint32, "psadderrinvalidcurrstate"},
    psdelerrinvalidcurrstate{YType::uint32, "psdelerrinvalidcurrstate"},
    psdelerrmacmismatch{YType::uint32, "psdelerrmacmismatch"},
    psdelerrsecdelfrml2rib{YType::uint32, "psdelerrsecdelfrml2rib"},
    psdelerrfortlroute{YType::uint32, "psdelerrfortlroute"},
    tldelerrforpsroroute{YType::uint32, "tldelerrforpsroroute"}
{

    yang_name = "ifstatsmh-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsmhItems::~IfstatsmhItems()
{
}

bool System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsmhItems::has_data() const
{
    if (is_presence_container) return true;
    return recvaddfrml2rib.is_set
	|| processaddfrml2rib.is_set
	|| recvdelfrml2rib.is_set
	|| processdelfrml2rib.is_set
	|| recvpcshutfrml2rib.is_set
	|| processpcshutfrml2rib.is_set
	|| recvremoteupdfrml2rib.is_set
	|| processremoteupdfrml2rib.is_set
	|| psadderrinvalidflags.is_set
	|| psdelerrinvalidflags.is_set
	|| psadderrinvalidcurrstate.is_set
	|| psdelerrinvalidcurrstate.is_set
	|| psdelerrmacmismatch.is_set
	|| psdelerrsecdelfrml2rib.is_set
	|| psdelerrfortlroute.is_set
	|| tldelerrforpsroroute.is_set;
}

bool System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsmhItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(recvaddfrml2rib.yfilter)
	|| ydk::is_set(processaddfrml2rib.yfilter)
	|| ydk::is_set(recvdelfrml2rib.yfilter)
	|| ydk::is_set(processdelfrml2rib.yfilter)
	|| ydk::is_set(recvpcshutfrml2rib.yfilter)
	|| ydk::is_set(processpcshutfrml2rib.yfilter)
	|| ydk::is_set(recvremoteupdfrml2rib.yfilter)
	|| ydk::is_set(processremoteupdfrml2rib.yfilter)
	|| ydk::is_set(psadderrinvalidflags.yfilter)
	|| ydk::is_set(psdelerrinvalidflags.yfilter)
	|| ydk::is_set(psadderrinvalidcurrstate.yfilter)
	|| ydk::is_set(psdelerrinvalidcurrstate.yfilter)
	|| ydk::is_set(psdelerrmacmismatch.yfilter)
	|| ydk::is_set(psdelerrsecdelfrml2rib.yfilter)
	|| ydk::is_set(psdelerrfortlroute.yfilter)
	|| ydk::is_set(tldelerrforpsroroute.yfilter);
}

std::string System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsmhItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ifstatsmh-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsmhItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (recvaddfrml2rib.is_set || is_set(recvaddfrml2rib.yfilter)) leaf_name_data.push_back(recvaddfrml2rib.get_name_leafdata());
    if (processaddfrml2rib.is_set || is_set(processaddfrml2rib.yfilter)) leaf_name_data.push_back(processaddfrml2rib.get_name_leafdata());
    if (recvdelfrml2rib.is_set || is_set(recvdelfrml2rib.yfilter)) leaf_name_data.push_back(recvdelfrml2rib.get_name_leafdata());
    if (processdelfrml2rib.is_set || is_set(processdelfrml2rib.yfilter)) leaf_name_data.push_back(processdelfrml2rib.get_name_leafdata());
    if (recvpcshutfrml2rib.is_set || is_set(recvpcshutfrml2rib.yfilter)) leaf_name_data.push_back(recvpcshutfrml2rib.get_name_leafdata());
    if (processpcshutfrml2rib.is_set || is_set(processpcshutfrml2rib.yfilter)) leaf_name_data.push_back(processpcshutfrml2rib.get_name_leafdata());
    if (recvremoteupdfrml2rib.is_set || is_set(recvremoteupdfrml2rib.yfilter)) leaf_name_data.push_back(recvremoteupdfrml2rib.get_name_leafdata());
    if (processremoteupdfrml2rib.is_set || is_set(processremoteupdfrml2rib.yfilter)) leaf_name_data.push_back(processremoteupdfrml2rib.get_name_leafdata());
    if (psadderrinvalidflags.is_set || is_set(psadderrinvalidflags.yfilter)) leaf_name_data.push_back(psadderrinvalidflags.get_name_leafdata());
    if (psdelerrinvalidflags.is_set || is_set(psdelerrinvalidflags.yfilter)) leaf_name_data.push_back(psdelerrinvalidflags.get_name_leafdata());
    if (psadderrinvalidcurrstate.is_set || is_set(psadderrinvalidcurrstate.yfilter)) leaf_name_data.push_back(psadderrinvalidcurrstate.get_name_leafdata());
    if (psdelerrinvalidcurrstate.is_set || is_set(psdelerrinvalidcurrstate.yfilter)) leaf_name_data.push_back(psdelerrinvalidcurrstate.get_name_leafdata());
    if (psdelerrmacmismatch.is_set || is_set(psdelerrmacmismatch.yfilter)) leaf_name_data.push_back(psdelerrmacmismatch.get_name_leafdata());
    if (psdelerrsecdelfrml2rib.is_set || is_set(psdelerrsecdelfrml2rib.yfilter)) leaf_name_data.push_back(psdelerrsecdelfrml2rib.get_name_leafdata());
    if (psdelerrfortlroute.is_set || is_set(psdelerrfortlroute.yfilter)) leaf_name_data.push_back(psdelerrfortlroute.get_name_leafdata());
    if (tldelerrforpsroroute.is_set || is_set(tldelerrforpsroroute.yfilter)) leaf_name_data.push_back(tldelerrforpsroroute.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsmhItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsmhItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsmhItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "recvaddfrml2rib")
    {
        recvaddfrml2rib = value;
        recvaddfrml2rib.value_namespace = name_space;
        recvaddfrml2rib.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "processaddfrml2rib")
    {
        processaddfrml2rib = value;
        processaddfrml2rib.value_namespace = name_space;
        processaddfrml2rib.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "recvdelfrml2rib")
    {
        recvdelfrml2rib = value;
        recvdelfrml2rib.value_namespace = name_space;
        recvdelfrml2rib.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "processdelfrml2rib")
    {
        processdelfrml2rib = value;
        processdelfrml2rib.value_namespace = name_space;
        processdelfrml2rib.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "recvpcshutfrml2rib")
    {
        recvpcshutfrml2rib = value;
        recvpcshutfrml2rib.value_namespace = name_space;
        recvpcshutfrml2rib.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "processpcshutfrml2rib")
    {
        processpcshutfrml2rib = value;
        processpcshutfrml2rib.value_namespace = name_space;
        processpcshutfrml2rib.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "recvremoteupdfrml2rib")
    {
        recvremoteupdfrml2rib = value;
        recvremoteupdfrml2rib.value_namespace = name_space;
        recvremoteupdfrml2rib.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "processremoteupdfrml2rib")
    {
        processremoteupdfrml2rib = value;
        processremoteupdfrml2rib.value_namespace = name_space;
        processremoteupdfrml2rib.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "psadderrinvalidflags")
    {
        psadderrinvalidflags = value;
        psadderrinvalidflags.value_namespace = name_space;
        psadderrinvalidflags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "psdelerrinvalidflags")
    {
        psdelerrinvalidflags = value;
        psdelerrinvalidflags.value_namespace = name_space;
        psdelerrinvalidflags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "psadderrinvalidcurrstate")
    {
        psadderrinvalidcurrstate = value;
        psadderrinvalidcurrstate.value_namespace = name_space;
        psadderrinvalidcurrstate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "psdelerrinvalidcurrstate")
    {
        psdelerrinvalidcurrstate = value;
        psdelerrinvalidcurrstate.value_namespace = name_space;
        psdelerrinvalidcurrstate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "psdelerrmacmismatch")
    {
        psdelerrmacmismatch = value;
        psdelerrmacmismatch.value_namespace = name_space;
        psdelerrmacmismatch.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "psdelerrsecdelfrml2rib")
    {
        psdelerrsecdelfrml2rib = value;
        psdelerrsecdelfrml2rib.value_namespace = name_space;
        psdelerrsecdelfrml2rib.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "psdelerrfortlroute")
    {
        psdelerrfortlroute = value;
        psdelerrfortlroute.value_namespace = name_space;
        psdelerrfortlroute.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tldelerrforpsroroute")
    {
        tldelerrforpsroroute = value;
        tldelerrforpsroroute.value_namespace = name_space;
        tldelerrforpsroroute.value_namespace_prefix = name_space_prefix;
    }
}

void System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsmhItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "recvaddfrml2rib")
    {
        recvaddfrml2rib.yfilter = yfilter;
    }
    if(value_path == "processaddfrml2rib")
    {
        processaddfrml2rib.yfilter = yfilter;
    }
    if(value_path == "recvdelfrml2rib")
    {
        recvdelfrml2rib.yfilter = yfilter;
    }
    if(value_path == "processdelfrml2rib")
    {
        processdelfrml2rib.yfilter = yfilter;
    }
    if(value_path == "recvpcshutfrml2rib")
    {
        recvpcshutfrml2rib.yfilter = yfilter;
    }
    if(value_path == "processpcshutfrml2rib")
    {
        processpcshutfrml2rib.yfilter = yfilter;
    }
    if(value_path == "recvremoteupdfrml2rib")
    {
        recvremoteupdfrml2rib.yfilter = yfilter;
    }
    if(value_path == "processremoteupdfrml2rib")
    {
        processremoteupdfrml2rib.yfilter = yfilter;
    }
    if(value_path == "psadderrinvalidflags")
    {
        psadderrinvalidflags.yfilter = yfilter;
    }
    if(value_path == "psdelerrinvalidflags")
    {
        psdelerrinvalidflags.yfilter = yfilter;
    }
    if(value_path == "psadderrinvalidcurrstate")
    {
        psadderrinvalidcurrstate.yfilter = yfilter;
    }
    if(value_path == "psdelerrinvalidcurrstate")
    {
        psdelerrinvalidcurrstate.yfilter = yfilter;
    }
    if(value_path == "psdelerrmacmismatch")
    {
        psdelerrmacmismatch.yfilter = yfilter;
    }
    if(value_path == "psdelerrsecdelfrml2rib")
    {
        psdelerrsecdelfrml2rib.yfilter = yfilter;
    }
    if(value_path == "psdelerrfortlroute")
    {
        psdelerrfortlroute.yfilter = yfilter;
    }
    if(value_path == "tldelerrforpsroroute")
    {
        tldelerrforpsroroute.yfilter = yfilter;
    }
}

bool System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsmhItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "recvaddfrml2rib" || name == "processaddfrml2rib" || name == "recvdelfrml2rib" || name == "processdelfrml2rib" || name == "recvpcshutfrml2rib" || name == "processpcshutfrml2rib" || name == "recvremoteupdfrml2rib" || name == "processremoteupdfrml2rib" || name == "psadderrinvalidflags" || name == "psdelerrinvalidflags" || name == "psadderrinvalidcurrstate" || name == "psdelerrinvalidcurrstate" || name == "psdelerrmacmismatch" || name == "psdelerrsecdelfrml2rib" || name == "psdelerrfortlroute" || name == "tldelerrforpsroroute")
        return true;
    return false;
}

System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::RtvrfMbrItems::RtvrfMbrItems()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "rtvrfMbr-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::RtvrfMbrItems::~RtvrfMbrItems()
{
}

bool System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::RtvrfMbrItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::RtvrfMbrItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::RtvrfMbrItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtvrfMbr-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::RtvrfMbrItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::RtvrfMbrItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::RtvrfMbrItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::RtvrfMbrItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tCl")
    {
        tcl = value;
        tcl.value_namespace = name_space;
        tcl.value_namespace_prefix = name_space_prefix;
    }
}

void System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::RtvrfMbrItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
    if(value_path == "tCl")
    {
        tcl.yfilter = yfilter;
    }
}

bool System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::RtvrfMbrItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtnwPathToIfItems()
    :
    rtnwpathtoif_list(this, {"tdn"})
{

    yang_name = "rtnwPathToIf-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::~RtnwPathToIfItems()
{
}

bool System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rtnwpathtoif_list.len(); index++)
    {
        if(rtnwpathtoif_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::has_operation() const
{
    for (std::size_t index=0; index<rtnwpathtoif_list.len(); index++)
    {
        if(rtnwpathtoif_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtnwPathToIf-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RtNwPathToIf-list")
    {
        auto c = std::make_shared<System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList>();
        c->parent = this;
        rtnwpathtoif_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : rtnwpathtoif_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RtNwPathToIf-list")
        return true;
    return false;
}

System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::RtNwPathToIfList()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "RtNwPathToIf-list"; yang_parent_name = "rtnwPathToIf-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::~RtNwPathToIfList()
{
}

bool System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RtNwPathToIf-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tCl")
    {
        tcl = value;
        tcl.value_namespace = name_space;
        tcl.value_namespace_prefix = name_space_prefix;
    }
}

void System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
    if(value_path == "tCl")
    {
        tcl.yfilter = yfilter;
    }
}

bool System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::ArpItems::InstItems::IpgleanthrottleItems::IpgleanthrottleItems()
    :
    adminst{YType::enumeration, "adminSt"},
    syslog{YType::uint32, "syslog"},
    maxpacket{YType::uint32, "maxPacket"},
    timeout{YType::uint16, "timeout"}
{

    yang_name = "ipgleanthrottle-items"; yang_parent_name = "inst-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::ArpItems::InstItems::IpgleanthrottleItems::~IpgleanthrottleItems()
{
}

bool System::ArpItems::InstItems::IpgleanthrottleItems::has_data() const
{
    if (is_presence_container) return true;
    return adminst.is_set
	|| syslog.is_set
	|| maxpacket.is_set
	|| timeout.is_set;
}

bool System::ArpItems::InstItems::IpgleanthrottleItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(syslog.yfilter)
	|| ydk::is_set(maxpacket.yfilter)
	|| ydk::is_set(timeout.yfilter);
}

std::string System::ArpItems::InstItems::IpgleanthrottleItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/arp-items/inst-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::ArpItems::InstItems::IpgleanthrottleItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipgleanthrottle-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ArpItems::InstItems::IpgleanthrottleItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (syslog.is_set || is_set(syslog.yfilter)) leaf_name_data.push_back(syslog.get_name_leafdata());
    if (maxpacket.is_set || is_set(maxpacket.yfilter)) leaf_name_data.push_back(maxpacket.get_name_leafdata());
    if (timeout.is_set || is_set(timeout.yfilter)) leaf_name_data.push_back(timeout.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::ArpItems::InstItems::IpgleanthrottleItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ArpItems::InstItems::IpgleanthrottleItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::ArpItems::InstItems::IpgleanthrottleItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "adminSt")
    {
        adminst = value;
        adminst.value_namespace = name_space;
        adminst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "syslog")
    {
        syslog = value;
        syslog.value_namespace = name_space;
        syslog.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maxPacket")
    {
        maxpacket = value;
        maxpacket.value_namespace = name_space;
        maxpacket.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timeout")
    {
        timeout = value;
        timeout.value_namespace = name_space;
        timeout.value_namespace_prefix = name_space_prefix;
    }
}

void System::ArpItems::InstItems::IpgleanthrottleItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
    if(value_path == "syslog")
    {
        syslog.yfilter = yfilter;
    }
    if(value_path == "maxPacket")
    {
        maxpacket.yfilter = yfilter;
    }
    if(value_path == "timeout")
    {
        timeout.yfilter = yfilter;
    }
}

bool System::ArpItems::InstItems::IpgleanthrottleItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "adminSt" || name == "syslog" || name == "maxPacket" || name == "timeout")
        return true;
    return false;
}

System::ArpItems::InstItems::EvtLogsItems::EvtLogsItems()
    :
    eventlogs_list(this, {"eventtype"})
{

    yang_name = "evtLogs-items"; yang_parent_name = "inst-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::ArpItems::InstItems::EvtLogsItems::~EvtLogsItems()
{
}

bool System::ArpItems::InstItems::EvtLogsItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<eventlogs_list.len(); index++)
    {
        if(eventlogs_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ArpItems::InstItems::EvtLogsItems::has_operation() const
{
    for (std::size_t index=0; index<eventlogs_list.len(); index++)
    {
        if(eventlogs_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ArpItems::InstItems::EvtLogsItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/arp-items/inst-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::ArpItems::InstItems::EvtLogsItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "evtLogs-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ArpItems::InstItems::EvtLogsItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::ArpItems::InstItems::EvtLogsItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "EventLogs-list")
    {
        auto c = std::make_shared<System::ArpItems::InstItems::EvtLogsItems::EventLogsList>();
        c->parent = this;
        eventlogs_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ArpItems::InstItems::EvtLogsItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : eventlogs_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::ArpItems::InstItems::EvtLogsItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ArpItems::InstItems::EvtLogsItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ArpItems::InstItems::EvtLogsItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "EventLogs-list")
        return true;
    return false;
}

System::ArpItems::InstItems::EvtLogsItems::EventLogsList::EventLogsList()
    :
    eventtype{YType::enumeration, "eventType"},
    logsize{YType::enumeration, "logSize"}
{

    yang_name = "EventLogs-list"; yang_parent_name = "evtLogs-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::ArpItems::InstItems::EvtLogsItems::EventLogsList::~EventLogsList()
{
}

bool System::ArpItems::InstItems::EvtLogsItems::EventLogsList::has_data() const
{
    if (is_presence_container) return true;
    return eventtype.is_set
	|| logsize.is_set;
}

bool System::ArpItems::InstItems::EvtLogsItems::EventLogsList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(eventtype.yfilter)
	|| ydk::is_set(logsize.yfilter);
}

std::string System::ArpItems::InstItems::EvtLogsItems::EventLogsList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/arp-items/inst-items/evtLogs-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::ArpItems::InstItems::EvtLogsItems::EventLogsList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "EventLogs-list";
    ADD_KEY_TOKEN(eventtype, "eventType");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ArpItems::InstItems::EvtLogsItems::EventLogsList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (eventtype.is_set || is_set(eventtype.yfilter)) leaf_name_data.push_back(eventtype.get_name_leafdata());
    if (logsize.is_set || is_set(logsize.yfilter)) leaf_name_data.push_back(logsize.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::ArpItems::InstItems::EvtLogsItems::EventLogsList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ArpItems::InstItems::EvtLogsItems::EventLogsList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::ArpItems::InstItems::EvtLogsItems::EventLogsList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "eventType")
    {
        eventtype = value;
        eventtype.value_namespace = name_space;
        eventtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "logSize")
    {
        logsize = value;
        logsize.value_namespace = name_space;
        logsize.value_namespace_prefix = name_space_prefix;
    }
}

void System::ArpItems::InstItems::EvtLogsItems::EventLogsList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "eventType")
    {
        eventtype.yfilter = yfilter;
    }
    if(value_path == "logSize")
    {
        logsize.yfilter = yfilter;
    }
}

bool System::ArpItems::InstItems::EvtLogsItems::EventLogsList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "eventType" || name == "logSize")
        return true;
    return false;
}

System::ArpItems::InstItems::VpcItems::VpcItems()
    :
    dom_items(std::make_shared<System::ArpItems::InstItems::VpcItems::DomItems>())
{
    dom_items->parent = this;

    yang_name = "vpc-items"; yang_parent_name = "inst-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::ArpItems::InstItems::VpcItems::~VpcItems()
{
}

bool System::ArpItems::InstItems::VpcItems::has_data() const
{
    if (is_presence_container) return true;
    return (dom_items !=  nullptr && dom_items->has_data());
}

bool System::ArpItems::InstItems::VpcItems::has_operation() const
{
    return is_set(yfilter)
	|| (dom_items !=  nullptr && dom_items->has_operation());
}

std::string System::ArpItems::InstItems::VpcItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/arp-items/inst-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::ArpItems::InstItems::VpcItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vpc-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ArpItems::InstItems::VpcItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::ArpItems::InstItems::VpcItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dom-items")
    {
        if(dom_items == nullptr)
        {
            dom_items = std::make_shared<System::ArpItems::InstItems::VpcItems::DomItems>();
        }
        return dom_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ArpItems::InstItems::VpcItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(dom_items != nullptr)
    {
        children["dom-items"] = dom_items;
    }

    return children;
}

void System::ArpItems::InstItems::VpcItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ArpItems::InstItems::VpcItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ArpItems::InstItems::VpcItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dom-items")
        return true;
    return false;
}

System::ArpItems::InstItems::VpcItems::DomItems::DomItems()
    :
    arpsync{YType::enumeration, "arpSync"}
{

    yang_name = "dom-items"; yang_parent_name = "vpc-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::ArpItems::InstItems::VpcItems::DomItems::~DomItems()
{
}

bool System::ArpItems::InstItems::VpcItems::DomItems::has_data() const
{
    if (is_presence_container) return true;
    return arpsync.is_set;
}

bool System::ArpItems::InstItems::VpcItems::DomItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(arpsync.yfilter);
}

std::string System::ArpItems::InstItems::VpcItems::DomItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/arp-items/inst-items/vpc-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::ArpItems::InstItems::VpcItems::DomItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dom-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ArpItems::InstItems::VpcItems::DomItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (arpsync.is_set || is_set(arpsync.yfilter)) leaf_name_data.push_back(arpsync.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::ArpItems::InstItems::VpcItems::DomItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ArpItems::InstItems::VpcItems::DomItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::ArpItems::InstItems::VpcItems::DomItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "arpSync")
    {
        arpsync = value;
        arpsync.value_namespace = name_space;
        arpsync.value_namespace_prefix = name_space_prefix;
    }
}

void System::ArpItems::InstItems::VpcItems::DomItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "arpSync")
    {
        arpsync.yfilter = yfilter;
    }
}

bool System::ArpItems::InstItems::VpcItems::DomItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "arpSync")
        return true;
    return false;
}

System::ArpItems::InstItems::DbItems::DbItems()
    :
    dbsupcache_list(this, {"type"})
{

    yang_name = "db-items"; yang_parent_name = "inst-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::ArpItems::InstItems::DbItems::~DbItems()
{
}

bool System::ArpItems::InstItems::DbItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<dbsupcache_list.len(); index++)
    {
        if(dbsupcache_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ArpItems::InstItems::DbItems::has_operation() const
{
    for (std::size_t index=0; index<dbsupcache_list.len(); index++)
    {
        if(dbsupcache_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ArpItems::InstItems::DbItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/arp-items/inst-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::ArpItems::InstItems::DbItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "db-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ArpItems::InstItems::DbItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::ArpItems::InstItems::DbItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "DbSupCache-list")
    {
        auto c = std::make_shared<System::ArpItems::InstItems::DbItems::DbSupCacheList>();
        c->parent = this;
        dbsupcache_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ArpItems::InstItems::DbItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : dbsupcache_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::ArpItems::InstItems::DbItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ArpItems::InstItems::DbItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ArpItems::InstItems::DbItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "DbSupCache-list")
        return true;
    return false;
}

System::ArpItems::InstItems::DbItems::DbSupCacheList::DbSupCacheList()
    :
    type{YType::enumeration, "type"},
    name{YType::str, "name"}
        ,
    vlan_items(std::make_shared<System::ArpItems::InstItems::DbItems::DbSupCacheList::VlanItems>())
{
    vlan_items->parent = this;

    yang_name = "DbSupCache-list"; yang_parent_name = "db-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::ArpItems::InstItems::DbItems::DbSupCacheList::~DbSupCacheList()
{
}

bool System::ArpItems::InstItems::DbItems::DbSupCacheList::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| name.is_set
	|| (vlan_items !=  nullptr && vlan_items->has_data());
}

bool System::ArpItems::InstItems::DbItems::DbSupCacheList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(name.yfilter)
	|| (vlan_items !=  nullptr && vlan_items->has_operation());
}

std::string System::ArpItems::InstItems::DbItems::DbSupCacheList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/arp-items/inst-items/db-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::ArpItems::InstItems::DbItems::DbSupCacheList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DbSupCache-list";
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ArpItems::InstItems::DbItems::DbSupCacheList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::ArpItems::InstItems::DbItems::DbSupCacheList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vlan-items")
    {
        if(vlan_items == nullptr)
        {
            vlan_items = std::make_shared<System::ArpItems::InstItems::DbItems::DbSupCacheList::VlanItems>();
        }
        return vlan_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ArpItems::InstItems::DbItems::DbSupCacheList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(vlan_items != nullptr)
    {
        children["vlan-items"] = vlan_items;
    }

    return children;
}

void System::ArpItems::InstItems::DbItems::DbSupCacheList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void System::ArpItems::InstItems::DbItems::DbSupCacheList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool System::ArpItems::InstItems::DbItems::DbSupCacheList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan-items" || name == "type" || name == "name")
        return true;
    return false;
}

System::ArpItems::InstItems::DbItems::DbSupCacheList::VlanItems::VlanItems()
    :
    supcachevlan_list(this, {"id"})
{

    yang_name = "vlan-items"; yang_parent_name = "DbSupCache-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ArpItems::InstItems::DbItems::DbSupCacheList::VlanItems::~VlanItems()
{
}

bool System::ArpItems::InstItems::DbItems::DbSupCacheList::VlanItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<supcachevlan_list.len(); index++)
    {
        if(supcachevlan_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ArpItems::InstItems::DbItems::DbSupCacheList::VlanItems::has_operation() const
{
    for (std::size_t index=0; index<supcachevlan_list.len(); index++)
    {
        if(supcachevlan_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ArpItems::InstItems::DbItems::DbSupCacheList::VlanItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ArpItems::InstItems::DbItems::DbSupCacheList::VlanItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::ArpItems::InstItems::DbItems::DbSupCacheList::VlanItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "SupCacheVlan-list")
    {
        auto c = std::make_shared<System::ArpItems::InstItems::DbItems::DbSupCacheList::VlanItems::SupCacheVlanList>();
        c->parent = this;
        supcachevlan_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ArpItems::InstItems::DbItems::DbSupCacheList::VlanItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : supcachevlan_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::ArpItems::InstItems::DbItems::DbSupCacheList::VlanItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ArpItems::InstItems::DbItems::DbSupCacheList::VlanItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ArpItems::InstItems::DbItems::DbSupCacheList::VlanItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "SupCacheVlan-list")
        return true;
    return false;
}

System::ArpItems::InstItems::DbItems::DbSupCacheList::VlanItems::SupCacheVlanList::SupCacheVlanList()
    :
    id{YType::uint16, "id"},
    suppressarpmode{YType::enumeration, "suppressArpMode"},
    name{YType::str, "name"},
    adminst{YType::enumeration, "adminSt"},
    operst{YType::enumeration, "operSt"},
    opererr{YType::str, "operErr"}
        ,
    ip_items(std::make_shared<System::ArpItems::InstItems::DbItems::DbSupCacheList::VlanItems::SupCacheVlanList::IpItems>())
{
    ip_items->parent = this;

    yang_name = "SupCacheVlan-list"; yang_parent_name = "vlan-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ArpItems::InstItems::DbItems::DbSupCacheList::VlanItems::SupCacheVlanList::~SupCacheVlanList()
{
}

bool System::ArpItems::InstItems::DbItems::DbSupCacheList::VlanItems::SupCacheVlanList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| suppressarpmode.is_set
	|| name.is_set
	|| adminst.is_set
	|| operst.is_set
	|| opererr.is_set
	|| (ip_items !=  nullptr && ip_items->has_data());
}

bool System::ArpItems::InstItems::DbItems::DbSupCacheList::VlanItems::SupCacheVlanList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(suppressarpmode.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(opererr.yfilter)
	|| (ip_items !=  nullptr && ip_items->has_operation());
}

std::string System::ArpItems::InstItems::DbItems::DbSupCacheList::VlanItems::SupCacheVlanList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "SupCacheVlan-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ArpItems::InstItems::DbItems::DbSupCacheList::VlanItems::SupCacheVlanList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (suppressarpmode.is_set || is_set(suppressarpmode.yfilter)) leaf_name_data.push_back(suppressarpmode.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (opererr.is_set || is_set(opererr.yfilter)) leaf_name_data.push_back(opererr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::ArpItems::InstItems::DbItems::DbSupCacheList::VlanItems::SupCacheVlanList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip-items")
    {
        if(ip_items == nullptr)
        {
            ip_items = std::make_shared<System::ArpItems::InstItems::DbItems::DbSupCacheList::VlanItems::SupCacheVlanList::IpItems>();
        }
        return ip_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ArpItems::InstItems::DbItems::DbSupCacheList::VlanItems::SupCacheVlanList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(ip_items != nullptr)
    {
        children["ip-items"] = ip_items;
    }

    return children;
}

void System::ArpItems::InstItems::DbItems::DbSupCacheList::VlanItems::SupCacheVlanList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "suppressArpMode")
    {
        suppressarpmode = value;
        suppressarpmode.value_namespace = name_space;
        suppressarpmode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adminSt")
    {
        adminst = value;
        adminst.value_namespace = name_space;
        adminst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operErr")
    {
        opererr = value;
        opererr.value_namespace = name_space;
        opererr.value_namespace_prefix = name_space_prefix;
    }
}

void System::ArpItems::InstItems::DbItems::DbSupCacheList::VlanItems::SupCacheVlanList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "suppressArpMode")
    {
        suppressarpmode.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "operErr")
    {
        opererr.yfilter = yfilter;
    }
}

bool System::ArpItems::InstItems::DbItems::DbSupCacheList::VlanItems::SupCacheVlanList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip-items" || name == "id" || name == "suppressArpMode" || name == "name" || name == "adminSt" || name == "operSt" || name == "operErr")
        return true;
    return false;
}

System::ArpItems::InstItems::DbItems::DbSupCacheList::VlanItems::SupCacheVlanList::IpItems::IpItems()
    :
    supcacheentry_list(this, {"ip"})
{

    yang_name = "ip-items"; yang_parent_name = "SupCacheVlan-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ArpItems::InstItems::DbItems::DbSupCacheList::VlanItems::SupCacheVlanList::IpItems::~IpItems()
{
}

bool System::ArpItems::InstItems::DbItems::DbSupCacheList::VlanItems::SupCacheVlanList::IpItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<supcacheentry_list.len(); index++)
    {
        if(supcacheentry_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ArpItems::InstItems::DbItems::DbSupCacheList::VlanItems::SupCacheVlanList::IpItems::has_operation() const
{
    for (std::size_t index=0; index<supcacheentry_list.len(); index++)
    {
        if(supcacheentry_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ArpItems::InstItems::DbItems::DbSupCacheList::VlanItems::SupCacheVlanList::IpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ArpItems::InstItems::DbItems::DbSupCacheList::VlanItems::SupCacheVlanList::IpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::ArpItems::InstItems::DbItems::DbSupCacheList::VlanItems::SupCacheVlanList::IpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "SupCacheEntry-list")
    {
        auto c = std::make_shared<System::ArpItems::InstItems::DbItems::DbSupCacheList::VlanItems::SupCacheVlanList::IpItems::SupCacheEntryList>();
        c->parent = this;
        supcacheentry_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ArpItems::InstItems::DbItems::DbSupCacheList::VlanItems::SupCacheVlanList::IpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : supcacheentry_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::ArpItems::InstItems::DbItems::DbSupCacheList::VlanItems::SupCacheVlanList::IpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ArpItems::InstItems::DbItems::DbSupCacheList::VlanItems::SupCacheVlanList::IpItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ArpItems::InstItems::DbItems::DbSupCacheList::VlanItems::SupCacheVlanList::IpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "SupCacheEntry-list")
        return true;
    return false;
}

System::ArpItems::InstItems::DbItems::DbSupCacheList::VlanItems::SupCacheVlanList::IpItems::SupCacheEntryList::SupCacheEntryList()
    :
    ip{YType::str, "ip"},
    flags{YType::str, "flags"},
    mac{YType::str, "mac"},
    upts{YType::str, "upTS"},
    phyid{YType::str, "phyid"},
    remotevtepaddr{YType::str, "remotevtepaddr"}
{

    yang_name = "SupCacheEntry-list"; yang_parent_name = "ip-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ArpItems::InstItems::DbItems::DbSupCacheList::VlanItems::SupCacheVlanList::IpItems::SupCacheEntryList::~SupCacheEntryList()
{
}

bool System::ArpItems::InstItems::DbItems::DbSupCacheList::VlanItems::SupCacheVlanList::IpItems::SupCacheEntryList::has_data() const
{
    if (is_presence_container) return true;
    return ip.is_set
	|| flags.is_set
	|| mac.is_set
	|| upts.is_set
	|| phyid.is_set
	|| remotevtepaddr.is_set;
}

bool System::ArpItems::InstItems::DbItems::DbSupCacheList::VlanItems::SupCacheVlanList::IpItems::SupCacheEntryList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip.yfilter)
	|| ydk::is_set(flags.yfilter)
	|| ydk::is_set(mac.yfilter)
	|| ydk::is_set(upts.yfilter)
	|| ydk::is_set(phyid.yfilter)
	|| ydk::is_set(remotevtepaddr.yfilter);
}

std::string System::ArpItems::InstItems::DbItems::DbSupCacheList::VlanItems::SupCacheVlanList::IpItems::SupCacheEntryList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "SupCacheEntry-list";
    ADD_KEY_TOKEN(ip, "ip");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ArpItems::InstItems::DbItems::DbSupCacheList::VlanItems::SupCacheVlanList::IpItems::SupCacheEntryList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (mac.is_set || is_set(mac.yfilter)) leaf_name_data.push_back(mac.get_name_leafdata());
    if (upts.is_set || is_set(upts.yfilter)) leaf_name_data.push_back(upts.get_name_leafdata());
    if (phyid.is_set || is_set(phyid.yfilter)) leaf_name_data.push_back(phyid.get_name_leafdata());
    if (remotevtepaddr.is_set || is_set(remotevtepaddr.yfilter)) leaf_name_data.push_back(remotevtepaddr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::ArpItems::InstItems::DbItems::DbSupCacheList::VlanItems::SupCacheVlanList::IpItems::SupCacheEntryList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ArpItems::InstItems::DbItems::DbSupCacheList::VlanItems::SupCacheVlanList::IpItems::SupCacheEntryList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::ArpItems::InstItems::DbItems::DbSupCacheList::VlanItems::SupCacheVlanList::IpItems::SupCacheEntryList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip")
    {
        ip = value;
        ip.value_namespace = name_space;
        ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac")
    {
        mac = value;
        mac.value_namespace = name_space;
        mac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "upTS")
    {
        upts = value;
        upts.value_namespace = name_space;
        upts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "phyid")
    {
        phyid = value;
        phyid.value_namespace = name_space;
        phyid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remotevtepaddr")
    {
        remotevtepaddr = value;
        remotevtepaddr.value_namespace = name_space;
        remotevtepaddr.value_namespace_prefix = name_space_prefix;
    }
}

void System::ArpItems::InstItems::DbItems::DbSupCacheList::VlanItems::SupCacheVlanList::IpItems::SupCacheEntryList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
    if(value_path == "mac")
    {
        mac.yfilter = yfilter;
    }
    if(value_path == "upTS")
    {
        upts.yfilter = yfilter;
    }
    if(value_path == "phyid")
    {
        phyid.yfilter = yfilter;
    }
    if(value_path == "remotevtepaddr")
    {
        remotevtepaddr.yfilter = yfilter;
    }
}

bool System::ArpItems::InstItems::DbItems::DbSupCacheList::VlanItems::SupCacheVlanList::IpItems::SupCacheEntryList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip" || name == "flags" || name == "mac" || name == "upTS" || name == "phyid" || name == "remotevtepaddr")
        return true;
    return false;
}

System::BfdItems::BfdItems()
    :
    name{YType::str, "name"},
    adminst{YType::enumeration, "adminSt"},
    operst{YType::enumeration, "operSt"},
    opererr{YType::str, "operErr"}
        ,
    inst_items(std::make_shared<System::BfdItems::InstItems>())
{
    inst_items->parent = this;

    yang_name = "bfd-items"; yang_parent_name = "System"; is_top_level_class = false; has_list_ancestor = false; 
}

System::BfdItems::~BfdItems()
{
}

bool System::BfdItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| adminst.is_set
	|| operst.is_set
	|| opererr.is_set
	|| (inst_items !=  nullptr && inst_items->has_data());
}

bool System::BfdItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(opererr.yfilter)
	|| (inst_items !=  nullptr && inst_items->has_operation());
}

std::string System::BfdItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/" << get_segment_path();
    return path_buffer.str();
}

std::string System::BfdItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BfdItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (opererr.is_set || is_set(opererr.yfilter)) leaf_name_data.push_back(opererr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BfdItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "inst-items")
    {
        if(inst_items == nullptr)
        {
            inst_items = std::make_shared<System::BfdItems::InstItems>();
        }
        return inst_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BfdItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(inst_items != nullptr)
    {
        children["inst-items"] = inst_items;
    }

    return children;
}

void System::BfdItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adminSt")
    {
        adminst = value;
        adminst.value_namespace = name_space;
        adminst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operErr")
    {
        opererr = value;
        opererr.value_namespace = name_space;
        opererr.value_namespace_prefix = name_space_prefix;
    }
}

void System::BfdItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "operErr")
    {
        opererr.yfilter = yfilter;
    }
}

bool System::BfdItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inst-items" || name == "name" || name == "adminSt" || name == "operSt" || name == "operErr")
        return true;
    return false;
}

System::BfdItems::InstItems::InstItems()
    :
    echoif{YType::str, "echoIf"},
    startupintvl{YType::uint16, "startupIntvl"},
    slowintvl{YType::uint16, "slowIntvl"},
    name{YType::str, "name"},
    adminst{YType::enumeration, "adminSt"},
    ctrl{YType::str, "ctrl"},
    opererr{YType::str, "operErr"}
        ,
    if_items(std::make_shared<System::BfdItems::InstItems::IfItems>())
    , aux_items(std::make_shared<System::BfdItems::InstItems::AuxItems>())
    , af_items(std::make_shared<System::BfdItems::InstItems::AfItems>())
    , ka_items(std::make_shared<System::BfdItems::InstItems::KaItems>())
    , session_items(std::make_shared<System::BfdItems::InstItems::SessionItems>())
{
    if_items->parent = this;
    aux_items->parent = this;
    af_items->parent = this;
    ka_items->parent = this;
    session_items->parent = this;

    yang_name = "inst-items"; yang_parent_name = "bfd-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::BfdItems::InstItems::~InstItems()
{
}

bool System::BfdItems::InstItems::has_data() const
{
    if (is_presence_container) return true;
    return echoif.is_set
	|| startupintvl.is_set
	|| slowintvl.is_set
	|| name.is_set
	|| adminst.is_set
	|| ctrl.is_set
	|| opererr.is_set
	|| (if_items !=  nullptr && if_items->has_data())
	|| (aux_items !=  nullptr && aux_items->has_data())
	|| (af_items !=  nullptr && af_items->has_data())
	|| (ka_items !=  nullptr && ka_items->has_data())
	|| (session_items !=  nullptr && session_items->has_data());
}

bool System::BfdItems::InstItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(echoif.yfilter)
	|| ydk::is_set(startupintvl.yfilter)
	|| ydk::is_set(slowintvl.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(ctrl.yfilter)
	|| ydk::is_set(opererr.yfilter)
	|| (if_items !=  nullptr && if_items->has_operation())
	|| (aux_items !=  nullptr && aux_items->has_operation())
	|| (af_items !=  nullptr && af_items->has_operation())
	|| (ka_items !=  nullptr && ka_items->has_operation())
	|| (session_items !=  nullptr && session_items->has_operation());
}

std::string System::BfdItems::InstItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/bfd-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::BfdItems::InstItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inst-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BfdItems::InstItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (echoif.is_set || is_set(echoif.yfilter)) leaf_name_data.push_back(echoif.get_name_leafdata());
    if (startupintvl.is_set || is_set(startupintvl.yfilter)) leaf_name_data.push_back(startupintvl.get_name_leafdata());
    if (slowintvl.is_set || is_set(slowintvl.yfilter)) leaf_name_data.push_back(slowintvl.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (ctrl.is_set || is_set(ctrl.yfilter)) leaf_name_data.push_back(ctrl.get_name_leafdata());
    if (opererr.is_set || is_set(opererr.yfilter)) leaf_name_data.push_back(opererr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BfdItems::InstItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "if-items")
    {
        if(if_items == nullptr)
        {
            if_items = std::make_shared<System::BfdItems::InstItems::IfItems>();
        }
        return if_items;
    }

    if(child_yang_name == "aux-items")
    {
        if(aux_items == nullptr)
        {
            aux_items = std::make_shared<System::BfdItems::InstItems::AuxItems>();
        }
        return aux_items;
    }

    if(child_yang_name == "af-items")
    {
        if(af_items == nullptr)
        {
            af_items = std::make_shared<System::BfdItems::InstItems::AfItems>();
        }
        return af_items;
    }

    if(child_yang_name == "ka-items")
    {
        if(ka_items == nullptr)
        {
            ka_items = std::make_shared<System::BfdItems::InstItems::KaItems>();
        }
        return ka_items;
    }

    if(child_yang_name == "session-items")
    {
        if(session_items == nullptr)
        {
            session_items = std::make_shared<System::BfdItems::InstItems::SessionItems>();
        }
        return session_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BfdItems::InstItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(if_items != nullptr)
    {
        children["if-items"] = if_items;
    }

    if(aux_items != nullptr)
    {
        children["aux-items"] = aux_items;
    }

    if(af_items != nullptr)
    {
        children["af-items"] = af_items;
    }

    if(ka_items != nullptr)
    {
        children["ka-items"] = ka_items;
    }

    if(session_items != nullptr)
    {
        children["session-items"] = session_items;
    }

    return children;
}

void System::BfdItems::InstItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "echoIf")
    {
        echoif = value;
        echoif.value_namespace = name_space;
        echoif.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "startupIntvl")
    {
        startupintvl = value;
        startupintvl.value_namespace = name_space;
        startupintvl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "slowIntvl")
    {
        slowintvl = value;
        slowintvl.value_namespace = name_space;
        slowintvl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adminSt")
    {
        adminst = value;
        adminst.value_namespace = name_space;
        adminst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ctrl")
    {
        ctrl = value;
        ctrl.value_namespace = name_space;
        ctrl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operErr")
    {
        opererr = value;
        opererr.value_namespace = name_space;
        opererr.value_namespace_prefix = name_space_prefix;
    }
}

void System::BfdItems::InstItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "echoIf")
    {
        echoif.yfilter = yfilter;
    }
    if(value_path == "startupIntvl")
    {
        startupintvl.yfilter = yfilter;
    }
    if(value_path == "slowIntvl")
    {
        slowintvl.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
    if(value_path == "ctrl")
    {
        ctrl.yfilter = yfilter;
    }
    if(value_path == "operErr")
    {
        opererr.yfilter = yfilter;
    }
}

bool System::BfdItems::InstItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "if-items" || name == "aux-items" || name == "af-items" || name == "ka-items" || name == "session-items" || name == "echoIf" || name == "startupIntvl" || name == "slowIntvl" || name == "name" || name == "adminSt" || name == "ctrl" || name == "operErr")
        return true;
    return false;
}

System::BfdItems::InstItems::IfItems::IfItems()
    :
    if_list(this, {"id"})
{

    yang_name = "if-items"; yang_parent_name = "inst-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::BfdItems::InstItems::IfItems::~IfItems()
{
}

bool System::BfdItems::InstItems::IfItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<if_list.len(); index++)
    {
        if(if_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BfdItems::InstItems::IfItems::has_operation() const
{
    for (std::size_t index=0; index<if_list.len(); index++)
    {
        if(if_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BfdItems::InstItems::IfItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/bfd-items/inst-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::BfdItems::InstItems::IfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "if-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BfdItems::InstItems::IfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::BfdItems::InstItems::IfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "If-list")
    {
        auto c = std::make_shared<System::BfdItems::InstItems::IfItems::IfList>();
        c->parent = this;
        if_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BfdItems::InstItems::IfItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : if_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::BfdItems::InstItems::IfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BfdItems::InstItems::IfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BfdItems::InstItems::IfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "If-list")
        return true;
    return false;
}

System::BfdItems::InstItems::IfItems::IfList::IfList()
    :
    id{YType::str, "id"},
    echoadminst{YType::enumeration, "echoAdminSt"},
    ctrl{YType::str, "ctrl"},
    trkmbrlnk{YType::enumeration, "trkMbrLnk"},
    sttm{YType::uint32, "stTm"},
    dst{YType::str, "dst"},
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    adminst{YType::enumeration, "adminSt"}
        ,
    auth_items(std::make_shared<System::BfdItems::InstItems::IfItems::IfList::AuthItems>())
    , af_items(std::make_shared<System::BfdItems::InstItems::IfItems::IfList::AfItems>())
    , nbr_items(std::make_shared<System::BfdItems::InstItems::IfItems::IfList::NbrItems>())
    , ifka_items(std::make_shared<System::BfdItems::InstItems::IfItems::IfList::IfkaItems>())
    , rtvrfmbr_items(std::make_shared<System::BfdItems::InstItems::IfItems::IfList::RtvrfMbrItems>())
    , rtnwpathtoif_items(std::make_shared<System::BfdItems::InstItems::IfItems::IfList::RtnwPathToIfItems>())
{
    auth_items->parent = this;
    af_items->parent = this;
    nbr_items->parent = this;
    ifka_items->parent = this;
    rtvrfmbr_items->parent = this;
    rtnwpathtoif_items->parent = this;

    yang_name = "If-list"; yang_parent_name = "if-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::BfdItems::InstItems::IfItems::IfList::~IfList()
{
}

bool System::BfdItems::InstItems::IfItems::IfList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| echoadminst.is_set
	|| ctrl.is_set
	|| trkmbrlnk.is_set
	|| sttm.is_set
	|| dst.is_set
	|| name.is_set
	|| descr.is_set
	|| adminst.is_set
	|| (auth_items !=  nullptr && auth_items->has_data())
	|| (af_items !=  nullptr && af_items->has_data())
	|| (nbr_items !=  nullptr && nbr_items->has_data())
	|| (ifka_items !=  nullptr && ifka_items->has_data())
	|| (rtvrfmbr_items !=  nullptr && rtvrfmbr_items->has_data())
	|| (rtnwpathtoif_items !=  nullptr && rtnwpathtoif_items->has_data());
}

bool System::BfdItems::InstItems::IfItems::IfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(echoadminst.yfilter)
	|| ydk::is_set(ctrl.yfilter)
	|| ydk::is_set(trkmbrlnk.yfilter)
	|| ydk::is_set(sttm.yfilter)
	|| ydk::is_set(dst.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| (auth_items !=  nullptr && auth_items->has_operation())
	|| (af_items !=  nullptr && af_items->has_operation())
	|| (nbr_items !=  nullptr && nbr_items->has_operation())
	|| (ifka_items !=  nullptr && ifka_items->has_operation())
	|| (rtvrfmbr_items !=  nullptr && rtvrfmbr_items->has_operation())
	|| (rtnwpathtoif_items !=  nullptr && rtnwpathtoif_items->has_operation());
}

std::string System::BfdItems::InstItems::IfItems::IfList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/bfd-items/inst-items/if-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::BfdItems::InstItems::IfItems::IfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "If-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BfdItems::InstItems::IfItems::IfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (echoadminst.is_set || is_set(echoadminst.yfilter)) leaf_name_data.push_back(echoadminst.get_name_leafdata());
    if (ctrl.is_set || is_set(ctrl.yfilter)) leaf_name_data.push_back(ctrl.get_name_leafdata());
    if (trkmbrlnk.is_set || is_set(trkmbrlnk.yfilter)) leaf_name_data.push_back(trkmbrlnk.get_name_leafdata());
    if (sttm.is_set || is_set(sttm.yfilter)) leaf_name_data.push_back(sttm.get_name_leafdata());
    if (dst.is_set || is_set(dst.yfilter)) leaf_name_data.push_back(dst.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BfdItems::InstItems::IfItems::IfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "auth-items")
    {
        if(auth_items == nullptr)
        {
            auth_items = std::make_shared<System::BfdItems::InstItems::IfItems::IfList::AuthItems>();
        }
        return auth_items;
    }

    if(child_yang_name == "af-items")
    {
        if(af_items == nullptr)
        {
            af_items = std::make_shared<System::BfdItems::InstItems::IfItems::IfList::AfItems>();
        }
        return af_items;
    }

    if(child_yang_name == "nbr-items")
    {
        if(nbr_items == nullptr)
        {
            nbr_items = std::make_shared<System::BfdItems::InstItems::IfItems::IfList::NbrItems>();
        }
        return nbr_items;
    }

    if(child_yang_name == "ifka-items")
    {
        if(ifka_items == nullptr)
        {
            ifka_items = std::make_shared<System::BfdItems::InstItems::IfItems::IfList::IfkaItems>();
        }
        return ifka_items;
    }

    if(child_yang_name == "rtvrfMbr-items")
    {
        if(rtvrfmbr_items == nullptr)
        {
            rtvrfmbr_items = std::make_shared<System::BfdItems::InstItems::IfItems::IfList::RtvrfMbrItems>();
        }
        return rtvrfmbr_items;
    }

    if(child_yang_name == "rtnwPathToIf-items")
    {
        if(rtnwpathtoif_items == nullptr)
        {
            rtnwpathtoif_items = std::make_shared<System::BfdItems::InstItems::IfItems::IfList::RtnwPathToIfItems>();
        }
        return rtnwpathtoif_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BfdItems::InstItems::IfItems::IfList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(auth_items != nullptr)
    {
        children["auth-items"] = auth_items;
    }

    if(af_items != nullptr)
    {
        children["af-items"] = af_items;
    }

    if(nbr_items != nullptr)
    {
        children["nbr-items"] = nbr_items;
    }

    if(ifka_items != nullptr)
    {
        children["ifka-items"] = ifka_items;
    }

    if(rtvrfmbr_items != nullptr)
    {
        children["rtvrfMbr-items"] = rtvrfmbr_items;
    }

    if(rtnwpathtoif_items != nullptr)
    {
        children["rtnwPathToIf-items"] = rtnwpathtoif_items;
    }

    return children;
}

void System::BfdItems::InstItems::IfItems::IfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "echoAdminSt")
    {
        echoadminst = value;
        echoadminst.value_namespace = name_space;
        echoadminst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ctrl")
    {
        ctrl = value;
        ctrl.value_namespace = name_space;
        ctrl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trkMbrLnk")
    {
        trkmbrlnk = value;
        trkmbrlnk.value_namespace = name_space;
        trkmbrlnk.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stTm")
    {
        sttm = value;
        sttm.value_namespace = name_space;
        sttm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dst")
    {
        dst = value;
        dst.value_namespace = name_space;
        dst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adminSt")
    {
        adminst = value;
        adminst.value_namespace = name_space;
        adminst.value_namespace_prefix = name_space_prefix;
    }
}

void System::BfdItems::InstItems::IfItems::IfList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "echoAdminSt")
    {
        echoadminst.yfilter = yfilter;
    }
    if(value_path == "ctrl")
    {
        ctrl.yfilter = yfilter;
    }
    if(value_path == "trkMbrLnk")
    {
        trkmbrlnk.yfilter = yfilter;
    }
    if(value_path == "stTm")
    {
        sttm.yfilter = yfilter;
    }
    if(value_path == "dst")
    {
        dst.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
}

bool System::BfdItems::InstItems::IfItems::IfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auth-items" || name == "af-items" || name == "nbr-items" || name == "ifka-items" || name == "rtvrfMbr-items" || name == "rtnwPathToIf-items" || name == "id" || name == "echoAdminSt" || name == "ctrl" || name == "trkMbrLnk" || name == "stTm" || name == "dst" || name == "name" || name == "descr" || name == "adminSt")
        return true;
    return false;
}

System::BfdItems::InstItems::IfItems::IfList::AuthItems::AuthItems()
    :
    type{YType::enumeration, "type"},
    keyid{YType::uint8, "keyId"},
    hexkeysize{YType::uint8, "hexKeySize"},
    hexkey{YType::str, "hexKey"},
    key{YType::str, "key"},
    name{YType::str, "name"},
    descr{YType::str, "descr"}
{

    yang_name = "auth-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BfdItems::InstItems::IfItems::IfList::AuthItems::~AuthItems()
{
}

bool System::BfdItems::InstItems::IfItems::IfList::AuthItems::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| keyid.is_set
	|| hexkeysize.is_set
	|| hexkey.is_set
	|| key.is_set
	|| name.is_set
	|| descr.is_set;
}

bool System::BfdItems::InstItems::IfItems::IfList::AuthItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(keyid.yfilter)
	|| ydk::is_set(hexkeysize.yfilter)
	|| ydk::is_set(hexkey.yfilter)
	|| ydk::is_set(key.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter);
}

std::string System::BfdItems::InstItems::IfItems::IfList::AuthItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auth-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BfdItems::InstItems::IfItems::IfList::AuthItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (keyid.is_set || is_set(keyid.yfilter)) leaf_name_data.push_back(keyid.get_name_leafdata());
    if (hexkeysize.is_set || is_set(hexkeysize.yfilter)) leaf_name_data.push_back(hexkeysize.get_name_leafdata());
    if (hexkey.is_set || is_set(hexkey.yfilter)) leaf_name_data.push_back(hexkey.get_name_leafdata());
    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BfdItems::InstItems::IfItems::IfList::AuthItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BfdItems::InstItems::IfItems::IfList::AuthItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::BfdItems::InstItems::IfItems::IfList::AuthItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "keyId")
    {
        keyid = value;
        keyid.value_namespace = name_space;
        keyid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hexKeySize")
    {
        hexkeysize = value;
        hexkeysize.value_namespace = name_space;
        hexkeysize.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hexKey")
    {
        hexkey = value;
        hexkey.value_namespace = name_space;
        hexkey.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key")
    {
        key = value;
        key.value_namespace = name_space;
        key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
}

void System::BfdItems::InstItems::IfItems::IfList::AuthItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "keyId")
    {
        keyid.yfilter = yfilter;
    }
    if(value_path == "hexKeySize")
    {
        hexkeysize.yfilter = yfilter;
    }
    if(value_path == "hexKey")
    {
        hexkey.yfilter = yfilter;
    }
    if(value_path == "key")
    {
        key.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
}

bool System::BfdItems::InstItems::IfItems::IfList::AuthItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "keyId" || name == "hexKeySize" || name == "hexKey" || name == "key" || name == "name" || name == "descr")
        return true;
    return false;
}

System::BfdItems::InstItems::IfItems::IfList::AfItems::AfItems()
    :
    ifaf_list(this, {"type"})
{

    yang_name = "af-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BfdItems::InstItems::IfItems::IfList::AfItems::~AfItems()
{
}

bool System::BfdItems::InstItems::IfItems::IfList::AfItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ifaf_list.len(); index++)
    {
        if(ifaf_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BfdItems::InstItems::IfItems::IfList::AfItems::has_operation() const
{
    for (std::size_t index=0; index<ifaf_list.len(); index++)
    {
        if(ifaf_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BfdItems::InstItems::IfItems::IfList::AfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "af-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BfdItems::InstItems::IfItems::IfList::AfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::BfdItems::InstItems::IfItems::IfList::AfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "IfAf-list")
    {
        auto c = std::make_shared<System::BfdItems::InstItems::IfItems::IfList::AfItems::IfAfList>();
        c->parent = this;
        ifaf_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BfdItems::InstItems::IfItems::IfList::AfItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : ifaf_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::BfdItems::InstItems::IfItems::IfList::AfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BfdItems::InstItems::IfItems::IfList::AfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BfdItems::InstItems::IfItems::IfList::AfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "IfAf-list")
        return true;
    return false;
}

System::BfdItems::InstItems::IfItems::IfList::AfItems::IfAfList::IfAfList()
    :
    type{YType::enumeration, "type"},
    adminst{YType::enumeration, "adminSt"},
    echoadminst{YType::enumeration, "echoAdminSt"},
    ctrl{YType::str, "ctrl"},
    name{YType::str, "name"}
        ,
    auth_items(std::make_shared<System::BfdItems::InstItems::IfItems::IfList::AfItems::IfAfList::AuthItems>())
    , ifka_items(std::make_shared<System::BfdItems::InstItems::IfItems::IfList::AfItems::IfAfList::IfkaItems>())
{
    auth_items->parent = this;
    ifka_items->parent = this;

    yang_name = "IfAf-list"; yang_parent_name = "af-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BfdItems::InstItems::IfItems::IfList::AfItems::IfAfList::~IfAfList()
{
}

bool System::BfdItems::InstItems::IfItems::IfList::AfItems::IfAfList::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| adminst.is_set
	|| echoadminst.is_set
	|| ctrl.is_set
	|| name.is_set
	|| (auth_items !=  nullptr && auth_items->has_data())
	|| (ifka_items !=  nullptr && ifka_items->has_data());
}

bool System::BfdItems::InstItems::IfItems::IfList::AfItems::IfAfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(echoadminst.yfilter)
	|| ydk::is_set(ctrl.yfilter)
	|| ydk::is_set(name.yfilter)
	|| (auth_items !=  nullptr && auth_items->has_operation())
	|| (ifka_items !=  nullptr && ifka_items->has_operation());
}

std::string System::BfdItems::InstItems::IfItems::IfList::AfItems::IfAfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "IfAf-list";
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BfdItems::InstItems::IfItems::IfList::AfItems::IfAfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (echoadminst.is_set || is_set(echoadminst.yfilter)) leaf_name_data.push_back(echoadminst.get_name_leafdata());
    if (ctrl.is_set || is_set(ctrl.yfilter)) leaf_name_data.push_back(ctrl.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BfdItems::InstItems::IfItems::IfList::AfItems::IfAfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "auth-items")
    {
        if(auth_items == nullptr)
        {
            auth_items = std::make_shared<System::BfdItems::InstItems::IfItems::IfList::AfItems::IfAfList::AuthItems>();
        }
        return auth_items;
    }

    if(child_yang_name == "ifka-items")
    {
        if(ifka_items == nullptr)
        {
            ifka_items = std::make_shared<System::BfdItems::InstItems::IfItems::IfList::AfItems::IfAfList::IfkaItems>();
        }
        return ifka_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BfdItems::InstItems::IfItems::IfList::AfItems::IfAfList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(auth_items != nullptr)
    {
        children["auth-items"] = auth_items;
    }

    if(ifka_items != nullptr)
    {
        children["ifka-items"] = ifka_items;
    }

    return children;
}

void System::BfdItems::InstItems::IfItems::IfList::AfItems::IfAfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adminSt")
    {
        adminst = value;
        adminst.value_namespace = name_space;
        adminst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "echoAdminSt")
    {
        echoadminst = value;
        echoadminst.value_namespace = name_space;
        echoadminst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ctrl")
    {
        ctrl = value;
        ctrl.value_namespace = name_space;
        ctrl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void System::BfdItems::InstItems::IfItems::IfList::AfItems::IfAfList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
    if(value_path == "echoAdminSt")
    {
        echoadminst.yfilter = yfilter;
    }
    if(value_path == "ctrl")
    {
        ctrl.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool System::BfdItems::InstItems::IfItems::IfList::AfItems::IfAfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auth-items" || name == "ifka-items" || name == "type" || name == "adminSt" || name == "echoAdminSt" || name == "ctrl" || name == "name")
        return true;
    return false;
}

System::BfdItems::InstItems::IfItems::IfList::AfItems::IfAfList::AuthItems::AuthItems()
    :
    type{YType::enumeration, "type"},
    keyid{YType::uint8, "keyId"},
    hexkeysize{YType::uint8, "hexKeySize"},
    hexkey{YType::str, "hexKey"},
    key{YType::str, "key"},
    name{YType::str, "name"},
    descr{YType::str, "descr"}
{

    yang_name = "auth-items"; yang_parent_name = "IfAf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BfdItems::InstItems::IfItems::IfList::AfItems::IfAfList::AuthItems::~AuthItems()
{
}

bool System::BfdItems::InstItems::IfItems::IfList::AfItems::IfAfList::AuthItems::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| keyid.is_set
	|| hexkeysize.is_set
	|| hexkey.is_set
	|| key.is_set
	|| name.is_set
	|| descr.is_set;
}

bool System::BfdItems::InstItems::IfItems::IfList::AfItems::IfAfList::AuthItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(keyid.yfilter)
	|| ydk::is_set(hexkeysize.yfilter)
	|| ydk::is_set(hexkey.yfilter)
	|| ydk::is_set(key.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter);
}

std::string System::BfdItems::InstItems::IfItems::IfList::AfItems::IfAfList::AuthItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auth-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BfdItems::InstItems::IfItems::IfList::AfItems::IfAfList::AuthItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (keyid.is_set || is_set(keyid.yfilter)) leaf_name_data.push_back(keyid.get_name_leafdata());
    if (hexkeysize.is_set || is_set(hexkeysize.yfilter)) leaf_name_data.push_back(hexkeysize.get_name_leafdata());
    if (hexkey.is_set || is_set(hexkey.yfilter)) leaf_name_data.push_back(hexkey.get_name_leafdata());
    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BfdItems::InstItems::IfItems::IfList::AfItems::IfAfList::AuthItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BfdItems::InstItems::IfItems::IfList::AfItems::IfAfList::AuthItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::BfdItems::InstItems::IfItems::IfList::AfItems::IfAfList::AuthItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "keyId")
    {
        keyid = value;
        keyid.value_namespace = name_space;
        keyid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hexKeySize")
    {
        hexkeysize = value;
        hexkeysize.value_namespace = name_space;
        hexkeysize.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hexKey")
    {
        hexkey = value;
        hexkey.value_namespace = name_space;
        hexkey.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key")
    {
        key = value;
        key.value_namespace = name_space;
        key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
}

void System::BfdItems::InstItems::IfItems::IfList::AfItems::IfAfList::AuthItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "keyId")
    {
        keyid.yfilter = yfilter;
    }
    if(value_path == "hexKeySize")
    {
        hexkeysize.yfilter = yfilter;
    }
    if(value_path == "hexKey")
    {
        hexkey.yfilter = yfilter;
    }
    if(value_path == "key")
    {
        key.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
}

bool System::BfdItems::InstItems::IfItems::IfList::AfItems::IfAfList::AuthItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "keyId" || name == "hexKeySize" || name == "hexKey" || name == "key" || name == "name" || name == "descr")
        return true;
    return false;
}

System::BfdItems::InstItems::IfItems::IfList::AfItems::IfAfList::IfkaItems::IfkaItems()
    :
    mintxintvl{YType::uint16, "minTxIntvl"},
    minrxintvl{YType::uint16, "minRxIntvl"},
    detectmult{YType::uint8, "detectMult"},
    echorxintvl{YType::uint16, "echoRxIntvl"}
{

    yang_name = "ifka-items"; yang_parent_name = "IfAf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BfdItems::InstItems::IfItems::IfList::AfItems::IfAfList::IfkaItems::~IfkaItems()
{
}

bool System::BfdItems::InstItems::IfItems::IfList::AfItems::IfAfList::IfkaItems::has_data() const
{
    if (is_presence_container) return true;
    return mintxintvl.is_set
	|| minrxintvl.is_set
	|| detectmult.is_set
	|| echorxintvl.is_set;
}

bool System::BfdItems::InstItems::IfItems::IfList::AfItems::IfAfList::IfkaItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mintxintvl.yfilter)
	|| ydk::is_set(minrxintvl.yfilter)
	|| ydk::is_set(detectmult.yfilter)
	|| ydk::is_set(echorxintvl.yfilter);
}

std::string System::BfdItems::InstItems::IfItems::IfList::AfItems::IfAfList::IfkaItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ifka-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BfdItems::InstItems::IfItems::IfList::AfItems::IfAfList::IfkaItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mintxintvl.is_set || is_set(mintxintvl.yfilter)) leaf_name_data.push_back(mintxintvl.get_name_leafdata());
    if (minrxintvl.is_set || is_set(minrxintvl.yfilter)) leaf_name_data.push_back(minrxintvl.get_name_leafdata());
    if (detectmult.is_set || is_set(detectmult.yfilter)) leaf_name_data.push_back(detectmult.get_name_leafdata());
    if (echorxintvl.is_set || is_set(echorxintvl.yfilter)) leaf_name_data.push_back(echorxintvl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BfdItems::InstItems::IfItems::IfList::AfItems::IfAfList::IfkaItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BfdItems::InstItems::IfItems::IfList::AfItems::IfAfList::IfkaItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::BfdItems::InstItems::IfItems::IfList::AfItems::IfAfList::IfkaItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "minTxIntvl")
    {
        mintxintvl = value;
        mintxintvl.value_namespace = name_space;
        mintxintvl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minRxIntvl")
    {
        minrxintvl = value;
        minrxintvl.value_namespace = name_space;
        minrxintvl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "detectMult")
    {
        detectmult = value;
        detectmult.value_namespace = name_space;
        detectmult.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "echoRxIntvl")
    {
        echorxintvl = value;
        echorxintvl.value_namespace = name_space;
        echorxintvl.value_namespace_prefix = name_space_prefix;
    }
}

void System::BfdItems::InstItems::IfItems::IfList::AfItems::IfAfList::IfkaItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "minTxIntvl")
    {
        mintxintvl.yfilter = yfilter;
    }
    if(value_path == "minRxIntvl")
    {
        minrxintvl.yfilter = yfilter;
    }
    if(value_path == "detectMult")
    {
        detectmult.yfilter = yfilter;
    }
    if(value_path == "echoRxIntvl")
    {
        echorxintvl.yfilter = yfilter;
    }
}

bool System::BfdItems::InstItems::IfItems::IfList::AfItems::IfAfList::IfkaItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minTxIntvl" || name == "minRxIntvl" || name == "detectMult" || name == "echoRxIntvl")
        return true;
    return false;
}

System::BfdItems::InstItems::IfItems::IfList::NbrItems::NbrItems()
    :
    nbr_list(this, {"srcip", "destip"})
{

    yang_name = "nbr-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BfdItems::InstItems::IfItems::IfList::NbrItems::~NbrItems()
{
}

bool System::BfdItems::InstItems::IfItems::IfList::NbrItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<nbr_list.len(); index++)
    {
        if(nbr_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BfdItems::InstItems::IfItems::IfList::NbrItems::has_operation() const
{
    for (std::size_t index=0; index<nbr_list.len(); index++)
    {
        if(nbr_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BfdItems::InstItems::IfItems::IfList::NbrItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nbr-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BfdItems::InstItems::IfItems::IfList::NbrItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::BfdItems::InstItems::IfItems::IfList::NbrItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Nbr-list")
    {
        auto c = std::make_shared<System::BfdItems::InstItems::IfItems::IfList::NbrItems::NbrList>();
        c->parent = this;
        nbr_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BfdItems::InstItems::IfItems::IfList::NbrItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : nbr_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::BfdItems::InstItems::IfItems::IfList::NbrItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BfdItems::InstItems::IfItems::IfList::NbrItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BfdItems::InstItems::IfItems::IfList::NbrItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Nbr-list")
        return true;
    return false;
}

System::BfdItems::InstItems::IfItems::IfList::NbrItems::NbrList::NbrList()
    :
    srcip{YType::str, "srcip"},
    destip{YType::str, "destip"}
{

    yang_name = "Nbr-list"; yang_parent_name = "nbr-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BfdItems::InstItems::IfItems::IfList::NbrItems::NbrList::~NbrList()
{
}

bool System::BfdItems::InstItems::IfItems::IfList::NbrItems::NbrList::has_data() const
{
    if (is_presence_container) return true;
    return srcip.is_set
	|| destip.is_set;
}

bool System::BfdItems::InstItems::IfItems::IfList::NbrItems::NbrList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(srcip.yfilter)
	|| ydk::is_set(destip.yfilter);
}

std::string System::BfdItems::InstItems::IfItems::IfList::NbrItems::NbrList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Nbr-list";
    ADD_KEY_TOKEN(srcip, "srcip");
    ADD_KEY_TOKEN(destip, "destip");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BfdItems::InstItems::IfItems::IfList::NbrItems::NbrList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (srcip.is_set || is_set(srcip.yfilter)) leaf_name_data.push_back(srcip.get_name_leafdata());
    if (destip.is_set || is_set(destip.yfilter)) leaf_name_data.push_back(destip.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BfdItems::InstItems::IfItems::IfList::NbrItems::NbrList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BfdItems::InstItems::IfItems::IfList::NbrItems::NbrList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::BfdItems::InstItems::IfItems::IfList::NbrItems::NbrList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "srcip")
    {
        srcip = value;
        srcip.value_namespace = name_space;
        srcip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destip")
    {
        destip = value;
        destip.value_namespace = name_space;
        destip.value_namespace_prefix = name_space_prefix;
    }
}

void System::BfdItems::InstItems::IfItems::IfList::NbrItems::NbrList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "srcip")
    {
        srcip.yfilter = yfilter;
    }
    if(value_path == "destip")
    {
        destip.yfilter = yfilter;
    }
}

bool System::BfdItems::InstItems::IfItems::IfList::NbrItems::NbrList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "srcip" || name == "destip")
        return true;
    return false;
}

System::BfdItems::InstItems::IfItems::IfList::IfkaItems::IfkaItems()
    :
    mintxintvl{YType::uint16, "minTxIntvl"},
    minrxintvl{YType::uint16, "minRxIntvl"},
    detectmult{YType::uint8, "detectMult"},
    echorxintvl{YType::uint16, "echoRxIntvl"}
{

    yang_name = "ifka-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BfdItems::InstItems::IfItems::IfList::IfkaItems::~IfkaItems()
{
}

bool System::BfdItems::InstItems::IfItems::IfList::IfkaItems::has_data() const
{
    if (is_presence_container) return true;
    return mintxintvl.is_set
	|| minrxintvl.is_set
	|| detectmult.is_set
	|| echorxintvl.is_set;
}

bool System::BfdItems::InstItems::IfItems::IfList::IfkaItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mintxintvl.yfilter)
	|| ydk::is_set(minrxintvl.yfilter)
	|| ydk::is_set(detectmult.yfilter)
	|| ydk::is_set(echorxintvl.yfilter);
}

std::string System::BfdItems::InstItems::IfItems::IfList::IfkaItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ifka-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BfdItems::InstItems::IfItems::IfList::IfkaItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mintxintvl.is_set || is_set(mintxintvl.yfilter)) leaf_name_data.push_back(mintxintvl.get_name_leafdata());
    if (minrxintvl.is_set || is_set(minrxintvl.yfilter)) leaf_name_data.push_back(minrxintvl.get_name_leafdata());
    if (detectmult.is_set || is_set(detectmult.yfilter)) leaf_name_data.push_back(detectmult.get_name_leafdata());
    if (echorxintvl.is_set || is_set(echorxintvl.yfilter)) leaf_name_data.push_back(echorxintvl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BfdItems::InstItems::IfItems::IfList::IfkaItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BfdItems::InstItems::IfItems::IfList::IfkaItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::BfdItems::InstItems::IfItems::IfList::IfkaItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "minTxIntvl")
    {
        mintxintvl = value;
        mintxintvl.value_namespace = name_space;
        mintxintvl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minRxIntvl")
    {
        minrxintvl = value;
        minrxintvl.value_namespace = name_space;
        minrxintvl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "detectMult")
    {
        detectmult = value;
        detectmult.value_namespace = name_space;
        detectmult.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "echoRxIntvl")
    {
        echorxintvl = value;
        echorxintvl.value_namespace = name_space;
        echorxintvl.value_namespace_prefix = name_space_prefix;
    }
}

void System::BfdItems::InstItems::IfItems::IfList::IfkaItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "minTxIntvl")
    {
        mintxintvl.yfilter = yfilter;
    }
    if(value_path == "minRxIntvl")
    {
        minrxintvl.yfilter = yfilter;
    }
    if(value_path == "detectMult")
    {
        detectmult.yfilter = yfilter;
    }
    if(value_path == "echoRxIntvl")
    {
        echorxintvl.yfilter = yfilter;
    }
}

bool System::BfdItems::InstItems::IfItems::IfList::IfkaItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minTxIntvl" || name == "minRxIntvl" || name == "detectMult" || name == "echoRxIntvl")
        return true;
    return false;
}

System::BfdItems::InstItems::IfItems::IfList::RtvrfMbrItems::RtvrfMbrItems()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "rtvrfMbr-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BfdItems::InstItems::IfItems::IfList::RtvrfMbrItems::~RtvrfMbrItems()
{
}

bool System::BfdItems::InstItems::IfItems::IfList::RtvrfMbrItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::BfdItems::InstItems::IfItems::IfList::RtvrfMbrItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::BfdItems::InstItems::IfItems::IfList::RtvrfMbrItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtvrfMbr-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BfdItems::InstItems::IfItems::IfList::RtvrfMbrItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BfdItems::InstItems::IfItems::IfList::RtvrfMbrItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BfdItems::InstItems::IfItems::IfList::RtvrfMbrItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::BfdItems::InstItems::IfItems::IfList::RtvrfMbrItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tCl")
    {
        tcl = value;
        tcl.value_namespace = name_space;
        tcl.value_namespace_prefix = name_space_prefix;
    }
}

void System::BfdItems::InstItems::IfItems::IfList::RtvrfMbrItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
    if(value_path == "tCl")
    {
        tcl.yfilter = yfilter;
    }
}

bool System::BfdItems::InstItems::IfItems::IfList::RtvrfMbrItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::BfdItems::InstItems::IfItems::IfList::RtnwPathToIfItems::RtnwPathToIfItems()
    :
    rtnwpathtoif_list(this, {"tdn"})
{

    yang_name = "rtnwPathToIf-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BfdItems::InstItems::IfItems::IfList::RtnwPathToIfItems::~RtnwPathToIfItems()
{
}

bool System::BfdItems::InstItems::IfItems::IfList::RtnwPathToIfItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rtnwpathtoif_list.len(); index++)
    {
        if(rtnwpathtoif_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BfdItems::InstItems::IfItems::IfList::RtnwPathToIfItems::has_operation() const
{
    for (std::size_t index=0; index<rtnwpathtoif_list.len(); index++)
    {
        if(rtnwpathtoif_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BfdItems::InstItems::IfItems::IfList::RtnwPathToIfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtnwPathToIf-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BfdItems::InstItems::IfItems::IfList::RtnwPathToIfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::BfdItems::InstItems::IfItems::IfList::RtnwPathToIfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RtNwPathToIf-list")
    {
        auto c = std::make_shared<System::BfdItems::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList>();
        c->parent = this;
        rtnwpathtoif_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BfdItems::InstItems::IfItems::IfList::RtnwPathToIfItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : rtnwpathtoif_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::BfdItems::InstItems::IfItems::IfList::RtnwPathToIfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BfdItems::InstItems::IfItems::IfList::RtnwPathToIfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BfdItems::InstItems::IfItems::IfList::RtnwPathToIfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RtNwPathToIf-list")
        return true;
    return false;
}

System::BfdItems::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::RtNwPathToIfList()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "RtNwPathToIf-list"; yang_parent_name = "rtnwPathToIf-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BfdItems::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::~RtNwPathToIfList()
{
}

bool System::BfdItems::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::BfdItems::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::BfdItems::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RtNwPathToIf-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BfdItems::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BfdItems::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BfdItems::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::BfdItems::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tCl")
    {
        tcl = value;
        tcl.value_namespace = name_space;
        tcl.value_namespace_prefix = name_space_prefix;
    }
}

void System::BfdItems::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
    if(value_path == "tCl")
    {
        tcl.yfilter = yfilter;
    }
}

bool System::BfdItems::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::BfdItems::InstItems::AuxItems::AuxItems()
    :
    sessid{YType::uint32, "sessId"},
    flags{YType::str, "flags"},
    name{YType::str, "name"}
{

    yang_name = "aux-items"; yang_parent_name = "inst-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::BfdItems::InstItems::AuxItems::~AuxItems()
{
}

bool System::BfdItems::InstItems::AuxItems::has_data() const
{
    if (is_presence_container) return true;
    return sessid.is_set
	|| flags.is_set
	|| name.is_set;
}

bool System::BfdItems::InstItems::AuxItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sessid.yfilter)
	|| ydk::is_set(flags.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string System::BfdItems::InstItems::AuxItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/bfd-items/inst-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::BfdItems::InstItems::AuxItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aux-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BfdItems::InstItems::AuxItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sessid.is_set || is_set(sessid.yfilter)) leaf_name_data.push_back(sessid.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BfdItems::InstItems::AuxItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BfdItems::InstItems::AuxItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::BfdItems::InstItems::AuxItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sessId")
    {
        sessid = value;
        sessid.value_namespace = name_space;
        sessid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void System::BfdItems::InstItems::AuxItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sessId")
    {
        sessid.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool System::BfdItems::InstItems::AuxItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sessId" || name == "flags" || name == "name")
        return true;
    return false;
}

System::BfdItems::InstItems::AfItems::AfItems()
    :
    instaf_list(this, {"type"})
{

    yang_name = "af-items"; yang_parent_name = "inst-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::BfdItems::InstItems::AfItems::~AfItems()
{
}

bool System::BfdItems::InstItems::AfItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<instaf_list.len(); index++)
    {
        if(instaf_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BfdItems::InstItems::AfItems::has_operation() const
{
    for (std::size_t index=0; index<instaf_list.len(); index++)
    {
        if(instaf_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BfdItems::InstItems::AfItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/bfd-items/inst-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::BfdItems::InstItems::AfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "af-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BfdItems::InstItems::AfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::BfdItems::InstItems::AfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "InstAf-list")
    {
        auto c = std::make_shared<System::BfdItems::InstItems::AfItems::InstAfList>();
        c->parent = this;
        instaf_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BfdItems::InstItems::AfItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : instaf_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::BfdItems::InstItems::AfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BfdItems::InstItems::AfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BfdItems::InstItems::AfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "InstAf-list")
        return true;
    return false;
}

System::BfdItems::InstItems::AfItems::InstAfList::InstAfList()
    :
    type{YType::enumeration, "type"},
    slowintvl{YType::uint16, "slowIntvl"},
    name{YType::str, "name"}
        ,
    ka_items(std::make_shared<System::BfdItems::InstItems::AfItems::InstAfList::KaItems>())
{
    ka_items->parent = this;

    yang_name = "InstAf-list"; yang_parent_name = "af-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::BfdItems::InstItems::AfItems::InstAfList::~InstAfList()
{
}

bool System::BfdItems::InstItems::AfItems::InstAfList::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| slowintvl.is_set
	|| name.is_set
	|| (ka_items !=  nullptr && ka_items->has_data());
}

bool System::BfdItems::InstItems::AfItems::InstAfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(slowintvl.yfilter)
	|| ydk::is_set(name.yfilter)
	|| (ka_items !=  nullptr && ka_items->has_operation());
}

std::string System::BfdItems::InstItems::AfItems::InstAfList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/bfd-items/inst-items/af-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::BfdItems::InstItems::AfItems::InstAfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "InstAf-list";
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BfdItems::InstItems::AfItems::InstAfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (slowintvl.is_set || is_set(slowintvl.yfilter)) leaf_name_data.push_back(slowintvl.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BfdItems::InstItems::AfItems::InstAfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ka-items")
    {
        if(ka_items == nullptr)
        {
            ka_items = std::make_shared<System::BfdItems::InstItems::AfItems::InstAfList::KaItems>();
        }
        return ka_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BfdItems::InstItems::AfItems::InstAfList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(ka_items != nullptr)
    {
        children["ka-items"] = ka_items;
    }

    return children;
}

void System::BfdItems::InstItems::AfItems::InstAfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "slowIntvl")
    {
        slowintvl = value;
        slowintvl.value_namespace = name_space;
        slowintvl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void System::BfdItems::InstItems::AfItems::InstAfList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "slowIntvl")
    {
        slowintvl.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool System::BfdItems::InstItems::AfItems::InstAfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ka-items" || name == "type" || name == "slowIntvl" || name == "name")
        return true;
    return false;
}

System::BfdItems::InstItems::AfItems::InstAfList::KaItems::KaItems()
    :
    mintxintvl{YType::uint16, "minTxIntvl"},
    minrxintvl{YType::uint16, "minRxIntvl"},
    detectmult{YType::uint8, "detectMult"},
    echorxintvl{YType::uint16, "echoRxIntvl"}
{

    yang_name = "ka-items"; yang_parent_name = "InstAf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BfdItems::InstItems::AfItems::InstAfList::KaItems::~KaItems()
{
}

bool System::BfdItems::InstItems::AfItems::InstAfList::KaItems::has_data() const
{
    if (is_presence_container) return true;
    return mintxintvl.is_set
	|| minrxintvl.is_set
	|| detectmult.is_set
	|| echorxintvl.is_set;
}

bool System::BfdItems::InstItems::AfItems::InstAfList::KaItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mintxintvl.yfilter)
	|| ydk::is_set(minrxintvl.yfilter)
	|| ydk::is_set(detectmult.yfilter)
	|| ydk::is_set(echorxintvl.yfilter);
}

std::string System::BfdItems::InstItems::AfItems::InstAfList::KaItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ka-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BfdItems::InstItems::AfItems::InstAfList::KaItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mintxintvl.is_set || is_set(mintxintvl.yfilter)) leaf_name_data.push_back(mintxintvl.get_name_leafdata());
    if (minrxintvl.is_set || is_set(minrxintvl.yfilter)) leaf_name_data.push_back(minrxintvl.get_name_leafdata());
    if (detectmult.is_set || is_set(detectmult.yfilter)) leaf_name_data.push_back(detectmult.get_name_leafdata());
    if (echorxintvl.is_set || is_set(echorxintvl.yfilter)) leaf_name_data.push_back(echorxintvl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BfdItems::InstItems::AfItems::InstAfList::KaItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BfdItems::InstItems::AfItems::InstAfList::KaItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::BfdItems::InstItems::AfItems::InstAfList::KaItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "minTxIntvl")
    {
        mintxintvl = value;
        mintxintvl.value_namespace = name_space;
        mintxintvl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minRxIntvl")
    {
        minrxintvl = value;
        minrxintvl.value_namespace = name_space;
        minrxintvl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "detectMult")
    {
        detectmult = value;
        detectmult.value_namespace = name_space;
        detectmult.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "echoRxIntvl")
    {
        echorxintvl = value;
        echorxintvl.value_namespace = name_space;
        echorxintvl.value_namespace_prefix = name_space_prefix;
    }
}

void System::BfdItems::InstItems::AfItems::InstAfList::KaItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "minTxIntvl")
    {
        mintxintvl.yfilter = yfilter;
    }
    if(value_path == "minRxIntvl")
    {
        minrxintvl.yfilter = yfilter;
    }
    if(value_path == "detectMult")
    {
        detectmult.yfilter = yfilter;
    }
    if(value_path == "echoRxIntvl")
    {
        echorxintvl.yfilter = yfilter;
    }
}

bool System::BfdItems::InstItems::AfItems::InstAfList::KaItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minTxIntvl" || name == "minRxIntvl" || name == "detectMult" || name == "echoRxIntvl")
        return true;
    return false;
}

System::BfdItems::InstItems::KaItems::KaItems()
    :
    mintxintvl{YType::uint16, "minTxIntvl"},
    minrxintvl{YType::uint16, "minRxIntvl"},
    detectmult{YType::uint8, "detectMult"},
    echorxintvl{YType::uint16, "echoRxIntvl"}
{

    yang_name = "ka-items"; yang_parent_name = "inst-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::BfdItems::InstItems::KaItems::~KaItems()
{
}

bool System::BfdItems::InstItems::KaItems::has_data() const
{
    if (is_presence_container) return true;
    return mintxintvl.is_set
	|| minrxintvl.is_set
	|| detectmult.is_set
	|| echorxintvl.is_set;
}

bool System::BfdItems::InstItems::KaItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mintxintvl.yfilter)
	|| ydk::is_set(minrxintvl.yfilter)
	|| ydk::is_set(detectmult.yfilter)
	|| ydk::is_set(echorxintvl.yfilter);
}

std::string System::BfdItems::InstItems::KaItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/bfd-items/inst-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::BfdItems::InstItems::KaItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ka-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BfdItems::InstItems::KaItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mintxintvl.is_set || is_set(mintxintvl.yfilter)) leaf_name_data.push_back(mintxintvl.get_name_leafdata());
    if (minrxintvl.is_set || is_set(minrxintvl.yfilter)) leaf_name_data.push_back(minrxintvl.get_name_leafdata());
    if (detectmult.is_set || is_set(detectmult.yfilter)) leaf_name_data.push_back(detectmult.get_name_leafdata());
    if (echorxintvl.is_set || is_set(echorxintvl.yfilter)) leaf_name_data.push_back(echorxintvl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BfdItems::InstItems::KaItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BfdItems::InstItems::KaItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::BfdItems::InstItems::KaItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "minTxIntvl")
    {
        mintxintvl = value;
        mintxintvl.value_namespace = name_space;
        mintxintvl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minRxIntvl")
    {
        minrxintvl = value;
        minrxintvl.value_namespace = name_space;
        minrxintvl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "detectMult")
    {
        detectmult = value;
        detectmult.value_namespace = name_space;
        detectmult.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "echoRxIntvl")
    {
        echorxintvl = value;
        echorxintvl.value_namespace = name_space;
        echorxintvl.value_namespace_prefix = name_space_prefix;
    }
}

void System::BfdItems::InstItems::KaItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "minTxIntvl")
    {
        mintxintvl.yfilter = yfilter;
    }
    if(value_path == "minRxIntvl")
    {
        minrxintvl.yfilter = yfilter;
    }
    if(value_path == "detectMult")
    {
        detectmult.yfilter = yfilter;
    }
    if(value_path == "echoRxIntvl")
    {
        echorxintvl.yfilter = yfilter;
    }
}

bool System::BfdItems::InstItems::KaItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minTxIntvl" || name == "minRxIntvl" || name == "detectMult" || name == "echoRxIntvl")
        return true;
    return false;
}

System::BfdItems::InstItems::SessionItems::SessionItems()
    :
    sess_list(this, {"discr"})
{

    yang_name = "session-items"; yang_parent_name = "inst-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::BfdItems::InstItems::SessionItems::~SessionItems()
{
}

bool System::BfdItems::InstItems::SessionItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sess_list.len(); index++)
    {
        if(sess_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BfdItems::InstItems::SessionItems::has_operation() const
{
    for (std::size_t index=0; index<sess_list.len(); index++)
    {
        if(sess_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BfdItems::InstItems::SessionItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/bfd-items/inst-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::BfdItems::InstItems::SessionItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BfdItems::InstItems::SessionItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::BfdItems::InstItems::SessionItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Sess-list")
    {
        auto c = std::make_shared<System::BfdItems::InstItems::SessionItems::SessList>();
        c->parent = this;
        sess_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BfdItems::InstItems::SessionItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : sess_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::BfdItems::InstItems::SessionItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BfdItems::InstItems::SessionItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BfdItems::InstItems::SessionItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Sess-list")
        return true;
    return false;
}

System::BfdItems::InstItems::SessionItems::SessList::SessList()
    :
    discr{YType::uint32, "discr"},
    remotediscr{YType::uint32, "remoteDiscr"},
    asyncport{YType::uint16, "asyncPort"},
    echoport{YType::uint16, "echoPort"},
    localmac{YType::str, "localMac"},
    remotemac{YType::str, "remoteMac"},
    ifid{YType::str, "ifId"},
    iod{YType::uint32, "iod"},
    vrfname{YType::str, "vrfName"},
    srcaddr{YType::str, "srcAddr"},
    destaddr{YType::str, "destAddr"},
    localtxintvl{YType::uint16, "localTxIntvl"},
    localrxintvl{YType::uint16, "localRxIntvl"},
    localdetectmult{YType::uint8, "localDetectMult"},
    txintvl{YType::uint16, "txIntvl"},
    echotxintvl{YType::uint16, "echoTxIntvl"},
    rxintvl{YType::uint16, "rxIntvl"},
    slowintvl{YType::uint16, "slowIntvl"},
    detectmult{YType::uint8, "detectMult"},
    authtype{YType::enumeration, "authType"},
    authseqno{YType::uint32, "authSeqno"},
    operst{YType::enumeration, "operSt"},
    remoteoperst{YType::enumeration, "remoteOperSt"},
    diag{YType::enumeration, "diag"},
    flags{YType::str, "flags"},
    lasttranstime{YType::str, "lastTransTime"},
    lastdiag{YType::enumeration, "lastDiag"},
    lastdowntime{YType::str, "lastDownTime"}
        ,
    stats_items(std::make_shared<System::BfdItems::InstItems::SessionItems::SessList::StatsItems>())
    , peerv_items(std::make_shared<System::BfdItems::InstItems::SessionItems::SessList::PeervItems>())
    , app_items(std::make_shared<System::BfdItems::InstItems::SessionItems::SessList::AppItems>())
    , rsmbrsess_items(std::make_shared<System::BfdItems::InstItems::SessionItems::SessList::RsmbrSessItems>())
{
    stats_items->parent = this;
    peerv_items->parent = this;
    app_items->parent = this;
    rsmbrsess_items->parent = this;

    yang_name = "Sess-list"; yang_parent_name = "session-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::BfdItems::InstItems::SessionItems::SessList::~SessList()
{
}

bool System::BfdItems::InstItems::SessionItems::SessList::has_data() const
{
    if (is_presence_container) return true;
    return discr.is_set
	|| remotediscr.is_set
	|| asyncport.is_set
	|| echoport.is_set
	|| localmac.is_set
	|| remotemac.is_set
	|| ifid.is_set
	|| iod.is_set
	|| vrfname.is_set
	|| srcaddr.is_set
	|| destaddr.is_set
	|| localtxintvl.is_set
	|| localrxintvl.is_set
	|| localdetectmult.is_set
	|| txintvl.is_set
	|| echotxintvl.is_set
	|| rxintvl.is_set
	|| slowintvl.is_set
	|| detectmult.is_set
	|| authtype.is_set
	|| authseqno.is_set
	|| operst.is_set
	|| remoteoperst.is_set
	|| diag.is_set
	|| flags.is_set
	|| lasttranstime.is_set
	|| lastdiag.is_set
	|| lastdowntime.is_set
	|| (stats_items !=  nullptr && stats_items->has_data())
	|| (peerv_items !=  nullptr && peerv_items->has_data())
	|| (app_items !=  nullptr && app_items->has_data())
	|| (rsmbrsess_items !=  nullptr && rsmbrsess_items->has_data());
}

bool System::BfdItems::InstItems::SessionItems::SessList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(discr.yfilter)
	|| ydk::is_set(remotediscr.yfilter)
	|| ydk::is_set(asyncport.yfilter)
	|| ydk::is_set(echoport.yfilter)
	|| ydk::is_set(localmac.yfilter)
	|| ydk::is_set(remotemac.yfilter)
	|| ydk::is_set(ifid.yfilter)
	|| ydk::is_set(iod.yfilter)
	|| ydk::is_set(vrfname.yfilter)
	|| ydk::is_set(srcaddr.yfilter)
	|| ydk::is_set(destaddr.yfilter)
	|| ydk::is_set(localtxintvl.yfilter)
	|| ydk::is_set(localrxintvl.yfilter)
	|| ydk::is_set(localdetectmult.yfilter)
	|| ydk::is_set(txintvl.yfilter)
	|| ydk::is_set(echotxintvl.yfilter)
	|| ydk::is_set(rxintvl.yfilter)
	|| ydk::is_set(slowintvl.yfilter)
	|| ydk::is_set(detectmult.yfilter)
	|| ydk::is_set(authtype.yfilter)
	|| ydk::is_set(authseqno.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(remoteoperst.yfilter)
	|| ydk::is_set(diag.yfilter)
	|| ydk::is_set(flags.yfilter)
	|| ydk::is_set(lasttranstime.yfilter)
	|| ydk::is_set(lastdiag.yfilter)
	|| ydk::is_set(lastdowntime.yfilter)
	|| (stats_items !=  nullptr && stats_items->has_operation())
	|| (peerv_items !=  nullptr && peerv_items->has_operation())
	|| (app_items !=  nullptr && app_items->has_operation())
	|| (rsmbrsess_items !=  nullptr && rsmbrsess_items->has_operation());
}

std::string System::BfdItems::InstItems::SessionItems::SessList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/bfd-items/inst-items/session-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::BfdItems::InstItems::SessionItems::SessList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Sess-list";
    ADD_KEY_TOKEN(discr, "discr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BfdItems::InstItems::SessionItems::SessList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (discr.is_set || is_set(discr.yfilter)) leaf_name_data.push_back(discr.get_name_leafdata());
    if (remotediscr.is_set || is_set(remotediscr.yfilter)) leaf_name_data.push_back(remotediscr.get_name_leafdata());
    if (asyncport.is_set || is_set(asyncport.yfilter)) leaf_name_data.push_back(asyncport.get_name_leafdata());
    if (echoport.is_set || is_set(echoport.yfilter)) leaf_name_data.push_back(echoport.get_name_leafdata());
    if (localmac.is_set || is_set(localmac.yfilter)) leaf_name_data.push_back(localmac.get_name_leafdata());
    if (remotemac.is_set || is_set(remotemac.yfilter)) leaf_name_data.push_back(remotemac.get_name_leafdata());
    if (ifid.is_set || is_set(ifid.yfilter)) leaf_name_data.push_back(ifid.get_name_leafdata());
    if (iod.is_set || is_set(iod.yfilter)) leaf_name_data.push_back(iod.get_name_leafdata());
    if (vrfname.is_set || is_set(vrfname.yfilter)) leaf_name_data.push_back(vrfname.get_name_leafdata());
    if (srcaddr.is_set || is_set(srcaddr.yfilter)) leaf_name_data.push_back(srcaddr.get_name_leafdata());
    if (destaddr.is_set || is_set(destaddr.yfilter)) leaf_name_data.push_back(destaddr.get_name_leafdata());
    if (localtxintvl.is_set || is_set(localtxintvl.yfilter)) leaf_name_data.push_back(localtxintvl.get_name_leafdata());
    if (localrxintvl.is_set || is_set(localrxintvl.yfilter)) leaf_name_data.push_back(localrxintvl.get_name_leafdata());
    if (localdetectmult.is_set || is_set(localdetectmult.yfilter)) leaf_name_data.push_back(localdetectmult.get_name_leafdata());
    if (txintvl.is_set || is_set(txintvl.yfilter)) leaf_name_data.push_back(txintvl.get_name_leafdata());
    if (echotxintvl.is_set || is_set(echotxintvl.yfilter)) leaf_name_data.push_back(echotxintvl.get_name_leafdata());
    if (rxintvl.is_set || is_set(rxintvl.yfilter)) leaf_name_data.push_back(rxintvl.get_name_leafdata());
    if (slowintvl.is_set || is_set(slowintvl.yfilter)) leaf_name_data.push_back(slowintvl.get_name_leafdata());
    if (detectmult.is_set || is_set(detectmult.yfilter)) leaf_name_data.push_back(detectmult.get_name_leafdata());
    if (authtype.is_set || is_set(authtype.yfilter)) leaf_name_data.push_back(authtype.get_name_leafdata());
    if (authseqno.is_set || is_set(authseqno.yfilter)) leaf_name_data.push_back(authseqno.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (remoteoperst.is_set || is_set(remoteoperst.yfilter)) leaf_name_data.push_back(remoteoperst.get_name_leafdata());
    if (diag.is_set || is_set(diag.yfilter)) leaf_name_data.push_back(diag.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (lasttranstime.is_set || is_set(lasttranstime.yfilter)) leaf_name_data.push_back(lasttranstime.get_name_leafdata());
    if (lastdiag.is_set || is_set(lastdiag.yfilter)) leaf_name_data.push_back(lastdiag.get_name_leafdata());
    if (lastdowntime.is_set || is_set(lastdowntime.yfilter)) leaf_name_data.push_back(lastdowntime.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BfdItems::InstItems::SessionItems::SessList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "stats-items")
    {
        if(stats_items == nullptr)
        {
            stats_items = std::make_shared<System::BfdItems::InstItems::SessionItems::SessList::StatsItems>();
        }
        return stats_items;
    }

    if(child_yang_name == "peerv-items")
    {
        if(peerv_items == nullptr)
        {
            peerv_items = std::make_shared<System::BfdItems::InstItems::SessionItems::SessList::PeervItems>();
        }
        return peerv_items;
    }

    if(child_yang_name == "app-items")
    {
        if(app_items == nullptr)
        {
            app_items = std::make_shared<System::BfdItems::InstItems::SessionItems::SessList::AppItems>();
        }
        return app_items;
    }

    if(child_yang_name == "rsmbrSess-items")
    {
        if(rsmbrsess_items == nullptr)
        {
            rsmbrsess_items = std::make_shared<System::BfdItems::InstItems::SessionItems::SessList::RsmbrSessItems>();
        }
        return rsmbrsess_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BfdItems::InstItems::SessionItems::SessList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(stats_items != nullptr)
    {
        children["stats-items"] = stats_items;
    }

    if(peerv_items != nullptr)
    {
        children["peerv-items"] = peerv_items;
    }

    if(app_items != nullptr)
    {
        children["app-items"] = app_items;
    }

    if(rsmbrsess_items != nullptr)
    {
        children["rsmbrSess-items"] = rsmbrsess_items;
    }

    return children;
}

void System::BfdItems::InstItems::SessionItems::SessList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "discr")
    {
        discr = value;
        discr.value_namespace = name_space;
        discr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remoteDiscr")
    {
        remotediscr = value;
        remotediscr.value_namespace = name_space;
        remotediscr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asyncPort")
    {
        asyncport = value;
        asyncport.value_namespace = name_space;
        asyncport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "echoPort")
    {
        echoport = value;
        echoport.value_namespace = name_space;
        echoport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "localMac")
    {
        localmac = value;
        localmac.value_namespace = name_space;
        localmac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remoteMac")
    {
        remotemac = value;
        remotemac.value_namespace = name_space;
        remotemac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ifId")
    {
        ifid = value;
        ifid.value_namespace = name_space;
        ifid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "iod")
    {
        iod = value;
        iod.value_namespace = name_space;
        iod.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrfName")
    {
        vrfname = value;
        vrfname.value_namespace = name_space;
        vrfname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srcAddr")
    {
        srcaddr = value;
        srcaddr.value_namespace = name_space;
        srcaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destAddr")
    {
        destaddr = value;
        destaddr.value_namespace = name_space;
        destaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "localTxIntvl")
    {
        localtxintvl = value;
        localtxintvl.value_namespace = name_space;
        localtxintvl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "localRxIntvl")
    {
        localrxintvl = value;
        localrxintvl.value_namespace = name_space;
        localrxintvl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "localDetectMult")
    {
        localdetectmult = value;
        localdetectmult.value_namespace = name_space;
        localdetectmult.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "txIntvl")
    {
        txintvl = value;
        txintvl.value_namespace = name_space;
        txintvl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "echoTxIntvl")
    {
        echotxintvl = value;
        echotxintvl.value_namespace = name_space;
        echotxintvl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rxIntvl")
    {
        rxintvl = value;
        rxintvl.value_namespace = name_space;
        rxintvl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "slowIntvl")
    {
        slowintvl = value;
        slowintvl.value_namespace = name_space;
        slowintvl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "detectMult")
    {
        detectmult = value;
        detectmult.value_namespace = name_space;
        detectmult.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authType")
    {
        authtype = value;
        authtype.value_namespace = name_space;
        authtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authSeqno")
    {
        authseqno = value;
        authseqno.value_namespace = name_space;
        authseqno.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remoteOperSt")
    {
        remoteoperst = value;
        remoteoperst.value_namespace = name_space;
        remoteoperst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diag")
    {
        diag = value;
        diag.value_namespace = name_space;
        diag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lastTransTime")
    {
        lasttranstime = value;
        lasttranstime.value_namespace = name_space;
        lasttranstime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lastDiag")
    {
        lastdiag = value;
        lastdiag.value_namespace = name_space;
        lastdiag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lastDownTime")
    {
        lastdowntime = value;
        lastdowntime.value_namespace = name_space;
        lastdowntime.value_namespace_prefix = name_space_prefix;
    }
}

void System::BfdItems::InstItems::SessionItems::SessList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "discr")
    {
        discr.yfilter = yfilter;
    }
    if(value_path == "remoteDiscr")
    {
        remotediscr.yfilter = yfilter;
    }
    if(value_path == "asyncPort")
    {
        asyncport.yfilter = yfilter;
    }
    if(value_path == "echoPort")
    {
        echoport.yfilter = yfilter;
    }
    if(value_path == "localMac")
    {
        localmac.yfilter = yfilter;
    }
    if(value_path == "remoteMac")
    {
        remotemac.yfilter = yfilter;
    }
    if(value_path == "ifId")
    {
        ifid.yfilter = yfilter;
    }
    if(value_path == "iod")
    {
        iod.yfilter = yfilter;
    }
    if(value_path == "vrfName")
    {
        vrfname.yfilter = yfilter;
    }
    if(value_path == "srcAddr")
    {
        srcaddr.yfilter = yfilter;
    }
    if(value_path == "destAddr")
    {
        destaddr.yfilter = yfilter;
    }
    if(value_path == "localTxIntvl")
    {
        localtxintvl.yfilter = yfilter;
    }
    if(value_path == "localRxIntvl")
    {
        localrxintvl.yfilter = yfilter;
    }
    if(value_path == "localDetectMult")
    {
        localdetectmult.yfilter = yfilter;
    }
    if(value_path == "txIntvl")
    {
        txintvl.yfilter = yfilter;
    }
    if(value_path == "echoTxIntvl")
    {
        echotxintvl.yfilter = yfilter;
    }
    if(value_path == "rxIntvl")
    {
        rxintvl.yfilter = yfilter;
    }
    if(value_path == "slowIntvl")
    {
        slowintvl.yfilter = yfilter;
    }
    if(value_path == "detectMult")
    {
        detectmult.yfilter = yfilter;
    }
    if(value_path == "authType")
    {
        authtype.yfilter = yfilter;
    }
    if(value_path == "authSeqno")
    {
        authseqno.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "remoteOperSt")
    {
        remoteoperst.yfilter = yfilter;
    }
    if(value_path == "diag")
    {
        diag.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
    if(value_path == "lastTransTime")
    {
        lasttranstime.yfilter = yfilter;
    }
    if(value_path == "lastDiag")
    {
        lastdiag.yfilter = yfilter;
    }
    if(value_path == "lastDownTime")
    {
        lastdowntime.yfilter = yfilter;
    }
}

bool System::BfdItems::InstItems::SessionItems::SessList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stats-items" || name == "peerv-items" || name == "app-items" || name == "rsmbrSess-items" || name == "discr" || name == "remoteDiscr" || name == "asyncPort" || name == "echoPort" || name == "localMac" || name == "remoteMac" || name == "ifId" || name == "iod" || name == "vrfName" || name == "srcAddr" || name == "destAddr" || name == "localTxIntvl" || name == "localRxIntvl" || name == "localDetectMult" || name == "txIntvl" || name == "echoTxIntvl" || name == "rxIntvl" || name == "slowIntvl" || name == "detectMult" || name == "authType" || name == "authSeqno" || name == "operSt" || name == "remoteOperSt" || name == "diag" || name == "flags" || name == "lastTransTime" || name == "lastDiag" || name == "lastDownTime")
        return true;
    return false;
}

System::BfdItems::InstItems::SessionItems::SessList::StatsItems::StatsItems()
    :
    rxcnt{YType::uint64, "rxCnt"},
    rxavg{YType::uint32, "rxAvg"},
    rxmin{YType::uint32, "rxMin"},
    rxmax{YType::uint32, "rxMax"},
    lastrxpkt{YType::str, "lastRxPkt"},
    txcnt{YType::uint64, "txCnt"},
    txavg{YType::uint32, "txAvg"},
    txmin{YType::uint32, "txMin"},
    txmax{YType::uint32, "txMax"},
    lasttxpkt{YType::str, "lastTxPkt"},
    upcnt{YType::uint32, "upCnt"},
    downcnt{YType::uint32, "downCnt"}
{

    yang_name = "stats-items"; yang_parent_name = "Sess-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BfdItems::InstItems::SessionItems::SessList::StatsItems::~StatsItems()
{
}

bool System::BfdItems::InstItems::SessionItems::SessList::StatsItems::has_data() const
{
    if (is_presence_container) return true;
    return rxcnt.is_set
	|| rxavg.is_set
	|| rxmin.is_set
	|| rxmax.is_set
	|| lastrxpkt.is_set
	|| txcnt.is_set
	|| txavg.is_set
	|| txmin.is_set
	|| txmax.is_set
	|| lasttxpkt.is_set
	|| upcnt.is_set
	|| downcnt.is_set;
}

bool System::BfdItems::InstItems::SessionItems::SessList::StatsItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rxcnt.yfilter)
	|| ydk::is_set(rxavg.yfilter)
	|| ydk::is_set(rxmin.yfilter)
	|| ydk::is_set(rxmax.yfilter)
	|| ydk::is_set(lastrxpkt.yfilter)
	|| ydk::is_set(txcnt.yfilter)
	|| ydk::is_set(txavg.yfilter)
	|| ydk::is_set(txmin.yfilter)
	|| ydk::is_set(txmax.yfilter)
	|| ydk::is_set(lasttxpkt.yfilter)
	|| ydk::is_set(upcnt.yfilter)
	|| ydk::is_set(downcnt.yfilter);
}

std::string System::BfdItems::InstItems::SessionItems::SessList::StatsItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stats-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BfdItems::InstItems::SessionItems::SessList::StatsItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rxcnt.is_set || is_set(rxcnt.yfilter)) leaf_name_data.push_back(rxcnt.get_name_leafdata());
    if (rxavg.is_set || is_set(rxavg.yfilter)) leaf_name_data.push_back(rxavg.get_name_leafdata());
    if (rxmin.is_set || is_set(rxmin.yfilter)) leaf_name_data.push_back(rxmin.get_name_leafdata());
    if (rxmax.is_set || is_set(rxmax.yfilter)) leaf_name_data.push_back(rxmax.get_name_leafdata());
    if (lastrxpkt.is_set || is_set(lastrxpkt.yfilter)) leaf_name_data.push_back(lastrxpkt.get_name_leafdata());
    if (txcnt.is_set || is_set(txcnt.yfilter)) leaf_name_data.push_back(txcnt.get_name_leafdata());
    if (txavg.is_set || is_set(txavg.yfilter)) leaf_name_data.push_back(txavg.get_name_leafdata());
    if (txmin.is_set || is_set(txmin.yfilter)) leaf_name_data.push_back(txmin.get_name_leafdata());
    if (txmax.is_set || is_set(txmax.yfilter)) leaf_name_data.push_back(txmax.get_name_leafdata());
    if (lasttxpkt.is_set || is_set(lasttxpkt.yfilter)) leaf_name_data.push_back(lasttxpkt.get_name_leafdata());
    if (upcnt.is_set || is_set(upcnt.yfilter)) leaf_name_data.push_back(upcnt.get_name_leafdata());
    if (downcnt.is_set || is_set(downcnt.yfilter)) leaf_name_data.push_back(downcnt.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BfdItems::InstItems::SessionItems::SessList::StatsItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BfdItems::InstItems::SessionItems::SessList::StatsItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::BfdItems::InstItems::SessionItems::SessList::StatsItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rxCnt")
    {
        rxcnt = value;
        rxcnt.value_namespace = name_space;
        rxcnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rxAvg")
    {
        rxavg = value;
        rxavg.value_namespace = name_space;
        rxavg.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rxMin")
    {
        rxmin = value;
        rxmin.value_namespace = name_space;
        rxmin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rxMax")
    {
        rxmax = value;
        rxmax.value_namespace = name_space;
        rxmax.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lastRxPkt")
    {
        lastrxpkt = value;
        lastrxpkt.value_namespace = name_space;
        lastrxpkt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "txCnt")
    {
        txcnt = value;
        txcnt.value_namespace = name_space;
        txcnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "txAvg")
    {
        txavg = value;
        txavg.value_namespace = name_space;
        txavg.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "txMin")
    {
        txmin = value;
        txmin.value_namespace = name_space;
        txmin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "txMax")
    {
        txmax = value;
        txmax.value_namespace = name_space;
        txmax.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lastTxPkt")
    {
        lasttxpkt = value;
        lasttxpkt.value_namespace = name_space;
        lasttxpkt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "upCnt")
    {
        upcnt = value;
        upcnt.value_namespace = name_space;
        upcnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "downCnt")
    {
        downcnt = value;
        downcnt.value_namespace = name_space;
        downcnt.value_namespace_prefix = name_space_prefix;
    }
}

void System::BfdItems::InstItems::SessionItems::SessList::StatsItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rxCnt")
    {
        rxcnt.yfilter = yfilter;
    }
    if(value_path == "rxAvg")
    {
        rxavg.yfilter = yfilter;
    }
    if(value_path == "rxMin")
    {
        rxmin.yfilter = yfilter;
    }
    if(value_path == "rxMax")
    {
        rxmax.yfilter = yfilter;
    }
    if(value_path == "lastRxPkt")
    {
        lastrxpkt.yfilter = yfilter;
    }
    if(value_path == "txCnt")
    {
        txcnt.yfilter = yfilter;
    }
    if(value_path == "txAvg")
    {
        txavg.yfilter = yfilter;
    }
    if(value_path == "txMin")
    {
        txmin.yfilter = yfilter;
    }
    if(value_path == "txMax")
    {
        txmax.yfilter = yfilter;
    }
    if(value_path == "lastTxPkt")
    {
        lasttxpkt.yfilter = yfilter;
    }
    if(value_path == "upCnt")
    {
        upcnt.yfilter = yfilter;
    }
    if(value_path == "downCnt")
    {
        downcnt.yfilter = yfilter;
    }
}

bool System::BfdItems::InstItems::SessionItems::SessList::StatsItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rxCnt" || name == "rxAvg" || name == "rxMin" || name == "rxMax" || name == "lastRxPkt" || name == "txCnt" || name == "txAvg" || name == "txMin" || name == "txMax" || name == "lastTxPkt" || name == "upCnt" || name == "downCnt")
        return true;
    return false;
}

System::BfdItems::InstItems::SessionItems::SessList::PeervItems::PeervItems()
    :
    diag{YType::enumeration, "diag"},
    operst{YType::enumeration, "operSt"},
    flags{YType::str, "flags"},
    detectmult{YType::uint8, "detectMult"},
    mydisc{YType::uint32, "myDisc"},
    yourdisc{YType::uint32, "yourDisc"},
    mintx{YType::uint16, "minTx"},
    minrx{YType::uint16, "minRx"},
    minecho{YType::uint16, "minEcho"}
{

    yang_name = "peerv-items"; yang_parent_name = "Sess-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BfdItems::InstItems::SessionItems::SessList::PeervItems::~PeervItems()
{
}

bool System::BfdItems::InstItems::SessionItems::SessList::PeervItems::has_data() const
{
    if (is_presence_container) return true;
    return diag.is_set
	|| operst.is_set
	|| flags.is_set
	|| detectmult.is_set
	|| mydisc.is_set
	|| yourdisc.is_set
	|| mintx.is_set
	|| minrx.is_set
	|| minecho.is_set;
}

bool System::BfdItems::InstItems::SessionItems::SessList::PeervItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(diag.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(flags.yfilter)
	|| ydk::is_set(detectmult.yfilter)
	|| ydk::is_set(mydisc.yfilter)
	|| ydk::is_set(yourdisc.yfilter)
	|| ydk::is_set(mintx.yfilter)
	|| ydk::is_set(minrx.yfilter)
	|| ydk::is_set(minecho.yfilter);
}

std::string System::BfdItems::InstItems::SessionItems::SessList::PeervItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peerv-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BfdItems::InstItems::SessionItems::SessList::PeervItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (diag.is_set || is_set(diag.yfilter)) leaf_name_data.push_back(diag.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (detectmult.is_set || is_set(detectmult.yfilter)) leaf_name_data.push_back(detectmult.get_name_leafdata());
    if (mydisc.is_set || is_set(mydisc.yfilter)) leaf_name_data.push_back(mydisc.get_name_leafdata());
    if (yourdisc.is_set || is_set(yourdisc.yfilter)) leaf_name_data.push_back(yourdisc.get_name_leafdata());
    if (mintx.is_set || is_set(mintx.yfilter)) leaf_name_data.push_back(mintx.get_name_leafdata());
    if (minrx.is_set || is_set(minrx.yfilter)) leaf_name_data.push_back(minrx.get_name_leafdata());
    if (minecho.is_set || is_set(minecho.yfilter)) leaf_name_data.push_back(minecho.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BfdItems::InstItems::SessionItems::SessList::PeervItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BfdItems::InstItems::SessionItems::SessList::PeervItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::BfdItems::InstItems::SessionItems::SessList::PeervItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "diag")
    {
        diag = value;
        diag.value_namespace = name_space;
        diag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "detectMult")
    {
        detectmult = value;
        detectmult.value_namespace = name_space;
        detectmult.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "myDisc")
    {
        mydisc = value;
        mydisc.value_namespace = name_space;
        mydisc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "yourDisc")
    {
        yourdisc = value;
        yourdisc.value_namespace = name_space;
        yourdisc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minTx")
    {
        mintx = value;
        mintx.value_namespace = name_space;
        mintx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minRx")
    {
        minrx = value;
        minrx.value_namespace = name_space;
        minrx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minEcho")
    {
        minecho = value;
        minecho.value_namespace = name_space;
        minecho.value_namespace_prefix = name_space_prefix;
    }
}

void System::BfdItems::InstItems::SessionItems::SessList::PeervItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "diag")
    {
        diag.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
    if(value_path == "detectMult")
    {
        detectmult.yfilter = yfilter;
    }
    if(value_path == "myDisc")
    {
        mydisc.yfilter = yfilter;
    }
    if(value_path == "yourDisc")
    {
        yourdisc.yfilter = yfilter;
    }
    if(value_path == "minTx")
    {
        mintx.yfilter = yfilter;
    }
    if(value_path == "minRx")
    {
        minrx.yfilter = yfilter;
    }
    if(value_path == "minEcho")
    {
        minecho.yfilter = yfilter;
    }
}

bool System::BfdItems::InstItems::SessionItems::SessList::PeervItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "diag" || name == "operSt" || name == "flags" || name == "detectMult" || name == "myDisc" || name == "yourDisc" || name == "minTx" || name == "minRx" || name == "minEcho")
        return true;
    return false;
}

System::BfdItems::InstItems::SessionItems::SessList::AppItems::AppItems()
    :
    sessapp_list(this, {"id"})
{

    yang_name = "app-items"; yang_parent_name = "Sess-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BfdItems::InstItems::SessionItems::SessList::AppItems::~AppItems()
{
}

bool System::BfdItems::InstItems::SessionItems::SessList::AppItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sessapp_list.len(); index++)
    {
        if(sessapp_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BfdItems::InstItems::SessionItems::SessList::AppItems::has_operation() const
{
    for (std::size_t index=0; index<sessapp_list.len(); index++)
    {
        if(sessapp_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BfdItems::InstItems::SessionItems::SessList::AppItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "app-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BfdItems::InstItems::SessionItems::SessList::AppItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::BfdItems::InstItems::SessionItems::SessList::AppItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "SessApp-list")
    {
        auto c = std::make_shared<System::BfdItems::InstItems::SessionItems::SessList::AppItems::SessAppList>();
        c->parent = this;
        sessapp_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BfdItems::InstItems::SessionItems::SessList::AppItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : sessapp_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::BfdItems::InstItems::SessionItems::SessList::AppItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BfdItems::InstItems::SessionItems::SessList::AppItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BfdItems::InstItems::SessionItems::SessList::AppItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "SessApp-list")
        return true;
    return false;
}

System::BfdItems::InstItems::SessionItems::SessList::AppItems::SessAppList::SessAppList()
    :
    id{YType::uint32, "id"},
    name{YType::str, "name"},
    sapid{YType::uint32, "sapId"},
    descr{YType::str, "descr"},
    flags{YType::str, "flags"},
    data{YType::str, "data"},
    autoexptime{YType::str, "autoExpTime"}
{

    yang_name = "SessApp-list"; yang_parent_name = "app-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BfdItems::InstItems::SessionItems::SessList::AppItems::SessAppList::~SessAppList()
{
}

bool System::BfdItems::InstItems::SessionItems::SessList::AppItems::SessAppList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| name.is_set
	|| sapid.is_set
	|| descr.is_set
	|| flags.is_set
	|| data.is_set
	|| autoexptime.is_set;
}

bool System::BfdItems::InstItems::SessionItems::SessList::AppItems::SessAppList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(sapid.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(flags.yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(autoexptime.yfilter);
}

std::string System::BfdItems::InstItems::SessionItems::SessList::AppItems::SessAppList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "SessApp-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BfdItems::InstItems::SessionItems::SessList::AppItems::SessAppList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (sapid.is_set || is_set(sapid.yfilter)) leaf_name_data.push_back(sapid.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (autoexptime.is_set || is_set(autoexptime.yfilter)) leaf_name_data.push_back(autoexptime.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BfdItems::InstItems::SessionItems::SessList::AppItems::SessAppList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BfdItems::InstItems::SessionItems::SessList::AppItems::SessAppList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::BfdItems::InstItems::SessionItems::SessList::AppItems::SessAppList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sapId")
    {
        sapid = value;
        sapid.value_namespace = name_space;
        sapid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "autoExpTime")
    {
        autoexptime = value;
        autoexptime.value_namespace = name_space;
        autoexptime.value_namespace_prefix = name_space_prefix;
    }
}

void System::BfdItems::InstItems::SessionItems::SessList::AppItems::SessAppList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "sapId")
    {
        sapid.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "autoExpTime")
    {
        autoexptime.yfilter = yfilter;
    }
}

bool System::BfdItems::InstItems::SessionItems::SessList::AppItems::SessAppList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "name" || name == "sapId" || name == "descr" || name == "flags" || name == "data" || name == "autoExpTime")
        return true;
    return false;
}

System::BfdItems::InstItems::SessionItems::SessList::RsmbrSessItems::RsmbrSessItems()
    :
    rsmbrsess_list(this, {"tdn"})
{

    yang_name = "rsmbrSess-items"; yang_parent_name = "Sess-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BfdItems::InstItems::SessionItems::SessList::RsmbrSessItems::~RsmbrSessItems()
{
}

bool System::BfdItems::InstItems::SessionItems::SessList::RsmbrSessItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rsmbrsess_list.len(); index++)
    {
        if(rsmbrsess_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BfdItems::InstItems::SessionItems::SessList::RsmbrSessItems::has_operation() const
{
    for (std::size_t index=0; index<rsmbrsess_list.len(); index++)
    {
        if(rsmbrsess_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BfdItems::InstItems::SessionItems::SessList::RsmbrSessItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsmbrSess-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BfdItems::InstItems::SessionItems::SessList::RsmbrSessItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::BfdItems::InstItems::SessionItems::SessList::RsmbrSessItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RsMbrSess-list")
    {
        auto c = std::make_shared<System::BfdItems::InstItems::SessionItems::SessList::RsmbrSessItems::RsMbrSessList>();
        c->parent = this;
        rsmbrsess_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BfdItems::InstItems::SessionItems::SessList::RsmbrSessItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : rsmbrsess_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::BfdItems::InstItems::SessionItems::SessList::RsmbrSessItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BfdItems::InstItems::SessionItems::SessList::RsmbrSessItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BfdItems::InstItems::SessionItems::SessList::RsmbrSessItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RsMbrSess-list")
        return true;
    return false;
}

System::BfdItems::InstItems::SessionItems::SessList::RsmbrSessItems::RsMbrSessList::RsMbrSessList()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "RsMbrSess-list"; yang_parent_name = "rsmbrSess-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BfdItems::InstItems::SessionItems::SessList::RsmbrSessItems::RsMbrSessList::~RsMbrSessList()
{
}

bool System::BfdItems::InstItems::SessionItems::SessList::RsmbrSessItems::RsMbrSessList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::BfdItems::InstItems::SessionItems::SessList::RsmbrSessItems::RsMbrSessList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::BfdItems::InstItems::SessionItems::SessList::RsmbrSessItems::RsMbrSessList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RsMbrSess-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BfdItems::InstItems::SessionItems::SessList::RsmbrSessItems::RsMbrSessList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::BfdItems::InstItems::SessionItems::SessList::RsmbrSessItems::RsMbrSessList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::BfdItems::InstItems::SessionItems::SessList::RsmbrSessItems::RsMbrSessList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::BfdItems::InstItems::SessionItems::SessList::RsmbrSessItems::RsMbrSessList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tCl")
    {
        tcl = value;
        tcl.value_namespace = name_space;
        tcl.value_namespace_prefix = name_space_prefix;
    }
}

void System::BfdItems::InstItems::SessionItems::SessList::RsmbrSessItems::RsMbrSessList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
    if(value_path == "tCl")
    {
        tcl.yfilter = yfilter;
    }
}

bool System::BfdItems::InstItems::SessionItems::SessList::RsmbrSessItems::RsMbrSessList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::EigrpItems::EigrpItems()
    :
    name{YType::str, "name"},
    adminst{YType::enumeration, "adminSt"},
    operst{YType::enumeration, "operSt"},
    opererr{YType::str, "operErr"}
        ,
    inst_items(std::make_shared<System::EigrpItems::InstItems>())
{
    inst_items->parent = this;

    yang_name = "eigrp-items"; yang_parent_name = "System"; is_top_level_class = false; has_list_ancestor = false; 
}

System::EigrpItems::~EigrpItems()
{
}

bool System::EigrpItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| adminst.is_set
	|| operst.is_set
	|| opererr.is_set
	|| (inst_items !=  nullptr && inst_items->has_data());
}

bool System::EigrpItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(opererr.yfilter)
	|| (inst_items !=  nullptr && inst_items->has_operation());
}

std::string System::EigrpItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/" << get_segment_path();
    return path_buffer.str();
}

std::string System::EigrpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eigrp-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::EigrpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (opererr.is_set || is_set(opererr.yfilter)) leaf_name_data.push_back(opererr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::EigrpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "inst-items")
    {
        if(inst_items == nullptr)
        {
            inst_items = std::make_shared<System::EigrpItems::InstItems>();
        }
        return inst_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::EigrpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(inst_items != nullptr)
    {
        children["inst-items"] = inst_items;
    }

    return children;
}

void System::EigrpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adminSt")
    {
        adminst = value;
        adminst.value_namespace = name_space;
        adminst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operErr")
    {
        opererr = value;
        opererr.value_namespace = name_space;
        opererr.value_namespace_prefix = name_space_prefix;
    }
}

void System::EigrpItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "operErr")
    {
        opererr.yfilter = yfilter;
    }
}

bool System::EigrpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inst-items" || name == "name" || name == "adminSt" || name == "operSt" || name == "operErr")
        return true;
    return false;
}

System::EigrpItems::InstItems::InstItems()
    :
    inst_list(this, {"name"})
{

    yang_name = "inst-items"; yang_parent_name = "eigrp-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::EigrpItems::InstItems::~InstItems()
{
}

bool System::EigrpItems::InstItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<inst_list.len(); index++)
    {
        if(inst_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::EigrpItems::InstItems::has_operation() const
{
    for (std::size_t index=0; index<inst_list.len(); index++)
    {
        if(inst_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::EigrpItems::InstItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/eigrp-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::EigrpItems::InstItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inst-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::EigrpItems::InstItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::EigrpItems::InstItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Inst-list")
    {
        auto c = std::make_shared<System::EigrpItems::InstItems::InstList>();
        c->parent = this;
        inst_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::EigrpItems::InstItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : inst_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::EigrpItems::InstItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::EigrpItems::InstItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::EigrpItems::InstItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Inst-list")
        return true;
    return false;
}

System::EigrpItems::InstItems::InstList::InstList()
    :
    name{YType::str, "name"},
    adminst{YType::enumeration, "adminSt"},
    ctrl{YType::str, "ctrl"},
    opererr{YType::str, "operErr"}
        ,
    dom_items(std::make_shared<System::EigrpItems::InstItems::InstList::DomItems>())
{
    dom_items->parent = this;

    yang_name = "Inst-list"; yang_parent_name = "inst-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::EigrpItems::InstItems::InstList::~InstList()
{
}

bool System::EigrpItems::InstItems::InstList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| adminst.is_set
	|| ctrl.is_set
	|| opererr.is_set
	|| (dom_items !=  nullptr && dom_items->has_data());
}

bool System::EigrpItems::InstItems::InstList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(ctrl.yfilter)
	|| ydk::is_set(opererr.yfilter)
	|| (dom_items !=  nullptr && dom_items->has_operation());
}

std::string System::EigrpItems::InstItems::InstList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/eigrp-items/inst-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::EigrpItems::InstItems::InstList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Inst-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::EigrpItems::InstItems::InstList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (ctrl.is_set || is_set(ctrl.yfilter)) leaf_name_data.push_back(ctrl.get_name_leafdata());
    if (opererr.is_set || is_set(opererr.yfilter)) leaf_name_data.push_back(opererr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::EigrpItems::InstItems::InstList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dom-items")
    {
        if(dom_items == nullptr)
        {
            dom_items = std::make_shared<System::EigrpItems::InstItems::InstList::DomItems>();
        }
        return dom_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::EigrpItems::InstItems::InstList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(dom_items != nullptr)
    {
        children["dom-items"] = dom_items;
    }

    return children;
}

void System::EigrpItems::InstItems::InstList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adminSt")
    {
        adminst = value;
        adminst.value_namespace = name_space;
        adminst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ctrl")
    {
        ctrl = value;
        ctrl.value_namespace = name_space;
        ctrl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operErr")
    {
        opererr = value;
        opererr.value_namespace = name_space;
        opererr.value_namespace_prefix = name_space_prefix;
    }
}

void System::EigrpItems::InstItems::InstList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
    if(value_path == "ctrl")
    {
        ctrl.yfilter = yfilter;
    }
    if(value_path == "operErr")
    {
        opererr.yfilter = yfilter;
    }
}

bool System::EigrpItems::InstItems::InstList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dom-items" || name == "name" || name == "adminSt" || name == "ctrl" || name == "operErr")
        return true;
    return false;
}

System::EigrpItems::InstItems::InstList::DomItems::DomItems()
    :
    dom_list(this, {"name"})
{

    yang_name = "dom-items"; yang_parent_name = "Inst-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::EigrpItems::InstItems::InstList::DomItems::~DomItems()
{
}

bool System::EigrpItems::InstItems::InstList::DomItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<dom_list.len(); index++)
    {
        if(dom_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::EigrpItems::InstItems::InstList::DomItems::has_operation() const
{
    for (std::size_t index=0; index<dom_list.len(); index++)
    {
        if(dom_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::EigrpItems::InstItems::InstList::DomItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dom-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::EigrpItems::InstItems::InstList::DomItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::EigrpItems::InstItems::InstList::DomItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Dom-list")
    {
        auto c = std::make_shared<System::EigrpItems::InstItems::InstList::DomItems::DomList>();
        c->parent = this;
        dom_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::EigrpItems::InstItems::InstList::DomItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : dom_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::EigrpItems::InstItems::InstList::DomItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::EigrpItems::InstItems::InstList::DomItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::EigrpItems::InstItems::InstList::DomItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Dom-list")
        return true;
    return false;
}

System::EigrpItems::InstItems::InstList::DomItems::DomList::DomList()
    :
    name{YType::str, "name"}
        ,
    af_items(std::make_shared<System::EigrpItems::InstItems::InstList::DomItems::DomList::AfItems>())
    , if_items(std::make_shared<System::EigrpItems::InstItems::InstList::DomItems::DomList::IfItems>())
{
    af_items->parent = this;
    if_items->parent = this;

    yang_name = "Dom-list"; yang_parent_name = "dom-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::EigrpItems::InstItems::InstList::DomItems::DomList::~DomList()
{
}

bool System::EigrpItems::InstItems::InstList::DomItems::DomList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| (af_items !=  nullptr && af_items->has_data())
	|| (if_items !=  nullptr && if_items->has_data());
}

bool System::EigrpItems::InstItems::InstList::DomItems::DomList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (af_items !=  nullptr && af_items->has_operation())
	|| (if_items !=  nullptr && if_items->has_operation());
}

std::string System::EigrpItems::InstItems::InstList::DomItems::DomList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Dom-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::EigrpItems::InstItems::InstList::DomItems::DomList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::EigrpItems::InstItems::InstList::DomItems::DomList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "af-items")
    {
        if(af_items == nullptr)
        {
            af_items = std::make_shared<System::EigrpItems::InstItems::InstList::DomItems::DomList::AfItems>();
        }
        return af_items;
    }

    if(child_yang_name == "if-items")
    {
        if(if_items == nullptr)
        {
            if_items = std::make_shared<System::EigrpItems::InstItems::InstList::DomItems::DomList::IfItems>();
        }
        return if_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::EigrpItems::InstItems::InstList::DomItems::DomList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(af_items != nullptr)
    {
        children["af-items"] = af_items;
    }

    if(if_items != nullptr)
    {
        children["if-items"] = if_items;
    }

    return children;
}

void System::EigrpItems::InstItems::InstList::DomItems::DomList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void System::EigrpItems::InstItems::InstList::DomItems::DomList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool System::EigrpItems::InstItems::InstList::DomItems::DomList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-items" || name == "if-items" || name == "name")
        return true;
    return false;
}

System::EigrpItems::InstItems::InstList::DomItems::DomList::AfItems::AfItems()
    :
    domaf_list(this, {"type"})
{

    yang_name = "af-items"; yang_parent_name = "Dom-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::EigrpItems::InstItems::InstList::DomItems::DomList::AfItems::~AfItems()
{
}

bool System::EigrpItems::InstItems::InstList::DomItems::DomList::AfItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<domaf_list.len(); index++)
    {
        if(domaf_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::EigrpItems::InstItems::InstList::DomItems::DomList::AfItems::has_operation() const
{
    for (std::size_t index=0; index<domaf_list.len(); index++)
    {
        if(domaf_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::EigrpItems::InstItems::InstList::DomItems::DomList::AfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "af-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::EigrpItems::InstItems::InstList::DomItems::DomList::AfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::EigrpItems::InstItems::InstList::DomItems::DomList::AfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "DomAf-list")
    {
        auto c = std::make_shared<System::EigrpItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList>();
        c->parent = this;
        domaf_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::EigrpItems::InstItems::InstList::DomItems::DomList::AfItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : domaf_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::EigrpItems::InstItems::InstList::DomItems::DomList::AfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::EigrpItems::InstItems::InstList::DomItems::DomList::AfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::EigrpItems::InstItems::InstList::DomItems::DomList::AfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "DomAf-list")
        return true;
    return false;
}

System::EigrpItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::DomAfList()
    :
    type{YType::enumeration, "type"},
    asn{YType::uint32, "asn"},
    rtrid{YType::str, "rtrId"},
    intdist{YType::uint8, "intDist"},
    extdist{YType::uint8, "extDist"},
    maxpaths{YType::uint8, "maxPaths"},
    actintvl{YType::uint16, "actIntvl"},
    name{YType::str, "name"}
        ,
    db_items(std::make_shared<System::EigrpItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::DbItems>())
    , stub_items(std::make_shared<System::EigrpItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::StubItems>())
    , stats_items(std::make_shared<System::EigrpItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::StatsItems>())
    , interleak_items(std::make_shared<System::EigrpItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::InterleakItems>())
{
    db_items->parent = this;
    stub_items->parent = this;
    stats_items->parent = this;
    interleak_items->parent = this;

    yang_name = "DomAf-list"; yang_parent_name = "af-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::EigrpItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::~DomAfList()
{
}

bool System::EigrpItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| asn.is_set
	|| rtrid.is_set
	|| intdist.is_set
	|| extdist.is_set
	|| maxpaths.is_set
	|| actintvl.is_set
	|| name.is_set
	|| (db_items !=  nullptr && db_items->has_data())
	|| (stub_items !=  nullptr && stub_items->has_data())
	|| (stats_items !=  nullptr && stats_items->has_data())
	|| (interleak_items !=  nullptr && interleak_items->has_data());
}

bool System::EigrpItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(asn.yfilter)
	|| ydk::is_set(rtrid.yfilter)
	|| ydk::is_set(intdist.yfilter)
	|| ydk::is_set(extdist.yfilter)
	|| ydk::is_set(maxpaths.yfilter)
	|| ydk::is_set(actintvl.yfilter)
	|| ydk::is_set(name.yfilter)
	|| (db_items !=  nullptr && db_items->has_operation())
	|| (stub_items !=  nullptr && stub_items->has_operation())
	|| (stats_items !=  nullptr && stats_items->has_operation())
	|| (interleak_items !=  nullptr && interleak_items->has_operation());
}

std::string System::EigrpItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DomAf-list";
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::EigrpItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (asn.is_set || is_set(asn.yfilter)) leaf_name_data.push_back(asn.get_name_leafdata());
    if (rtrid.is_set || is_set(rtrid.yfilter)) leaf_name_data.push_back(rtrid.get_name_leafdata());
    if (intdist.is_set || is_set(intdist.yfilter)) leaf_name_data.push_back(intdist.get_name_leafdata());
    if (extdist.is_set || is_set(extdist.yfilter)) leaf_name_data.push_back(extdist.get_name_leafdata());
    if (maxpaths.is_set || is_set(maxpaths.yfilter)) leaf_name_data.push_back(maxpaths.get_name_leafdata());
    if (actintvl.is_set || is_set(actintvl.yfilter)) leaf_name_data.push_back(actintvl.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::EigrpItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "db-items")
    {
        if(db_items == nullptr)
        {
            db_items = std::make_shared<System::EigrpItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::DbItems>();
        }
        return db_items;
    }

    if(child_yang_name == "stub-items")
    {
        if(stub_items == nullptr)
        {
            stub_items = std::make_shared<System::EigrpItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::StubItems>();
        }
        return stub_items;
    }

    if(child_yang_name == "stats-items")
    {
        if(stats_items == nullptr)
        {
            stats_items = std::make_shared<System::EigrpItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::StatsItems>();
        }
        return stats_items;
    }

    if(child_yang_name == "interleak-items")
    {
        if(interleak_items == nullptr)
        {
            interleak_items = std::make_shared<System::EigrpItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::InterleakItems>();
        }
        return interleak_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::EigrpItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(db_items != nullptr)
    {
        children["db-items"] = db_items;
    }

    if(stub_items != nullptr)
    {
        children["stub-items"] = stub_items;
    }

    if(stats_items != nullptr)
    {
        children["stats-items"] = stats_items;
    }

    if(interleak_items != nullptr)
    {
        children["interleak-items"] = interleak_items;
    }

    return children;
}

void System::EigrpItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asn")
    {
        asn = value;
        asn.value_namespace = name_space;
        asn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rtrId")
    {
        rtrid = value;
        rtrid.value_namespace = name_space;
        rtrid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "intDist")
    {
        intdist = value;
        intdist.value_namespace = name_space;
        intdist.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "extDist")
    {
        extdist = value;
        extdist.value_namespace = name_space;
        extdist.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maxPaths")
    {
        maxpaths = value;
        maxpaths.value_namespace = name_space;
        maxpaths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "actIntvl")
    {
        actintvl = value;
        actintvl.value_namespace = name_space;
        actintvl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void System::EigrpItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "asn")
    {
        asn.yfilter = yfilter;
    }
    if(value_path == "rtrId")
    {
        rtrid.yfilter = yfilter;
    }
    if(value_path == "intDist")
    {
        intdist.yfilter = yfilter;
    }
    if(value_path == "extDist")
    {
        extdist.yfilter = yfilter;
    }
    if(value_path == "maxPaths")
    {
        maxpaths.yfilter = yfilter;
    }
    if(value_path == "actIntvl")
    {
        actintvl.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool System::EigrpItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "db-items" || name == "stub-items" || name == "stats-items" || name == "interleak-items" || name == "type" || name == "asn" || name == "rtrId" || name == "intDist" || name == "extDist" || name == "maxPaths" || name == "actIntvl" || name == "name")
        return true;
    return false;
}

System::EigrpItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::DbItems::DbItems()
    :
    db_list(this, {"type"})
{

    yang_name = "db-items"; yang_parent_name = "DomAf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::EigrpItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::DbItems::~DbItems()
{
}

bool System::EigrpItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::DbItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<db_list.len(); index++)
    {
        if(db_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::EigrpItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::DbItems::has_operation() const
{
    for (std::size_t index=0; index<db_list.len(); index++)
    {
        if(db_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::EigrpItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::DbItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "db-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::EigrpItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::DbItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::EigrpItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::DbItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Db-list")
    {
        auto c = std::make_shared<System::EigrpItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::DbItems::DbList>();
        c->parent = this;
        db_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::EigrpItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::DbItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : db_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::EigrpItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::DbItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::EigrpItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::DbItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::EigrpItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::DbItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Db-list")
        return true;
    return false;
}

System::EigrpItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::DbItems::DbList::DbList()
    :
    type{YType::enumeration, "type"},
    name{YType::str, "name"}
        ,
    rt_items(std::make_shared<System::EigrpItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::DbItems::DbList::RtItems>())
{
    rt_items->parent = this;

    yang_name = "Db-list"; yang_parent_name = "db-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::EigrpItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::DbItems::DbList::~DbList()
{
}

bool System::EigrpItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::DbItems::DbList::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| name.is_set
	|| (rt_items !=  nullptr && rt_items->has_data());
}

bool System::EigrpItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::DbItems::DbList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(name.yfilter)
	|| (rt_items !=  nullptr && rt_items->has_operation());
}

std::string System::EigrpItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::DbItems::DbList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Db-list";
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::EigrpItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::DbItems::DbList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::EigrpItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::DbItems::DbList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rt-items")
    {
        if(rt_items == nullptr)
        {
            rt_items = std::make_shared<System::EigrpItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::DbItems::DbList::RtItems>();
        }
        return rt_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::EigrpItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::DbItems::DbList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(rt_items != nullptr)
    {
        children["rt-items"] = rt_items;
    }

    return children;
}

void System::EigrpItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::DbItems::DbList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void System::EigrpItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::DbItems::DbList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool System::EigrpItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::DbItems::DbList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rt-items" || name == "type" || name == "name")
        return true;
    return false;
}

System::EigrpItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::DbItems::DbList::RtItems::RtItems()
    :
    route_list(this, {"pfx"})
{

    yang_name = "rt-items"; yang_parent_name = "Db-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::EigrpItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::DbItems::DbList::RtItems::~RtItems()
{
}

bool System::EigrpItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::DbItems::DbList::RtItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<route_list.len(); index++)
    {
        if(route_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::EigrpItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::DbItems::DbList::RtItems::has_operation() const
{
    for (std::size_t index=0; index<route_list.len(); index++)
    {
        if(route_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::EigrpItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::DbItems::DbList::RtItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rt-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::EigrpItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::DbItems::DbList::RtItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::EigrpItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::DbItems::DbList::RtItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Route-list")
    {
        auto c = std::make_shared<System::EigrpItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::DbItems::DbList::RtItems::RouteList>();
        c->parent = this;
        route_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::EigrpItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::DbItems::DbList::RtItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : route_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::EigrpItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::DbItems::DbList::RtItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::EigrpItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::DbItems::DbList::RtItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::EigrpItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::DbItems::DbList::RtItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Route-list")
        return true;
    return false;
}

System::EigrpItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::DbItems::DbList::RtItems::RouteList::RouteList()
    :
    pfx{YType::str, "pfx"},
    operst{YType::enumeration, "operSt"},
    fdist{YType::uint64, "fDist"},
    actstqual{YType::str, "actStQual"},
    chgqual{YType::str, "chgQual"},
    lastactts{YType::str, "lastActTs"},
    siaquerycnt{YType::uint32, "siaQueryCnt"},
    flags{YType::str, "flags"},
    name{YType::str, "name"}
        ,
    nh_items(std::make_shared<System::EigrpItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::DbItems::DbList::RtItems::RouteList::NhItems>())
{
    nh_items->parent = this;

    yang_name = "Route-list"; yang_parent_name = "rt-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::EigrpItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::DbItems::DbList::RtItems::RouteList::~RouteList()
{
}

bool System::EigrpItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::DbItems::DbList::RtItems::RouteList::has_data() const
{
    if (is_presence_container) return true;
    return pfx.is_set
	|| operst.is_set
	|| fdist.is_set
	|| actstqual.is_set
	|| chgqual.is_set
	|| lastactts.is_set
	|| siaquerycnt.is_set
	|| flags.is_set
	|| name.is_set
	|| (nh_items !=  nullptr && nh_items->has_data());
}

bool System::EigrpItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::DbItems::DbList::RtItems::RouteList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pfx.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(fdist.yfilter)
	|| ydk::is_set(actstqual.yfilter)
	|| ydk::is_set(chgqual.yfilter)
	|| ydk::is_set(lastactts.yfilter)
	|| ydk::is_set(siaquerycnt.yfilter)
	|| ydk::is_set(flags.yfilter)
	|| ydk::is_set(name.yfilter)
	|| (nh_items !=  nullptr && nh_items->has_operation());
}

std::string System::EigrpItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::DbItems::DbList::RtItems::RouteList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Route-list";
    ADD_KEY_TOKEN(pfx, "pfx");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::EigrpItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::DbItems::DbList::RtItems::RouteList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pfx.is_set || is_set(pfx.yfilter)) leaf_name_data.push_back(pfx.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (fdist.is_set || is_set(fdist.yfilter)) leaf_name_data.push_back(fdist.get_name_leafdata());
    if (actstqual.is_set || is_set(actstqual.yfilter)) leaf_name_data.push_back(actstqual.get_name_leafdata());
    if (chgqual.is_set || is_set(chgqual.yfilter)) leaf_name_data.push_back(chgqual.get_name_leafdata());
    if (lastactts.is_set || is_set(lastactts.yfilter)) leaf_name_data.push_back(lastactts.get_name_leafdata());
    if (siaquerycnt.is_set || is_set(siaquerycnt.yfilter)) leaf_name_data.push_back(siaquerycnt.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::EigrpItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::DbItems::DbList::RtItems::RouteList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nh-items")
    {
        if(nh_items == nullptr)
        {
            nh_items = std::make_shared<System::EigrpItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::DbItems::DbList::RtItems::RouteList::NhItems>();
        }
        return nh_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::EigrpItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::DbItems::DbList::RtItems::RouteList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(nh_items != nullptr)
    {
        children["nh-items"] = nh_items;
    }

    return children;
}

void System::EigrpItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::DbItems::DbList::RtItems::RouteList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pfx")
    {
        pfx = value;
        pfx.value_namespace = name_space;
        pfx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fDist")
    {
        fdist = value;
        fdist.value_namespace = name_space;
        fdist.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "actStQual")
    {
        actstqual = value;
        actstqual.value_namespace = name_space;
        actstqual.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "chgQual")
    {
        chgqual = value;
        chgqual.value_namespace = name_space;
        chgqual.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lastActTs")
    {
        lastactts = value;
        lastactts.value_namespace = name_space;
        lastactts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "siaQueryCnt")
    {
        siaquerycnt = value;
        siaquerycnt.value_namespace = name_space;
        siaquerycnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void System::EigrpItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::DbItems::DbList::RtItems::RouteList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pfx")
    {
        pfx.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "fDist")
    {
        fdist.yfilter = yfilter;
    }
    if(value_path == "actStQual")
    {
        actstqual.yfilter = yfilter;
    }
    if(value_path == "chgQual")
    {
        chgqual.yfilter = yfilter;
    }
    if(value_path == "lastActTs")
    {
        lastactts.yfilter = yfilter;
    }
    if(value_path == "siaQueryCnt")
    {
        siaquerycnt.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool System::EigrpItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::DbItems::DbList::RtItems::RouteList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nh-items" || name == "pfx" || name == "operSt" || name == "fDist" || name == "actStQual" || name == "chgQual" || name == "lastActTs" || name == "siaQueryCnt" || name == "flags" || name == "name")
        return true;
    return false;
}

System::EigrpItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::DbItems::DbList::RtItems::RouteList::NhItems::NhItems()
    :
    nexthop_list(this, {"informer", "if_"})
{

    yang_name = "nh-items"; yang_parent_name = "Route-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::EigrpItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::DbItems::DbList::RtItems::RouteList::NhItems::~NhItems()
{
}

bool System::EigrpItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::DbItems::DbList::RtItems::RouteList::NhItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<nexthop_list.len(); index++)
    {
        if(nexthop_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::EigrpItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::DbItems::DbList::RtItems::RouteList::NhItems::has_operation() const
{
    for (std::size_t index=0; index<nexthop_list.len(); index++)
    {
        if(nexthop_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::EigrpItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::DbItems::DbList::RtItems::RouteList::NhItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nh-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::EigrpItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::DbItems::DbList::RtItems::RouteList::NhItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::EigrpItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::DbItems::DbList::RtItems::RouteList::NhItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Nexthop-list")
    {
        auto c = std::make_shared<System::EigrpItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::DbItems::DbList::RtItems::RouteList::NhItems::NexthopList>();
        c->parent = this;
        nexthop_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::EigrpItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::DbItems::DbList::RtItems::RouteList::NhItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : nexthop_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::EigrpItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::DbItems::DbList::RtItems::RouteList::NhItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::EigrpItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::DbItems::DbList::RtItems::RouteList::NhItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::EigrpItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::DbItems::DbList::RtItems::RouteList::NhItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Nexthop-list")
        return true;
    return false;
}

System::EigrpItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::DbItems::DbList::RtItems::RouteList::NhItems::NexthopList::NexthopList()
    :
    informer{YType::str, "informer"},
    if_{YType::str, "if"},
    addr{YType::str, "addr"},
    origin{YType::enumeration, "origin"},
    fdist{YType::uint64, "fDist"},
    repdist{YType::uint64, "repDist"},
    chgqual{YType::str, "chgQual"},
    minbw{YType::uint64, "minBw"},
    delay{YType::uint64, "delay"},
    minmtu{YType::uint32, "minMTU"},
    hops{YType::uint16, "hops"},
    load{YType::uint8, "load"},
    reliability{YType::uint8, "reliability"},
    tag{YType::uint32, "tag"},
    flags{YType::str, "flags"},
    uribst{YType::str, "uribSt"},
    name{YType::str, "name"}
        ,
    extcomm_items(std::make_shared<System::EigrpItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::DbItems::DbList::RtItems::RouteList::NhItems::NexthopList::ExtcommItems>())
    , extrec_items(std::make_shared<System::EigrpItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::DbItems::DbList::RtItems::RouteList::NhItems::NexthopList::ExtrecItems>())
{
    extcomm_items->parent = this;
    extrec_items->parent = this;

    yang_name = "Nexthop-list"; yang_parent_name = "nh-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::EigrpItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::DbItems::DbList::RtItems::RouteList::NhItems::NexthopList::~NexthopList()
{
}

bool System::EigrpItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::DbItems::DbList::RtItems::RouteList::NhItems::NexthopList::has_data() const
{
    if (is_presence_container) return true;
    return informer.is_set
	|| if_.is_set
	|| addr.is_set
	|| origin.is_set
	|| fdist.is_set
	|| repdist.is_set
	|| chgqual.is_set
	|| minbw.is_set
	|| delay.is_set
	|| minmtu.is_set
	|| hops.is_set
	|| load.is_set
	|| reliability.is_set
	|| tag.is_set
	|| flags.is_set
	|| uribst.is_set
	|| name.is_set
	|| (extcomm_items !=  nullptr && extcomm_items->has_data())
	|| (extrec_items !=  nullptr && extrec_items->has_data());
}

bool System::EigrpItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::DbItems::DbList::RtItems::RouteList::NhItems::NexthopList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(informer.yfilter)
	|| ydk::is_set(if_.yfilter)
	|| ydk::is_set(addr.yfilter)
	|| ydk::is_set(origin.yfilter)
	|| ydk::is_set(fdist.yfilter)
	|| ydk::is_set(repdist.yfilter)
	|| ydk::is_set(chgqual.yfilter)
	|| ydk::is_set(minbw.yfilter)
	|| ydk::is_set(delay.yfilter)
	|| ydk::is_set(minmtu.yfilter)
	|| ydk::is_set(hops.yfilter)
	|| ydk::is_set(load.yfilter)
	|| ydk::is_set(reliability.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(flags.yfilter)
	|| ydk::is_set(uribst.yfilter)
	|| ydk::is_set(name.yfilter)
	|| (extcomm_items !=  nullptr && extcomm_items->has_operation())
	|| (extrec_items !=  nullptr && extrec_items->has_operation());
}

std::string System::EigrpItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::DbItems::DbList::RtItems::RouteList::NhItems::NexthopList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Nexthop-list";
    ADD_KEY_TOKEN(informer, "informer");
    ADD_KEY_TOKEN(if_, "if");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::EigrpItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::DbItems::DbList::RtItems::RouteList::NhItems::NexthopList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (informer.is_set || is_set(informer.yfilter)) leaf_name_data.push_back(informer.get_name_leafdata());
    if (if_.is_set || is_set(if_.yfilter)) leaf_name_data.push_back(if_.get_name_leafdata());
    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (origin.is_set || is_set(origin.yfilter)) leaf_name_data.push_back(origin.get_name_leafdata());
    if (fdist.is_set || is_set(fdist.yfilter)) leaf_name_data.push_back(fdist.get_name_leafdata());
    if (repdist.is_set || is_set(repdist.yfilter)) leaf_name_data.push_back(repdist.get_name_leafdata());
    if (chgqual.is_set || is_set(chgqual.yfilter)) leaf_name_data.push_back(chgqual.get_name_leafdata());
    if (minbw.is_set || is_set(minbw.yfilter)) leaf_name_data.push_back(minbw.get_name_leafdata());
    if (delay.is_set || is_set(delay.yfilter)) leaf_name_data.push_back(delay.get_name_leafdata());
    if (minmtu.is_set || is_set(minmtu.yfilter)) leaf_name_data.push_back(minmtu.get_name_leafdata());
    if (hops.is_set || is_set(hops.yfilter)) leaf_name_data.push_back(hops.get_name_leafdata());
    if (load.is_set || is_set(load.yfilter)) leaf_name_data.push_back(load.get_name_leafdata());
    if (reliability.is_set || is_set(reliability.yfilter)) leaf_name_data.push_back(reliability.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (uribst.is_set || is_set(uribst.yfilter)) leaf_name_data.push_back(uribst.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::EigrpItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::DbItems::DbList::RtItems::RouteList::NhItems::NexthopList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "extcomm-items")
    {
        if(extcomm_items == nullptr)
        {
            extcomm_items = std::make_shared<System::EigrpItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::DbItems::DbList::RtItems::RouteList::NhItems::NexthopList::ExtcommItems>();
        }
        return extcomm_items;
    }

    if(child_yang_name == "extrec-items")
    {
        if(extrec_items == nullptr)
        {
            extrec_items = std::make_shared<System::EigrpItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::DbItems::DbList::RtItems::RouteList::NhItems::NexthopList::ExtrecItems>();
        }
        return extrec_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::EigrpItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::DbItems::DbList::RtItems::RouteList::NhItems::NexthopList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(extcomm_items != nullptr)
    {
        children["extcomm-items"] = extcomm_items;
    }

    if(extrec_items != nullptr)
    {
        children["extrec-items"] = extrec_items;
    }

    return children;
}

void System::EigrpItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::DbItems::DbList::RtItems::RouteList::NhItems::NexthopList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "informer")
    {
        informer = value;
        informer.value_namespace = name_space;
        informer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "if")
    {
        if_ = value;
        if_.value_namespace = name_space;
        if_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "addr")
    {
        addr = value;
        addr.value_namespace = name_space;
        addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "origin")
    {
        origin = value;
        origin.value_namespace = name_space;
        origin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fDist")
    {
        fdist = value;
        fdist.value_namespace = name_space;
        fdist.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repDist")
    {
        repdist = value;
        repdist.value_namespace = name_space;
        repdist.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "chgQual")
    {
        chgqual = value;
        chgqual.value_namespace = name_space;
        chgqual.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minBw")
    {
        minbw = value;
        minbw.value_namespace = name_space;
        minbw.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "delay")
    {
        delay = value;
        delay.value_namespace = name_space;
        delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minMTU")
    {
        minmtu = value;
        minmtu.value_namespace = name_space;
        minmtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hops")
    {
        hops = value;
        hops.value_namespace = name_space;
        hops.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "load")
    {
        load = value;
        load.value_namespace = name_space;
        load.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reliability")
    {
        reliability = value;
        reliability.value_namespace = name_space;
        reliability.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "uribSt")
    {
        uribst = value;
        uribst.value_namespace = name_space;
        uribst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void System::EigrpItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::DbItems::DbList::RtItems::RouteList::NhItems::NexthopList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "informer")
    {
        informer.yfilter = yfilter;
    }
    if(value_path == "if")
    {
        if_.yfilter = yfilter;
    }
    if(value_path == "addr")
    {
        addr.yfilter = yfilter;
    }
    if(value_path == "origin")
    {
        origin.yfilter = yfilter;
    }
    if(value_path == "fDist")
    {
        fdist.yfilter = yfilter;
    }
    if(value_path == "repDist")
    {
        repdist.yfilter = yfilter;
    }
    if(value_path == "chgQual")
    {
        chgqual.yfilter = yfilter;
    }
    if(value_path == "minBw")
    {
        minbw.yfilter = yfilter;
    }
    if(value_path == "delay")
    {
        delay.yfilter = yfilter;
    }
    if(value_path == "minMTU")
    {
        minmtu.yfilter = yfilter;
    }
    if(value_path == "hops")
    {
        hops.yfilter = yfilter;
    }
    if(value_path == "load")
    {
        load.yfilter = yfilter;
    }
    if(value_path == "reliability")
    {
        reliability.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
    if(value_path == "uribSt")
    {
        uribst.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool System::EigrpItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::DbItems::DbList::RtItems::RouteList::NhItems::NexthopList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "extcomm-items" || name == "extrec-items" || name == "informer" || name == "if" || name == "addr" || name == "origin" || name == "fDist" || name == "repDist" || name == "chgQual" || name == "minBw" || name == "delay" || name == "minMTU" || name == "hops" || name == "load" || name == "reliability" || name == "tag" || name == "flags" || name == "uribSt" || name == "name")
        return true;
    return false;
}

System::EigrpItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::DbItems::DbList::RtItems::RouteList::NhItems::NexthopList::ExtcommItems::ExtcommItems()
    :
    extcommnhrec_list(this, {"comm"})
{

    yang_name = "extcomm-items"; yang_parent_name = "Nexthop-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::EigrpItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::DbItems::DbList::RtItems::RouteList::NhItems::NexthopList::ExtcommItems::~ExtcommItems()
{
}

bool System::EigrpItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::DbItems::DbList::RtItems::RouteList::NhItems::NexthopList::ExtcommItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<extcommnhrec_list.len(); index++)
    {
        if(extcommnhrec_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::EigrpItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::DbItems::DbList::RtItems::RouteList::NhItems::NexthopList::ExtcommItems::has_operation() const
{
    for (std::size_t index=0; index<extcommnhrec_list.len(); index++)
    {
        if(extcommnhrec_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::EigrpItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::DbItems::DbList::RtItems::RouteList::NhItems::NexthopList::ExtcommItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extcomm-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::EigrpItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::DbItems::DbList::RtItems::RouteList::NhItems::NexthopList::ExtcommItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::EigrpItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::DbItems::DbList::RtItems::RouteList::NhItems::NexthopList::ExtcommItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ExtCommNhRec-list")
    {
        auto c = std::make_shared<System::EigrpItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::DbItems::DbList::RtItems::RouteList::NhItems::NexthopList::ExtcommItems::ExtCommNhRecList>();
        c->parent = this;
        extcommnhrec_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::EigrpItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::DbItems::DbList::RtItems::RouteList::NhItems::NexthopList::ExtcommItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : extcommnhrec_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::EigrpItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::DbItems::DbList::RtItems::RouteList::NhItems::NexthopList::ExtcommItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::EigrpItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::DbItems::DbList::RtItems::RouteList::NhItems::NexthopList::ExtcommItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::EigrpItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::DbItems::DbList::RtItems::RouteList::NhItems::NexthopList::ExtcommItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ExtCommNhRec-list")
        return true;
    return false;
}

System::EigrpItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::DbItems::DbList::RtItems::RouteList::NhItems::NexthopList::ExtcommItems::ExtCommNhRecList::ExtCommNhRecList()
    :
    comm{YType::str, "comm"}
{

    yang_name = "ExtCommNhRec-list"; yang_parent_name = "extcomm-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::EigrpItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::DbItems::DbList::RtItems::RouteList::NhItems::NexthopList::ExtcommItems::ExtCommNhRecList::~ExtCommNhRecList()
{
}

bool System::EigrpItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::DbItems::DbList::RtItems::RouteList::NhItems::NexthopList::ExtcommItems::ExtCommNhRecList::has_data() const
{
    if (is_presence_container) return true;
    return comm.is_set;
}

bool System::EigrpItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::DbItems::DbList::RtItems::RouteList::NhItems::NexthopList::ExtcommItems::ExtCommNhRecList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(comm.yfilter);
}

std::string System::EigrpItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::DbItems::DbList::RtItems::RouteList::NhItems::NexthopList::ExtcommItems::ExtCommNhRecList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ExtCommNhRec-list";
    ADD_KEY_TOKEN(comm, "comm");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::EigrpItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::DbItems::DbList::RtItems::RouteList::NhItems::NexthopList::ExtcommItems::ExtCommNhRecList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (comm.is_set || is_set(comm.yfilter)) leaf_name_data.push_back(comm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::EigrpItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::DbItems::DbList::RtItems::RouteList::NhItems::NexthopList::ExtcommItems::ExtCommNhRecList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::EigrpItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::DbItems::DbList::RtItems::RouteList::NhItems::NexthopList::ExtcommItems::ExtCommNhRecList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::EigrpItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::DbItems::DbList::RtItems::RouteList::NhItems::NexthopList::ExtcommItems::ExtCommNhRecList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "comm")
    {
        comm = value;
        comm.value_namespace = name_space;
        comm.value_namespace_prefix = name_space_prefix;
    }
}

void System::EigrpItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::DbItems::DbList::RtItems::RouteList::NhItems::NexthopList::ExtcommItems::ExtCommNhRecList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "comm")
    {
        comm.yfilter = yfilter;
    }
}

bool System::EigrpItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::DbItems::DbList::RtItems::RouteList::NhItems::NexthopList::ExtcommItems::ExtCommNhRecList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "comm")
        return true;
    return false;
}

System::EigrpItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::DbItems::DbList::RtItems::RouteList::NhItems::NexthopList::ExtrecItems::ExtrecItems()
    :
    origin{YType::enumeration, "origin"},
    tag{YType::uint32, "tag"},
    asn{YType::uint32, "asn"},
    origrtrid{YType::str, "origRtrId"},
    metric{YType::uint32, "metric"},
    flags{YType::str, "flags"},
    name{YType::str, "name"}
{

    yang_name = "extrec-items"; yang_parent_name = "Nexthop-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::EigrpItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::DbItems::DbList::RtItems::RouteList::NhItems::NexthopList::ExtrecItems::~ExtrecItems()
{
}

bool System::EigrpItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::DbItems::DbList::RtItems::RouteList::NhItems::NexthopList::ExtrecItems::has_data() const
{
    if (is_presence_container) return true;
    return origin.is_set
	|| tag.is_set
	|| asn.is_set
	|| origrtrid.is_set
	|| metric.is_set
	|| flags.is_set
	|| name.is_set;
}

bool System::EigrpItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::DbItems::DbList::RtItems::RouteList::NhItems::NexthopList::ExtrecItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(origin.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(asn.yfilter)
	|| ydk::is_set(origrtrid.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(flags.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string System::EigrpItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::DbItems::DbList::RtItems::RouteList::NhItems::NexthopList::ExtrecItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extrec-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::EigrpItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::DbItems::DbList::RtItems::RouteList::NhItems::NexthopList::ExtrecItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (origin.is_set || is_set(origin.yfilter)) leaf_name_data.push_back(origin.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (asn.is_set || is_set(asn.yfilter)) leaf_name_data.push_back(asn.get_name_leafdata());
    if (origrtrid.is_set || is_set(origrtrid.yfilter)) leaf_name_data.push_back(origrtrid.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::EigrpItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::DbItems::DbList::RtItems::RouteList::NhItems::NexthopList::ExtrecItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::EigrpItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::DbItems::DbList::RtItems::RouteList::NhItems::NexthopList::ExtrecItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::EigrpItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::DbItems::DbList::RtItems::RouteList::NhItems::NexthopList::ExtrecItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "origin")
    {
        origin = value;
        origin.value_namespace = name_space;
        origin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asn")
    {
        asn = value;
        asn.value_namespace = name_space;
        asn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "origRtrId")
    {
        origrtrid = value;
        origrtrid.value_namespace = name_space;
        origrtrid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void System::EigrpItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::DbItems::DbList::RtItems::RouteList::NhItems::NexthopList::ExtrecItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "origin")
    {
        origin.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "asn")
    {
        asn.yfilter = yfilter;
    }
    if(value_path == "origRtrId")
    {
        origrtrid.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool System::EigrpItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::DbItems::DbList::RtItems::RouteList::NhItems::NexthopList::ExtrecItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "origin" || name == "tag" || name == "asn" || name == "origRtrId" || name == "metric" || name == "flags" || name == "name")
        return true;
    return false;
}

System::EigrpItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::StubItems::StubItems()
    :
    rtadvctrl{YType::str, "rtAdvCtrl"},
    name{YType::str, "name"},
    descr{YType::str, "descr"}
{

    yang_name = "stub-items"; yang_parent_name = "DomAf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::EigrpItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::StubItems::~StubItems()
{
}

bool System::EigrpItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::StubItems::has_data() const
{
    if (is_presence_container) return true;
    return rtadvctrl.is_set
	|| name.is_set
	|| descr.is_set;
}

bool System::EigrpItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::StubItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rtadvctrl.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter);
}

std::string System::EigrpItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::StubItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stub-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::EigrpItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::StubItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rtadvctrl.is_set || is_set(rtadvctrl.yfilter)) leaf_name_data.push_back(rtadvctrl.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::EigrpItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::StubItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::EigrpItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::StubItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::EigrpItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::StubItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rtAdvCtrl")
    {
        rtadvctrl = value;
        rtadvctrl.value_namespace = name_space;
        rtadvctrl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
}

void System::EigrpItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::StubItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rtAdvCtrl")
    {
        rtadvctrl.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
}

bool System::EigrpItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::StubItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rtAdvCtrl" || name == "name" || name == "descr")
        return true;
    return false;
}

System::EigrpItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::StatsItems::StatsItems()
    :
    numintf{YType::uint32, "numIntf"},
    numpassiveintf{YType::uint32, "numPassiveIntf"},
    numnbrs{YType::uint32, "numNbrs"},
    hellosent{YType::uint32, "helloSent"},
    hellorcvd{YType::uint32, "helloRcvd"},
    qrysent{YType::uint32, "qrySent"},
    qryrcvd{YType::uint32, "qryRcvd"},
    updsent{YType::uint32, "updSent"},
    updrcvd{YType::uint32, "updRcvd"},
    repsent{YType::uint32, "repSent"},
    reprcvd{YType::uint32, "repRcvd"},
    acksent{YType::uint32, "ackSent"},
    ackrcvd{YType::uint32, "ackRcvd"},
    siaqrysent{YType::uint32, "siaQrySent"},
    siaqryrcvd{YType::uint32, "siaQryRcvd"},
    siarepsent{YType::uint32, "siaRepSent"},
    siareprcvd{YType::uint32, "siaRepRcvd"},
    maxqdepth{YType::uint32, "maxQDepth"},
    inqdrops{YType::uint32, "inQDrops"},
    headser{YType::uint64, "headSer"},
    nextser{YType::uint64, "nextSer"},
    rtcnt{YType::uint32, "rtCnt"},
    pendreplies{YType::uint32, "pendReplies"},
    xmitdummies{YType::uint32, "xmitDummies"}
{

    yang_name = "stats-items"; yang_parent_name = "DomAf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::EigrpItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::StatsItems::~StatsItems()
{
}

bool System::EigrpItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::StatsItems::has_data() const
{
    if (is_presence_container) return true;
    return numintf.is_set
	|| numpassiveintf.is_set
	|| numnbrs.is_set
	|| hellosent.is_set
	|| hellorcvd.is_set
	|| qrysent.is_set
	|| qryrcvd.is_set
	|| updsent.is_set
	|| updrcvd.is_set
	|| repsent.is_set
	|| reprcvd.is_set
	|| acksent.is_set
	|| ackrcvd.is_set
	|| siaqrysent.is_set
	|| siaqryrcvd.is_set
	|| siarepsent.is_set
	|| siareprcvd.is_set
	|| maxqdepth.is_set
	|| inqdrops.is_set
	|| headser.is_set
	|| nextser.is_set
	|| rtcnt.is_set
	|| pendreplies.is_set
	|| xmitdummies.is_set;
}

bool System::EigrpItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::StatsItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(numintf.yfilter)
	|| ydk::is_set(numpassiveintf.yfilter)
	|| ydk::is_set(numnbrs.yfilter)
	|| ydk::is_set(hellosent.yfilter)
	|| ydk::is_set(hellorcvd.yfilter)
	|| ydk::is_set(qrysent.yfilter)
	|| ydk::is_set(qryrcvd.yfilter)
	|| ydk::is_set(updsent.yfilter)
	|| ydk::is_set(updrcvd.yfilter)
	|| ydk::is_set(repsent.yfilter)
	|| ydk::is_set(reprcvd.yfilter)
	|| ydk::is_set(acksent.yfilter)
	|| ydk::is_set(ackrcvd.yfilter)
	|| ydk::is_set(siaqrysent.yfilter)
	|| ydk::is_set(siaqryrcvd.yfilter)
	|| ydk::is_set(siarepsent.yfilter)
	|| ydk::is_set(siareprcvd.yfilter)
	|| ydk::is_set(maxqdepth.yfilter)
	|| ydk::is_set(inqdrops.yfilter)
	|| ydk::is_set(headser.yfilter)
	|| ydk::is_set(nextser.yfilter)
	|| ydk::is_set(rtcnt.yfilter)
	|| ydk::is_set(pendreplies.yfilter)
	|| ydk::is_set(xmitdummies.yfilter);
}

std::string System::EigrpItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::StatsItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stats-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::EigrpItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::StatsItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (numintf.is_set || is_set(numintf.yfilter)) leaf_name_data.push_back(numintf.get_name_leafdata());
    if (numpassiveintf.is_set || is_set(numpassiveintf.yfilter)) leaf_name_data.push_back(numpassiveintf.get_name_leafdata());
    if (numnbrs.is_set || is_set(numnbrs.yfilter)) leaf_name_data.push_back(numnbrs.get_name_leafdata());
    if (hellosent.is_set || is_set(hellosent.yfilter)) leaf_name_data.push_back(hellosent.get_name_leafdata());
    if (hellorcvd.is_set || is_set(hellorcvd.yfilter)) leaf_name_data.push_back(hellorcvd.get_name_leafdata());
    if (qrysent.is_set || is_set(qrysent.yfilter)) leaf_name_data.push_back(qrysent.get_name_leafdata());
    if (qryrcvd.is_set || is_set(qryrcvd.yfilter)) leaf_name_data.push_back(qryrcvd.get_name_leafdata());
    if (updsent.is_set || is_set(updsent.yfilter)) leaf_name_data.push_back(updsent.get_name_leafdata());
    if (updrcvd.is_set || is_set(updrcvd.yfilter)) leaf_name_data.push_back(updrcvd.get_name_leafdata());
    if (repsent.is_set || is_set(repsent.yfilter)) leaf_name_data.push_back(repsent.get_name_leafdata());
    if (reprcvd.is_set || is_set(reprcvd.yfilter)) leaf_name_data.push_back(reprcvd.get_name_leafdata());
    if (acksent.is_set || is_set(acksent.yfilter)) leaf_name_data.push_back(acksent.get_name_leafdata());
    if (ackrcvd.is_set || is_set(ackrcvd.yfilter)) leaf_name_data.push_back(ackrcvd.get_name_leafdata());
    if (siaqrysent.is_set || is_set(siaqrysent.yfilter)) leaf_name_data.push_back(siaqrysent.get_name_leafdata());
    if (siaqryrcvd.is_set || is_set(siaqryrcvd.yfilter)) leaf_name_data.push_back(siaqryrcvd.get_name_leafdata());
    if (siarepsent.is_set || is_set(siarepsent.yfilter)) leaf_name_data.push_back(siarepsent.get_name_leafdata());
    if (siareprcvd.is_set || is_set(siareprcvd.yfilter)) leaf_name_data.push_back(siareprcvd.get_name_leafdata());
    if (maxqdepth.is_set || is_set(maxqdepth.yfilter)) leaf_name_data.push_back(maxqdepth.get_name_leafdata());
    if (inqdrops.is_set || is_set(inqdrops.yfilter)) leaf_name_data.push_back(inqdrops.get_name_leafdata());
    if (headser.is_set || is_set(headser.yfilter)) leaf_name_data.push_back(headser.get_name_leafdata());
    if (nextser.is_set || is_set(nextser.yfilter)) leaf_name_data.push_back(nextser.get_name_leafdata());
    if (rtcnt.is_set || is_set(rtcnt.yfilter)) leaf_name_data.push_back(rtcnt.get_name_leafdata());
    if (pendreplies.is_set || is_set(pendreplies.yfilter)) leaf_name_data.push_back(pendreplies.get_name_leafdata());
    if (xmitdummies.is_set || is_set(xmitdummies.yfilter)) leaf_name_data.push_back(xmitdummies.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::EigrpItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::StatsItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::EigrpItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::StatsItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::EigrpItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::StatsItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "numIntf")
    {
        numintf = value;
        numintf.value_namespace = name_space;
        numintf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "numPassiveIntf")
    {
        numpassiveintf = value;
        numpassiveintf.value_namespace = name_space;
        numpassiveintf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "numNbrs")
    {
        numnbrs = value;
        numnbrs.value_namespace = name_space;
        numnbrs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "helloSent")
    {
        hellosent = value;
        hellosent.value_namespace = name_space;
        hellosent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "helloRcvd")
    {
        hellorcvd = value;
        hellorcvd.value_namespace = name_space;
        hellorcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qrySent")
    {
        qrysent = value;
        qrysent.value_namespace = name_space;
        qrysent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qryRcvd")
    {
        qryrcvd = value;
        qryrcvd.value_namespace = name_space;
        qryrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "updSent")
    {
        updsent = value;
        updsent.value_namespace = name_space;
        updsent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "updRcvd")
    {
        updrcvd = value;
        updrcvd.value_namespace = name_space;
        updrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repSent")
    {
        repsent = value;
        repsent.value_namespace = name_space;
        repsent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repRcvd")
    {
        reprcvd = value;
        reprcvd.value_namespace = name_space;
        reprcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ackSent")
    {
        acksent = value;
        acksent.value_namespace = name_space;
        acksent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ackRcvd")
    {
        ackrcvd = value;
        ackrcvd.value_namespace = name_space;
        ackrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "siaQrySent")
    {
        siaqrysent = value;
        siaqrysent.value_namespace = name_space;
        siaqrysent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "siaQryRcvd")
    {
        siaqryrcvd = value;
        siaqryrcvd.value_namespace = name_space;
        siaqryrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "siaRepSent")
    {
        siarepsent = value;
        siarepsent.value_namespace = name_space;
        siarepsent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "siaRepRcvd")
    {
        siareprcvd = value;
        siareprcvd.value_namespace = name_space;
        siareprcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maxQDepth")
    {
        maxqdepth = value;
        maxqdepth.value_namespace = name_space;
        maxqdepth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inQDrops")
    {
        inqdrops = value;
        inqdrops.value_namespace = name_space;
        inqdrops.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "headSer")
    {
        headser = value;
        headser.value_namespace = name_space;
        headser.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nextSer")
    {
        nextser = value;
        nextser.value_namespace = name_space;
        nextser.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rtCnt")
    {
        rtcnt = value;
        rtcnt.value_namespace = name_space;
        rtcnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pendReplies")
    {
        pendreplies = value;
        pendreplies.value_namespace = name_space;
        pendreplies.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "xmitDummies")
    {
        xmitdummies = value;
        xmitdummies.value_namespace = name_space;
        xmitdummies.value_namespace_prefix = name_space_prefix;
    }
}

void System::EigrpItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::StatsItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "numIntf")
    {
        numintf.yfilter = yfilter;
    }
    if(value_path == "numPassiveIntf")
    {
        numpassiveintf.yfilter = yfilter;
    }
    if(value_path == "numNbrs")
    {
        numnbrs.yfilter = yfilter;
    }
    if(value_path == "helloSent")
    {
        hellosent.yfilter = yfilter;
    }
    if(value_path == "helloRcvd")
    {
        hellorcvd.yfilter = yfilter;
    }
    if(value_path == "qrySent")
    {
        qrysent.yfilter = yfilter;
    }
    if(value_path == "qryRcvd")
    {
        qryrcvd.yfilter = yfilter;
    }
    if(value_path == "updSent")
    {
        updsent.yfilter = yfilter;
    }
    if(value_path == "updRcvd")
    {
        updrcvd.yfilter = yfilter;
    }
    if(value_path == "repSent")
    {
        repsent.yfilter = yfilter;
    }
    if(value_path == "repRcvd")
    {
        reprcvd.yfilter = yfilter;
    }
    if(value_path == "ackSent")
    {
        acksent.yfilter = yfilter;
    }
    if(value_path == "ackRcvd")
    {
        ackrcvd.yfilter = yfilter;
    }
    if(value_path == "siaQrySent")
    {
        siaqrysent.yfilter = yfilter;
    }
    if(value_path == "siaQryRcvd")
    {
        siaqryrcvd.yfilter = yfilter;
    }
    if(value_path == "siaRepSent")
    {
        siarepsent.yfilter = yfilter;
    }
    if(value_path == "siaRepRcvd")
    {
        siareprcvd.yfilter = yfilter;
    }
    if(value_path == "maxQDepth")
    {
        maxqdepth.yfilter = yfilter;
    }
    if(value_path == "inQDrops")
    {
        inqdrops.yfilter = yfilter;
    }
    if(value_path == "headSer")
    {
        headser.yfilter = yfilter;
    }
    if(value_path == "nextSer")
    {
        nextser.yfilter = yfilter;
    }
    if(value_path == "rtCnt")
    {
        rtcnt.yfilter = yfilter;
    }
    if(value_path == "pendReplies")
    {
        pendreplies.yfilter = yfilter;
    }
    if(value_path == "xmitDummies")
    {
        xmitdummies.yfilter = yfilter;
    }
}

bool System::EigrpItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::StatsItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "numIntf" || name == "numPassiveIntf" || name == "numNbrs" || name == "helloSent" || name == "helloRcvd" || name == "qrySent" || name == "qryRcvd" || name == "updSent" || name == "updRcvd" || name == "repSent" || name == "repRcvd" || name == "ackSent" || name == "ackRcvd" || name == "siaQrySent" || name == "siaQryRcvd" || name == "siaRepSent" || name == "siaRepRcvd" || name == "maxQDepth" || name == "inQDrops" || name == "headSer" || name == "nextSer" || name == "rtCnt" || name == "pendReplies" || name == "xmitDummies")
        return true;
    return false;
}

System::EigrpItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::InterleakItems::InterleakItems()
    :
    interleakp_list(this, {"proto", "inst"})
{

    yang_name = "interleak-items"; yang_parent_name = "DomAf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::EigrpItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::InterleakItems::~InterleakItems()
{
}

bool System::EigrpItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::InterleakItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<interleakp_list.len(); index++)
    {
        if(interleakp_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::EigrpItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::InterleakItems::has_operation() const
{
    for (std::size_t index=0; index<interleakp_list.len(); index++)
    {
        if(interleakp_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::EigrpItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::InterleakItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interleak-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::EigrpItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::InterleakItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::EigrpItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::InterleakItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "InterLeakP-list")
    {
        auto c = std::make_shared<System::EigrpItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::InterleakItems::InterLeakPList>();
        c->parent = this;
        interleakp_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::EigrpItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::InterleakItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : interleakp_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::EigrpItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::InterleakItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::EigrpItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::InterleakItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::EigrpItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::InterleakItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "InterLeakP-list")
        return true;
    return false;
}

System::EigrpItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::InterleakItems::InterLeakPList::InterLeakPList()
    :
    proto{YType::enumeration, "proto"},
    inst{YType::str, "inst"},
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    scope{YType::enumeration, "scope"},
    rtmap{YType::str, "rtMap"},
    asn{YType::str, "asn"}
{

    yang_name = "InterLeakP-list"; yang_parent_name = "interleak-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::EigrpItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::InterleakItems::InterLeakPList::~InterLeakPList()
{
}

bool System::EigrpItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::InterleakItems::InterLeakPList::has_data() const
{
    if (is_presence_container) return true;
    return proto.is_set
	|| inst.is_set
	|| name.is_set
	|| descr.is_set
	|| scope.is_set
	|| rtmap.is_set
	|| asn.is_set;
}

bool System::EigrpItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::InterleakItems::InterLeakPList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(proto.yfilter)
	|| ydk::is_set(inst.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(scope.yfilter)
	|| ydk::is_set(rtmap.yfilter)
	|| ydk::is_set(asn.yfilter);
}

std::string System::EigrpItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::InterleakItems::InterLeakPList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "InterLeakP-list";
    ADD_KEY_TOKEN(proto, "proto");
    ADD_KEY_TOKEN(inst, "inst");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::EigrpItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::InterleakItems::InterLeakPList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (proto.is_set || is_set(proto.yfilter)) leaf_name_data.push_back(proto.get_name_leafdata());
    if (inst.is_set || is_set(inst.yfilter)) leaf_name_data.push_back(inst.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (scope.is_set || is_set(scope.yfilter)) leaf_name_data.push_back(scope.get_name_leafdata());
    if (rtmap.is_set || is_set(rtmap.yfilter)) leaf_name_data.push_back(rtmap.get_name_leafdata());
    if (asn.is_set || is_set(asn.yfilter)) leaf_name_data.push_back(asn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::EigrpItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::InterleakItems::InterLeakPList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::EigrpItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::InterleakItems::InterLeakPList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::EigrpItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::InterleakItems::InterLeakPList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "proto")
    {
        proto = value;
        proto.value_namespace = name_space;
        proto.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inst")
    {
        inst = value;
        inst.value_namespace = name_space;
        inst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "scope")
    {
        scope = value;
        scope.value_namespace = name_space;
        scope.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rtMap")
    {
        rtmap = value;
        rtmap.value_namespace = name_space;
        rtmap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asn")
    {
        asn = value;
        asn.value_namespace = name_space;
        asn.value_namespace_prefix = name_space_prefix;
    }
}

void System::EigrpItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::InterleakItems::InterLeakPList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "proto")
    {
        proto.yfilter = yfilter;
    }
    if(value_path == "inst")
    {
        inst.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "scope")
    {
        scope.yfilter = yfilter;
    }
    if(value_path == "rtMap")
    {
        rtmap.yfilter = yfilter;
    }
    if(value_path == "asn")
    {
        asn.yfilter = yfilter;
    }
}

bool System::EigrpItems::InstItems::InstList::DomItems::DomList::AfItems::DomAfList::InterleakItems::InterLeakPList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "proto" || name == "inst" || name == "name" || name == "descr" || name == "scope" || name == "rtMap" || name == "asn")
        return true;
    return false;
}

System::EigrpItems::InstItems::InstList::DomItems::DomList::IfItems::IfItems()
    :
    if_list(this, {"id"})
{

    yang_name = "if-items"; yang_parent_name = "Dom-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::EigrpItems::InstItems::InstList::DomItems::DomList::IfItems::~IfItems()
{
}

bool System::EigrpItems::InstItems::InstList::DomItems::DomList::IfItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<if_list.len(); index++)
    {
        if(if_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::EigrpItems::InstItems::InstList::DomItems::DomList::IfItems::has_operation() const
{
    for (std::size_t index=0; index<if_list.len(); index++)
    {
        if(if_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::EigrpItems::InstItems::InstList::DomItems::DomList::IfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "if-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::EigrpItems::InstItems::InstList::DomItems::DomList::IfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::EigrpItems::InstItems::InstList::DomItems::DomList::IfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "If-list")
    {
        auto c = std::make_shared<System::EigrpItems::InstItems::InstList::DomItems::DomList::IfItems::IfList>();
        c->parent = this;
        if_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::EigrpItems::InstItems::InstList::DomItems::DomList::IfItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : if_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::EigrpItems::InstItems::InstList::DomItems::DomList::IfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::EigrpItems::InstItems::InstList::DomItems::DomList::IfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::EigrpItems::InstItems::InstList::DomItems::DomList::IfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "If-list")
        return true;
    return false;
}

System::EigrpItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::IfList()
    :
    id{YType::str, "id"},
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    adminst{YType::enumeration, "adminSt"}
        ,
    af_items(std::make_shared<System::EigrpItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AfItems>())
    , rtvrfmbr_items(std::make_shared<System::EigrpItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtvrfMbrItems>())
    , rtnwpathtoif_items(std::make_shared<System::EigrpItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems>())
{
    af_items->parent = this;
    rtvrfmbr_items->parent = this;
    rtnwpathtoif_items->parent = this;

    yang_name = "If-list"; yang_parent_name = "if-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::EigrpItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::~IfList()
{
}

bool System::EigrpItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| name.is_set
	|| descr.is_set
	|| adminst.is_set
	|| (af_items !=  nullptr && af_items->has_data())
	|| (rtvrfmbr_items !=  nullptr && rtvrfmbr_items->has_data())
	|| (rtnwpathtoif_items !=  nullptr && rtnwpathtoif_items->has_data());
}

bool System::EigrpItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| (af_items !=  nullptr && af_items->has_operation())
	|| (rtvrfmbr_items !=  nullptr && rtvrfmbr_items->has_operation())
	|| (rtnwpathtoif_items !=  nullptr && rtnwpathtoif_items->has_operation());
}

std::string System::EigrpItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "If-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::EigrpItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::EigrpItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "af-items")
    {
        if(af_items == nullptr)
        {
            af_items = std::make_shared<System::EigrpItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AfItems>();
        }
        return af_items;
    }

    if(child_yang_name == "rtvrfMbr-items")
    {
        if(rtvrfmbr_items == nullptr)
        {
            rtvrfmbr_items = std::make_shared<System::EigrpItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtvrfMbrItems>();
        }
        return rtvrfmbr_items;
    }

    if(child_yang_name == "rtnwPathToIf-items")
    {
        if(rtnwpathtoif_items == nullptr)
        {
            rtnwpathtoif_items = std::make_shared<System::EigrpItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems>();
        }
        return rtnwpathtoif_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::EigrpItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(af_items != nullptr)
    {
        children["af-items"] = af_items;
    }

    if(rtvrfmbr_items != nullptr)
    {
        children["rtvrfMbr-items"] = rtvrfmbr_items;
    }

    if(rtnwpathtoif_items != nullptr)
    {
        children["rtnwPathToIf-items"] = rtnwpathtoif_items;
    }

    return children;
}

void System::EigrpItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adminSt")
    {
        adminst = value;
        adminst.value_namespace = name_space;
        adminst.value_namespace_prefix = name_space_prefix;
    }
}

void System::EigrpItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
}

bool System::EigrpItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-items" || name == "rtvrfMbr-items" || name == "rtnwPathToIf-items" || name == "id" || name == "name" || name == "descr" || name == "adminSt")
        return true;
    return false;
}

System::EigrpItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AfItems::AfItems()
    :
    ifaf_list(this, {"type"})
{

    yang_name = "af-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::EigrpItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AfItems::~AfItems()
{
}

bool System::EigrpItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AfItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ifaf_list.len(); index++)
    {
        if(ifaf_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::EigrpItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AfItems::has_operation() const
{
    for (std::size_t index=0; index<ifaf_list.len(); index++)
    {
        if(ifaf_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::EigrpItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "af-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::EigrpItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::EigrpItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "IfAf-list")
    {
        auto c = std::make_shared<System::EigrpItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AfItems::IfAfList>();
        c->parent = this;
        ifaf_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::EigrpItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AfItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : ifaf_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::EigrpItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::EigrpItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::EigrpItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "IfAf-list")
        return true;
    return false;
}

System::EigrpItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AfItems::IfAfList::IfAfList()
    :
    type{YType::enumeration, "type"},
    ctrl{YType::str, "ctrl"},
    hellointvl{YType::uint16, "helloIntvl"},
    holdintvl{YType::uint16, "holdIntvl"},
    name{YType::str, "name"}
        ,
    adj_items(std::make_shared<System::EigrpItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AfItems::IfAfList::AdjItems>())
    , stats_items(std::make_shared<System::EigrpItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AfItems::IfAfList::StatsItems>())
    , summ_items(std::make_shared<System::EigrpItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AfItems::IfAfList::SummItems>())
{
    adj_items->parent = this;
    stats_items->parent = this;
    summ_items->parent = this;

    yang_name = "IfAf-list"; yang_parent_name = "af-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::EigrpItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AfItems::IfAfList::~IfAfList()
{
}

bool System::EigrpItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AfItems::IfAfList::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| ctrl.is_set
	|| hellointvl.is_set
	|| holdintvl.is_set
	|| name.is_set
	|| (adj_items !=  nullptr && adj_items->has_data())
	|| (stats_items !=  nullptr && stats_items->has_data())
	|| (summ_items !=  nullptr && summ_items->has_data());
}

bool System::EigrpItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AfItems::IfAfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(ctrl.yfilter)
	|| ydk::is_set(hellointvl.yfilter)
	|| ydk::is_set(holdintvl.yfilter)
	|| ydk::is_set(name.yfilter)
	|| (adj_items !=  nullptr && adj_items->has_operation())
	|| (stats_items !=  nullptr && stats_items->has_operation())
	|| (summ_items !=  nullptr && summ_items->has_operation());
}

std::string System::EigrpItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AfItems::IfAfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "IfAf-list";
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::EigrpItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AfItems::IfAfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (ctrl.is_set || is_set(ctrl.yfilter)) leaf_name_data.push_back(ctrl.get_name_leafdata());
    if (hellointvl.is_set || is_set(hellointvl.yfilter)) leaf_name_data.push_back(hellointvl.get_name_leafdata());
    if (holdintvl.is_set || is_set(holdintvl.yfilter)) leaf_name_data.push_back(holdintvl.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::EigrpItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AfItems::IfAfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "adj-items")
    {
        if(adj_items == nullptr)
        {
            adj_items = std::make_shared<System::EigrpItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AfItems::IfAfList::AdjItems>();
        }
        return adj_items;
    }

    if(child_yang_name == "stats-items")
    {
        if(stats_items == nullptr)
        {
            stats_items = std::make_shared<System::EigrpItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AfItems::IfAfList::StatsItems>();
        }
        return stats_items;
    }

    if(child_yang_name == "summ-items")
    {
        if(summ_items == nullptr)
        {
            summ_items = std::make_shared<System::EigrpItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AfItems::IfAfList::SummItems>();
        }
        return summ_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::EigrpItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AfItems::IfAfList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(adj_items != nullptr)
    {
        children["adj-items"] = adj_items;
    }

    if(stats_items != nullptr)
    {
        children["stats-items"] = stats_items;
    }

    if(summ_items != nullptr)
    {
        children["summ-items"] = summ_items;
    }

    return children;
}

void System::EigrpItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AfItems::IfAfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ctrl")
    {
        ctrl = value;
        ctrl.value_namespace = name_space;
        ctrl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "helloIntvl")
    {
        hellointvl = value;
        hellointvl.value_namespace = name_space;
        hellointvl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "holdIntvl")
    {
        holdintvl = value;
        holdintvl.value_namespace = name_space;
        holdintvl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void System::EigrpItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AfItems::IfAfList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "ctrl")
    {
        ctrl.yfilter = yfilter;
    }
    if(value_path == "helloIntvl")
    {
        hellointvl.yfilter = yfilter;
    }
    if(value_path == "holdIntvl")
    {
        holdintvl.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool System::EigrpItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AfItems::IfAfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "adj-items" || name == "stats-items" || name == "summ-items" || name == "type" || name == "ctrl" || name == "helloIntvl" || name == "holdIntvl" || name == "name")
        return true;
    return false;
}

System::EigrpItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AfItems::IfAfList::AdjItems::AdjItems()
    :
    adjep_list(this, {"addr"})
{

    yang_name = "adj-items"; yang_parent_name = "IfAf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::EigrpItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AfItems::IfAfList::AdjItems::~AdjItems()
{
}

bool System::EigrpItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AfItems::IfAfList::AdjItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<adjep_list.len(); index++)
    {
        if(adjep_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::EigrpItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AfItems::IfAfList::AdjItems::has_operation() const
{
    for (std::size_t index=0; index<adjep_list.len(); index++)
    {
        if(adjep_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::EigrpItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AfItems::IfAfList::AdjItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "adj-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::EigrpItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AfItems::IfAfList::AdjItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::EigrpItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AfItems::IfAfList::AdjItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "AdjEp-list")
    {
        auto c = std::make_shared<System::EigrpItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AfItems::IfAfList::AdjItems::AdjEpList>();
        c->parent = this;
        adjep_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::EigrpItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AfItems::IfAfList::AdjItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : adjep_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::EigrpItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AfItems::IfAfList::AdjItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::EigrpItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AfItems::IfAfList::AdjItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::EigrpItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AfItems::IfAfList::AdjItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "AdjEp-list")
        return true;
    return false;
}

System::EigrpItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AfItems::IfAfList::AdjItems::AdjEpList::AdjEpList()
    :
    addr{YType::str, "addr"},
    id{YType::uint32, "id"},
    swmajver{YType::uint8, "swMajVer"},
    swminver{YType::uint8, "swMinVer"},
    eigrpmajver{YType::uint8, "eigrpMajVer"},
    eigrpminver{YType::uint8, "eigrpMinVer"},
    holdintvl{YType::uint16, "holdIntvl"},
    operst{YType::str, "operSt"},
    nsfoperst{YType::str, "nsfOperSt"},
    stubflags{YType::str, "stubFlags"},
    lastupts{YType::str, "lastUpTs"},
    name{YType::str, "name"}
        ,
    stats_items(std::make_shared<System::EigrpItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AfItems::IfAfList::AdjItems::AdjEpList::StatsItems>())
{
    stats_items->parent = this;

    yang_name = "AdjEp-list"; yang_parent_name = "adj-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::EigrpItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AfItems::IfAfList::AdjItems::AdjEpList::~AdjEpList()
{
}

bool System::EigrpItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AfItems::IfAfList::AdjItems::AdjEpList::has_data() const
{
    if (is_presence_container) return true;
    return addr.is_set
	|| id.is_set
	|| swmajver.is_set
	|| swminver.is_set
	|| eigrpmajver.is_set
	|| eigrpminver.is_set
	|| holdintvl.is_set
	|| operst.is_set
	|| nsfoperst.is_set
	|| stubflags.is_set
	|| lastupts.is_set
	|| name.is_set
	|| (stats_items !=  nullptr && stats_items->has_data());
}

bool System::EigrpItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AfItems::IfAfList::AdjItems::AdjEpList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(addr.yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(swmajver.yfilter)
	|| ydk::is_set(swminver.yfilter)
	|| ydk::is_set(eigrpmajver.yfilter)
	|| ydk::is_set(eigrpminver.yfilter)
	|| ydk::is_set(holdintvl.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(nsfoperst.yfilter)
	|| ydk::is_set(stubflags.yfilter)
	|| ydk::is_set(lastupts.yfilter)
	|| ydk::is_set(name.yfilter)
	|| (stats_items !=  nullptr && stats_items->has_operation());
}

std::string System::EigrpItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AfItems::IfAfList::AdjItems::AdjEpList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "AdjEp-list";
    ADD_KEY_TOKEN(addr, "addr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::EigrpItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AfItems::IfAfList::AdjItems::AdjEpList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (swmajver.is_set || is_set(swmajver.yfilter)) leaf_name_data.push_back(swmajver.get_name_leafdata());
    if (swminver.is_set || is_set(swminver.yfilter)) leaf_name_data.push_back(swminver.get_name_leafdata());
    if (eigrpmajver.is_set || is_set(eigrpmajver.yfilter)) leaf_name_data.push_back(eigrpmajver.get_name_leafdata());
    if (eigrpminver.is_set || is_set(eigrpminver.yfilter)) leaf_name_data.push_back(eigrpminver.get_name_leafdata());
    if (holdintvl.is_set || is_set(holdintvl.yfilter)) leaf_name_data.push_back(holdintvl.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (nsfoperst.is_set || is_set(nsfoperst.yfilter)) leaf_name_data.push_back(nsfoperst.get_name_leafdata());
    if (stubflags.is_set || is_set(stubflags.yfilter)) leaf_name_data.push_back(stubflags.get_name_leafdata());
    if (lastupts.is_set || is_set(lastupts.yfilter)) leaf_name_data.push_back(lastupts.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::EigrpItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AfItems::IfAfList::AdjItems::AdjEpList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "stats-items")
    {
        if(stats_items == nullptr)
        {
            stats_items = std::make_shared<System::EigrpItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AfItems::IfAfList::AdjItems::AdjEpList::StatsItems>();
        }
        return stats_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::EigrpItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AfItems::IfAfList::AdjItems::AdjEpList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(stats_items != nullptr)
    {
        children["stats-items"] = stats_items;
    }

    return children;
}

void System::EigrpItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AfItems::IfAfList::AdjItems::AdjEpList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "addr")
    {
        addr = value;
        addr.value_namespace = name_space;
        addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "swMajVer")
    {
        swmajver = value;
        swmajver.value_namespace = name_space;
        swmajver.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "swMinVer")
    {
        swminver = value;
        swminver.value_namespace = name_space;
        swminver.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "eigrpMajVer")
    {
        eigrpmajver = value;
        eigrpmajver.value_namespace = name_space;
        eigrpmajver.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "eigrpMinVer")
    {
        eigrpminver = value;
        eigrpminver.value_namespace = name_space;
        eigrpminver.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "holdIntvl")
    {
        holdintvl = value;
        holdintvl.value_namespace = name_space;
        holdintvl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsfOperSt")
    {
        nsfoperst = value;
        nsfoperst.value_namespace = name_space;
        nsfoperst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stubFlags")
    {
        stubflags = value;
        stubflags.value_namespace = name_space;
        stubflags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lastUpTs")
    {
        lastupts = value;
        lastupts.value_namespace = name_space;
        lastupts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void System::EigrpItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AfItems::IfAfList::AdjItems::AdjEpList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "addr")
    {
        addr.yfilter = yfilter;
    }
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "swMajVer")
    {
        swmajver.yfilter = yfilter;
    }
    if(value_path == "swMinVer")
    {
        swminver.yfilter = yfilter;
    }
    if(value_path == "eigrpMajVer")
    {
        eigrpmajver.yfilter = yfilter;
    }
    if(value_path == "eigrpMinVer")
    {
        eigrpminver.yfilter = yfilter;
    }
    if(value_path == "holdIntvl")
    {
        holdintvl.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "nsfOperSt")
    {
        nsfoperst.yfilter = yfilter;
    }
    if(value_path == "stubFlags")
    {
        stubflags.yfilter = yfilter;
    }
    if(value_path == "lastUpTs")
    {
        lastupts.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool System::EigrpItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AfItems::IfAfList::AdjItems::AdjEpList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stats-items" || name == "addr" || name == "id" || name == "swMajVer" || name == "swMinVer" || name == "eigrpMajVer" || name == "eigrpMinVer" || name == "holdIntvl" || name == "operSt" || name == "nsfOperSt" || name == "stubFlags" || name == "lastUpTs" || name == "name")
        return true;
    return false;
}

System::EigrpItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AfItems::IfAfList::AdjItems::AdjEpList::StatsItems::StatsItems()
    :
    srtt{YType::str, "srtt"},
    rto{YType::str, "rto"},
    xmitqcnt{YType::uint32, "xmitQCnt"},
    lastseqno{YType::uint32, "lastSeqNo"},
    rexmitcnt{YType::uint32, "rexmitCnt"},
    retrycnt{YType::uint32, "retryCnt"},
    condrcvseqno{YType::uint32, "condRcvSeqNo"},
    ucstuptgtserno{YType::uint64, "ucStupTgtSerNo"},
    pfxcount{YType::uint32, "pfxCount"}
{

    yang_name = "stats-items"; yang_parent_name = "AdjEp-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::EigrpItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AfItems::IfAfList::AdjItems::AdjEpList::StatsItems::~StatsItems()
{
}

bool System::EigrpItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AfItems::IfAfList::AdjItems::AdjEpList::StatsItems::has_data() const
{
    if (is_presence_container) return true;
    return srtt.is_set
	|| rto.is_set
	|| xmitqcnt.is_set
	|| lastseqno.is_set
	|| rexmitcnt.is_set
	|| retrycnt.is_set
	|| condrcvseqno.is_set
	|| ucstuptgtserno.is_set
	|| pfxcount.is_set;
}

bool System::EigrpItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AfItems::IfAfList::AdjItems::AdjEpList::StatsItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(srtt.yfilter)
	|| ydk::is_set(rto.yfilter)
	|| ydk::is_set(xmitqcnt.yfilter)
	|| ydk::is_set(lastseqno.yfilter)
	|| ydk::is_set(rexmitcnt.yfilter)
	|| ydk::is_set(retrycnt.yfilter)
	|| ydk::is_set(condrcvseqno.yfilter)
	|| ydk::is_set(ucstuptgtserno.yfilter)
	|| ydk::is_set(pfxcount.yfilter);
}

std::string System::EigrpItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AfItems::IfAfList::AdjItems::AdjEpList::StatsItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stats-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::EigrpItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AfItems::IfAfList::AdjItems::AdjEpList::StatsItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (srtt.is_set || is_set(srtt.yfilter)) leaf_name_data.push_back(srtt.get_name_leafdata());
    if (rto.is_set || is_set(rto.yfilter)) leaf_name_data.push_back(rto.get_name_leafdata());
    if (xmitqcnt.is_set || is_set(xmitqcnt.yfilter)) leaf_name_data.push_back(xmitqcnt.get_name_leafdata());
    if (lastseqno.is_set || is_set(lastseqno.yfilter)) leaf_name_data.push_back(lastseqno.get_name_leafdata());
    if (rexmitcnt.is_set || is_set(rexmitcnt.yfilter)) leaf_name_data.push_back(rexmitcnt.get_name_leafdata());
    if (retrycnt.is_set || is_set(retrycnt.yfilter)) leaf_name_data.push_back(retrycnt.get_name_leafdata());
    if (condrcvseqno.is_set || is_set(condrcvseqno.yfilter)) leaf_name_data.push_back(condrcvseqno.get_name_leafdata());
    if (ucstuptgtserno.is_set || is_set(ucstuptgtserno.yfilter)) leaf_name_data.push_back(ucstuptgtserno.get_name_leafdata());
    if (pfxcount.is_set || is_set(pfxcount.yfilter)) leaf_name_data.push_back(pfxcount.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::EigrpItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AfItems::IfAfList::AdjItems::AdjEpList::StatsItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::EigrpItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AfItems::IfAfList::AdjItems::AdjEpList::StatsItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::EigrpItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AfItems::IfAfList::AdjItems::AdjEpList::StatsItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "srtt")
    {
        srtt = value;
        srtt.value_namespace = name_space;
        srtt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rto")
    {
        rto = value;
        rto.value_namespace = name_space;
        rto.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "xmitQCnt")
    {
        xmitqcnt = value;
        xmitqcnt.value_namespace = name_space;
        xmitqcnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lastSeqNo")
    {
        lastseqno = value;
        lastseqno.value_namespace = name_space;
        lastseqno.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rexmitCnt")
    {
        rexmitcnt = value;
        rexmitcnt.value_namespace = name_space;
        rexmitcnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retryCnt")
    {
        retrycnt = value;
        retrycnt.value_namespace = name_space;
        retrycnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "condRcvSeqNo")
    {
        condrcvseqno = value;
        condrcvseqno.value_namespace = name_space;
        condrcvseqno.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ucStupTgtSerNo")
    {
        ucstuptgtserno = value;
        ucstuptgtserno.value_namespace = name_space;
        ucstuptgtserno.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pfxCount")
    {
        pfxcount = value;
        pfxcount.value_namespace = name_space;
        pfxcount.value_namespace_prefix = name_space_prefix;
    }
}

void System::EigrpItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AfItems::IfAfList::AdjItems::AdjEpList::StatsItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "srtt")
    {
        srtt.yfilter = yfilter;
    }
    if(value_path == "rto")
    {
        rto.yfilter = yfilter;
    }
    if(value_path == "xmitQCnt")
    {
        xmitqcnt.yfilter = yfilter;
    }
    if(value_path == "lastSeqNo")
    {
        lastseqno.yfilter = yfilter;
    }
    if(value_path == "rexmitCnt")
    {
        rexmitcnt.yfilter = yfilter;
    }
    if(value_path == "retryCnt")
    {
        retrycnt.yfilter = yfilter;
    }
    if(value_path == "condRcvSeqNo")
    {
        condrcvseqno.yfilter = yfilter;
    }
    if(value_path == "ucStupTgtSerNo")
    {
        ucstuptgtserno.yfilter = yfilter;
    }
    if(value_path == "pfxCount")
    {
        pfxcount.yfilter = yfilter;
    }
}

bool System::EigrpItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AfItems::IfAfList::AdjItems::AdjEpList::StatsItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "srtt" || name == "rto" || name == "xmitQCnt" || name == "lastSeqNo" || name == "rexmitCnt" || name == "retryCnt" || name == "condRcvSeqNo" || name == "ucStupTgtSerNo" || name == "pfxCount")
        return true;
    return false;
}

System::EigrpItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AfItems::IfAfList::StatsItems::StatsItems()
    :
    xmitrelcnt{YType::uint32, "xmitRelCnt"},
    xmitunrelcnt{YType::uint32, "xmitUnrelCnt"},
    relpktsendintvl{YType::str, "relPktSendIntvl"},
    unrelpktsendintvl{YType::str, "unRelPktSendIntvl"},
    mcflowdelay{YType::uint32, "mcFlowDelay"},
    pendrt{YType::uint32, "pendRt"},
    xmitserno{YType::uint64, "xmitSerno"},
    unrelmccnt{YType::uint32, "unrelMcCnt"},
    relmccnt{YType::uint32, "relMcCnt"},
    unreluccnt{YType::uint32, "unrelUcCnt"},
    reluccnt{YType::uint32, "relUcCnt"},
    mcexcep{YType::uint32, "mcExcep"},
    crcnt{YType::uint32, "crCnt"},
    ackssupp{YType::uint32, "acksSupp"},
    rexmitsent{YType::uint32, "rexmitSent"},
    outofseqrcvd{YType::uint32, "outOfSeqRcvd"}
{

    yang_name = "stats-items"; yang_parent_name = "IfAf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::EigrpItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AfItems::IfAfList::StatsItems::~StatsItems()
{
}

bool System::EigrpItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AfItems::IfAfList::StatsItems::has_data() const
{
    if (is_presence_container) return true;
    return xmitrelcnt.is_set
	|| xmitunrelcnt.is_set
	|| relpktsendintvl.is_set
	|| unrelpktsendintvl.is_set
	|| mcflowdelay.is_set
	|| pendrt.is_set
	|| xmitserno.is_set
	|| unrelmccnt.is_set
	|| relmccnt.is_set
	|| unreluccnt.is_set
	|| reluccnt.is_set
	|| mcexcep.is_set
	|| crcnt.is_set
	|| ackssupp.is_set
	|| rexmitsent.is_set
	|| outofseqrcvd.is_set;
}

bool System::EigrpItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AfItems::IfAfList::StatsItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(xmitrelcnt.yfilter)
	|| ydk::is_set(xmitunrelcnt.yfilter)
	|| ydk::is_set(relpktsendintvl.yfilter)
	|| ydk::is_set(unrelpktsendintvl.yfilter)
	|| ydk::is_set(mcflowdelay.yfilter)
	|| ydk::is_set(pendrt.yfilter)
	|| ydk::is_set(xmitserno.yfilter)
	|| ydk::is_set(unrelmccnt.yfilter)
	|| ydk::is_set(relmccnt.yfilter)
	|| ydk::is_set(unreluccnt.yfilter)
	|| ydk::is_set(reluccnt.yfilter)
	|| ydk::is_set(mcexcep.yfilter)
	|| ydk::is_set(crcnt.yfilter)
	|| ydk::is_set(ackssupp.yfilter)
	|| ydk::is_set(rexmitsent.yfilter)
	|| ydk::is_set(outofseqrcvd.yfilter);
}

std::string System::EigrpItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AfItems::IfAfList::StatsItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stats-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::EigrpItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AfItems::IfAfList::StatsItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (xmitrelcnt.is_set || is_set(xmitrelcnt.yfilter)) leaf_name_data.push_back(xmitrelcnt.get_name_leafdata());
    if (xmitunrelcnt.is_set || is_set(xmitunrelcnt.yfilter)) leaf_name_data.push_back(xmitunrelcnt.get_name_leafdata());
    if (relpktsendintvl.is_set || is_set(relpktsendintvl.yfilter)) leaf_name_data.push_back(relpktsendintvl.get_name_leafdata());
    if (unrelpktsendintvl.is_set || is_set(unrelpktsendintvl.yfilter)) leaf_name_data.push_back(unrelpktsendintvl.get_name_leafdata());
    if (mcflowdelay.is_set || is_set(mcflowdelay.yfilter)) leaf_name_data.push_back(mcflowdelay.get_name_leafdata());
    if (pendrt.is_set || is_set(pendrt.yfilter)) leaf_name_data.push_back(pendrt.get_name_leafdata());
    if (xmitserno.is_set || is_set(xmitserno.yfilter)) leaf_name_data.push_back(xmitserno.get_name_leafdata());
    if (unrelmccnt.is_set || is_set(unrelmccnt.yfilter)) leaf_name_data.push_back(unrelmccnt.get_name_leafdata());
    if (relmccnt.is_set || is_set(relmccnt.yfilter)) leaf_name_data.push_back(relmccnt.get_name_leafdata());
    if (unreluccnt.is_set || is_set(unreluccnt.yfilter)) leaf_name_data.push_back(unreluccnt.get_name_leafdata());
    if (reluccnt.is_set || is_set(reluccnt.yfilter)) leaf_name_data.push_back(reluccnt.get_name_leafdata());
    if (mcexcep.is_set || is_set(mcexcep.yfilter)) leaf_name_data.push_back(mcexcep.get_name_leafdata());
    if (crcnt.is_set || is_set(crcnt.yfilter)) leaf_name_data.push_back(crcnt.get_name_leafdata());
    if (ackssupp.is_set || is_set(ackssupp.yfilter)) leaf_name_data.push_back(ackssupp.get_name_leafdata());
    if (rexmitsent.is_set || is_set(rexmitsent.yfilter)) leaf_name_data.push_back(rexmitsent.get_name_leafdata());
    if (outofseqrcvd.is_set || is_set(outofseqrcvd.yfilter)) leaf_name_data.push_back(outofseqrcvd.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::EigrpItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AfItems::IfAfList::StatsItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::EigrpItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AfItems::IfAfList::StatsItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::EigrpItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AfItems::IfAfList::StatsItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "xmitRelCnt")
    {
        xmitrelcnt = value;
        xmitrelcnt.value_namespace = name_space;
        xmitrelcnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "xmitUnrelCnt")
    {
        xmitunrelcnt = value;
        xmitunrelcnt.value_namespace = name_space;
        xmitunrelcnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "relPktSendIntvl")
    {
        relpktsendintvl = value;
        relpktsendintvl.value_namespace = name_space;
        relpktsendintvl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unRelPktSendIntvl")
    {
        unrelpktsendintvl = value;
        unrelpktsendintvl.value_namespace = name_space;
        unrelpktsendintvl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mcFlowDelay")
    {
        mcflowdelay = value;
        mcflowdelay.value_namespace = name_space;
        mcflowdelay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pendRt")
    {
        pendrt = value;
        pendrt.value_namespace = name_space;
        pendrt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "xmitSerno")
    {
        xmitserno = value;
        xmitserno.value_namespace = name_space;
        xmitserno.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unrelMcCnt")
    {
        unrelmccnt = value;
        unrelmccnt.value_namespace = name_space;
        unrelmccnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "relMcCnt")
    {
        relmccnt = value;
        relmccnt.value_namespace = name_space;
        relmccnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unrelUcCnt")
    {
        unreluccnt = value;
        unreluccnt.value_namespace = name_space;
        unreluccnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "relUcCnt")
    {
        reluccnt = value;
        reluccnt.value_namespace = name_space;
        reluccnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mcExcep")
    {
        mcexcep = value;
        mcexcep.value_namespace = name_space;
        mcexcep.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "crCnt")
    {
        crcnt = value;
        crcnt.value_namespace = name_space;
        crcnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "acksSupp")
    {
        ackssupp = value;
        ackssupp.value_namespace = name_space;
        ackssupp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rexmitSent")
    {
        rexmitsent = value;
        rexmitsent.value_namespace = name_space;
        rexmitsent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outOfSeqRcvd")
    {
        outofseqrcvd = value;
        outofseqrcvd.value_namespace = name_space;
        outofseqrcvd.value_namespace_prefix = name_space_prefix;
    }
}

void System::EigrpItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AfItems::IfAfList::StatsItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "xmitRelCnt")
    {
        xmitrelcnt.yfilter = yfilter;
    }
    if(value_path == "xmitUnrelCnt")
    {
        xmitunrelcnt.yfilter = yfilter;
    }
    if(value_path == "relPktSendIntvl")
    {
        relpktsendintvl.yfilter = yfilter;
    }
    if(value_path == "unRelPktSendIntvl")
    {
        unrelpktsendintvl.yfilter = yfilter;
    }
    if(value_path == "mcFlowDelay")
    {
        mcflowdelay.yfilter = yfilter;
    }
    if(value_path == "pendRt")
    {
        pendrt.yfilter = yfilter;
    }
    if(value_path == "xmitSerno")
    {
        xmitserno.yfilter = yfilter;
    }
    if(value_path == "unrelMcCnt")
    {
        unrelmccnt.yfilter = yfilter;
    }
    if(value_path == "relMcCnt")
    {
        relmccnt.yfilter = yfilter;
    }
    if(value_path == "unrelUcCnt")
    {
        unreluccnt.yfilter = yfilter;
    }
    if(value_path == "relUcCnt")
    {
        reluccnt.yfilter = yfilter;
    }
    if(value_path == "mcExcep")
    {
        mcexcep.yfilter = yfilter;
    }
    if(value_path == "crCnt")
    {
        crcnt.yfilter = yfilter;
    }
    if(value_path == "acksSupp")
    {
        ackssupp.yfilter = yfilter;
    }
    if(value_path == "rexmitSent")
    {
        rexmitsent.yfilter = yfilter;
    }
    if(value_path == "outOfSeqRcvd")
    {
        outofseqrcvd.yfilter = yfilter;
    }
}

bool System::EigrpItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AfItems::IfAfList::StatsItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "xmitRelCnt" || name == "xmitUnrelCnt" || name == "relPktSendIntvl" || name == "unRelPktSendIntvl" || name == "mcFlowDelay" || name == "pendRt" || name == "xmitSerno" || name == "unrelMcCnt" || name == "relMcCnt" || name == "unrelUcCnt" || name == "relUcCnt" || name == "mcExcep" || name == "crCnt" || name == "acksSupp" || name == "rexmitSent" || name == "outOfSeqRcvd")
        return true;
    return false;
}

System::EigrpItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AfItems::IfAfList::SummItems::SummItems()
    :
    summ_list(this, {"addr"})
{

    yang_name = "summ-items"; yang_parent_name = "IfAf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::EigrpItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AfItems::IfAfList::SummItems::~SummItems()
{
}

bool System::EigrpItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AfItems::IfAfList::SummItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<summ_list.len(); index++)
    {
        if(summ_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::EigrpItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AfItems::IfAfList::SummItems::has_operation() const
{
    for (std::size_t index=0; index<summ_list.len(); index++)
    {
        if(summ_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::EigrpItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AfItems::IfAfList::SummItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summ-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::EigrpItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AfItems::IfAfList::SummItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::EigrpItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AfItems::IfAfList::SummItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Summ-list")
    {
        auto c = std::make_shared<System::EigrpItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AfItems::IfAfList::SummItems::SummList>();
        c->parent = this;
        summ_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::EigrpItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AfItems::IfAfList::SummItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : summ_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::EigrpItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AfItems::IfAfList::SummItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::EigrpItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AfItems::IfAfList::SummItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::EigrpItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AfItems::IfAfList::SummItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Summ-list")
        return true;
    return false;
}

System::EigrpItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AfItems::IfAfList::SummItems::SummList::SummList()
    :
    addr{YType::str, "addr"},
    name{YType::str, "name"},
    descr{YType::str, "descr"}
{

    yang_name = "Summ-list"; yang_parent_name = "summ-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::EigrpItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AfItems::IfAfList::SummItems::SummList::~SummList()
{
}

bool System::EigrpItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AfItems::IfAfList::SummItems::SummList::has_data() const
{
    if (is_presence_container) return true;
    return addr.is_set
	|| name.is_set
	|| descr.is_set;
}

bool System::EigrpItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AfItems::IfAfList::SummItems::SummList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(addr.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter);
}

std::string System::EigrpItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AfItems::IfAfList::SummItems::SummList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Summ-list";
    ADD_KEY_TOKEN(addr, "addr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::EigrpItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AfItems::IfAfList::SummItems::SummList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::EigrpItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AfItems::IfAfList::SummItems::SummList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::EigrpItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AfItems::IfAfList::SummItems::SummList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::EigrpItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AfItems::IfAfList::SummItems::SummList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "addr")
    {
        addr = value;
        addr.value_namespace = name_space;
        addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
}

void System::EigrpItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AfItems::IfAfList::SummItems::SummList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "addr")
    {
        addr.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
}

bool System::EigrpItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AfItems::IfAfList::SummItems::SummList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addr" || name == "name" || name == "descr")
        return true;
    return false;
}

System::EigrpItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtvrfMbrItems::RtvrfMbrItems()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "rtvrfMbr-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::EigrpItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtvrfMbrItems::~RtvrfMbrItems()
{
}

bool System::EigrpItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtvrfMbrItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::EigrpItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtvrfMbrItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::EigrpItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtvrfMbrItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtvrfMbr-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::EigrpItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtvrfMbrItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::EigrpItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtvrfMbrItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::EigrpItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtvrfMbrItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::EigrpItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtvrfMbrItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tCl")
    {
        tcl = value;
        tcl.value_namespace = name_space;
        tcl.value_namespace_prefix = name_space_prefix;
    }
}

void System::EigrpItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtvrfMbrItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
    if(value_path == "tCl")
    {
        tcl.yfilter = yfilter;
    }
}

bool System::EigrpItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtvrfMbrItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::EigrpItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtnwPathToIfItems()
    :
    rtnwpathtoif_list(this, {"tdn"})
{

    yang_name = "rtnwPathToIf-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::EigrpItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::~RtnwPathToIfItems()
{
}

bool System::EigrpItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rtnwpathtoif_list.len(); index++)
    {
        if(rtnwpathtoif_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::EigrpItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::has_operation() const
{
    for (std::size_t index=0; index<rtnwpathtoif_list.len(); index++)
    {
        if(rtnwpathtoif_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::EigrpItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtnwPathToIf-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::EigrpItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::EigrpItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RtNwPathToIf-list")
    {
        auto c = std::make_shared<System::EigrpItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList>();
        c->parent = this;
        rtnwpathtoif_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::EigrpItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : rtnwpathtoif_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::EigrpItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::EigrpItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::EigrpItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RtNwPathToIf-list")
        return true;
    return false;
}

System::EigrpItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::RtNwPathToIfList()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "RtNwPathToIf-list"; yang_parent_name = "rtnwPathToIf-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::EigrpItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::~RtNwPathToIfList()
{
}

bool System::EigrpItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::EigrpItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::EigrpItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RtNwPathToIf-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::EigrpItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::EigrpItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::EigrpItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::EigrpItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tCl")
    {
        tcl = value;
        tcl.value_namespace = name_space;
        tcl.value_namespace_prefix = name_space_prefix;
    }
}

void System::EigrpItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
    if(value_path == "tCl")
    {
        tcl.yfilter = yfilter;
    }
}

bool System::EigrpItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::HsrpItems::HsrpItems()
    :
    name{YType::str, "name"},
    adminst{YType::enumeration, "adminSt"},
    operst{YType::enumeration, "operSt"},
    opererr{YType::str, "operErr"}
        ,
    inst_items(std::make_shared<System::HsrpItems::InstItems>())
{
    inst_items->parent = this;

    yang_name = "hsrp-items"; yang_parent_name = "System"; is_top_level_class = false; has_list_ancestor = false; 
}

System::HsrpItems::~HsrpItems()
{
}

bool System::HsrpItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| adminst.is_set
	|| operst.is_set
	|| opererr.is_set
	|| (inst_items !=  nullptr && inst_items->has_data());
}

bool System::HsrpItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(opererr.yfilter)
	|| (inst_items !=  nullptr && inst_items->has_operation());
}

std::string System::HsrpItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/" << get_segment_path();
    return path_buffer.str();
}

std::string System::HsrpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hsrp-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::HsrpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (opererr.is_set || is_set(opererr.yfilter)) leaf_name_data.push_back(opererr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::HsrpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "inst-items")
    {
        if(inst_items == nullptr)
        {
            inst_items = std::make_shared<System::HsrpItems::InstItems>();
        }
        return inst_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::HsrpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(inst_items != nullptr)
    {
        children["inst-items"] = inst_items;
    }

    return children;
}

void System::HsrpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adminSt")
    {
        adminst = value;
        adminst.value_namespace = name_space;
        adminst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operErr")
    {
        opererr = value;
        opererr.value_namespace = name_space;
        opererr.value_namespace_prefix = name_space_prefix;
    }
}

void System::HsrpItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "operErr")
    {
        opererr.yfilter = yfilter;
    }
}

bool System::HsrpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inst-items" || name == "name" || name == "adminSt" || name == "operSt" || name == "operErr")
        return true;
    return false;
}

System::HsrpItems::InstItems::InstItems()
    :
    name{YType::str, "name"},
    adminst{YType::enumeration, "adminSt"},
    ctrl{YType::str, "ctrl"},
    opererr{YType::str, "operErr"}
        ,
    if_items(std::make_shared<System::HsrpItems::InstItems::IfItems>())
{
    if_items->parent = this;

    yang_name = "inst-items"; yang_parent_name = "hsrp-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::HsrpItems::InstItems::~InstItems()
{
}

bool System::HsrpItems::InstItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| adminst.is_set
	|| ctrl.is_set
	|| opererr.is_set
	|| (if_items !=  nullptr && if_items->has_data());
}

bool System::HsrpItems::InstItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(ctrl.yfilter)
	|| ydk::is_set(opererr.yfilter)
	|| (if_items !=  nullptr && if_items->has_operation());
}

std::string System::HsrpItems::InstItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/hsrp-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::HsrpItems::InstItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inst-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::HsrpItems::InstItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (ctrl.is_set || is_set(ctrl.yfilter)) leaf_name_data.push_back(ctrl.get_name_leafdata());
    if (opererr.is_set || is_set(opererr.yfilter)) leaf_name_data.push_back(opererr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::HsrpItems::InstItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "if-items")
    {
        if(if_items == nullptr)
        {
            if_items = std::make_shared<System::HsrpItems::InstItems::IfItems>();
        }
        return if_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::HsrpItems::InstItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(if_items != nullptr)
    {
        children["if-items"] = if_items;
    }

    return children;
}

void System::HsrpItems::InstItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adminSt")
    {
        adminst = value;
        adminst.value_namespace = name_space;
        adminst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ctrl")
    {
        ctrl = value;
        ctrl.value_namespace = name_space;
        ctrl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operErr")
    {
        opererr = value;
        opererr.value_namespace = name_space;
        opererr.value_namespace_prefix = name_space_prefix;
    }
}

void System::HsrpItems::InstItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
    if(value_path == "ctrl")
    {
        ctrl.yfilter = yfilter;
    }
    if(value_path == "operErr")
    {
        opererr.yfilter = yfilter;
    }
}

bool System::HsrpItems::InstItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "if-items" || name == "name" || name == "adminSt" || name == "ctrl" || name == "operErr")
        return true;
    return false;
}

System::HsrpItems::InstItems::IfItems::IfItems()
    :
    if_list(this, {"id"})
{

    yang_name = "if-items"; yang_parent_name = "inst-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::HsrpItems::InstItems::IfItems::~IfItems()
{
}

bool System::HsrpItems::InstItems::IfItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<if_list.len(); index++)
    {
        if(if_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::HsrpItems::InstItems::IfItems::has_operation() const
{
    for (std::size_t index=0; index<if_list.len(); index++)
    {
        if(if_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::HsrpItems::InstItems::IfItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/hsrp-items/inst-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::HsrpItems::InstItems::IfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "if-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::HsrpItems::InstItems::IfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::HsrpItems::InstItems::IfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "If-list")
    {
        auto c = std::make_shared<System::HsrpItems::InstItems::IfItems::IfList>();
        c->parent = this;
        if_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::HsrpItems::InstItems::IfItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : if_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::HsrpItems::InstItems::IfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::HsrpItems::InstItems::IfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::HsrpItems::InstItems::IfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "If-list")
        return true;
    return false;
}

System::HsrpItems::InstItems::IfItems::IfList::IfList()
    :
    id{YType::str, "id"},
    version{YType::enumeration, "version"},
    ctrl{YType::str, "ctrl"},
    biascope{YType::enumeration, "biaScope"},
    iscreate{YType::uint8, "isCreate"},
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    adminst{YType::enumeration, "adminSt"}
        ,
    grp_items(std::make_shared<System::HsrpItems::InstItems::IfItems::IfList::GrpItems>())
    , rtvrfmbr_items(std::make_shared<System::HsrpItems::InstItems::IfItems::IfList::RtvrfMbrItems>())
    , rtnwpathtoif_items(std::make_shared<System::HsrpItems::InstItems::IfItems::IfList::RtnwPathToIfItems>())
{
    grp_items->parent = this;
    rtvrfmbr_items->parent = this;
    rtnwpathtoif_items->parent = this;

    yang_name = "If-list"; yang_parent_name = "if-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::HsrpItems::InstItems::IfItems::IfList::~IfList()
{
}

bool System::HsrpItems::InstItems::IfItems::IfList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| version.is_set
	|| ctrl.is_set
	|| biascope.is_set
	|| iscreate.is_set
	|| name.is_set
	|| descr.is_set
	|| adminst.is_set
	|| (grp_items !=  nullptr && grp_items->has_data())
	|| (rtvrfmbr_items !=  nullptr && rtvrfmbr_items->has_data())
	|| (rtnwpathtoif_items !=  nullptr && rtnwpathtoif_items->has_data());
}

bool System::HsrpItems::InstItems::IfItems::IfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(version.yfilter)
	|| ydk::is_set(ctrl.yfilter)
	|| ydk::is_set(biascope.yfilter)
	|| ydk::is_set(iscreate.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| (grp_items !=  nullptr && grp_items->has_operation())
	|| (rtvrfmbr_items !=  nullptr && rtvrfmbr_items->has_operation())
	|| (rtnwpathtoif_items !=  nullptr && rtnwpathtoif_items->has_operation());
}

std::string System::HsrpItems::InstItems::IfItems::IfList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/hsrp-items/inst-items/if-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::HsrpItems::InstItems::IfItems::IfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "If-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::HsrpItems::InstItems::IfItems::IfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());
    if (ctrl.is_set || is_set(ctrl.yfilter)) leaf_name_data.push_back(ctrl.get_name_leafdata());
    if (biascope.is_set || is_set(biascope.yfilter)) leaf_name_data.push_back(biascope.get_name_leafdata());
    if (iscreate.is_set || is_set(iscreate.yfilter)) leaf_name_data.push_back(iscreate.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::HsrpItems::InstItems::IfItems::IfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "grp-items")
    {
        if(grp_items == nullptr)
        {
            grp_items = std::make_shared<System::HsrpItems::InstItems::IfItems::IfList::GrpItems>();
        }
        return grp_items;
    }

    if(child_yang_name == "rtvrfMbr-items")
    {
        if(rtvrfmbr_items == nullptr)
        {
            rtvrfmbr_items = std::make_shared<System::HsrpItems::InstItems::IfItems::IfList::RtvrfMbrItems>();
        }
        return rtvrfmbr_items;
    }

    if(child_yang_name == "rtnwPathToIf-items")
    {
        if(rtnwpathtoif_items == nullptr)
        {
            rtnwpathtoif_items = std::make_shared<System::HsrpItems::InstItems::IfItems::IfList::RtnwPathToIfItems>();
        }
        return rtnwpathtoif_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::HsrpItems::InstItems::IfItems::IfList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(grp_items != nullptr)
    {
        children["grp-items"] = grp_items;
    }

    if(rtvrfmbr_items != nullptr)
    {
        children["rtvrfMbr-items"] = rtvrfmbr_items;
    }

    if(rtnwpathtoif_items != nullptr)
    {
        children["rtnwPathToIf-items"] = rtnwpathtoif_items;
    }

    return children;
}

void System::HsrpItems::InstItems::IfItems::IfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ctrl")
    {
        ctrl = value;
        ctrl.value_namespace = name_space;
        ctrl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "biaScope")
    {
        biascope = value;
        biascope.value_namespace = name_space;
        biascope.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isCreate")
    {
        iscreate = value;
        iscreate.value_namespace = name_space;
        iscreate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adminSt")
    {
        adminst = value;
        adminst.value_namespace = name_space;
        adminst.value_namespace_prefix = name_space_prefix;
    }
}

void System::HsrpItems::InstItems::IfItems::IfList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
    if(value_path == "ctrl")
    {
        ctrl.yfilter = yfilter;
    }
    if(value_path == "biaScope")
    {
        biascope.yfilter = yfilter;
    }
    if(value_path == "isCreate")
    {
        iscreate.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
}

bool System::HsrpItems::InstItems::IfItems::IfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "grp-items" || name == "rtvrfMbr-items" || name == "rtnwPathToIf-items" || name == "id" || name == "version" || name == "ctrl" || name == "biaScope" || name == "isCreate" || name == "name" || name == "descr" || name == "adminSt")
        return true;
    return false;
}

System::HsrpItems::InstItems::IfItems::IfList::GrpItems::GrpItems()
    :
    group_list(this, {"id", "af"})
{

    yang_name = "grp-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::HsrpItems::InstItems::IfItems::IfList::GrpItems::~GrpItems()
{
}

bool System::HsrpItems::InstItems::IfItems::IfList::GrpItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<group_list.len(); index++)
    {
        if(group_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::HsrpItems::InstItems::IfItems::IfList::GrpItems::has_operation() const
{
    for (std::size_t index=0; index<group_list.len(); index++)
    {
        if(group_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::HsrpItems::InstItems::IfItems::IfList::GrpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "grp-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::HsrpItems::InstItems::IfItems::IfList::GrpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::HsrpItems::InstItems::IfItems::IfList::GrpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Group-list")
    {
        auto c = std::make_shared<System::HsrpItems::InstItems::IfItems::IfList::GrpItems::GroupList>();
        c->parent = this;
        group_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::HsrpItems::InstItems::IfItems::IfList::GrpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : group_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::HsrpItems::InstItems::IfItems::IfList::GrpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::HsrpItems::InstItems::IfItems::IfList::GrpItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::HsrpItems::InstItems::IfItems::IfList::GrpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Group-list")
        return true;
    return false;
}

System::HsrpItems::InstItems::IfItems::IfList::GrpItems::GroupList::GroupList()
    :
    id{YType::uint16, "id"},
    af{YType::enumeration, "af"},
    ip{YType::str, "ip"},
    ipobtainmode{YType::enumeration, "ipObtainMode"},
    ctrl{YType::str, "ctrl"},
    preemptdelaymin{YType::uint16, "preemptDelayMin"},
    preemptdelayreload{YType::uint16, "preemptDelayReload"},
    preemptdelaysync{YType::uint16, "preemptDelaySync"},
    hellointvl{YType::uint32, "helloIntvl"},
    holdintvl{YType::uint32, "holdIntvl"},
    prio{YType::uint16, "prio"},
    fwdlwrthrld{YType::uint16, "fwdLwrThrld"},
    fwduprthrld{YType::uint16, "fwdUprThrld"},
    name{YType::str, "name"},
    follow{YType::str, "follow"},
    mac{YType::str, "mac"}
        ,
    addr_items(std::make_shared<System::HsrpItems::InstItems::IfItems::IfList::GrpItems::GroupList::AddrItems>())
{
    addr_items->parent = this;

    yang_name = "Group-list"; yang_parent_name = "grp-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::HsrpItems::InstItems::IfItems::IfList::GrpItems::GroupList::~GroupList()
{
}

bool System::HsrpItems::InstItems::IfItems::IfList::GrpItems::GroupList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| af.is_set
	|| ip.is_set
	|| ipobtainmode.is_set
	|| ctrl.is_set
	|| preemptdelaymin.is_set
	|| preemptdelayreload.is_set
	|| preemptdelaysync.is_set
	|| hellointvl.is_set
	|| holdintvl.is_set
	|| prio.is_set
	|| fwdlwrthrld.is_set
	|| fwduprthrld.is_set
	|| name.is_set
	|| follow.is_set
	|| mac.is_set
	|| (addr_items !=  nullptr && addr_items->has_data());
}

bool System::HsrpItems::InstItems::IfItems::IfList::GrpItems::GroupList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(af.yfilter)
	|| ydk::is_set(ip.yfilter)
	|| ydk::is_set(ipobtainmode.yfilter)
	|| ydk::is_set(ctrl.yfilter)
	|| ydk::is_set(preemptdelaymin.yfilter)
	|| ydk::is_set(preemptdelayreload.yfilter)
	|| ydk::is_set(preemptdelaysync.yfilter)
	|| ydk::is_set(hellointvl.yfilter)
	|| ydk::is_set(holdintvl.yfilter)
	|| ydk::is_set(prio.yfilter)
	|| ydk::is_set(fwdlwrthrld.yfilter)
	|| ydk::is_set(fwduprthrld.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(follow.yfilter)
	|| ydk::is_set(mac.yfilter)
	|| (addr_items !=  nullptr && addr_items->has_operation());
}

std::string System::HsrpItems::InstItems::IfItems::IfList::GrpItems::GroupList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Group-list";
    ADD_KEY_TOKEN(id, "id");
    ADD_KEY_TOKEN(af, "af");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::HsrpItems::InstItems::IfItems::IfList::GrpItems::GroupList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (af.is_set || is_set(af.yfilter)) leaf_name_data.push_back(af.get_name_leafdata());
    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());
    if (ipobtainmode.is_set || is_set(ipobtainmode.yfilter)) leaf_name_data.push_back(ipobtainmode.get_name_leafdata());
    if (ctrl.is_set || is_set(ctrl.yfilter)) leaf_name_data.push_back(ctrl.get_name_leafdata());
    if (preemptdelaymin.is_set || is_set(preemptdelaymin.yfilter)) leaf_name_data.push_back(preemptdelaymin.get_name_leafdata());
    if (preemptdelayreload.is_set || is_set(preemptdelayreload.yfilter)) leaf_name_data.push_back(preemptdelayreload.get_name_leafdata());
    if (preemptdelaysync.is_set || is_set(preemptdelaysync.yfilter)) leaf_name_data.push_back(preemptdelaysync.get_name_leafdata());
    if (hellointvl.is_set || is_set(hellointvl.yfilter)) leaf_name_data.push_back(hellointvl.get_name_leafdata());
    if (holdintvl.is_set || is_set(holdintvl.yfilter)) leaf_name_data.push_back(holdintvl.get_name_leafdata());
    if (prio.is_set || is_set(prio.yfilter)) leaf_name_data.push_back(prio.get_name_leafdata());
    if (fwdlwrthrld.is_set || is_set(fwdlwrthrld.yfilter)) leaf_name_data.push_back(fwdlwrthrld.get_name_leafdata());
    if (fwduprthrld.is_set || is_set(fwduprthrld.yfilter)) leaf_name_data.push_back(fwduprthrld.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (follow.is_set || is_set(follow.yfilter)) leaf_name_data.push_back(follow.get_name_leafdata());
    if (mac.is_set || is_set(mac.yfilter)) leaf_name_data.push_back(mac.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::HsrpItems::InstItems::IfItems::IfList::GrpItems::GroupList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "addr-items")
    {
        if(addr_items == nullptr)
        {
            addr_items = std::make_shared<System::HsrpItems::InstItems::IfItems::IfList::GrpItems::GroupList::AddrItems>();
        }
        return addr_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::HsrpItems::InstItems::IfItems::IfList::GrpItems::GroupList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(addr_items != nullptr)
    {
        children["addr-items"] = addr_items;
    }

    return children;
}

void System::HsrpItems::InstItems::IfItems::IfList::GrpItems::GroupList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "af")
    {
        af = value;
        af.value_namespace = name_space;
        af.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip")
    {
        ip = value;
        ip.value_namespace = name_space;
        ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipObtainMode")
    {
        ipobtainmode = value;
        ipobtainmode.value_namespace = name_space;
        ipobtainmode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ctrl")
    {
        ctrl = value;
        ctrl.value_namespace = name_space;
        ctrl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "preemptDelayMin")
    {
        preemptdelaymin = value;
        preemptdelaymin.value_namespace = name_space;
        preemptdelaymin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "preemptDelayReload")
    {
        preemptdelayreload = value;
        preemptdelayreload.value_namespace = name_space;
        preemptdelayreload.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "preemptDelaySync")
    {
        preemptdelaysync = value;
        preemptdelaysync.value_namespace = name_space;
        preemptdelaysync.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "helloIntvl")
    {
        hellointvl = value;
        hellointvl.value_namespace = name_space;
        hellointvl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "holdIntvl")
    {
        holdintvl = value;
        holdintvl.value_namespace = name_space;
        holdintvl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prio")
    {
        prio = value;
        prio.value_namespace = name_space;
        prio.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fwdLwrThrld")
    {
        fwdlwrthrld = value;
        fwdlwrthrld.value_namespace = name_space;
        fwdlwrthrld.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fwdUprThrld")
    {
        fwduprthrld = value;
        fwduprthrld.value_namespace = name_space;
        fwduprthrld.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "follow")
    {
        follow = value;
        follow.value_namespace = name_space;
        follow.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac")
    {
        mac = value;
        mac.value_namespace = name_space;
        mac.value_namespace_prefix = name_space_prefix;
    }
}

void System::HsrpItems::InstItems::IfItems::IfList::GrpItems::GroupList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "af")
    {
        af.yfilter = yfilter;
    }
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
    }
    if(value_path == "ipObtainMode")
    {
        ipobtainmode.yfilter = yfilter;
    }
    if(value_path == "ctrl")
    {
        ctrl.yfilter = yfilter;
    }
    if(value_path == "preemptDelayMin")
    {
        preemptdelaymin.yfilter = yfilter;
    }
    if(value_path == "preemptDelayReload")
    {
        preemptdelayreload.yfilter = yfilter;
    }
    if(value_path == "preemptDelaySync")
    {
        preemptdelaysync.yfilter = yfilter;
    }
    if(value_path == "helloIntvl")
    {
        hellointvl.yfilter = yfilter;
    }
    if(value_path == "holdIntvl")
    {
        holdintvl.yfilter = yfilter;
    }
    if(value_path == "prio")
    {
        prio.yfilter = yfilter;
    }
    if(value_path == "fwdLwrThrld")
    {
        fwdlwrthrld.yfilter = yfilter;
    }
    if(value_path == "fwdUprThrld")
    {
        fwduprthrld.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "follow")
    {
        follow.yfilter = yfilter;
    }
    if(value_path == "mac")
    {
        mac.yfilter = yfilter;
    }
}

bool System::HsrpItems::InstItems::IfItems::IfList::GrpItems::GroupList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addr-items" || name == "id" || name == "af" || name == "ip" || name == "ipObtainMode" || name == "ctrl" || name == "preemptDelayMin" || name == "preemptDelayReload" || name == "preemptDelaySync" || name == "helloIntvl" || name == "holdIntvl" || name == "prio" || name == "fwdLwrThrld" || name == "fwdUprThrld" || name == "name" || name == "follow" || name == "mac")
        return true;
    return false;
}

System::HsrpItems::InstItems::IfItems::IfList::GrpItems::GroupList::AddrItems::AddrItems()
    :
    addr_list(this, {"ip"})
{

    yang_name = "addr-items"; yang_parent_name = "Group-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::HsrpItems::InstItems::IfItems::IfList::GrpItems::GroupList::AddrItems::~AddrItems()
{
}

bool System::HsrpItems::InstItems::IfItems::IfList::GrpItems::GroupList::AddrItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<addr_list.len(); index++)
    {
        if(addr_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::HsrpItems::InstItems::IfItems::IfList::GrpItems::GroupList::AddrItems::has_operation() const
{
    for (std::size_t index=0; index<addr_list.len(); index++)
    {
        if(addr_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::HsrpItems::InstItems::IfItems::IfList::GrpItems::GroupList::AddrItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "addr-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::HsrpItems::InstItems::IfItems::IfList::GrpItems::GroupList::AddrItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::HsrpItems::InstItems::IfItems::IfList::GrpItems::GroupList::AddrItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Addr-list")
    {
        auto c = std::make_shared<System::HsrpItems::InstItems::IfItems::IfList::GrpItems::GroupList::AddrItems::AddrList>();
        c->parent = this;
        addr_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::HsrpItems::InstItems::IfItems::IfList::GrpItems::GroupList::AddrItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : addr_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::HsrpItems::InstItems::IfItems::IfList::GrpItems::GroupList::AddrItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::HsrpItems::InstItems::IfItems::IfList::GrpItems::GroupList::AddrItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::HsrpItems::InstItems::IfItems::IfList::GrpItems::GroupList::AddrItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Addr-list")
        return true;
    return false;
}

System::HsrpItems::InstItems::IfItems::IfList::GrpItems::GroupList::AddrItems::AddrList::AddrList()
    :
    ip{YType::str, "ip"}
{

    yang_name = "Addr-list"; yang_parent_name = "addr-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::HsrpItems::InstItems::IfItems::IfList::GrpItems::GroupList::AddrItems::AddrList::~AddrList()
{
}

bool System::HsrpItems::InstItems::IfItems::IfList::GrpItems::GroupList::AddrItems::AddrList::has_data() const
{
    if (is_presence_container) return true;
    return ip.is_set;
}

bool System::HsrpItems::InstItems::IfItems::IfList::GrpItems::GroupList::AddrItems::AddrList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip.yfilter);
}

std::string System::HsrpItems::InstItems::IfItems::IfList::GrpItems::GroupList::AddrItems::AddrList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Addr-list";
    ADD_KEY_TOKEN(ip, "ip");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::HsrpItems::InstItems::IfItems::IfList::GrpItems::GroupList::AddrItems::AddrList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::HsrpItems::InstItems::IfItems::IfList::GrpItems::GroupList::AddrItems::AddrList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::HsrpItems::InstItems::IfItems::IfList::GrpItems::GroupList::AddrItems::AddrList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::HsrpItems::InstItems::IfItems::IfList::GrpItems::GroupList::AddrItems::AddrList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip")
    {
        ip = value;
        ip.value_namespace = name_space;
        ip.value_namespace_prefix = name_space_prefix;
    }
}

void System::HsrpItems::InstItems::IfItems::IfList::GrpItems::GroupList::AddrItems::AddrList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
    }
}

bool System::HsrpItems::InstItems::IfItems::IfList::GrpItems::GroupList::AddrItems::AddrList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip")
        return true;
    return false;
}

System::HsrpItems::InstItems::IfItems::IfList::RtvrfMbrItems::RtvrfMbrItems()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "rtvrfMbr-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::HsrpItems::InstItems::IfItems::IfList::RtvrfMbrItems::~RtvrfMbrItems()
{
}

bool System::HsrpItems::InstItems::IfItems::IfList::RtvrfMbrItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::HsrpItems::InstItems::IfItems::IfList::RtvrfMbrItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::HsrpItems::InstItems::IfItems::IfList::RtvrfMbrItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtvrfMbr-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::HsrpItems::InstItems::IfItems::IfList::RtvrfMbrItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::HsrpItems::InstItems::IfItems::IfList::RtvrfMbrItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::HsrpItems::InstItems::IfItems::IfList::RtvrfMbrItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::HsrpItems::InstItems::IfItems::IfList::RtvrfMbrItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tCl")
    {
        tcl = value;
        tcl.value_namespace = name_space;
        tcl.value_namespace_prefix = name_space_prefix;
    }
}

void System::HsrpItems::InstItems::IfItems::IfList::RtvrfMbrItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
    if(value_path == "tCl")
    {
        tcl.yfilter = yfilter;
    }
}

bool System::HsrpItems::InstItems::IfItems::IfList::RtvrfMbrItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::HsrpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::RtnwPathToIfItems()
    :
    rtnwpathtoif_list(this, {"tdn"})
{

    yang_name = "rtnwPathToIf-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::HsrpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::~RtnwPathToIfItems()
{
}

bool System::HsrpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rtnwpathtoif_list.len(); index++)
    {
        if(rtnwpathtoif_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::HsrpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::has_operation() const
{
    for (std::size_t index=0; index<rtnwpathtoif_list.len(); index++)
    {
        if(rtnwpathtoif_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::HsrpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtnwPathToIf-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::HsrpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::HsrpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RtNwPathToIf-list")
    {
        auto c = std::make_shared<System::HsrpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList>();
        c->parent = this;
        rtnwpathtoif_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::HsrpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : rtnwpathtoif_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::HsrpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::HsrpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::HsrpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RtNwPathToIf-list")
        return true;
    return false;
}

System::HsrpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::RtNwPathToIfList()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "RtNwPathToIf-list"; yang_parent_name = "rtnwPathToIf-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::HsrpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::~RtNwPathToIfList()
{
}

bool System::HsrpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::HsrpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::HsrpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RtNwPathToIf-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::HsrpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::HsrpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::HsrpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::HsrpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tCl")
    {
        tcl = value;
        tcl.value_namespace = name_space;
        tcl.value_namespace_prefix = name_space_prefix;
    }
}

void System::HsrpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
    if(value_path == "tCl")
    {
        tcl.yfilter = yfilter;
    }
}

bool System::HsrpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::Icmpv4Items::Icmpv4Items()
    :
    name{YType::str, "name"},
    adminst{YType::enumeration, "adminSt"},
    operst{YType::enumeration, "operSt"},
    opererr{YType::str, "operErr"}
        ,
    inst_items(std::make_shared<System::Icmpv4Items::InstItems>())
{
    inst_items->parent = this;

    yang_name = "icmpv4-items"; yang_parent_name = "System"; is_top_level_class = false; has_list_ancestor = false; 
}

System::Icmpv4Items::~Icmpv4Items()
{
}

bool System::Icmpv4Items::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| adminst.is_set
	|| operst.is_set
	|| opererr.is_set
	|| (inst_items !=  nullptr && inst_items->has_data());
}

bool System::Icmpv4Items::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(opererr.yfilter)
	|| (inst_items !=  nullptr && inst_items->has_operation());
}

std::string System::Icmpv4Items::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/" << get_segment_path();
    return path_buffer.str();
}

std::string System::Icmpv4Items::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "icmpv4-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Icmpv4Items::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (opererr.is_set || is_set(opererr.yfilter)) leaf_name_data.push_back(opererr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::Icmpv4Items::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "inst-items")
    {
        if(inst_items == nullptr)
        {
            inst_items = std::make_shared<System::Icmpv4Items::InstItems>();
        }
        return inst_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::Icmpv4Items::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(inst_items != nullptr)
    {
        children["inst-items"] = inst_items;
    }

    return children;
}

void System::Icmpv4Items::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adminSt")
    {
        adminst = value;
        adminst.value_namespace = name_space;
        adminst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operErr")
    {
        opererr = value;
        opererr.value_namespace = name_space;
        opererr.value_namespace_prefix = name_space_prefix;
    }
}

void System::Icmpv4Items::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "operErr")
    {
        opererr.yfilter = yfilter;
    }
}

bool System::Icmpv4Items::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inst-items" || name == "name" || name == "adminSt" || name == "operSt" || name == "operErr")
        return true;
    return false;
}

System::Icmpv4Items::InstItems::InstItems()
    :
    name{YType::str, "name"},
    adminst{YType::enumeration, "adminSt"},
    ctrl{YType::str, "ctrl"},
    opererr{YType::str, "operErr"}
        ,
    dom_items(std::make_shared<System::Icmpv4Items::InstItems::DomItems>())
{
    dom_items->parent = this;

    yang_name = "inst-items"; yang_parent_name = "icmpv4-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::Icmpv4Items::InstItems::~InstItems()
{
}

bool System::Icmpv4Items::InstItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| adminst.is_set
	|| ctrl.is_set
	|| opererr.is_set
	|| (dom_items !=  nullptr && dom_items->has_data());
}

bool System::Icmpv4Items::InstItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(ctrl.yfilter)
	|| ydk::is_set(opererr.yfilter)
	|| (dom_items !=  nullptr && dom_items->has_operation());
}

std::string System::Icmpv4Items::InstItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/icmpv4-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::Icmpv4Items::InstItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inst-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Icmpv4Items::InstItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (ctrl.is_set || is_set(ctrl.yfilter)) leaf_name_data.push_back(ctrl.get_name_leafdata());
    if (opererr.is_set || is_set(opererr.yfilter)) leaf_name_data.push_back(opererr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::Icmpv4Items::InstItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dom-items")
    {
        if(dom_items == nullptr)
        {
            dom_items = std::make_shared<System::Icmpv4Items::InstItems::DomItems>();
        }
        return dom_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::Icmpv4Items::InstItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(dom_items != nullptr)
    {
        children["dom-items"] = dom_items;
    }

    return children;
}

void System::Icmpv4Items::InstItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adminSt")
    {
        adminst = value;
        adminst.value_namespace = name_space;
        adminst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ctrl")
    {
        ctrl = value;
        ctrl.value_namespace = name_space;
        ctrl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operErr")
    {
        opererr = value;
        opererr.value_namespace = name_space;
        opererr.value_namespace_prefix = name_space_prefix;
    }
}

void System::Icmpv4Items::InstItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
    if(value_path == "ctrl")
    {
        ctrl.yfilter = yfilter;
    }
    if(value_path == "operErr")
    {
        opererr.yfilter = yfilter;
    }
}

bool System::Icmpv4Items::InstItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dom-items" || name == "name" || name == "adminSt" || name == "ctrl" || name == "operErr")
        return true;
    return false;
}

System::Icmpv4Items::InstItems::DomItems::DomItems()
    :
    dom_list(this, {"name"})
{

    yang_name = "dom-items"; yang_parent_name = "inst-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::Icmpv4Items::InstItems::DomItems::~DomItems()
{
}

bool System::Icmpv4Items::InstItems::DomItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<dom_list.len(); index++)
    {
        if(dom_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::Icmpv4Items::InstItems::DomItems::has_operation() const
{
    for (std::size_t index=0; index<dom_list.len(); index++)
    {
        if(dom_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::Icmpv4Items::InstItems::DomItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/icmpv4-items/inst-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::Icmpv4Items::InstItems::DomItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dom-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Icmpv4Items::InstItems::DomItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::Icmpv4Items::InstItems::DomItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Dom-list")
    {
        auto c = std::make_shared<System::Icmpv4Items::InstItems::DomItems::DomList>();
        c->parent = this;
        dom_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::Icmpv4Items::InstItems::DomItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : dom_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::Icmpv4Items::InstItems::DomItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::Icmpv4Items::InstItems::DomItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::Icmpv4Items::InstItems::DomItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Dom-list")
        return true;
    return false;
}

System::Icmpv4Items::InstItems::DomItems::DomList::DomList()
    :
    name{YType::str, "name"}
        ,
    if_items(std::make_shared<System::Icmpv4Items::InstItems::DomItems::DomList::IfItems>())
{
    if_items->parent = this;

    yang_name = "Dom-list"; yang_parent_name = "dom-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::Icmpv4Items::InstItems::DomItems::DomList::~DomList()
{
}

bool System::Icmpv4Items::InstItems::DomItems::DomList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| (if_items !=  nullptr && if_items->has_data());
}

bool System::Icmpv4Items::InstItems::DomItems::DomList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (if_items !=  nullptr && if_items->has_operation());
}

std::string System::Icmpv4Items::InstItems::DomItems::DomList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/icmpv4-items/inst-items/dom-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::Icmpv4Items::InstItems::DomItems::DomList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Dom-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Icmpv4Items::InstItems::DomItems::DomList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::Icmpv4Items::InstItems::DomItems::DomList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "if-items")
    {
        if(if_items == nullptr)
        {
            if_items = std::make_shared<System::Icmpv4Items::InstItems::DomItems::DomList::IfItems>();
        }
        return if_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::Icmpv4Items::InstItems::DomItems::DomList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(if_items != nullptr)
    {
        children["if-items"] = if_items;
    }

    return children;
}

void System::Icmpv4Items::InstItems::DomItems::DomList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void System::Icmpv4Items::InstItems::DomItems::DomList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool System::Icmpv4Items::InstItems::DomItems::DomList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "if-items" || name == "name")
        return true;
    return false;
}

System::Icmpv4Items::InstItems::DomItems::DomList::IfItems::IfItems()
    :
    if_list(this, {"id"})
{

    yang_name = "if-items"; yang_parent_name = "Dom-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Icmpv4Items::InstItems::DomItems::DomList::IfItems::~IfItems()
{
}

bool System::Icmpv4Items::InstItems::DomItems::DomList::IfItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<if_list.len(); index++)
    {
        if(if_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::Icmpv4Items::InstItems::DomItems::DomList::IfItems::has_operation() const
{
    for (std::size_t index=0; index<if_list.len(); index++)
    {
        if(if_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::Icmpv4Items::InstItems::DomItems::DomList::IfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "if-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Icmpv4Items::InstItems::DomItems::DomList::IfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::Icmpv4Items::InstItems::DomItems::DomList::IfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "If-list")
    {
        auto c = std::make_shared<System::Icmpv4Items::InstItems::DomItems::DomList::IfItems::IfList>();
        c->parent = this;
        if_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::Icmpv4Items::InstItems::DomItems::DomList::IfItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : if_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::Icmpv4Items::InstItems::DomItems::DomList::IfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::Icmpv4Items::InstItems::DomItems::DomList::IfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::Icmpv4Items::InstItems::DomItems::DomList::IfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "If-list")
        return true;
    return false;
}

System::Icmpv4Items::InstItems::DomItems::DomList::IfItems::IfList::IfList()
    :
    id{YType::str, "id"},
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    adminst{YType::enumeration, "adminSt"},
    ctrl{YType::str, "ctrl"}
        ,
    rtvrfmbr_items(std::make_shared<System::Icmpv4Items::InstItems::DomItems::DomList::IfItems::IfList::RtvrfMbrItems>())
    , rtnwpathtoif_items(std::make_shared<System::Icmpv4Items::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems>())
{
    rtvrfmbr_items->parent = this;
    rtnwpathtoif_items->parent = this;

    yang_name = "If-list"; yang_parent_name = "if-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Icmpv4Items::InstItems::DomItems::DomList::IfItems::IfList::~IfList()
{
}

bool System::Icmpv4Items::InstItems::DomItems::DomList::IfItems::IfList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| name.is_set
	|| descr.is_set
	|| adminst.is_set
	|| ctrl.is_set
	|| (rtvrfmbr_items !=  nullptr && rtvrfmbr_items->has_data())
	|| (rtnwpathtoif_items !=  nullptr && rtnwpathtoif_items->has_data());
}

bool System::Icmpv4Items::InstItems::DomItems::DomList::IfItems::IfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(ctrl.yfilter)
	|| (rtvrfmbr_items !=  nullptr && rtvrfmbr_items->has_operation())
	|| (rtnwpathtoif_items !=  nullptr && rtnwpathtoif_items->has_operation());
}

std::string System::Icmpv4Items::InstItems::DomItems::DomList::IfItems::IfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "If-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Icmpv4Items::InstItems::DomItems::DomList::IfItems::IfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (ctrl.is_set || is_set(ctrl.yfilter)) leaf_name_data.push_back(ctrl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::Icmpv4Items::InstItems::DomItems::DomList::IfItems::IfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rtvrfMbr-items")
    {
        if(rtvrfmbr_items == nullptr)
        {
            rtvrfmbr_items = std::make_shared<System::Icmpv4Items::InstItems::DomItems::DomList::IfItems::IfList::RtvrfMbrItems>();
        }
        return rtvrfmbr_items;
    }

    if(child_yang_name == "rtnwPathToIf-items")
    {
        if(rtnwpathtoif_items == nullptr)
        {
            rtnwpathtoif_items = std::make_shared<System::Icmpv4Items::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems>();
        }
        return rtnwpathtoif_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::Icmpv4Items::InstItems::DomItems::DomList::IfItems::IfList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(rtvrfmbr_items != nullptr)
    {
        children["rtvrfMbr-items"] = rtvrfmbr_items;
    }

    if(rtnwpathtoif_items != nullptr)
    {
        children["rtnwPathToIf-items"] = rtnwpathtoif_items;
    }

    return children;
}

void System::Icmpv4Items::InstItems::DomItems::DomList::IfItems::IfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adminSt")
    {
        adminst = value;
        adminst.value_namespace = name_space;
        adminst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ctrl")
    {
        ctrl = value;
        ctrl.value_namespace = name_space;
        ctrl.value_namespace_prefix = name_space_prefix;
    }
}

void System::Icmpv4Items::InstItems::DomItems::DomList::IfItems::IfList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
    if(value_path == "ctrl")
    {
        ctrl.yfilter = yfilter;
    }
}

bool System::Icmpv4Items::InstItems::DomItems::DomList::IfItems::IfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rtvrfMbr-items" || name == "rtnwPathToIf-items" || name == "id" || name == "name" || name == "descr" || name == "adminSt" || name == "ctrl")
        return true;
    return false;
}

System::Icmpv4Items::InstItems::DomItems::DomList::IfItems::IfList::RtvrfMbrItems::RtvrfMbrItems()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "rtvrfMbr-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Icmpv4Items::InstItems::DomItems::DomList::IfItems::IfList::RtvrfMbrItems::~RtvrfMbrItems()
{
}

bool System::Icmpv4Items::InstItems::DomItems::DomList::IfItems::IfList::RtvrfMbrItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::Icmpv4Items::InstItems::DomItems::DomList::IfItems::IfList::RtvrfMbrItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::Icmpv4Items::InstItems::DomItems::DomList::IfItems::IfList::RtvrfMbrItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtvrfMbr-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Icmpv4Items::InstItems::DomItems::DomList::IfItems::IfList::RtvrfMbrItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::Icmpv4Items::InstItems::DomItems::DomList::IfItems::IfList::RtvrfMbrItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::Icmpv4Items::InstItems::DomItems::DomList::IfItems::IfList::RtvrfMbrItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::Icmpv4Items::InstItems::DomItems::DomList::IfItems::IfList::RtvrfMbrItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tCl")
    {
        tcl = value;
        tcl.value_namespace = name_space;
        tcl.value_namespace_prefix = name_space_prefix;
    }
}

void System::Icmpv4Items::InstItems::DomItems::DomList::IfItems::IfList::RtvrfMbrItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
    if(value_path == "tCl")
    {
        tcl.yfilter = yfilter;
    }
}

bool System::Icmpv4Items::InstItems::DomItems::DomList::IfItems::IfList::RtvrfMbrItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::Icmpv4Items::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtnwPathToIfItems()
    :
    rtnwpathtoif_list(this, {"tdn"})
{

    yang_name = "rtnwPathToIf-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Icmpv4Items::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::~RtnwPathToIfItems()
{
}

bool System::Icmpv4Items::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rtnwpathtoif_list.len(); index++)
    {
        if(rtnwpathtoif_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::Icmpv4Items::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::has_operation() const
{
    for (std::size_t index=0; index<rtnwpathtoif_list.len(); index++)
    {
        if(rtnwpathtoif_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::Icmpv4Items::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtnwPathToIf-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Icmpv4Items::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::Icmpv4Items::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RtNwPathToIf-list")
    {
        auto c = std::make_shared<System::Icmpv4Items::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList>();
        c->parent = this;
        rtnwpathtoif_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::Icmpv4Items::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : rtnwpathtoif_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::Icmpv4Items::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::Icmpv4Items::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::Icmpv4Items::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RtNwPathToIf-list")
        return true;
    return false;
}

System::Icmpv4Items::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::RtNwPathToIfList()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "RtNwPathToIf-list"; yang_parent_name = "rtnwPathToIf-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Icmpv4Items::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::~RtNwPathToIfList()
{
}

bool System::Icmpv4Items::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::Icmpv4Items::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::Icmpv4Items::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RtNwPathToIf-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Icmpv4Items::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::Icmpv4Items::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::Icmpv4Items::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::Icmpv4Items::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tCl")
    {
        tcl = value;
        tcl.value_namespace = name_space;
        tcl.value_namespace_prefix = name_space_prefix;
    }
}

void System::Icmpv4Items::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
    if(value_path == "tCl")
    {
        tcl.yfilter = yfilter;
    }
}

bool System::Icmpv4Items::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::Icmpv6Items::Icmpv6Items()
    :
    name{YType::str, "name"},
    adminst{YType::enumeration, "adminSt"},
    operst{YType::enumeration, "operSt"},
    opererr{YType::str, "operErr"}
        ,
    inst_items(std::make_shared<System::Icmpv6Items::InstItems>())
{
    inst_items->parent = this;

    yang_name = "icmpv6-items"; yang_parent_name = "System"; is_top_level_class = false; has_list_ancestor = false; 
}

System::Icmpv6Items::~Icmpv6Items()
{
}

bool System::Icmpv6Items::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| adminst.is_set
	|| operst.is_set
	|| opererr.is_set
	|| (inst_items !=  nullptr && inst_items->has_data());
}

bool System::Icmpv6Items::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(opererr.yfilter)
	|| (inst_items !=  nullptr && inst_items->has_operation());
}

std::string System::Icmpv6Items::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/" << get_segment_path();
    return path_buffer.str();
}

std::string System::Icmpv6Items::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "icmpv6-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Icmpv6Items::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (opererr.is_set || is_set(opererr.yfilter)) leaf_name_data.push_back(opererr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::Icmpv6Items::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "inst-items")
    {
        if(inst_items == nullptr)
        {
            inst_items = std::make_shared<System::Icmpv6Items::InstItems>();
        }
        return inst_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::Icmpv6Items::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(inst_items != nullptr)
    {
        children["inst-items"] = inst_items;
    }

    return children;
}

void System::Icmpv6Items::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adminSt")
    {
        adminst = value;
        adminst.value_namespace = name_space;
        adminst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operErr")
    {
        opererr = value;
        opererr.value_namespace = name_space;
        opererr.value_namespace_prefix = name_space_prefix;
    }
}

void System::Icmpv6Items::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "operErr")
    {
        opererr.yfilter = yfilter;
    }
}

bool System::Icmpv6Items::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inst-items" || name == "name" || name == "adminSt" || name == "operSt" || name == "operErr")
        return true;
    return false;
}

System::Icmpv6Items::InstItems::InstItems()
    :
    operst{YType::enumeration, "operSt"},
    adjstaletimer{YType::uint16, "adjStaleTimer"},
    adjstaletimericmp{YType::enumeration, "adjStaleTimerIcmp"},
    logginglevel{YType::enumeration, "loggingLevel"},
    defaultlogginglevel{YType::enumeration, "defaultLoggingLevel"},
    name{YType::str, "name"},
    adminst{YType::enumeration, "adminSt"},
    ctrl{YType::str, "ctrl"},
    opererr{YType::str, "operErr"}
        ,
    if_items(std::make_shared<System::Icmpv6Items::InstItems::IfItems>())
    , logs_items(std::make_shared<System::Icmpv6Items::InstItems::LogsItems>())
    , ifstats_items(std::make_shared<System::Icmpv6Items::InstItems::IfstatsItems>())
{
    if_items->parent = this;
    logs_items->parent = this;
    ifstats_items->parent = this;

    yang_name = "inst-items"; yang_parent_name = "icmpv6-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::Icmpv6Items::InstItems::~InstItems()
{
}

bool System::Icmpv6Items::InstItems::has_data() const
{
    if (is_presence_container) return true;
    return operst.is_set
	|| adjstaletimer.is_set
	|| adjstaletimericmp.is_set
	|| logginglevel.is_set
	|| defaultlogginglevel.is_set
	|| name.is_set
	|| adminst.is_set
	|| ctrl.is_set
	|| opererr.is_set
	|| (if_items !=  nullptr && if_items->has_data())
	|| (logs_items !=  nullptr && logs_items->has_data())
	|| (ifstats_items !=  nullptr && ifstats_items->has_data());
}

bool System::Icmpv6Items::InstItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(adjstaletimer.yfilter)
	|| ydk::is_set(adjstaletimericmp.yfilter)
	|| ydk::is_set(logginglevel.yfilter)
	|| ydk::is_set(defaultlogginglevel.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(ctrl.yfilter)
	|| ydk::is_set(opererr.yfilter)
	|| (if_items !=  nullptr && if_items->has_operation())
	|| (logs_items !=  nullptr && logs_items->has_operation())
	|| (ifstats_items !=  nullptr && ifstats_items->has_operation());
}

std::string System::Icmpv6Items::InstItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/icmpv6-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::Icmpv6Items::InstItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inst-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Icmpv6Items::InstItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (adjstaletimer.is_set || is_set(adjstaletimer.yfilter)) leaf_name_data.push_back(adjstaletimer.get_name_leafdata());
    if (adjstaletimericmp.is_set || is_set(adjstaletimericmp.yfilter)) leaf_name_data.push_back(adjstaletimericmp.get_name_leafdata());
    if (logginglevel.is_set || is_set(logginglevel.yfilter)) leaf_name_data.push_back(logginglevel.get_name_leafdata());
    if (defaultlogginglevel.is_set || is_set(defaultlogginglevel.yfilter)) leaf_name_data.push_back(defaultlogginglevel.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (ctrl.is_set || is_set(ctrl.yfilter)) leaf_name_data.push_back(ctrl.get_name_leafdata());
    if (opererr.is_set || is_set(opererr.yfilter)) leaf_name_data.push_back(opererr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::Icmpv6Items::InstItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "if-items")
    {
        if(if_items == nullptr)
        {
            if_items = std::make_shared<System::Icmpv6Items::InstItems::IfItems>();
        }
        return if_items;
    }

    if(child_yang_name == "logs-items")
    {
        if(logs_items == nullptr)
        {
            logs_items = std::make_shared<System::Icmpv6Items::InstItems::LogsItems>();
        }
        return logs_items;
    }

    if(child_yang_name == "ifstats-items")
    {
        if(ifstats_items == nullptr)
        {
            ifstats_items = std::make_shared<System::Icmpv6Items::InstItems::IfstatsItems>();
        }
        return ifstats_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::Icmpv6Items::InstItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(if_items != nullptr)
    {
        children["if-items"] = if_items;
    }

    if(logs_items != nullptr)
    {
        children["logs-items"] = logs_items;
    }

    if(ifstats_items != nullptr)
    {
        children["ifstats-items"] = ifstats_items;
    }

    return children;
}

void System::Icmpv6Items::InstItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adjStaleTimer")
    {
        adjstaletimer = value;
        adjstaletimer.value_namespace = name_space;
        adjstaletimer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adjStaleTimerIcmp")
    {
        adjstaletimericmp = value;
        adjstaletimericmp.value_namespace = name_space;
        adjstaletimericmp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "loggingLevel")
    {
        logginglevel = value;
        logginglevel.value_namespace = name_space;
        logginglevel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "defaultLoggingLevel")
    {
        defaultlogginglevel = value;
        defaultlogginglevel.value_namespace = name_space;
        defaultlogginglevel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adminSt")
    {
        adminst = value;
        adminst.value_namespace = name_space;
        adminst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ctrl")
    {
        ctrl = value;
        ctrl.value_namespace = name_space;
        ctrl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operErr")
    {
        opererr = value;
        opererr.value_namespace = name_space;
        opererr.value_namespace_prefix = name_space_prefix;
    }
}

void System::Icmpv6Items::InstItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "adjStaleTimer")
    {
        adjstaletimer.yfilter = yfilter;
    }
    if(value_path == "adjStaleTimerIcmp")
    {
        adjstaletimericmp.yfilter = yfilter;
    }
    if(value_path == "loggingLevel")
    {
        logginglevel.yfilter = yfilter;
    }
    if(value_path == "defaultLoggingLevel")
    {
        defaultlogginglevel.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
    if(value_path == "ctrl")
    {
        ctrl.yfilter = yfilter;
    }
    if(value_path == "operErr")
    {
        opererr.yfilter = yfilter;
    }
}

bool System::Icmpv6Items::InstItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "if-items" || name == "logs-items" || name == "ifstats-items" || name == "operSt" || name == "adjStaleTimer" || name == "adjStaleTimerIcmp" || name == "loggingLevel" || name == "defaultLoggingLevel" || name == "name" || name == "adminSt" || name == "ctrl" || name == "operErr")
        return true;
    return false;
}

System::Icmpv6Items::InstItems::IfItems::IfItems()
    :
    if_list(this, {"id"})
{

    yang_name = "if-items"; yang_parent_name = "inst-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::Icmpv6Items::InstItems::IfItems::~IfItems()
{
}

bool System::Icmpv6Items::InstItems::IfItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<if_list.len(); index++)
    {
        if(if_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::Icmpv6Items::InstItems::IfItems::has_operation() const
{
    for (std::size_t index=0; index<if_list.len(); index++)
    {
        if(if_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::Icmpv6Items::InstItems::IfItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/icmpv6-items/inst-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::Icmpv6Items::InstItems::IfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "if-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Icmpv6Items::InstItems::IfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::Icmpv6Items::InstItems::IfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "If-list")
    {
        auto c = std::make_shared<System::Icmpv6Items::InstItems::IfItems::IfList>();
        c->parent = this;
        if_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::Icmpv6Items::InstItems::IfItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : if_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::Icmpv6Items::InstItems::IfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::Icmpv6Items::InstItems::IfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::Icmpv6Items::InstItems::IfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "If-list")
        return true;
    return false;
}

System::Icmpv6Items::InstItems::IfItems::IfList::IfList()
    :
    id{YType::str, "id"},
    ctrl{YType::str, "ctrl"},
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    adminst{YType::enumeration, "adminSt"}
        ,
    ifstats_items(std::make_shared<System::Icmpv6Items::InstItems::IfItems::IfList::IfstatsItems>())
    , rtvrfmbr_items(std::make_shared<System::Icmpv6Items::InstItems::IfItems::IfList::RtvrfMbrItems>())
    , rtnwpathtoif_items(std::make_shared<System::Icmpv6Items::InstItems::IfItems::IfList::RtnwPathToIfItems>())
{
    ifstats_items->parent = this;
    rtvrfmbr_items->parent = this;
    rtnwpathtoif_items->parent = this;

    yang_name = "If-list"; yang_parent_name = "if-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::Icmpv6Items::InstItems::IfItems::IfList::~IfList()
{
}

bool System::Icmpv6Items::InstItems::IfItems::IfList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| ctrl.is_set
	|| name.is_set
	|| descr.is_set
	|| adminst.is_set
	|| (ifstats_items !=  nullptr && ifstats_items->has_data())
	|| (rtvrfmbr_items !=  nullptr && rtvrfmbr_items->has_data())
	|| (rtnwpathtoif_items !=  nullptr && rtnwpathtoif_items->has_data());
}

bool System::Icmpv6Items::InstItems::IfItems::IfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(ctrl.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| (ifstats_items !=  nullptr && ifstats_items->has_operation())
	|| (rtvrfmbr_items !=  nullptr && rtvrfmbr_items->has_operation())
	|| (rtnwpathtoif_items !=  nullptr && rtnwpathtoif_items->has_operation());
}

std::string System::Icmpv6Items::InstItems::IfItems::IfList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/icmpv6-items/inst-items/if-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::Icmpv6Items::InstItems::IfItems::IfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "If-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Icmpv6Items::InstItems::IfItems::IfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (ctrl.is_set || is_set(ctrl.yfilter)) leaf_name_data.push_back(ctrl.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::Icmpv6Items::InstItems::IfItems::IfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ifstats-items")
    {
        if(ifstats_items == nullptr)
        {
            ifstats_items = std::make_shared<System::Icmpv6Items::InstItems::IfItems::IfList::IfstatsItems>();
        }
        return ifstats_items;
    }

    if(child_yang_name == "rtvrfMbr-items")
    {
        if(rtvrfmbr_items == nullptr)
        {
            rtvrfmbr_items = std::make_shared<System::Icmpv6Items::InstItems::IfItems::IfList::RtvrfMbrItems>();
        }
        return rtvrfmbr_items;
    }

    if(child_yang_name == "rtnwPathToIf-items")
    {
        if(rtnwpathtoif_items == nullptr)
        {
            rtnwpathtoif_items = std::make_shared<System::Icmpv6Items::InstItems::IfItems::IfList::RtnwPathToIfItems>();
        }
        return rtnwpathtoif_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::Icmpv6Items::InstItems::IfItems::IfList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(ifstats_items != nullptr)
    {
        children["ifstats-items"] = ifstats_items;
    }

    if(rtvrfmbr_items != nullptr)
    {
        children["rtvrfMbr-items"] = rtvrfmbr_items;
    }

    if(rtnwpathtoif_items != nullptr)
    {
        children["rtnwPathToIf-items"] = rtnwpathtoif_items;
    }

    return children;
}

void System::Icmpv6Items::InstItems::IfItems::IfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ctrl")
    {
        ctrl = value;
        ctrl.value_namespace = name_space;
        ctrl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adminSt")
    {
        adminst = value;
        adminst.value_namespace = name_space;
        adminst.value_namespace_prefix = name_space_prefix;
    }
}

void System::Icmpv6Items::InstItems::IfItems::IfList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "ctrl")
    {
        ctrl.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
}

bool System::Icmpv6Items::InstItems::IfItems::IfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifstats-items" || name == "rtvrfMbr-items" || name == "rtnwPathToIf-items" || name == "id" || name == "ctrl" || name == "name" || name == "descr" || name == "adminSt")
        return true;
    return false;
}

System::Icmpv6Items::InstItems::IfItems::IfList::IfstatsItems::IfstatsItems()
    :
    totsent{YType::uint64, "totSent"},
    totrvcd{YType::uint64, "totRvcd"},
    errsent{YType::uint64, "errSent"},
    errrcvd{YType::uint64, "errRcvd"},
    ifdowndropsent{YType::uint64, "ifDownDropSent"},
    ifdowndroprcvd{YType::uint64, "ifDownDropRcvd"},
    drophanotrdy{YType::uint64, "dropHaNotRdy"},
    dropinvldttlmct{YType::uint64, "dropInvldTtlMct"},
    dropsrcmacownrcvd{YType::uint64, "dropSrcMacOwnRcvd"},
    droptgtipnotownrcvd{YType::uint64, "dropTgtIpNotOwnRcvd"},
    dropsrcipnotownrcvd{YType::uint64, "dropSrcIpNotOwnRcvd"},
    destunreachsent{YType::uint64, "destUnreachSent"},
    destunreachrcvd{YType::uint64, "destUnreachRcvd"},
    adminprohibsent{YType::uint64, "adminProhibSent"},
    adminprohibrcvd{YType::uint64, "adminProhibRcvd"},
    timeexcdsent{YType::uint64, "timeExcdSent"},
    timeexcdrcvd{YType::uint64, "timeExcdRcvd"},
    parmprblmsent{YType::uint64, "parmPrblmSent"},
    parmprblmrcvd{YType::uint64, "parmPrblmRcvd"},
    echoreqsent{YType::uint64, "echoReqSent"},
    echoreqrcvd{YType::uint64, "echoReqRcvd"},
    echorepsent{YType::uint64, "echoRepSent"},
    echoreprcvd{YType::uint64, "echoRepRcvd"},
    redirsent{YType::uint64, "redirSent"},
    redirrcvd{YType::uint64, "redirRcvd"},
    toobigsent{YType::uint64, "tooBigSent"},
    toobigrcvd{YType::uint64, "tooBigRcvd"},
    rasent{YType::uint64, "raSent"},
    rarcvd{YType::uint64, "raRcvd"},
    rssent{YType::uint64, "rsSent"},
    rsrcvd{YType::uint64, "rsRcvd"},
    nasent{YType::uint64, "naSent"},
    narcvd{YType::uint64, "naRcvd"},
    nssent{YType::uint64, "nsSent"},
    nsrcvd{YType::uint64, "nsRcvd"},
    duprareceived{YType::uint64, "dupRAReceived"},
    fastpthrcvd{YType::uint64, "fastpthRcvd"},
    fastpathdsbleignrcvd{YType::uint64, "fastpathDsbleIgnRcvd"},
    fastpathotherignrcvd{YType::uint64, "fastpathOtherIgnRcvd"},
    mldv1queriessent{YType::uint64, "mldV1QueriesSent"},
    mldv1queriesrecv{YType::uint64, "mldV1QueriesRecv"},
    mldv2queriessent{YType::uint64, "mldV2QueriesSent"},
    mldv2queriesrecv{YType::uint64, "mldV2QueriesRecv"},
    mldv1reportssent{YType::uint64, "mldV1ReportsSent"},
    mldv1reportsrecv{YType::uint64, "mldV1ReportsRecv"},
    mldv2reportssent{YType::uint64, "mldV2ReportsSent"},
    mldv2reportsrecv{YType::uint64, "mldV2ReportsRecv"},
    mldv1leavessent{YType::uint64, "mldV1LeavesSent"},
    mldv1leavesrecv{YType::uint64, "mldV1LeavesRecv"}
{

    yang_name = "ifstats-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Icmpv6Items::InstItems::IfItems::IfList::IfstatsItems::~IfstatsItems()
{
}

bool System::Icmpv6Items::InstItems::IfItems::IfList::IfstatsItems::has_data() const
{
    if (is_presence_container) return true;
    return totsent.is_set
	|| totrvcd.is_set
	|| errsent.is_set
	|| errrcvd.is_set
	|| ifdowndropsent.is_set
	|| ifdowndroprcvd.is_set
	|| drophanotrdy.is_set
	|| dropinvldttlmct.is_set
	|| dropsrcmacownrcvd.is_set
	|| droptgtipnotownrcvd.is_set
	|| dropsrcipnotownrcvd.is_set
	|| destunreachsent.is_set
	|| destunreachrcvd.is_set
	|| adminprohibsent.is_set
	|| adminprohibrcvd.is_set
	|| timeexcdsent.is_set
	|| timeexcdrcvd.is_set
	|| parmprblmsent.is_set
	|| parmprblmrcvd.is_set
	|| echoreqsent.is_set
	|| echoreqrcvd.is_set
	|| echorepsent.is_set
	|| echoreprcvd.is_set
	|| redirsent.is_set
	|| redirrcvd.is_set
	|| toobigsent.is_set
	|| toobigrcvd.is_set
	|| rasent.is_set
	|| rarcvd.is_set
	|| rssent.is_set
	|| rsrcvd.is_set
	|| nasent.is_set
	|| narcvd.is_set
	|| nssent.is_set
	|| nsrcvd.is_set
	|| duprareceived.is_set
	|| fastpthrcvd.is_set
	|| fastpathdsbleignrcvd.is_set
	|| fastpathotherignrcvd.is_set
	|| mldv1queriessent.is_set
	|| mldv1queriesrecv.is_set
	|| mldv2queriessent.is_set
	|| mldv2queriesrecv.is_set
	|| mldv1reportssent.is_set
	|| mldv1reportsrecv.is_set
	|| mldv2reportssent.is_set
	|| mldv2reportsrecv.is_set
	|| mldv1leavessent.is_set
	|| mldv1leavesrecv.is_set;
}

bool System::Icmpv6Items::InstItems::IfItems::IfList::IfstatsItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(totsent.yfilter)
	|| ydk::is_set(totrvcd.yfilter)
	|| ydk::is_set(errsent.yfilter)
	|| ydk::is_set(errrcvd.yfilter)
	|| ydk::is_set(ifdowndropsent.yfilter)
	|| ydk::is_set(ifdowndroprcvd.yfilter)
	|| ydk::is_set(drophanotrdy.yfilter)
	|| ydk::is_set(dropinvldttlmct.yfilter)
	|| ydk::is_set(dropsrcmacownrcvd.yfilter)
	|| ydk::is_set(droptgtipnotownrcvd.yfilter)
	|| ydk::is_set(dropsrcipnotownrcvd.yfilter)
	|| ydk::is_set(destunreachsent.yfilter)
	|| ydk::is_set(destunreachrcvd.yfilter)
	|| ydk::is_set(adminprohibsent.yfilter)
	|| ydk::is_set(adminprohibrcvd.yfilter)
	|| ydk::is_set(timeexcdsent.yfilter)
	|| ydk::is_set(timeexcdrcvd.yfilter)
	|| ydk::is_set(parmprblmsent.yfilter)
	|| ydk::is_set(parmprblmrcvd.yfilter)
	|| ydk::is_set(echoreqsent.yfilter)
	|| ydk::is_set(echoreqrcvd.yfilter)
	|| ydk::is_set(echorepsent.yfilter)
	|| ydk::is_set(echoreprcvd.yfilter)
	|| ydk::is_set(redirsent.yfilter)
	|| ydk::is_set(redirrcvd.yfilter)
	|| ydk::is_set(toobigsent.yfilter)
	|| ydk::is_set(toobigrcvd.yfilter)
	|| ydk::is_set(rasent.yfilter)
	|| ydk::is_set(rarcvd.yfilter)
	|| ydk::is_set(rssent.yfilter)
	|| ydk::is_set(rsrcvd.yfilter)
	|| ydk::is_set(nasent.yfilter)
	|| ydk::is_set(narcvd.yfilter)
	|| ydk::is_set(nssent.yfilter)
	|| ydk::is_set(nsrcvd.yfilter)
	|| ydk::is_set(duprareceived.yfilter)
	|| ydk::is_set(fastpthrcvd.yfilter)
	|| ydk::is_set(fastpathdsbleignrcvd.yfilter)
	|| ydk::is_set(fastpathotherignrcvd.yfilter)
	|| ydk::is_set(mldv1queriessent.yfilter)
	|| ydk::is_set(mldv1queriesrecv.yfilter)
	|| ydk::is_set(mldv2queriessent.yfilter)
	|| ydk::is_set(mldv2queriesrecv.yfilter)
	|| ydk::is_set(mldv1reportssent.yfilter)
	|| ydk::is_set(mldv1reportsrecv.yfilter)
	|| ydk::is_set(mldv2reportssent.yfilter)
	|| ydk::is_set(mldv2reportsrecv.yfilter)
	|| ydk::is_set(mldv1leavessent.yfilter)
	|| ydk::is_set(mldv1leavesrecv.yfilter);
}

std::string System::Icmpv6Items::InstItems::IfItems::IfList::IfstatsItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ifstats-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Icmpv6Items::InstItems::IfItems::IfList::IfstatsItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (totsent.is_set || is_set(totsent.yfilter)) leaf_name_data.push_back(totsent.get_name_leafdata());
    if (totrvcd.is_set || is_set(totrvcd.yfilter)) leaf_name_data.push_back(totrvcd.get_name_leafdata());
    if (errsent.is_set || is_set(errsent.yfilter)) leaf_name_data.push_back(errsent.get_name_leafdata());
    if (errrcvd.is_set || is_set(errrcvd.yfilter)) leaf_name_data.push_back(errrcvd.get_name_leafdata());
    if (ifdowndropsent.is_set || is_set(ifdowndropsent.yfilter)) leaf_name_data.push_back(ifdowndropsent.get_name_leafdata());
    if (ifdowndroprcvd.is_set || is_set(ifdowndroprcvd.yfilter)) leaf_name_data.push_back(ifdowndroprcvd.get_name_leafdata());
    if (drophanotrdy.is_set || is_set(drophanotrdy.yfilter)) leaf_name_data.push_back(drophanotrdy.get_name_leafdata());
    if (dropinvldttlmct.is_set || is_set(dropinvldttlmct.yfilter)) leaf_name_data.push_back(dropinvldttlmct.get_name_leafdata());
    if (dropsrcmacownrcvd.is_set || is_set(dropsrcmacownrcvd.yfilter)) leaf_name_data.push_back(dropsrcmacownrcvd.get_name_leafdata());
    if (droptgtipnotownrcvd.is_set || is_set(droptgtipnotownrcvd.yfilter)) leaf_name_data.push_back(droptgtipnotownrcvd.get_name_leafdata());
    if (dropsrcipnotownrcvd.is_set || is_set(dropsrcipnotownrcvd.yfilter)) leaf_name_data.push_back(dropsrcipnotownrcvd.get_name_leafdata());
    if (destunreachsent.is_set || is_set(destunreachsent.yfilter)) leaf_name_data.push_back(destunreachsent.get_name_leafdata());
    if (destunreachrcvd.is_set || is_set(destunreachrcvd.yfilter)) leaf_name_data.push_back(destunreachrcvd.get_name_leafdata());
    if (adminprohibsent.is_set || is_set(adminprohibsent.yfilter)) leaf_name_data.push_back(adminprohibsent.get_name_leafdata());
    if (adminprohibrcvd.is_set || is_set(adminprohibrcvd.yfilter)) leaf_name_data.push_back(adminprohibrcvd.get_name_leafdata());
    if (timeexcdsent.is_set || is_set(timeexcdsent.yfilter)) leaf_name_data.push_back(timeexcdsent.get_name_leafdata());
    if (timeexcdrcvd.is_set || is_set(timeexcdrcvd.yfilter)) leaf_name_data.push_back(timeexcdrcvd.get_name_leafdata());
    if (parmprblmsent.is_set || is_set(parmprblmsent.yfilter)) leaf_name_data.push_back(parmprblmsent.get_name_leafdata());
    if (parmprblmrcvd.is_set || is_set(parmprblmrcvd.yfilter)) leaf_name_data.push_back(parmprblmrcvd.get_name_leafdata());
    if (echoreqsent.is_set || is_set(echoreqsent.yfilter)) leaf_name_data.push_back(echoreqsent.get_name_leafdata());
    if (echoreqrcvd.is_set || is_set(echoreqrcvd.yfilter)) leaf_name_data.push_back(echoreqrcvd.get_name_leafdata());
    if (echorepsent.is_set || is_set(echorepsent.yfilter)) leaf_name_data.push_back(echorepsent.get_name_leafdata());
    if (echoreprcvd.is_set || is_set(echoreprcvd.yfilter)) leaf_name_data.push_back(echoreprcvd.get_name_leafdata());
    if (redirsent.is_set || is_set(redirsent.yfilter)) leaf_name_data.push_back(redirsent.get_name_leafdata());
    if (redirrcvd.is_set || is_set(redirrcvd.yfilter)) leaf_name_data.push_back(redirrcvd.get_name_leafdata());
    if (toobigsent.is_set || is_set(toobigsent.yfilter)) leaf_name_data.push_back(toobigsent.get_name_leafdata());
    if (toobigrcvd.is_set || is_set(toobigrcvd.yfilter)) leaf_name_data.push_back(toobigrcvd.get_name_leafdata());
    if (rasent.is_set || is_set(rasent.yfilter)) leaf_name_data.push_back(rasent.get_name_leafdata());
    if (rarcvd.is_set || is_set(rarcvd.yfilter)) leaf_name_data.push_back(rarcvd.get_name_leafdata());
    if (rssent.is_set || is_set(rssent.yfilter)) leaf_name_data.push_back(rssent.get_name_leafdata());
    if (rsrcvd.is_set || is_set(rsrcvd.yfilter)) leaf_name_data.push_back(rsrcvd.get_name_leafdata());
    if (nasent.is_set || is_set(nasent.yfilter)) leaf_name_data.push_back(nasent.get_name_leafdata());
    if (narcvd.is_set || is_set(narcvd.yfilter)) leaf_name_data.push_back(narcvd.get_name_leafdata());
    if (nssent.is_set || is_set(nssent.yfilter)) leaf_name_data.push_back(nssent.get_name_leafdata());
    if (nsrcvd.is_set || is_set(nsrcvd.yfilter)) leaf_name_data.push_back(nsrcvd.get_name_leafdata());
    if (duprareceived.is_set || is_set(duprareceived.yfilter)) leaf_name_data.push_back(duprareceived.get_name_leafdata());
    if (fastpthrcvd.is_set || is_set(fastpthrcvd.yfilter)) leaf_name_data.push_back(fastpthrcvd.get_name_leafdata());
    if (fastpathdsbleignrcvd.is_set || is_set(fastpathdsbleignrcvd.yfilter)) leaf_name_data.push_back(fastpathdsbleignrcvd.get_name_leafdata());
    if (fastpathotherignrcvd.is_set || is_set(fastpathotherignrcvd.yfilter)) leaf_name_data.push_back(fastpathotherignrcvd.get_name_leafdata());
    if (mldv1queriessent.is_set || is_set(mldv1queriessent.yfilter)) leaf_name_data.push_back(mldv1queriessent.get_name_leafdata());
    if (mldv1queriesrecv.is_set || is_set(mldv1queriesrecv.yfilter)) leaf_name_data.push_back(mldv1queriesrecv.get_name_leafdata());
    if (mldv2queriessent.is_set || is_set(mldv2queriessent.yfilter)) leaf_name_data.push_back(mldv2queriessent.get_name_leafdata());
    if (mldv2queriesrecv.is_set || is_set(mldv2queriesrecv.yfilter)) leaf_name_data.push_back(mldv2queriesrecv.get_name_leafdata());
    if (mldv1reportssent.is_set || is_set(mldv1reportssent.yfilter)) leaf_name_data.push_back(mldv1reportssent.get_name_leafdata());
    if (mldv1reportsrecv.is_set || is_set(mldv1reportsrecv.yfilter)) leaf_name_data.push_back(mldv1reportsrecv.get_name_leafdata());
    if (mldv2reportssent.is_set || is_set(mldv2reportssent.yfilter)) leaf_name_data.push_back(mldv2reportssent.get_name_leafdata());
    if (mldv2reportsrecv.is_set || is_set(mldv2reportsrecv.yfilter)) leaf_name_data.push_back(mldv2reportsrecv.get_name_leafdata());
    if (mldv1leavessent.is_set || is_set(mldv1leavessent.yfilter)) leaf_name_data.push_back(mldv1leavessent.get_name_leafdata());
    if (mldv1leavesrecv.is_set || is_set(mldv1leavesrecv.yfilter)) leaf_name_data.push_back(mldv1leavesrecv.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::Icmpv6Items::InstItems::IfItems::IfList::IfstatsItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::Icmpv6Items::InstItems::IfItems::IfList::IfstatsItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::Icmpv6Items::InstItems::IfItems::IfList::IfstatsItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "totSent")
    {
        totsent = value;
        totsent.value_namespace = name_space;
        totsent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "totRvcd")
    {
        totrvcd = value;
        totrvcd.value_namespace = name_space;
        totrvcd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "errSent")
    {
        errsent = value;
        errsent.value_namespace = name_space;
        errsent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "errRcvd")
    {
        errrcvd = value;
        errrcvd.value_namespace = name_space;
        errrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ifDownDropSent")
    {
        ifdowndropsent = value;
        ifdowndropsent.value_namespace = name_space;
        ifdowndropsent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ifDownDropRcvd")
    {
        ifdowndroprcvd = value;
        ifdowndroprcvd.value_namespace = name_space;
        ifdowndroprcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dropHaNotRdy")
    {
        drophanotrdy = value;
        drophanotrdy.value_namespace = name_space;
        drophanotrdy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dropInvldTtlMct")
    {
        dropinvldttlmct = value;
        dropinvldttlmct.value_namespace = name_space;
        dropinvldttlmct.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dropSrcMacOwnRcvd")
    {
        dropsrcmacownrcvd = value;
        dropsrcmacownrcvd.value_namespace = name_space;
        dropsrcmacownrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dropTgtIpNotOwnRcvd")
    {
        droptgtipnotownrcvd = value;
        droptgtipnotownrcvd.value_namespace = name_space;
        droptgtipnotownrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dropSrcIpNotOwnRcvd")
    {
        dropsrcipnotownrcvd = value;
        dropsrcipnotownrcvd.value_namespace = name_space;
        dropsrcipnotownrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destUnreachSent")
    {
        destunreachsent = value;
        destunreachsent.value_namespace = name_space;
        destunreachsent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destUnreachRcvd")
    {
        destunreachrcvd = value;
        destunreachrcvd.value_namespace = name_space;
        destunreachrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adminProhibSent")
    {
        adminprohibsent = value;
        adminprohibsent.value_namespace = name_space;
        adminprohibsent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adminProhibRcvd")
    {
        adminprohibrcvd = value;
        adminprohibrcvd.value_namespace = name_space;
        adminprohibrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timeExcdSent")
    {
        timeexcdsent = value;
        timeexcdsent.value_namespace = name_space;
        timeexcdsent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timeExcdRcvd")
    {
        timeexcdrcvd = value;
        timeexcdrcvd.value_namespace = name_space;
        timeexcdrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "parmPrblmSent")
    {
        parmprblmsent = value;
        parmprblmsent.value_namespace = name_space;
        parmprblmsent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "parmPrblmRcvd")
    {
        parmprblmrcvd = value;
        parmprblmrcvd.value_namespace = name_space;
        parmprblmrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "echoReqSent")
    {
        echoreqsent = value;
        echoreqsent.value_namespace = name_space;
        echoreqsent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "echoReqRcvd")
    {
        echoreqrcvd = value;
        echoreqrcvd.value_namespace = name_space;
        echoreqrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "echoRepSent")
    {
        echorepsent = value;
        echorepsent.value_namespace = name_space;
        echorepsent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "echoRepRcvd")
    {
        echoreprcvd = value;
        echoreprcvd.value_namespace = name_space;
        echoreprcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redirSent")
    {
        redirsent = value;
        redirsent.value_namespace = name_space;
        redirsent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redirRcvd")
    {
        redirrcvd = value;
        redirrcvd.value_namespace = name_space;
        redirrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tooBigSent")
    {
        toobigsent = value;
        toobigsent.value_namespace = name_space;
        toobigsent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tooBigRcvd")
    {
        toobigrcvd = value;
        toobigrcvd.value_namespace = name_space;
        toobigrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "raSent")
    {
        rasent = value;
        rasent.value_namespace = name_space;
        rasent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "raRcvd")
    {
        rarcvd = value;
        rarcvd.value_namespace = name_space;
        rarcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsSent")
    {
        rssent = value;
        rssent.value_namespace = name_space;
        rssent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsRcvd")
    {
        rsrcvd = value;
        rsrcvd.value_namespace = name_space;
        rsrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "naSent")
    {
        nasent = value;
        nasent.value_namespace = name_space;
        nasent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "naRcvd")
    {
        narcvd = value;
        narcvd.value_namespace = name_space;
        narcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsSent")
    {
        nssent = value;
        nssent.value_namespace = name_space;
        nssent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsRcvd")
    {
        nsrcvd = value;
        nsrcvd.value_namespace = name_space;
        nsrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dupRAReceived")
    {
        duprareceived = value;
        duprareceived.value_namespace = name_space;
        duprareceived.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fastpthRcvd")
    {
        fastpthrcvd = value;
        fastpthrcvd.value_namespace = name_space;
        fastpthrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fastpathDsbleIgnRcvd")
    {
        fastpathdsbleignrcvd = value;
        fastpathdsbleignrcvd.value_namespace = name_space;
        fastpathdsbleignrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fastpathOtherIgnRcvd")
    {
        fastpathotherignrcvd = value;
        fastpathotherignrcvd.value_namespace = name_space;
        fastpathotherignrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mldV1QueriesSent")
    {
        mldv1queriessent = value;
        mldv1queriessent.value_namespace = name_space;
        mldv1queriessent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mldV1QueriesRecv")
    {
        mldv1queriesrecv = value;
        mldv1queriesrecv.value_namespace = name_space;
        mldv1queriesrecv.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mldV2QueriesSent")
    {
        mldv2queriessent = value;
        mldv2queriessent.value_namespace = name_space;
        mldv2queriessent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mldV2QueriesRecv")
    {
        mldv2queriesrecv = value;
        mldv2queriesrecv.value_namespace = name_space;
        mldv2queriesrecv.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mldV1ReportsSent")
    {
        mldv1reportssent = value;
        mldv1reportssent.value_namespace = name_space;
        mldv1reportssent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mldV1ReportsRecv")
    {
        mldv1reportsrecv = value;
        mldv1reportsrecv.value_namespace = name_space;
        mldv1reportsrecv.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mldV2ReportsSent")
    {
        mldv2reportssent = value;
        mldv2reportssent.value_namespace = name_space;
        mldv2reportssent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mldV2ReportsRecv")
    {
        mldv2reportsrecv = value;
        mldv2reportsrecv.value_namespace = name_space;
        mldv2reportsrecv.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mldV1LeavesSent")
    {
        mldv1leavessent = value;
        mldv1leavessent.value_namespace = name_space;
        mldv1leavessent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mldV1LeavesRecv")
    {
        mldv1leavesrecv = value;
        mldv1leavesrecv.value_namespace = name_space;
        mldv1leavesrecv.value_namespace_prefix = name_space_prefix;
    }
}

void System::Icmpv6Items::InstItems::IfItems::IfList::IfstatsItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "totSent")
    {
        totsent.yfilter = yfilter;
    }
    if(value_path == "totRvcd")
    {
        totrvcd.yfilter = yfilter;
    }
    if(value_path == "errSent")
    {
        errsent.yfilter = yfilter;
    }
    if(value_path == "errRcvd")
    {
        errrcvd.yfilter = yfilter;
    }
    if(value_path == "ifDownDropSent")
    {
        ifdowndropsent.yfilter = yfilter;
    }
    if(value_path == "ifDownDropRcvd")
    {
        ifdowndroprcvd.yfilter = yfilter;
    }
    if(value_path == "dropHaNotRdy")
    {
        drophanotrdy.yfilter = yfilter;
    }
    if(value_path == "dropInvldTtlMct")
    {
        dropinvldttlmct.yfilter = yfilter;
    }
    if(value_path == "dropSrcMacOwnRcvd")
    {
        dropsrcmacownrcvd.yfilter = yfilter;
    }
    if(value_path == "dropTgtIpNotOwnRcvd")
    {
        droptgtipnotownrcvd.yfilter = yfilter;
    }
    if(value_path == "dropSrcIpNotOwnRcvd")
    {
        dropsrcipnotownrcvd.yfilter = yfilter;
    }
    if(value_path == "destUnreachSent")
    {
        destunreachsent.yfilter = yfilter;
    }
    if(value_path == "destUnreachRcvd")
    {
        destunreachrcvd.yfilter = yfilter;
    }
    if(value_path == "adminProhibSent")
    {
        adminprohibsent.yfilter = yfilter;
    }
    if(value_path == "adminProhibRcvd")
    {
        adminprohibrcvd.yfilter = yfilter;
    }
    if(value_path == "timeExcdSent")
    {
        timeexcdsent.yfilter = yfilter;
    }
    if(value_path == "timeExcdRcvd")
    {
        timeexcdrcvd.yfilter = yfilter;
    }
    if(value_path == "parmPrblmSent")
    {
        parmprblmsent.yfilter = yfilter;
    }
    if(value_path == "parmPrblmRcvd")
    {
        parmprblmrcvd.yfilter = yfilter;
    }
    if(value_path == "echoReqSent")
    {
        echoreqsent.yfilter = yfilter;
    }
    if(value_path == "echoReqRcvd")
    {
        echoreqrcvd.yfilter = yfilter;
    }
    if(value_path == "echoRepSent")
    {
        echorepsent.yfilter = yfilter;
    }
    if(value_path == "echoRepRcvd")
    {
        echoreprcvd.yfilter = yfilter;
    }
    if(value_path == "redirSent")
    {
        redirsent.yfilter = yfilter;
    }
    if(value_path == "redirRcvd")
    {
        redirrcvd.yfilter = yfilter;
    }
    if(value_path == "tooBigSent")
    {
        toobigsent.yfilter = yfilter;
    }
    if(value_path == "tooBigRcvd")
    {
        toobigrcvd.yfilter = yfilter;
    }
    if(value_path == "raSent")
    {
        rasent.yfilter = yfilter;
    }
    if(value_path == "raRcvd")
    {
        rarcvd.yfilter = yfilter;
    }
    if(value_path == "rsSent")
    {
        rssent.yfilter = yfilter;
    }
    if(value_path == "rsRcvd")
    {
        rsrcvd.yfilter = yfilter;
    }
    if(value_path == "naSent")
    {
        nasent.yfilter = yfilter;
    }
    if(value_path == "naRcvd")
    {
        narcvd.yfilter = yfilter;
    }
    if(value_path == "nsSent")
    {
        nssent.yfilter = yfilter;
    }
    if(value_path == "nsRcvd")
    {
        nsrcvd.yfilter = yfilter;
    }
    if(value_path == "dupRAReceived")
    {
        duprareceived.yfilter = yfilter;
    }
    if(value_path == "fastpthRcvd")
    {
        fastpthrcvd.yfilter = yfilter;
    }
    if(value_path == "fastpathDsbleIgnRcvd")
    {
        fastpathdsbleignrcvd.yfilter = yfilter;
    }
    if(value_path == "fastpathOtherIgnRcvd")
    {
        fastpathotherignrcvd.yfilter = yfilter;
    }
    if(value_path == "mldV1QueriesSent")
    {
        mldv1queriessent.yfilter = yfilter;
    }
    if(value_path == "mldV1QueriesRecv")
    {
        mldv1queriesrecv.yfilter = yfilter;
    }
    if(value_path == "mldV2QueriesSent")
    {
        mldv2queriessent.yfilter = yfilter;
    }
    if(value_path == "mldV2QueriesRecv")
    {
        mldv2queriesrecv.yfilter = yfilter;
    }
    if(value_path == "mldV1ReportsSent")
    {
        mldv1reportssent.yfilter = yfilter;
    }
    if(value_path == "mldV1ReportsRecv")
    {
        mldv1reportsrecv.yfilter = yfilter;
    }
    if(value_path == "mldV2ReportsSent")
    {
        mldv2reportssent.yfilter = yfilter;
    }
    if(value_path == "mldV2ReportsRecv")
    {
        mldv2reportsrecv.yfilter = yfilter;
    }
    if(value_path == "mldV1LeavesSent")
    {
        mldv1leavessent.yfilter = yfilter;
    }
    if(value_path == "mldV1LeavesRecv")
    {
        mldv1leavesrecv.yfilter = yfilter;
    }
}

bool System::Icmpv6Items::InstItems::IfItems::IfList::IfstatsItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "totSent" || name == "totRvcd" || name == "errSent" || name == "errRcvd" || name == "ifDownDropSent" || name == "ifDownDropRcvd" || name == "dropHaNotRdy" || name == "dropInvldTtlMct" || name == "dropSrcMacOwnRcvd" || name == "dropTgtIpNotOwnRcvd" || name == "dropSrcIpNotOwnRcvd" || name == "destUnreachSent" || name == "destUnreachRcvd" || name == "adminProhibSent" || name == "adminProhibRcvd" || name == "timeExcdSent" || name == "timeExcdRcvd" || name == "parmPrblmSent" || name == "parmPrblmRcvd" || name == "echoReqSent" || name == "echoReqRcvd" || name == "echoRepSent" || name == "echoRepRcvd" || name == "redirSent" || name == "redirRcvd" || name == "tooBigSent" || name == "tooBigRcvd" || name == "raSent" || name == "raRcvd" || name == "rsSent" || name == "rsRcvd" || name == "naSent" || name == "naRcvd" || name == "nsSent" || name == "nsRcvd" || name == "dupRAReceived" || name == "fastpthRcvd" || name == "fastpathDsbleIgnRcvd" || name == "fastpathOtherIgnRcvd" || name == "mldV1QueriesSent" || name == "mldV1QueriesRecv" || name == "mldV2QueriesSent" || name == "mldV2QueriesRecv" || name == "mldV1ReportsSent" || name == "mldV1ReportsRecv" || name == "mldV2ReportsSent" || name == "mldV2ReportsRecv" || name == "mldV1LeavesSent" || name == "mldV1LeavesRecv")
        return true;
    return false;
}

System::Icmpv6Items::InstItems::IfItems::IfList::RtvrfMbrItems::RtvrfMbrItems()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "rtvrfMbr-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Icmpv6Items::InstItems::IfItems::IfList::RtvrfMbrItems::~RtvrfMbrItems()
{
}

bool System::Icmpv6Items::InstItems::IfItems::IfList::RtvrfMbrItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::Icmpv6Items::InstItems::IfItems::IfList::RtvrfMbrItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::Icmpv6Items::InstItems::IfItems::IfList::RtvrfMbrItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtvrfMbr-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Icmpv6Items::InstItems::IfItems::IfList::RtvrfMbrItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::Icmpv6Items::InstItems::IfItems::IfList::RtvrfMbrItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::Icmpv6Items::InstItems::IfItems::IfList::RtvrfMbrItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::Icmpv6Items::InstItems::IfItems::IfList::RtvrfMbrItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tCl")
    {
        tcl = value;
        tcl.value_namespace = name_space;
        tcl.value_namespace_prefix = name_space_prefix;
    }
}

void System::Icmpv6Items::InstItems::IfItems::IfList::RtvrfMbrItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
    if(value_path == "tCl")
    {
        tcl.yfilter = yfilter;
    }
}

bool System::Icmpv6Items::InstItems::IfItems::IfList::RtvrfMbrItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::Icmpv6Items::InstItems::IfItems::IfList::RtnwPathToIfItems::RtnwPathToIfItems()
    :
    rtnwpathtoif_list(this, {"tdn"})
{

    yang_name = "rtnwPathToIf-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Icmpv6Items::InstItems::IfItems::IfList::RtnwPathToIfItems::~RtnwPathToIfItems()
{
}

bool System::Icmpv6Items::InstItems::IfItems::IfList::RtnwPathToIfItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rtnwpathtoif_list.len(); index++)
    {
        if(rtnwpathtoif_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::Icmpv6Items::InstItems::IfItems::IfList::RtnwPathToIfItems::has_operation() const
{
    for (std::size_t index=0; index<rtnwpathtoif_list.len(); index++)
    {
        if(rtnwpathtoif_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::Icmpv6Items::InstItems::IfItems::IfList::RtnwPathToIfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtnwPathToIf-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Icmpv6Items::InstItems::IfItems::IfList::RtnwPathToIfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::Icmpv6Items::InstItems::IfItems::IfList::RtnwPathToIfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RtNwPathToIf-list")
    {
        auto c = std::make_shared<System::Icmpv6Items::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList>();
        c->parent = this;
        rtnwpathtoif_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::Icmpv6Items::InstItems::IfItems::IfList::RtnwPathToIfItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : rtnwpathtoif_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::Icmpv6Items::InstItems::IfItems::IfList::RtnwPathToIfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::Icmpv6Items::InstItems::IfItems::IfList::RtnwPathToIfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::Icmpv6Items::InstItems::IfItems::IfList::RtnwPathToIfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RtNwPathToIf-list")
        return true;
    return false;
}

System::Icmpv6Items::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::RtNwPathToIfList()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "RtNwPathToIf-list"; yang_parent_name = "rtnwPathToIf-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Icmpv6Items::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::~RtNwPathToIfList()
{
}

bool System::Icmpv6Items::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::Icmpv6Items::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::Icmpv6Items::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RtNwPathToIf-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Icmpv6Items::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::Icmpv6Items::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::Icmpv6Items::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::Icmpv6Items::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tCl")
    {
        tcl = value;
        tcl.value_namespace = name_space;
        tcl.value_namespace_prefix = name_space_prefix;
    }
}

void System::Icmpv6Items::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
    if(value_path == "tCl")
    {
        tcl.yfilter = yfilter;
    }
}

bool System::Icmpv6Items::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::Icmpv6Items::InstItems::LogsItems::LogsItems()
    :
    icmpv6eventlogs_list(this, {"eventtype"})
{

    yang_name = "logs-items"; yang_parent_name = "inst-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::Icmpv6Items::InstItems::LogsItems::~LogsItems()
{
}

bool System::Icmpv6Items::InstItems::LogsItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<icmpv6eventlogs_list.len(); index++)
    {
        if(icmpv6eventlogs_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::Icmpv6Items::InstItems::LogsItems::has_operation() const
{
    for (std::size_t index=0; index<icmpv6eventlogs_list.len(); index++)
    {
        if(icmpv6eventlogs_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::Icmpv6Items::InstItems::LogsItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/icmpv6-items/inst-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::Icmpv6Items::InstItems::LogsItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "logs-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Icmpv6Items::InstItems::LogsItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::Icmpv6Items::InstItems::LogsItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ICMPv6EventLogs-list")
    {
        auto c = std::make_shared<System::Icmpv6Items::InstItems::LogsItems::ICMPv6EventLogsList>();
        c->parent = this;
        icmpv6eventlogs_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::Icmpv6Items::InstItems::LogsItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : icmpv6eventlogs_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::Icmpv6Items::InstItems::LogsItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::Icmpv6Items::InstItems::LogsItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::Icmpv6Items::InstItems::LogsItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ICMPv6EventLogs-list")
        return true;
    return false;
}

System::Icmpv6Items::InstItems::LogsItems::ICMPv6EventLogsList::ICMPv6EventLogsList()
    :
    eventtype{YType::enumeration, "eventType"},
    logsize{YType::enumeration, "logSize"}
{

    yang_name = "ICMPv6EventLogs-list"; yang_parent_name = "logs-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::Icmpv6Items::InstItems::LogsItems::ICMPv6EventLogsList::~ICMPv6EventLogsList()
{
}

bool System::Icmpv6Items::InstItems::LogsItems::ICMPv6EventLogsList::has_data() const
{
    if (is_presence_container) return true;
    return eventtype.is_set
	|| logsize.is_set;
}

bool System::Icmpv6Items::InstItems::LogsItems::ICMPv6EventLogsList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(eventtype.yfilter)
	|| ydk::is_set(logsize.yfilter);
}

std::string System::Icmpv6Items::InstItems::LogsItems::ICMPv6EventLogsList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/icmpv6-items/inst-items/logs-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::Icmpv6Items::InstItems::LogsItems::ICMPv6EventLogsList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ICMPv6EventLogs-list";
    ADD_KEY_TOKEN(eventtype, "eventType");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Icmpv6Items::InstItems::LogsItems::ICMPv6EventLogsList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (eventtype.is_set || is_set(eventtype.yfilter)) leaf_name_data.push_back(eventtype.get_name_leafdata());
    if (logsize.is_set || is_set(logsize.yfilter)) leaf_name_data.push_back(logsize.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::Icmpv6Items::InstItems::LogsItems::ICMPv6EventLogsList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::Icmpv6Items::InstItems::LogsItems::ICMPv6EventLogsList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::Icmpv6Items::InstItems::LogsItems::ICMPv6EventLogsList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "eventType")
    {
        eventtype = value;
        eventtype.value_namespace = name_space;
        eventtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "logSize")
    {
        logsize = value;
        logsize.value_namespace = name_space;
        logsize.value_namespace_prefix = name_space_prefix;
    }
}

void System::Icmpv6Items::InstItems::LogsItems::ICMPv6EventLogsList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "eventType")
    {
        eventtype.yfilter = yfilter;
    }
    if(value_path == "logSize")
    {
        logsize.yfilter = yfilter;
    }
}

bool System::Icmpv6Items::InstItems::LogsItems::ICMPv6EventLogsList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "eventType" || name == "logSize")
        return true;
    return false;
}

System::Icmpv6Items::InstItems::IfstatsItems::IfstatsItems()
    :
    totsent{YType::uint64, "totSent"},
    totrvcd{YType::uint64, "totRvcd"},
    errsent{YType::uint64, "errSent"},
    errrcvd{YType::uint64, "errRcvd"},
    ifdowndropsent{YType::uint64, "ifDownDropSent"},
    ifdowndroprcvd{YType::uint64, "ifDownDropRcvd"},
    drophanotrdy{YType::uint64, "dropHaNotRdy"},
    dropinvldttlmct{YType::uint64, "dropInvldTtlMct"},
    dropsrcmacownrcvd{YType::uint64, "dropSrcMacOwnRcvd"},
    droptgtipnotownrcvd{YType::uint64, "dropTgtIpNotOwnRcvd"},
    dropsrcipnotownrcvd{YType::uint64, "dropSrcIpNotOwnRcvd"},
    destunreachsent{YType::uint64, "destUnreachSent"},
    destunreachrcvd{YType::uint64, "destUnreachRcvd"},
    adminprohibsent{YType::uint64, "adminProhibSent"},
    adminprohibrcvd{YType::uint64, "adminProhibRcvd"},
    timeexcdsent{YType::uint64, "timeExcdSent"},
    timeexcdrcvd{YType::uint64, "timeExcdRcvd"},
    parmprblmsent{YType::uint64, "parmPrblmSent"},
    parmprblmrcvd{YType::uint64, "parmPrblmRcvd"},
    echoreqsent{YType::uint64, "echoReqSent"},
    echoreqrcvd{YType::uint64, "echoReqRcvd"},
    echorepsent{YType::uint64, "echoRepSent"},
    echoreprcvd{YType::uint64, "echoRepRcvd"},
    redirsent{YType::uint64, "redirSent"},
    redirrcvd{YType::uint64, "redirRcvd"},
    toobigsent{YType::uint64, "tooBigSent"},
    toobigrcvd{YType::uint64, "tooBigRcvd"},
    rasent{YType::uint64, "raSent"},
    rarcvd{YType::uint64, "raRcvd"},
    rssent{YType::uint64, "rsSent"},
    rsrcvd{YType::uint64, "rsRcvd"},
    nasent{YType::uint64, "naSent"},
    narcvd{YType::uint64, "naRcvd"},
    nssent{YType::uint64, "nsSent"},
    nsrcvd{YType::uint64, "nsRcvd"},
    duprareceived{YType::uint64, "dupRAReceived"},
    fastpthrcvd{YType::uint64, "fastpthRcvd"},
    fastpathdsbleignrcvd{YType::uint64, "fastpathDsbleIgnRcvd"},
    fastpathotherignrcvd{YType::uint64, "fastpathOtherIgnRcvd"},
    mldv1queriessent{YType::uint64, "mldV1QueriesSent"},
    mldv1queriesrecv{YType::uint64, "mldV1QueriesRecv"},
    mldv2queriessent{YType::uint64, "mldV2QueriesSent"},
    mldv2queriesrecv{YType::uint64, "mldV2QueriesRecv"},
    mldv1reportssent{YType::uint64, "mldV1ReportsSent"},
    mldv1reportsrecv{YType::uint64, "mldV1ReportsRecv"},
    mldv2reportssent{YType::uint64, "mldV2ReportsSent"},
    mldv2reportsrecv{YType::uint64, "mldV2ReportsRecv"},
    mldv1leavessent{YType::uint64, "mldV1LeavesSent"},
    mldv1leavesrecv{YType::uint64, "mldV1LeavesRecv"}
{

    yang_name = "ifstats-items"; yang_parent_name = "inst-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::Icmpv6Items::InstItems::IfstatsItems::~IfstatsItems()
{
}

bool System::Icmpv6Items::InstItems::IfstatsItems::has_data() const
{
    if (is_presence_container) return true;
    return totsent.is_set
	|| totrvcd.is_set
	|| errsent.is_set
	|| errrcvd.is_set
	|| ifdowndropsent.is_set
	|| ifdowndroprcvd.is_set
	|| drophanotrdy.is_set
	|| dropinvldttlmct.is_set
	|| dropsrcmacownrcvd.is_set
	|| droptgtipnotownrcvd.is_set
	|| dropsrcipnotownrcvd.is_set
	|| destunreachsent.is_set
	|| destunreachrcvd.is_set
	|| adminprohibsent.is_set
	|| adminprohibrcvd.is_set
	|| timeexcdsent.is_set
	|| timeexcdrcvd.is_set
	|| parmprblmsent.is_set
	|| parmprblmrcvd.is_set
	|| echoreqsent.is_set
	|| echoreqrcvd.is_set
	|| echorepsent.is_set
	|| echoreprcvd.is_set
	|| redirsent.is_set
	|| redirrcvd.is_set
	|| toobigsent.is_set
	|| toobigrcvd.is_set
	|| rasent.is_set
	|| rarcvd.is_set
	|| rssent.is_set
	|| rsrcvd.is_set
	|| nasent.is_set
	|| narcvd.is_set
	|| nssent.is_set
	|| nsrcvd.is_set
	|| duprareceived.is_set
	|| fastpthrcvd.is_set
	|| fastpathdsbleignrcvd.is_set
	|| fastpathotherignrcvd.is_set
	|| mldv1queriessent.is_set
	|| mldv1queriesrecv.is_set
	|| mldv2queriessent.is_set
	|| mldv2queriesrecv.is_set
	|| mldv1reportssent.is_set
	|| mldv1reportsrecv.is_set
	|| mldv2reportssent.is_set
	|| mldv2reportsrecv.is_set
	|| mldv1leavessent.is_set
	|| mldv1leavesrecv.is_set;
}

bool System::Icmpv6Items::InstItems::IfstatsItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(totsent.yfilter)
	|| ydk::is_set(totrvcd.yfilter)
	|| ydk::is_set(errsent.yfilter)
	|| ydk::is_set(errrcvd.yfilter)
	|| ydk::is_set(ifdowndropsent.yfilter)
	|| ydk::is_set(ifdowndroprcvd.yfilter)
	|| ydk::is_set(drophanotrdy.yfilter)
	|| ydk::is_set(dropinvldttlmct.yfilter)
	|| ydk::is_set(dropsrcmacownrcvd.yfilter)
	|| ydk::is_set(droptgtipnotownrcvd.yfilter)
	|| ydk::is_set(dropsrcipnotownrcvd.yfilter)
	|| ydk::is_set(destunreachsent.yfilter)
	|| ydk::is_set(destunreachrcvd.yfilter)
	|| ydk::is_set(adminprohibsent.yfilter)
	|| ydk::is_set(adminprohibrcvd.yfilter)
	|| ydk::is_set(timeexcdsent.yfilter)
	|| ydk::is_set(timeexcdrcvd.yfilter)
	|| ydk::is_set(parmprblmsent.yfilter)
	|| ydk::is_set(parmprblmrcvd.yfilter)
	|| ydk::is_set(echoreqsent.yfilter)
	|| ydk::is_set(echoreqrcvd.yfilter)
	|| ydk::is_set(echorepsent.yfilter)
	|| ydk::is_set(echoreprcvd.yfilter)
	|| ydk::is_set(redirsent.yfilter)
	|| ydk::is_set(redirrcvd.yfilter)
	|| ydk::is_set(toobigsent.yfilter)
	|| ydk::is_set(toobigrcvd.yfilter)
	|| ydk::is_set(rasent.yfilter)
	|| ydk::is_set(rarcvd.yfilter)
	|| ydk::is_set(rssent.yfilter)
	|| ydk::is_set(rsrcvd.yfilter)
	|| ydk::is_set(nasent.yfilter)
	|| ydk::is_set(narcvd.yfilter)
	|| ydk::is_set(nssent.yfilter)
	|| ydk::is_set(nsrcvd.yfilter)
	|| ydk::is_set(duprareceived.yfilter)
	|| ydk::is_set(fastpthrcvd.yfilter)
	|| ydk::is_set(fastpathdsbleignrcvd.yfilter)
	|| ydk::is_set(fastpathotherignrcvd.yfilter)
	|| ydk::is_set(mldv1queriessent.yfilter)
	|| ydk::is_set(mldv1queriesrecv.yfilter)
	|| ydk::is_set(mldv2queriessent.yfilter)
	|| ydk::is_set(mldv2queriesrecv.yfilter)
	|| ydk::is_set(mldv1reportssent.yfilter)
	|| ydk::is_set(mldv1reportsrecv.yfilter)
	|| ydk::is_set(mldv2reportssent.yfilter)
	|| ydk::is_set(mldv2reportsrecv.yfilter)
	|| ydk::is_set(mldv1leavessent.yfilter)
	|| ydk::is_set(mldv1leavesrecv.yfilter);
}

std::string System::Icmpv6Items::InstItems::IfstatsItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/icmpv6-items/inst-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::Icmpv6Items::InstItems::IfstatsItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ifstats-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Icmpv6Items::InstItems::IfstatsItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (totsent.is_set || is_set(totsent.yfilter)) leaf_name_data.push_back(totsent.get_name_leafdata());
    if (totrvcd.is_set || is_set(totrvcd.yfilter)) leaf_name_data.push_back(totrvcd.get_name_leafdata());
    if (errsent.is_set || is_set(errsent.yfilter)) leaf_name_data.push_back(errsent.get_name_leafdata());
    if (errrcvd.is_set || is_set(errrcvd.yfilter)) leaf_name_data.push_back(errrcvd.get_name_leafdata());
    if (ifdowndropsent.is_set || is_set(ifdowndropsent.yfilter)) leaf_name_data.push_back(ifdowndropsent.get_name_leafdata());
    if (ifdowndroprcvd.is_set || is_set(ifdowndroprcvd.yfilter)) leaf_name_data.push_back(ifdowndroprcvd.get_name_leafdata());
    if (drophanotrdy.is_set || is_set(drophanotrdy.yfilter)) leaf_name_data.push_back(drophanotrdy.get_name_leafdata());
    if (dropinvldttlmct.is_set || is_set(dropinvldttlmct.yfilter)) leaf_name_data.push_back(dropinvldttlmct.get_name_leafdata());
    if (dropsrcmacownrcvd.is_set || is_set(dropsrcmacownrcvd.yfilter)) leaf_name_data.push_back(dropsrcmacownrcvd.get_name_leafdata());
    if (droptgtipnotownrcvd.is_set || is_set(droptgtipnotownrcvd.yfilter)) leaf_name_data.push_back(droptgtipnotownrcvd.get_name_leafdata());
    if (dropsrcipnotownrcvd.is_set || is_set(dropsrcipnotownrcvd.yfilter)) leaf_name_data.push_back(dropsrcipnotownrcvd.get_name_leafdata());
    if (destunreachsent.is_set || is_set(destunreachsent.yfilter)) leaf_name_data.push_back(destunreachsent.get_name_leafdata());
    if (destunreachrcvd.is_set || is_set(destunreachrcvd.yfilter)) leaf_name_data.push_back(destunreachrcvd.get_name_leafdata());
    if (adminprohibsent.is_set || is_set(adminprohibsent.yfilter)) leaf_name_data.push_back(adminprohibsent.get_name_leafdata());
    if (adminprohibrcvd.is_set || is_set(adminprohibrcvd.yfilter)) leaf_name_data.push_back(adminprohibrcvd.get_name_leafdata());
    if (timeexcdsent.is_set || is_set(timeexcdsent.yfilter)) leaf_name_data.push_back(timeexcdsent.get_name_leafdata());
    if (timeexcdrcvd.is_set || is_set(timeexcdrcvd.yfilter)) leaf_name_data.push_back(timeexcdrcvd.get_name_leafdata());
    if (parmprblmsent.is_set || is_set(parmprblmsent.yfilter)) leaf_name_data.push_back(parmprblmsent.get_name_leafdata());
    if (parmprblmrcvd.is_set || is_set(parmprblmrcvd.yfilter)) leaf_name_data.push_back(parmprblmrcvd.get_name_leafdata());
    if (echoreqsent.is_set || is_set(echoreqsent.yfilter)) leaf_name_data.push_back(echoreqsent.get_name_leafdata());
    if (echoreqrcvd.is_set || is_set(echoreqrcvd.yfilter)) leaf_name_data.push_back(echoreqrcvd.get_name_leafdata());
    if (echorepsent.is_set || is_set(echorepsent.yfilter)) leaf_name_data.push_back(echorepsent.get_name_leafdata());
    if (echoreprcvd.is_set || is_set(echoreprcvd.yfilter)) leaf_name_data.push_back(echoreprcvd.get_name_leafdata());
    if (redirsent.is_set || is_set(redirsent.yfilter)) leaf_name_data.push_back(redirsent.get_name_leafdata());
    if (redirrcvd.is_set || is_set(redirrcvd.yfilter)) leaf_name_data.push_back(redirrcvd.get_name_leafdata());
    if (toobigsent.is_set || is_set(toobigsent.yfilter)) leaf_name_data.push_back(toobigsent.get_name_leafdata());
    if (toobigrcvd.is_set || is_set(toobigrcvd.yfilter)) leaf_name_data.push_back(toobigrcvd.get_name_leafdata());
    if (rasent.is_set || is_set(rasent.yfilter)) leaf_name_data.push_back(rasent.get_name_leafdata());
    if (rarcvd.is_set || is_set(rarcvd.yfilter)) leaf_name_data.push_back(rarcvd.get_name_leafdata());
    if (rssent.is_set || is_set(rssent.yfilter)) leaf_name_data.push_back(rssent.get_name_leafdata());
    if (rsrcvd.is_set || is_set(rsrcvd.yfilter)) leaf_name_data.push_back(rsrcvd.get_name_leafdata());
    if (nasent.is_set || is_set(nasent.yfilter)) leaf_name_data.push_back(nasent.get_name_leafdata());
    if (narcvd.is_set || is_set(narcvd.yfilter)) leaf_name_data.push_back(narcvd.get_name_leafdata());
    if (nssent.is_set || is_set(nssent.yfilter)) leaf_name_data.push_back(nssent.get_name_leafdata());
    if (nsrcvd.is_set || is_set(nsrcvd.yfilter)) leaf_name_data.push_back(nsrcvd.get_name_leafdata());
    if (duprareceived.is_set || is_set(duprareceived.yfilter)) leaf_name_data.push_back(duprareceived.get_name_leafdata());
    if (fastpthrcvd.is_set || is_set(fastpthrcvd.yfilter)) leaf_name_data.push_back(fastpthrcvd.get_name_leafdata());
    if (fastpathdsbleignrcvd.is_set || is_set(fastpathdsbleignrcvd.yfilter)) leaf_name_data.push_back(fastpathdsbleignrcvd.get_name_leafdata());
    if (fastpathotherignrcvd.is_set || is_set(fastpathotherignrcvd.yfilter)) leaf_name_data.push_back(fastpathotherignrcvd.get_name_leafdata());
    if (mldv1queriessent.is_set || is_set(mldv1queriessent.yfilter)) leaf_name_data.push_back(mldv1queriessent.get_name_leafdata());
    if (mldv1queriesrecv.is_set || is_set(mldv1queriesrecv.yfilter)) leaf_name_data.push_back(mldv1queriesrecv.get_name_leafdata());
    if (mldv2queriessent.is_set || is_set(mldv2queriessent.yfilter)) leaf_name_data.push_back(mldv2queriessent.get_name_leafdata());
    if (mldv2queriesrecv.is_set || is_set(mldv2queriesrecv.yfilter)) leaf_name_data.push_back(mldv2queriesrecv.get_name_leafdata());
    if (mldv1reportssent.is_set || is_set(mldv1reportssent.yfilter)) leaf_name_data.push_back(mldv1reportssent.get_name_leafdata());
    if (mldv1reportsrecv.is_set || is_set(mldv1reportsrecv.yfilter)) leaf_name_data.push_back(mldv1reportsrecv.get_name_leafdata());
    if (mldv2reportssent.is_set || is_set(mldv2reportssent.yfilter)) leaf_name_data.push_back(mldv2reportssent.get_name_leafdata());
    if (mldv2reportsrecv.is_set || is_set(mldv2reportsrecv.yfilter)) leaf_name_data.push_back(mldv2reportsrecv.get_name_leafdata());
    if (mldv1leavessent.is_set || is_set(mldv1leavessent.yfilter)) leaf_name_data.push_back(mldv1leavessent.get_name_leafdata());
    if (mldv1leavesrecv.is_set || is_set(mldv1leavesrecv.yfilter)) leaf_name_data.push_back(mldv1leavesrecv.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::Icmpv6Items::InstItems::IfstatsItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::Icmpv6Items::InstItems::IfstatsItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::Icmpv6Items::InstItems::IfstatsItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "totSent")
    {
        totsent = value;
        totsent.value_namespace = name_space;
        totsent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "totRvcd")
    {
        totrvcd = value;
        totrvcd.value_namespace = name_space;
        totrvcd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "errSent")
    {
        errsent = value;
        errsent.value_namespace = name_space;
        errsent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "errRcvd")
    {
        errrcvd = value;
        errrcvd.value_namespace = name_space;
        errrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ifDownDropSent")
    {
        ifdowndropsent = value;
        ifdowndropsent.value_namespace = name_space;
        ifdowndropsent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ifDownDropRcvd")
    {
        ifdowndroprcvd = value;
        ifdowndroprcvd.value_namespace = name_space;
        ifdowndroprcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dropHaNotRdy")
    {
        drophanotrdy = value;
        drophanotrdy.value_namespace = name_space;
        drophanotrdy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dropInvldTtlMct")
    {
        dropinvldttlmct = value;
        dropinvldttlmct.value_namespace = name_space;
        dropinvldttlmct.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dropSrcMacOwnRcvd")
    {
        dropsrcmacownrcvd = value;
        dropsrcmacownrcvd.value_namespace = name_space;
        dropsrcmacownrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dropTgtIpNotOwnRcvd")
    {
        droptgtipnotownrcvd = value;
        droptgtipnotownrcvd.value_namespace = name_space;
        droptgtipnotownrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dropSrcIpNotOwnRcvd")
    {
        dropsrcipnotownrcvd = value;
        dropsrcipnotownrcvd.value_namespace = name_space;
        dropsrcipnotownrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destUnreachSent")
    {
        destunreachsent = value;
        destunreachsent.value_namespace = name_space;
        destunreachsent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destUnreachRcvd")
    {
        destunreachrcvd = value;
        destunreachrcvd.value_namespace = name_space;
        destunreachrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adminProhibSent")
    {
        adminprohibsent = value;
        adminprohibsent.value_namespace = name_space;
        adminprohibsent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adminProhibRcvd")
    {
        adminprohibrcvd = value;
        adminprohibrcvd.value_namespace = name_space;
        adminprohibrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timeExcdSent")
    {
        timeexcdsent = value;
        timeexcdsent.value_namespace = name_space;
        timeexcdsent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timeExcdRcvd")
    {
        timeexcdrcvd = value;
        timeexcdrcvd.value_namespace = name_space;
        timeexcdrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "parmPrblmSent")
    {
        parmprblmsent = value;
        parmprblmsent.value_namespace = name_space;
        parmprblmsent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "parmPrblmRcvd")
    {
        parmprblmrcvd = value;
        parmprblmrcvd.value_namespace = name_space;
        parmprblmrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "echoReqSent")
    {
        echoreqsent = value;
        echoreqsent.value_namespace = name_space;
        echoreqsent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "echoReqRcvd")
    {
        echoreqrcvd = value;
        echoreqrcvd.value_namespace = name_space;
        echoreqrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "echoRepSent")
    {
        echorepsent = value;
        echorepsent.value_namespace = name_space;
        echorepsent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "echoRepRcvd")
    {
        echoreprcvd = value;
        echoreprcvd.value_namespace = name_space;
        echoreprcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redirSent")
    {
        redirsent = value;
        redirsent.value_namespace = name_space;
        redirsent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redirRcvd")
    {
        redirrcvd = value;
        redirrcvd.value_namespace = name_space;
        redirrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tooBigSent")
    {
        toobigsent = value;
        toobigsent.value_namespace = name_space;
        toobigsent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tooBigRcvd")
    {
        toobigrcvd = value;
        toobigrcvd.value_namespace = name_space;
        toobigrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "raSent")
    {
        rasent = value;
        rasent.value_namespace = name_space;
        rasent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "raRcvd")
    {
        rarcvd = value;
        rarcvd.value_namespace = name_space;
        rarcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsSent")
    {
        rssent = value;
        rssent.value_namespace = name_space;
        rssent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsRcvd")
    {
        rsrcvd = value;
        rsrcvd.value_namespace = name_space;
        rsrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "naSent")
    {
        nasent = value;
        nasent.value_namespace = name_space;
        nasent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "naRcvd")
    {
        narcvd = value;
        narcvd.value_namespace = name_space;
        narcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsSent")
    {
        nssent = value;
        nssent.value_namespace = name_space;
        nssent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsRcvd")
    {
        nsrcvd = value;
        nsrcvd.value_namespace = name_space;
        nsrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dupRAReceived")
    {
        duprareceived = value;
        duprareceived.value_namespace = name_space;
        duprareceived.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fastpthRcvd")
    {
        fastpthrcvd = value;
        fastpthrcvd.value_namespace = name_space;
        fastpthrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fastpathDsbleIgnRcvd")
    {
        fastpathdsbleignrcvd = value;
        fastpathdsbleignrcvd.value_namespace = name_space;
        fastpathdsbleignrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fastpathOtherIgnRcvd")
    {
        fastpathotherignrcvd = value;
        fastpathotherignrcvd.value_namespace = name_space;
        fastpathotherignrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mldV1QueriesSent")
    {
        mldv1queriessent = value;
        mldv1queriessent.value_namespace = name_space;
        mldv1queriessent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mldV1QueriesRecv")
    {
        mldv1queriesrecv = value;
        mldv1queriesrecv.value_namespace = name_space;
        mldv1queriesrecv.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mldV2QueriesSent")
    {
        mldv2queriessent = value;
        mldv2queriessent.value_namespace = name_space;
        mldv2queriessent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mldV2QueriesRecv")
    {
        mldv2queriesrecv = value;
        mldv2queriesrecv.value_namespace = name_space;
        mldv2queriesrecv.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mldV1ReportsSent")
    {
        mldv1reportssent = value;
        mldv1reportssent.value_namespace = name_space;
        mldv1reportssent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mldV1ReportsRecv")
    {
        mldv1reportsrecv = value;
        mldv1reportsrecv.value_namespace = name_space;
        mldv1reportsrecv.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mldV2ReportsSent")
    {
        mldv2reportssent = value;
        mldv2reportssent.value_namespace = name_space;
        mldv2reportssent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mldV2ReportsRecv")
    {
        mldv2reportsrecv = value;
        mldv2reportsrecv.value_namespace = name_space;
        mldv2reportsrecv.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mldV1LeavesSent")
    {
        mldv1leavessent = value;
        mldv1leavessent.value_namespace = name_space;
        mldv1leavessent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mldV1LeavesRecv")
    {
        mldv1leavesrecv = value;
        mldv1leavesrecv.value_namespace = name_space;
        mldv1leavesrecv.value_namespace_prefix = name_space_prefix;
    }
}

void System::Icmpv6Items::InstItems::IfstatsItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "totSent")
    {
        totsent.yfilter = yfilter;
    }
    if(value_path == "totRvcd")
    {
        totrvcd.yfilter = yfilter;
    }
    if(value_path == "errSent")
    {
        errsent.yfilter = yfilter;
    }
    if(value_path == "errRcvd")
    {
        errrcvd.yfilter = yfilter;
    }
    if(value_path == "ifDownDropSent")
    {
        ifdowndropsent.yfilter = yfilter;
    }
    if(value_path == "ifDownDropRcvd")
    {
        ifdowndroprcvd.yfilter = yfilter;
    }
    if(value_path == "dropHaNotRdy")
    {
        drophanotrdy.yfilter = yfilter;
    }
    if(value_path == "dropInvldTtlMct")
    {
        dropinvldttlmct.yfilter = yfilter;
    }
    if(value_path == "dropSrcMacOwnRcvd")
    {
        dropsrcmacownrcvd.yfilter = yfilter;
    }
    if(value_path == "dropTgtIpNotOwnRcvd")
    {
        droptgtipnotownrcvd.yfilter = yfilter;
    }
    if(value_path == "dropSrcIpNotOwnRcvd")
    {
        dropsrcipnotownrcvd.yfilter = yfilter;
    }
    if(value_path == "destUnreachSent")
    {
        destunreachsent.yfilter = yfilter;
    }
    if(value_path == "destUnreachRcvd")
    {
        destunreachrcvd.yfilter = yfilter;
    }
    if(value_path == "adminProhibSent")
    {
        adminprohibsent.yfilter = yfilter;
    }
    if(value_path == "adminProhibRcvd")
    {
        adminprohibrcvd.yfilter = yfilter;
    }
    if(value_path == "timeExcdSent")
    {
        timeexcdsent.yfilter = yfilter;
    }
    if(value_path == "timeExcdRcvd")
    {
        timeexcdrcvd.yfilter = yfilter;
    }
    if(value_path == "parmPrblmSent")
    {
        parmprblmsent.yfilter = yfilter;
    }
    if(value_path == "parmPrblmRcvd")
    {
        parmprblmrcvd.yfilter = yfilter;
    }
    if(value_path == "echoReqSent")
    {
        echoreqsent.yfilter = yfilter;
    }
    if(value_path == "echoReqRcvd")
    {
        echoreqrcvd.yfilter = yfilter;
    }
    if(value_path == "echoRepSent")
    {
        echorepsent.yfilter = yfilter;
    }
    if(value_path == "echoRepRcvd")
    {
        echoreprcvd.yfilter = yfilter;
    }
    if(value_path == "redirSent")
    {
        redirsent.yfilter = yfilter;
    }
    if(value_path == "redirRcvd")
    {
        redirrcvd.yfilter = yfilter;
    }
    if(value_path == "tooBigSent")
    {
        toobigsent.yfilter = yfilter;
    }
    if(value_path == "tooBigRcvd")
    {
        toobigrcvd.yfilter = yfilter;
    }
    if(value_path == "raSent")
    {
        rasent.yfilter = yfilter;
    }
    if(value_path == "raRcvd")
    {
        rarcvd.yfilter = yfilter;
    }
    if(value_path == "rsSent")
    {
        rssent.yfilter = yfilter;
    }
    if(value_path == "rsRcvd")
    {
        rsrcvd.yfilter = yfilter;
    }
    if(value_path == "naSent")
    {
        nasent.yfilter = yfilter;
    }
    if(value_path == "naRcvd")
    {
        narcvd.yfilter = yfilter;
    }
    if(value_path == "nsSent")
    {
        nssent.yfilter = yfilter;
    }
    if(value_path == "nsRcvd")
    {
        nsrcvd.yfilter = yfilter;
    }
    if(value_path == "dupRAReceived")
    {
        duprareceived.yfilter = yfilter;
    }
    if(value_path == "fastpthRcvd")
    {
        fastpthrcvd.yfilter = yfilter;
    }
    if(value_path == "fastpathDsbleIgnRcvd")
    {
        fastpathdsbleignrcvd.yfilter = yfilter;
    }
    if(value_path == "fastpathOtherIgnRcvd")
    {
        fastpathotherignrcvd.yfilter = yfilter;
    }
    if(value_path == "mldV1QueriesSent")
    {
        mldv1queriessent.yfilter = yfilter;
    }
    if(value_path == "mldV1QueriesRecv")
    {
        mldv1queriesrecv.yfilter = yfilter;
    }
    if(value_path == "mldV2QueriesSent")
    {
        mldv2queriessent.yfilter = yfilter;
    }
    if(value_path == "mldV2QueriesRecv")
    {
        mldv2queriesrecv.yfilter = yfilter;
    }
    if(value_path == "mldV1ReportsSent")
    {
        mldv1reportssent.yfilter = yfilter;
    }
    if(value_path == "mldV1ReportsRecv")
    {
        mldv1reportsrecv.yfilter = yfilter;
    }
    if(value_path == "mldV2ReportsSent")
    {
        mldv2reportssent.yfilter = yfilter;
    }
    if(value_path == "mldV2ReportsRecv")
    {
        mldv2reportsrecv.yfilter = yfilter;
    }
    if(value_path == "mldV1LeavesSent")
    {
        mldv1leavessent.yfilter = yfilter;
    }
    if(value_path == "mldV1LeavesRecv")
    {
        mldv1leavesrecv.yfilter = yfilter;
    }
}

bool System::Icmpv6Items::InstItems::IfstatsItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "totSent" || name == "totRvcd" || name == "errSent" || name == "errRcvd" || name == "ifDownDropSent" || name == "ifDownDropRcvd" || name == "dropHaNotRdy" || name == "dropInvldTtlMct" || name == "dropSrcMacOwnRcvd" || name == "dropTgtIpNotOwnRcvd" || name == "dropSrcIpNotOwnRcvd" || name == "destUnreachSent" || name == "destUnreachRcvd" || name == "adminProhibSent" || name == "adminProhibRcvd" || name == "timeExcdSent" || name == "timeExcdRcvd" || name == "parmPrblmSent" || name == "parmPrblmRcvd" || name == "echoReqSent" || name == "echoReqRcvd" || name == "echoRepSent" || name == "echoRepRcvd" || name == "redirSent" || name == "redirRcvd" || name == "tooBigSent" || name == "tooBigRcvd" || name == "raSent" || name == "raRcvd" || name == "rsSent" || name == "rsRcvd" || name == "naSent" || name == "naRcvd" || name == "nsSent" || name == "nsRcvd" || name == "dupRAReceived" || name == "fastpthRcvd" || name == "fastpathDsbleIgnRcvd" || name == "fastpathOtherIgnRcvd" || name == "mldV1QueriesSent" || name == "mldV1QueriesRecv" || name == "mldV2QueriesSent" || name == "mldV2QueriesRecv" || name == "mldV1ReportsSent" || name == "mldV1ReportsRecv" || name == "mldV2ReportsSent" || name == "mldV2ReportsRecv" || name == "mldV1LeavesSent" || name == "mldV1LeavesRecv")
        return true;
    return false;
}

System::IgmpsnoopItems::IgmpsnoopItems()
    :
    name{YType::str, "name"},
    adminst{YType::enumeration, "adminSt"},
    operst{YType::enumeration, "operSt"},
    opererr{YType::str, "operErr"}
        ,
    inst_items(std::make_shared<System::IgmpsnoopItems::InstItems>())
{
    inst_items->parent = this;

    yang_name = "igmpsnoop-items"; yang_parent_name = "System"; is_top_level_class = false; has_list_ancestor = false; 
}

System::IgmpsnoopItems::~IgmpsnoopItems()
{
}

bool System::IgmpsnoopItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| adminst.is_set
	|| operst.is_set
	|| opererr.is_set
	|| (inst_items !=  nullptr && inst_items->has_data());
}

bool System::IgmpsnoopItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(opererr.yfilter)
	|| (inst_items !=  nullptr && inst_items->has_operation());
}

std::string System::IgmpsnoopItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/" << get_segment_path();
    return path_buffer.str();
}

std::string System::IgmpsnoopItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "igmpsnoop-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IgmpsnoopItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (opererr.is_set || is_set(opererr.yfilter)) leaf_name_data.push_back(opererr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::IgmpsnoopItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "inst-items")
    {
        if(inst_items == nullptr)
        {
            inst_items = std::make_shared<System::IgmpsnoopItems::InstItems>();
        }
        return inst_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IgmpsnoopItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(inst_items != nullptr)
    {
        children["inst-items"] = inst_items;
    }

    return children;
}

void System::IgmpsnoopItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adminSt")
    {
        adminst = value;
        adminst.value_namespace = name_space;
        adminst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operErr")
    {
        opererr = value;
        opererr.value_namespace = name_space;
        opererr.value_namespace_prefix = name_space_prefix;
    }
}

void System::IgmpsnoopItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "operErr")
    {
        opererr.yfilter = yfilter;
    }
}

bool System::IgmpsnoopItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inst-items" || name == "name" || name == "adminSt" || name == "operSt" || name == "operErr")
        return true;
    return false;
}

System::IgmpsnoopItems::InstItems::InstItems()
    :
    name{YType::str, "name"},
    adminst{YType::enumeration, "adminSt"},
    ctrl{YType::str, "ctrl"},
    opererr{YType::str, "operErr"},
    allrtrmcastencap{YType::str, "allRtrMcastEncap"},
    flags{YType::str, "flags"}
        ,
    dom_items(std::make_shared<System::IgmpsnoopItems::InstItems::DomItems>())
    , inststats_items(std::make_shared<System::IgmpsnoopItems::InstItems::InststatsItems>())
{
    dom_items->parent = this;
    inststats_items->parent = this;

    yang_name = "inst-items"; yang_parent_name = "igmpsnoop-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::IgmpsnoopItems::InstItems::~InstItems()
{
}

bool System::IgmpsnoopItems::InstItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| adminst.is_set
	|| ctrl.is_set
	|| opererr.is_set
	|| allrtrmcastencap.is_set
	|| flags.is_set
	|| (dom_items !=  nullptr && dom_items->has_data())
	|| (inststats_items !=  nullptr && inststats_items->has_data());
}

bool System::IgmpsnoopItems::InstItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(ctrl.yfilter)
	|| ydk::is_set(opererr.yfilter)
	|| ydk::is_set(allrtrmcastencap.yfilter)
	|| ydk::is_set(flags.yfilter)
	|| (dom_items !=  nullptr && dom_items->has_operation())
	|| (inststats_items !=  nullptr && inststats_items->has_operation());
}

std::string System::IgmpsnoopItems::InstItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/igmpsnoop-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::IgmpsnoopItems::InstItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inst-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IgmpsnoopItems::InstItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (ctrl.is_set || is_set(ctrl.yfilter)) leaf_name_data.push_back(ctrl.get_name_leafdata());
    if (opererr.is_set || is_set(opererr.yfilter)) leaf_name_data.push_back(opererr.get_name_leafdata());
    if (allrtrmcastencap.is_set || is_set(allrtrmcastencap.yfilter)) leaf_name_data.push_back(allrtrmcastencap.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::IgmpsnoopItems::InstItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dom-items")
    {
        if(dom_items == nullptr)
        {
            dom_items = std::make_shared<System::IgmpsnoopItems::InstItems::DomItems>();
        }
        return dom_items;
    }

    if(child_yang_name == "inststats-items")
    {
        if(inststats_items == nullptr)
        {
            inststats_items = std::make_shared<System::IgmpsnoopItems::InstItems::InststatsItems>();
        }
        return inststats_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IgmpsnoopItems::InstItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(dom_items != nullptr)
    {
        children["dom-items"] = dom_items;
    }

    if(inststats_items != nullptr)
    {
        children["inststats-items"] = inststats_items;
    }

    return children;
}

void System::IgmpsnoopItems::InstItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adminSt")
    {
        adminst = value;
        adminst.value_namespace = name_space;
        adminst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ctrl")
    {
        ctrl = value;
        ctrl.value_namespace = name_space;
        ctrl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operErr")
    {
        opererr = value;
        opererr.value_namespace = name_space;
        opererr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "allRtrMcastEncap")
    {
        allrtrmcastencap = value;
        allrtrmcastencap.value_namespace = name_space;
        allrtrmcastencap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
}

void System::IgmpsnoopItems::InstItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
    if(value_path == "ctrl")
    {
        ctrl.yfilter = yfilter;
    }
    if(value_path == "operErr")
    {
        opererr.yfilter = yfilter;
    }
    if(value_path == "allRtrMcastEncap")
    {
        allrtrmcastencap.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
}

bool System::IgmpsnoopItems::InstItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dom-items" || name == "inststats-items" || name == "name" || name == "adminSt" || name == "ctrl" || name == "operErr" || name == "allRtrMcastEncap" || name == "flags")
        return true;
    return false;
}

System::IgmpsnoopItems::InstItems::DomItems::DomItems()
    :
    name{YType::str, "name"},
    id{YType::uint32, "id"},
    encap{YType::str, "encap"},
    adminst{YType::enumeration, "adminSt"},
    ctrl{YType::str, "ctrl"},
    flags{YType::str, "flags"},
    fwdmode{YType::enumeration, "fwdMode"},
    numrtrif{YType::uint32, "numRtrIf"},
    nummcgrp{YType::uint32, "numMcGrp"},
    numsrcgrp{YType::uint32, "numSrcGrp"},
    grpflushts{YType::str, "grpFlushTs"},
    nextqueryts{YType::str, "nextQueryTs"},
    nextqueryexpts{YType::str, "nextQueryExpTs"},
    mrtrepgid{YType::uint32, "mrtrEpgId"}
        ,
    db_items(std::make_shared<System::IgmpsnoopItems::InstItems::DomItems::DbItems>())
    , domstats_items(std::make_shared<System::IgmpsnoopItems::InstItems::DomItems::DomstatsItems>())
    , strtrif_items(std::make_shared<System::IgmpsnoopItems::InstItems::DomItems::StrtrifItems>())
    , rtrif_items(std::make_shared<System::IgmpsnoopItems::InstItems::DomItems::RtrifItems>())
    , vlan_items(std::make_shared<System::IgmpsnoopItems::InstItems::DomItems::VlanItems>())
    , bd_items(std::make_shared<System::IgmpsnoopItems::InstItems::DomItems::BdItems>())
    , gl_items(std::make_shared<System::IgmpsnoopItems::InstItems::DomItems::GlItems>())
{
    db_items->parent = this;
    domstats_items->parent = this;
    strtrif_items->parent = this;
    rtrif_items->parent = this;
    vlan_items->parent = this;
    bd_items->parent = this;
    gl_items->parent = this;

    yang_name = "dom-items"; yang_parent_name = "inst-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::IgmpsnoopItems::InstItems::DomItems::~DomItems()
{
}

bool System::IgmpsnoopItems::InstItems::DomItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| id.is_set
	|| encap.is_set
	|| adminst.is_set
	|| ctrl.is_set
	|| flags.is_set
	|| fwdmode.is_set
	|| numrtrif.is_set
	|| nummcgrp.is_set
	|| numsrcgrp.is_set
	|| grpflushts.is_set
	|| nextqueryts.is_set
	|| nextqueryexpts.is_set
	|| mrtrepgid.is_set
	|| (db_items !=  nullptr && db_items->has_data())
	|| (domstats_items !=  nullptr && domstats_items->has_data())
	|| (strtrif_items !=  nullptr && strtrif_items->has_data())
	|| (rtrif_items !=  nullptr && rtrif_items->has_data())
	|| (vlan_items !=  nullptr && vlan_items->has_data())
	|| (bd_items !=  nullptr && bd_items->has_data())
	|| (gl_items !=  nullptr && gl_items->has_data());
}

bool System::IgmpsnoopItems::InstItems::DomItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(encap.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(ctrl.yfilter)
	|| ydk::is_set(flags.yfilter)
	|| ydk::is_set(fwdmode.yfilter)
	|| ydk::is_set(numrtrif.yfilter)
	|| ydk::is_set(nummcgrp.yfilter)
	|| ydk::is_set(numsrcgrp.yfilter)
	|| ydk::is_set(grpflushts.yfilter)
	|| ydk::is_set(nextqueryts.yfilter)
	|| ydk::is_set(nextqueryexpts.yfilter)
	|| ydk::is_set(mrtrepgid.yfilter)
	|| (db_items !=  nullptr && db_items->has_operation())
	|| (domstats_items !=  nullptr && domstats_items->has_operation())
	|| (strtrif_items !=  nullptr && strtrif_items->has_operation())
	|| (rtrif_items !=  nullptr && rtrif_items->has_operation())
	|| (vlan_items !=  nullptr && vlan_items->has_operation())
	|| (bd_items !=  nullptr && bd_items->has_operation())
	|| (gl_items !=  nullptr && gl_items->has_operation());
}

std::string System::IgmpsnoopItems::InstItems::DomItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/igmpsnoop-items/inst-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::IgmpsnoopItems::InstItems::DomItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dom-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IgmpsnoopItems::InstItems::DomItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (encap.is_set || is_set(encap.yfilter)) leaf_name_data.push_back(encap.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (ctrl.is_set || is_set(ctrl.yfilter)) leaf_name_data.push_back(ctrl.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (fwdmode.is_set || is_set(fwdmode.yfilter)) leaf_name_data.push_back(fwdmode.get_name_leafdata());
    if (numrtrif.is_set || is_set(numrtrif.yfilter)) leaf_name_data.push_back(numrtrif.get_name_leafdata());
    if (nummcgrp.is_set || is_set(nummcgrp.yfilter)) leaf_name_data.push_back(nummcgrp.get_name_leafdata());
    if (numsrcgrp.is_set || is_set(numsrcgrp.yfilter)) leaf_name_data.push_back(numsrcgrp.get_name_leafdata());
    if (grpflushts.is_set || is_set(grpflushts.yfilter)) leaf_name_data.push_back(grpflushts.get_name_leafdata());
    if (nextqueryts.is_set || is_set(nextqueryts.yfilter)) leaf_name_data.push_back(nextqueryts.get_name_leafdata());
    if (nextqueryexpts.is_set || is_set(nextqueryexpts.yfilter)) leaf_name_data.push_back(nextqueryexpts.get_name_leafdata());
    if (mrtrepgid.is_set || is_set(mrtrepgid.yfilter)) leaf_name_data.push_back(mrtrepgid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::IgmpsnoopItems::InstItems::DomItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "db-items")
    {
        if(db_items == nullptr)
        {
            db_items = std::make_shared<System::IgmpsnoopItems::InstItems::DomItems::DbItems>();
        }
        return db_items;
    }

    if(child_yang_name == "domstats-items")
    {
        if(domstats_items == nullptr)
        {
            domstats_items = std::make_shared<System::IgmpsnoopItems::InstItems::DomItems::DomstatsItems>();
        }
        return domstats_items;
    }

    if(child_yang_name == "strtrif-items")
    {
        if(strtrif_items == nullptr)
        {
            strtrif_items = std::make_shared<System::IgmpsnoopItems::InstItems::DomItems::StrtrifItems>();
        }
        return strtrif_items;
    }

    if(child_yang_name == "rtrif-items")
    {
        if(rtrif_items == nullptr)
        {
            rtrif_items = std::make_shared<System::IgmpsnoopItems::InstItems::DomItems::RtrifItems>();
        }
        return rtrif_items;
    }

    if(child_yang_name == "vlan-items")
    {
        if(vlan_items == nullptr)
        {
            vlan_items = std::make_shared<System::IgmpsnoopItems::InstItems::DomItems::VlanItems>();
        }
        return vlan_items;
    }

    if(child_yang_name == "bd-items")
    {
        if(bd_items == nullptr)
        {
            bd_items = std::make_shared<System::IgmpsnoopItems::InstItems::DomItems::BdItems>();
        }
        return bd_items;
    }

    if(child_yang_name == "gl-items")
    {
        if(gl_items == nullptr)
        {
            gl_items = std::make_shared<System::IgmpsnoopItems::InstItems::DomItems::GlItems>();
        }
        return gl_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IgmpsnoopItems::InstItems::DomItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(db_items != nullptr)
    {
        children["db-items"] = db_items;
    }

    if(domstats_items != nullptr)
    {
        children["domstats-items"] = domstats_items;
    }

    if(strtrif_items != nullptr)
    {
        children["strtrif-items"] = strtrif_items;
    }

    if(rtrif_items != nullptr)
    {
        children["rtrif-items"] = rtrif_items;
    }

    if(vlan_items != nullptr)
    {
        children["vlan-items"] = vlan_items;
    }

    if(bd_items != nullptr)
    {
        children["bd-items"] = bd_items;
    }

    if(gl_items != nullptr)
    {
        children["gl-items"] = gl_items;
    }

    return children;
}

void System::IgmpsnoopItems::InstItems::DomItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encap")
    {
        encap = value;
        encap.value_namespace = name_space;
        encap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adminSt")
    {
        adminst = value;
        adminst.value_namespace = name_space;
        adminst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ctrl")
    {
        ctrl = value;
        ctrl.value_namespace = name_space;
        ctrl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fwdMode")
    {
        fwdmode = value;
        fwdmode.value_namespace = name_space;
        fwdmode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "numRtrIf")
    {
        numrtrif = value;
        numrtrif.value_namespace = name_space;
        numrtrif.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "numMcGrp")
    {
        nummcgrp = value;
        nummcgrp.value_namespace = name_space;
        nummcgrp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "numSrcGrp")
    {
        numsrcgrp = value;
        numsrcgrp.value_namespace = name_space;
        numsrcgrp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "grpFlushTs")
    {
        grpflushts = value;
        grpflushts.value_namespace = name_space;
        grpflushts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nextQueryTs")
    {
        nextqueryts = value;
        nextqueryts.value_namespace = name_space;
        nextqueryts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nextQueryExpTs")
    {
        nextqueryexpts = value;
        nextqueryexpts.value_namespace = name_space;
        nextqueryexpts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mrtrEpgId")
    {
        mrtrepgid = value;
        mrtrepgid.value_namespace = name_space;
        mrtrepgid.value_namespace_prefix = name_space_prefix;
    }
}

void System::IgmpsnoopItems::InstItems::DomItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "encap")
    {
        encap.yfilter = yfilter;
    }
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
    if(value_path == "ctrl")
    {
        ctrl.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
    if(value_path == "fwdMode")
    {
        fwdmode.yfilter = yfilter;
    }
    if(value_path == "numRtrIf")
    {
        numrtrif.yfilter = yfilter;
    }
    if(value_path == "numMcGrp")
    {
        nummcgrp.yfilter = yfilter;
    }
    if(value_path == "numSrcGrp")
    {
        numsrcgrp.yfilter = yfilter;
    }
    if(value_path == "grpFlushTs")
    {
        grpflushts.yfilter = yfilter;
    }
    if(value_path == "nextQueryTs")
    {
        nextqueryts.yfilter = yfilter;
    }
    if(value_path == "nextQueryExpTs")
    {
        nextqueryexpts.yfilter = yfilter;
    }
    if(value_path == "mrtrEpgId")
    {
        mrtrepgid.yfilter = yfilter;
    }
}

bool System::IgmpsnoopItems::InstItems::DomItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "db-items" || name == "domstats-items" || name == "strtrif-items" || name == "rtrif-items" || name == "vlan-items" || name == "bd-items" || name == "gl-items" || name == "name" || name == "id" || name == "encap" || name == "adminSt" || name == "ctrl" || name == "flags" || name == "fwdMode" || name == "numRtrIf" || name == "numMcGrp" || name == "numSrcGrp" || name == "grpFlushTs" || name == "nextQueryTs" || name == "nextQueryExpTs" || name == "mrtrEpgId")
        return true;
    return false;
}

System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbItems()
    :
    db_list(this, {"type"})
{

    yang_name = "db-items"; yang_parent_name = "dom-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::IgmpsnoopItems::InstItems::DomItems::DbItems::~DbItems()
{
}

bool System::IgmpsnoopItems::InstItems::DomItems::DbItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<db_list.len(); index++)
    {
        if(db_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IgmpsnoopItems::InstItems::DomItems::DbItems::has_operation() const
{
    for (std::size_t index=0; index<db_list.len(); index++)
    {
        if(db_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IgmpsnoopItems::InstItems::DomItems::DbItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/igmpsnoop-items/inst-items/dom-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::IgmpsnoopItems::InstItems::DomItems::DbItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "db-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IgmpsnoopItems::InstItems::DomItems::DbItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::IgmpsnoopItems::InstItems::DomItems::DbItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Db-list")
    {
        auto c = std::make_shared<System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList>();
        c->parent = this;
        db_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IgmpsnoopItems::InstItems::DomItems::DbItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : db_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::IgmpsnoopItems::InstItems::DomItems::DbItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IgmpsnoopItems::InstItems::DomItems::DbItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IgmpsnoopItems::InstItems::DomItems::DbItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Db-list")
        return true;
    return false;
}

System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::DbList()
    :
    type{YType::enumeration, "type"},
    name{YType::str, "name"}
        ,
    gsnoop_items(std::make_shared<System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::GsnoopItems>())
    , vsnoop_items(std::make_shared<System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::VsnoopItems>())
    , mrouter_items(std::make_shared<System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::MrouterItems>())
    , exptrack_items(std::make_shared<System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::ExpTrackItems>())
    , vstats_items(std::make_shared<System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::VstatsItems>())
    , gstats_items(std::make_shared<System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::GstatsItems>())
    , policy_items(std::make_shared<System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::PolicyItems>())
    , group_items(std::make_shared<System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::GroupItems>())
    , mcgrp_items(std::make_shared<System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems>())
    , querier_items(std::make_shared<System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::QuerierItems>())
{
    gsnoop_items->parent = this;
    vsnoop_items->parent = this;
    mrouter_items->parent = this;
    exptrack_items->parent = this;
    vstats_items->parent = this;
    gstats_items->parent = this;
    policy_items->parent = this;
    group_items->parent = this;
    mcgrp_items->parent = this;
    querier_items->parent = this;

    yang_name = "Db-list"; yang_parent_name = "db-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::~DbList()
{
}

bool System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| name.is_set
	|| (gsnoop_items !=  nullptr && gsnoop_items->has_data())
	|| (vsnoop_items !=  nullptr && vsnoop_items->has_data())
	|| (mrouter_items !=  nullptr && mrouter_items->has_data())
	|| (exptrack_items !=  nullptr && exptrack_items->has_data())
	|| (vstats_items !=  nullptr && vstats_items->has_data())
	|| (gstats_items !=  nullptr && gstats_items->has_data())
	|| (policy_items !=  nullptr && policy_items->has_data())
	|| (group_items !=  nullptr && group_items->has_data())
	|| (mcgrp_items !=  nullptr && mcgrp_items->has_data())
	|| (querier_items !=  nullptr && querier_items->has_data());
}

bool System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(name.yfilter)
	|| (gsnoop_items !=  nullptr && gsnoop_items->has_operation())
	|| (vsnoop_items !=  nullptr && vsnoop_items->has_operation())
	|| (mrouter_items !=  nullptr && mrouter_items->has_operation())
	|| (exptrack_items !=  nullptr && exptrack_items->has_operation())
	|| (vstats_items !=  nullptr && vstats_items->has_operation())
	|| (gstats_items !=  nullptr && gstats_items->has_operation())
	|| (policy_items !=  nullptr && policy_items->has_operation())
	|| (group_items !=  nullptr && group_items->has_operation())
	|| (mcgrp_items !=  nullptr && mcgrp_items->has_operation())
	|| (querier_items !=  nullptr && querier_items->has_operation());
}

std::string System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/igmpsnoop-items/inst-items/dom-items/db-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Db-list";
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "gsnoop-items")
    {
        if(gsnoop_items == nullptr)
        {
            gsnoop_items = std::make_shared<System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::GsnoopItems>();
        }
        return gsnoop_items;
    }

    if(child_yang_name == "vsnoop-items")
    {
        if(vsnoop_items == nullptr)
        {
            vsnoop_items = std::make_shared<System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::VsnoopItems>();
        }
        return vsnoop_items;
    }

    if(child_yang_name == "mrouter-items")
    {
        if(mrouter_items == nullptr)
        {
            mrouter_items = std::make_shared<System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::MrouterItems>();
        }
        return mrouter_items;
    }

    if(child_yang_name == "expTrack-items")
    {
        if(exptrack_items == nullptr)
        {
            exptrack_items = std::make_shared<System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::ExpTrackItems>();
        }
        return exptrack_items;
    }

    if(child_yang_name == "vstats-items")
    {
        if(vstats_items == nullptr)
        {
            vstats_items = std::make_shared<System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::VstatsItems>();
        }
        return vstats_items;
    }

    if(child_yang_name == "gstats-items")
    {
        if(gstats_items == nullptr)
        {
            gstats_items = std::make_shared<System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::GstatsItems>();
        }
        return gstats_items;
    }

    if(child_yang_name == "policy-items")
    {
        if(policy_items == nullptr)
        {
            policy_items = std::make_shared<System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::PolicyItems>();
        }
        return policy_items;
    }

    if(child_yang_name == "group-items")
    {
        if(group_items == nullptr)
        {
            group_items = std::make_shared<System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::GroupItems>();
        }
        return group_items;
    }

    if(child_yang_name == "mcgrp-items")
    {
        if(mcgrp_items == nullptr)
        {
            mcgrp_items = std::make_shared<System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems>();
        }
        return mcgrp_items;
    }

    if(child_yang_name == "querier-items")
    {
        if(querier_items == nullptr)
        {
            querier_items = std::make_shared<System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::QuerierItems>();
        }
        return querier_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(gsnoop_items != nullptr)
    {
        children["gsnoop-items"] = gsnoop_items;
    }

    if(vsnoop_items != nullptr)
    {
        children["vsnoop-items"] = vsnoop_items;
    }

    if(mrouter_items != nullptr)
    {
        children["mrouter-items"] = mrouter_items;
    }

    if(exptrack_items != nullptr)
    {
        children["expTrack-items"] = exptrack_items;
    }

    if(vstats_items != nullptr)
    {
        children["vstats-items"] = vstats_items;
    }

    if(gstats_items != nullptr)
    {
        children["gstats-items"] = gstats_items;
    }

    if(policy_items != nullptr)
    {
        children["policy-items"] = policy_items;
    }

    if(group_items != nullptr)
    {
        children["group-items"] = group_items;
    }

    if(mcgrp_items != nullptr)
    {
        children["mcgrp-items"] = mcgrp_items;
    }

    if(querier_items != nullptr)
    {
        children["querier-items"] = querier_items;
    }

    return children;
}

void System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "gsnoop-items" || name == "vsnoop-items" || name == "mrouter-items" || name == "expTrack-items" || name == "vstats-items" || name == "gstats-items" || name == "policy-items" || name == "group-items" || name == "mcgrp-items" || name == "querier-items" || name == "type" || name == "name")
        return true;
    return false;
}

System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::GsnoopItems::GsnoopItems()
    :
    name{YType::str, "name"},
    snooping{YType::boolean, "snooping"},
    omf{YType::boolean, "omf"},
    grepsup{YType::boolean, "grepsup"},
    gv3repsup{YType::boolean, "gv3repsup"},
    glinklocalgrpsup{YType::boolean, "glinklocalgrpsup"},
    grouptimeout{YType::uint32, "groupTimeout"},
    proxygeneralquery{YType::boolean, "proxyGeneralQuery"},
    gmaxresponsetime{YType::uint32, "gmaxResponseTime"}
{

    yang_name = "gsnoop-items"; yang_parent_name = "Db-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::GsnoopItems::~GsnoopItems()
{
}

bool System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::GsnoopItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| snooping.is_set
	|| omf.is_set
	|| grepsup.is_set
	|| gv3repsup.is_set
	|| glinklocalgrpsup.is_set
	|| grouptimeout.is_set
	|| proxygeneralquery.is_set
	|| gmaxresponsetime.is_set;
}

bool System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::GsnoopItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(snooping.yfilter)
	|| ydk::is_set(omf.yfilter)
	|| ydk::is_set(grepsup.yfilter)
	|| ydk::is_set(gv3repsup.yfilter)
	|| ydk::is_set(glinklocalgrpsup.yfilter)
	|| ydk::is_set(grouptimeout.yfilter)
	|| ydk::is_set(proxygeneralquery.yfilter)
	|| ydk::is_set(gmaxresponsetime.yfilter);
}

std::string System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::GsnoopItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "gsnoop-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::GsnoopItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (snooping.is_set || is_set(snooping.yfilter)) leaf_name_data.push_back(snooping.get_name_leafdata());
    if (omf.is_set || is_set(omf.yfilter)) leaf_name_data.push_back(omf.get_name_leafdata());
    if (grepsup.is_set || is_set(grepsup.yfilter)) leaf_name_data.push_back(grepsup.get_name_leafdata());
    if (gv3repsup.is_set || is_set(gv3repsup.yfilter)) leaf_name_data.push_back(gv3repsup.get_name_leafdata());
    if (glinklocalgrpsup.is_set || is_set(glinklocalgrpsup.yfilter)) leaf_name_data.push_back(glinklocalgrpsup.get_name_leafdata());
    if (grouptimeout.is_set || is_set(grouptimeout.yfilter)) leaf_name_data.push_back(grouptimeout.get_name_leafdata());
    if (proxygeneralquery.is_set || is_set(proxygeneralquery.yfilter)) leaf_name_data.push_back(proxygeneralquery.get_name_leafdata());
    if (gmaxresponsetime.is_set || is_set(gmaxresponsetime.yfilter)) leaf_name_data.push_back(gmaxresponsetime.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::GsnoopItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::GsnoopItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::GsnoopItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "snooping")
    {
        snooping = value;
        snooping.value_namespace = name_space;
        snooping.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "omf")
    {
        omf = value;
        omf.value_namespace = name_space;
        omf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "grepsup")
    {
        grepsup = value;
        grepsup.value_namespace = name_space;
        grepsup.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "gv3repsup")
    {
        gv3repsup = value;
        gv3repsup.value_namespace = name_space;
        gv3repsup.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "glinklocalgrpsup")
    {
        glinklocalgrpsup = value;
        glinklocalgrpsup.value_namespace = name_space;
        glinklocalgrpsup.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "groupTimeout")
    {
        grouptimeout = value;
        grouptimeout.value_namespace = name_space;
        grouptimeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "proxyGeneralQuery")
    {
        proxygeneralquery = value;
        proxygeneralquery.value_namespace = name_space;
        proxygeneralquery.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "gmaxResponseTime")
    {
        gmaxresponsetime = value;
        gmaxresponsetime.value_namespace = name_space;
        gmaxresponsetime.value_namespace_prefix = name_space_prefix;
    }
}

void System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::GsnoopItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "snooping")
    {
        snooping.yfilter = yfilter;
    }
    if(value_path == "omf")
    {
        omf.yfilter = yfilter;
    }
    if(value_path == "grepsup")
    {
        grepsup.yfilter = yfilter;
    }
    if(value_path == "gv3repsup")
    {
        gv3repsup.yfilter = yfilter;
    }
    if(value_path == "glinklocalgrpsup")
    {
        glinklocalgrpsup.yfilter = yfilter;
    }
    if(value_path == "groupTimeout")
    {
        grouptimeout.yfilter = yfilter;
    }
    if(value_path == "proxyGeneralQuery")
    {
        proxygeneralquery.yfilter = yfilter;
    }
    if(value_path == "gmaxResponseTime")
    {
        gmaxresponsetime.yfilter = yfilter;
    }
}

bool System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::GsnoopItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "snooping" || name == "omf" || name == "grepsup" || name == "gv3repsup" || name == "glinklocalgrpsup" || name == "groupTimeout" || name == "proxyGeneralQuery" || name == "gmaxResponseTime")
        return true;
    return false;
}

System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::VsnoopItems::VsnoopItems()
    :
    vsnooprec_list(this, {"vlanid"})
{

    yang_name = "vsnoop-items"; yang_parent_name = "Db-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::VsnoopItems::~VsnoopItems()
{
}

bool System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::VsnoopItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vsnooprec_list.len(); index++)
    {
        if(vsnooprec_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::VsnoopItems::has_operation() const
{
    for (std::size_t index=0; index<vsnooprec_list.len(); index++)
    {
        if(vsnooprec_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::VsnoopItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vsnoop-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::VsnoopItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::VsnoopItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "VSnoopRec-list")
    {
        auto c = std::make_shared<System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::VsnoopItems::VSnoopRecList>();
        c->parent = this;
        vsnooprec_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::VsnoopItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : vsnooprec_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::VsnoopItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::VsnoopItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::VsnoopItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "VSnoopRec-list")
        return true;
    return false;
}

System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::VsnoopItems::VSnoopRecList::VSnoopRecList()
    :
    vlanid{YType::uint32, "vlanid"},
    name{YType::str, "name"},
    lkpmode{YType::str, "lkpmode"},
    snoopon{YType::boolean, "snoopOn"},
    repsup{YType::boolean, "repsup"},
    v3repsup{YType::boolean, "v3repsup"},
    vlinklocalgrpsup{YType::boolean, "vlinklocalgrpsup"},
    omf_enabled{YType::boolean, "omf_enabled"},
    lastmbrintvl{YType::uint16, "lastMbrIntvl"},
    ver{YType::enumeration, "ver"},
    addr{YType::str, "addr"},
    queryintvl{YType::uint16, "queryIntvl"},
    robustfac{YType::uint8, "robustFac"},
    routeportcnt{YType::uint32, "routePortcnt"},
    groupcnt{YType::uint32, "groupcnt"},
    vpcfunction{YType::boolean, "vpcFunction"},
    fastleave{YType::boolean, "fastleave"}
{

    yang_name = "VSnoopRec-list"; yang_parent_name = "vsnoop-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::VsnoopItems::VSnoopRecList::~VSnoopRecList()
{
}

bool System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::VsnoopItems::VSnoopRecList::has_data() const
{
    if (is_presence_container) return true;
    return vlanid.is_set
	|| name.is_set
	|| lkpmode.is_set
	|| snoopon.is_set
	|| repsup.is_set
	|| v3repsup.is_set
	|| vlinklocalgrpsup.is_set
	|| omf_enabled.is_set
	|| lastmbrintvl.is_set
	|| ver.is_set
	|| addr.is_set
	|| queryintvl.is_set
	|| robustfac.is_set
	|| routeportcnt.is_set
	|| groupcnt.is_set
	|| vpcfunction.is_set
	|| fastleave.is_set;
}

bool System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::VsnoopItems::VSnoopRecList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vlanid.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(lkpmode.yfilter)
	|| ydk::is_set(snoopon.yfilter)
	|| ydk::is_set(repsup.yfilter)
	|| ydk::is_set(v3repsup.yfilter)
	|| ydk::is_set(vlinklocalgrpsup.yfilter)
	|| ydk::is_set(omf_enabled.yfilter)
	|| ydk::is_set(lastmbrintvl.yfilter)
	|| ydk::is_set(ver.yfilter)
	|| ydk::is_set(addr.yfilter)
	|| ydk::is_set(queryintvl.yfilter)
	|| ydk::is_set(robustfac.yfilter)
	|| ydk::is_set(routeportcnt.yfilter)
	|| ydk::is_set(groupcnt.yfilter)
	|| ydk::is_set(vpcfunction.yfilter)
	|| ydk::is_set(fastleave.yfilter);
}

std::string System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::VsnoopItems::VSnoopRecList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "VSnoopRec-list";
    ADD_KEY_TOKEN(vlanid, "vlanid");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::VsnoopItems::VSnoopRecList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlanid.is_set || is_set(vlanid.yfilter)) leaf_name_data.push_back(vlanid.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (lkpmode.is_set || is_set(lkpmode.yfilter)) leaf_name_data.push_back(lkpmode.get_name_leafdata());
    if (snoopon.is_set || is_set(snoopon.yfilter)) leaf_name_data.push_back(snoopon.get_name_leafdata());
    if (repsup.is_set || is_set(repsup.yfilter)) leaf_name_data.push_back(repsup.get_name_leafdata());
    if (v3repsup.is_set || is_set(v3repsup.yfilter)) leaf_name_data.push_back(v3repsup.get_name_leafdata());
    if (vlinklocalgrpsup.is_set || is_set(vlinklocalgrpsup.yfilter)) leaf_name_data.push_back(vlinklocalgrpsup.get_name_leafdata());
    if (omf_enabled.is_set || is_set(omf_enabled.yfilter)) leaf_name_data.push_back(omf_enabled.get_name_leafdata());
    if (lastmbrintvl.is_set || is_set(lastmbrintvl.yfilter)) leaf_name_data.push_back(lastmbrintvl.get_name_leafdata());
    if (ver.is_set || is_set(ver.yfilter)) leaf_name_data.push_back(ver.get_name_leafdata());
    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (queryintvl.is_set || is_set(queryintvl.yfilter)) leaf_name_data.push_back(queryintvl.get_name_leafdata());
    if (robustfac.is_set || is_set(robustfac.yfilter)) leaf_name_data.push_back(robustfac.get_name_leafdata());
    if (routeportcnt.is_set || is_set(routeportcnt.yfilter)) leaf_name_data.push_back(routeportcnt.get_name_leafdata());
    if (groupcnt.is_set || is_set(groupcnt.yfilter)) leaf_name_data.push_back(groupcnt.get_name_leafdata());
    if (vpcfunction.is_set || is_set(vpcfunction.yfilter)) leaf_name_data.push_back(vpcfunction.get_name_leafdata());
    if (fastleave.is_set || is_set(fastleave.yfilter)) leaf_name_data.push_back(fastleave.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::VsnoopItems::VSnoopRecList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::VsnoopItems::VSnoopRecList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::VsnoopItems::VSnoopRecList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vlanid")
    {
        vlanid = value;
        vlanid.value_namespace = name_space;
        vlanid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lkpmode")
    {
        lkpmode = value;
        lkpmode.value_namespace = name_space;
        lkpmode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "snoopOn")
    {
        snoopon = value;
        snoopon.value_namespace = name_space;
        snoopon.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repsup")
    {
        repsup = value;
        repsup.value_namespace = name_space;
        repsup.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "v3repsup")
    {
        v3repsup = value;
        v3repsup.value_namespace = name_space;
        v3repsup.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlinklocalgrpsup")
    {
        vlinklocalgrpsup = value;
        vlinklocalgrpsup.value_namespace = name_space;
        vlinklocalgrpsup.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "omf_enabled")
    {
        omf_enabled = value;
        omf_enabled.value_namespace = name_space;
        omf_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lastMbrIntvl")
    {
        lastmbrintvl = value;
        lastmbrintvl.value_namespace = name_space;
        lastmbrintvl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ver")
    {
        ver = value;
        ver.value_namespace = name_space;
        ver.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "addr")
    {
        addr = value;
        addr.value_namespace = name_space;
        addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "queryIntvl")
    {
        queryintvl = value;
        queryintvl.value_namespace = name_space;
        queryintvl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "robustFac")
    {
        robustfac = value;
        robustfac.value_namespace = name_space;
        robustfac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "routePortcnt")
    {
        routeportcnt = value;
        routeportcnt.value_namespace = name_space;
        routeportcnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "groupcnt")
    {
        groupcnt = value;
        groupcnt.value_namespace = name_space;
        groupcnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vpcFunction")
    {
        vpcfunction = value;
        vpcfunction.value_namespace = name_space;
        vpcfunction.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fastleave")
    {
        fastleave = value;
        fastleave.value_namespace = name_space;
        fastleave.value_namespace_prefix = name_space_prefix;
    }
}

void System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::VsnoopItems::VSnoopRecList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vlanid")
    {
        vlanid.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "lkpmode")
    {
        lkpmode.yfilter = yfilter;
    }
    if(value_path == "snoopOn")
    {
        snoopon.yfilter = yfilter;
    }
    if(value_path == "repsup")
    {
        repsup.yfilter = yfilter;
    }
    if(value_path == "v3repsup")
    {
        v3repsup.yfilter = yfilter;
    }
    if(value_path == "vlinklocalgrpsup")
    {
        vlinklocalgrpsup.yfilter = yfilter;
    }
    if(value_path == "omf_enabled")
    {
        omf_enabled.yfilter = yfilter;
    }
    if(value_path == "lastMbrIntvl")
    {
        lastmbrintvl.yfilter = yfilter;
    }
    if(value_path == "ver")
    {
        ver.yfilter = yfilter;
    }
    if(value_path == "addr")
    {
        addr.yfilter = yfilter;
    }
    if(value_path == "queryIntvl")
    {
        queryintvl.yfilter = yfilter;
    }
    if(value_path == "robustFac")
    {
        robustfac.yfilter = yfilter;
    }
    if(value_path == "routePortcnt")
    {
        routeportcnt.yfilter = yfilter;
    }
    if(value_path == "groupcnt")
    {
        groupcnt.yfilter = yfilter;
    }
    if(value_path == "vpcFunction")
    {
        vpcfunction.yfilter = yfilter;
    }
    if(value_path == "fastleave")
    {
        fastleave.yfilter = yfilter;
    }
}

bool System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::VsnoopItems::VSnoopRecList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlanid" || name == "name" || name == "lkpmode" || name == "snoopOn" || name == "repsup" || name == "v3repsup" || name == "vlinklocalgrpsup" || name == "omf_enabled" || name == "lastMbrIntvl" || name == "ver" || name == "addr" || name == "queryIntvl" || name == "robustFac" || name == "routePortcnt" || name == "groupcnt" || name == "vpcFunction" || name == "fastleave")
        return true;
    return false;
}

System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::MrouterItems::MrouterItems()
    :
    mrouterrec_list(this, {"vlanid", "interface"})
{

    yang_name = "mrouter-items"; yang_parent_name = "Db-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::MrouterItems::~MrouterItems()
{
}

bool System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::MrouterItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<mrouterrec_list.len(); index++)
    {
        if(mrouterrec_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::MrouterItems::has_operation() const
{
    for (std::size_t index=0; index<mrouterrec_list.len(); index++)
    {
        if(mrouterrec_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::MrouterItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mrouter-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::MrouterItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::MrouterItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "MRouterRec-list")
    {
        auto c = std::make_shared<System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::MrouterItems::MRouterRecList>();
        c->parent = this;
        mrouterrec_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::MrouterItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : mrouterrec_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::MrouterItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::MrouterItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::MrouterItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "MRouterRec-list")
        return true;
    return false;
}

System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::MrouterItems::MRouterRecList::MRouterRecList()
    :
    vlanid{YType::uint32, "vlanid"},
    interface{YType::str, "interface"},
    type{YType::enumeration, "type"},
    uptime{YType::str, "uptime"},
    exptime{YType::str, "expTime"}
{

    yang_name = "MRouterRec-list"; yang_parent_name = "mrouter-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::MrouterItems::MRouterRecList::~MRouterRecList()
{
}

bool System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::MrouterItems::MRouterRecList::has_data() const
{
    if (is_presence_container) return true;
    return vlanid.is_set
	|| interface.is_set
	|| type.is_set
	|| uptime.is_set
	|| exptime.is_set;
}

bool System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::MrouterItems::MRouterRecList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vlanid.yfilter)
	|| ydk::is_set(interface.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(uptime.yfilter)
	|| ydk::is_set(exptime.yfilter);
}

std::string System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::MrouterItems::MRouterRecList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "MRouterRec-list";
    ADD_KEY_TOKEN(vlanid, "vlanid");
    ADD_KEY_TOKEN(interface, "interface");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::MrouterItems::MRouterRecList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlanid.is_set || is_set(vlanid.yfilter)) leaf_name_data.push_back(vlanid.get_name_leafdata());
    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (uptime.is_set || is_set(uptime.yfilter)) leaf_name_data.push_back(uptime.get_name_leafdata());
    if (exptime.is_set || is_set(exptime.yfilter)) leaf_name_data.push_back(exptime.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::MrouterItems::MRouterRecList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::MrouterItems::MRouterRecList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::MrouterItems::MRouterRecList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vlanid")
    {
        vlanid = value;
        vlanid.value_namespace = name_space;
        vlanid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "uptime")
    {
        uptime = value;
        uptime.value_namespace = name_space;
        uptime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "expTime")
    {
        exptime = value;
        exptime.value_namespace = name_space;
        exptime.value_namespace_prefix = name_space_prefix;
    }
}

void System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::MrouterItems::MRouterRecList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vlanid")
    {
        vlanid.yfilter = yfilter;
    }
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "uptime")
    {
        uptime.yfilter = yfilter;
    }
    if(value_path == "expTime")
    {
        exptime.yfilter = yfilter;
    }
}

bool System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::MrouterItems::MRouterRecList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlanid" || name == "interface" || name == "type" || name == "uptime" || name == "expTime")
        return true;
    return false;
}

System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::ExpTrackItems::ExpTrackItems()
    :
    exptrackrec_list(this, {"vlanid", "grpaddr", "srcaddr", "intf"})
{

    yang_name = "expTrack-items"; yang_parent_name = "Db-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::ExpTrackItems::~ExpTrackItems()
{
}

bool System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::ExpTrackItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<exptrackrec_list.len(); index++)
    {
        if(exptrackrec_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::ExpTrackItems::has_operation() const
{
    for (std::size_t index=0; index<exptrackrec_list.len(); index++)
    {
        if(exptrackrec_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::ExpTrackItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "expTrack-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::ExpTrackItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::ExpTrackItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ExpTrackRec-list")
    {
        auto c = std::make_shared<System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::ExpTrackItems::ExpTrackRecList>();
        c->parent = this;
        exptrackrec_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::ExpTrackItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : exptrackrec_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::ExpTrackItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::ExpTrackItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::ExpTrackItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ExpTrackRec-list")
        return true;
    return false;
}

System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::ExpTrackItems::ExpTrackRecList::ExpTrackRecList()
    :
    vlanid{YType::uint32, "vlanid"},
    grpaddr{YType::str, "grpAddr"},
    srcaddr{YType::str, "srcAddr"},
    intf{YType::str, "intf"},
    name{YType::str, "name"},
    reporter{YType::str, "reporter"},
    uptime{YType::str, "uptime"},
    lastjoin{YType::str, "lastJoin"},
    expires{YType::str, "expires"},
    version{YType::str, "version"},
    numreports{YType::uint32, "numReports"}
{

    yang_name = "ExpTrackRec-list"; yang_parent_name = "expTrack-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::ExpTrackItems::ExpTrackRecList::~ExpTrackRecList()
{
}

bool System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::ExpTrackItems::ExpTrackRecList::has_data() const
{
    if (is_presence_container) return true;
    return vlanid.is_set
	|| grpaddr.is_set
	|| srcaddr.is_set
	|| intf.is_set
	|| name.is_set
	|| reporter.is_set
	|| uptime.is_set
	|| lastjoin.is_set
	|| expires.is_set
	|| version.is_set
	|| numreports.is_set;
}

bool System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::ExpTrackItems::ExpTrackRecList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vlanid.yfilter)
	|| ydk::is_set(grpaddr.yfilter)
	|| ydk::is_set(srcaddr.yfilter)
	|| ydk::is_set(intf.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(reporter.yfilter)
	|| ydk::is_set(uptime.yfilter)
	|| ydk::is_set(lastjoin.yfilter)
	|| ydk::is_set(expires.yfilter)
	|| ydk::is_set(version.yfilter)
	|| ydk::is_set(numreports.yfilter);
}

std::string System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::ExpTrackItems::ExpTrackRecList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ExpTrackRec-list";
    ADD_KEY_TOKEN(vlanid, "vlanid");
    ADD_KEY_TOKEN(grpaddr, "grpAddr");
    ADD_KEY_TOKEN(srcaddr, "srcAddr");
    ADD_KEY_TOKEN(intf, "intf");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::ExpTrackItems::ExpTrackRecList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlanid.is_set || is_set(vlanid.yfilter)) leaf_name_data.push_back(vlanid.get_name_leafdata());
    if (grpaddr.is_set || is_set(grpaddr.yfilter)) leaf_name_data.push_back(grpaddr.get_name_leafdata());
    if (srcaddr.is_set || is_set(srcaddr.yfilter)) leaf_name_data.push_back(srcaddr.get_name_leafdata());
    if (intf.is_set || is_set(intf.yfilter)) leaf_name_data.push_back(intf.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (reporter.is_set || is_set(reporter.yfilter)) leaf_name_data.push_back(reporter.get_name_leafdata());
    if (uptime.is_set || is_set(uptime.yfilter)) leaf_name_data.push_back(uptime.get_name_leafdata());
    if (lastjoin.is_set || is_set(lastjoin.yfilter)) leaf_name_data.push_back(lastjoin.get_name_leafdata());
    if (expires.is_set || is_set(expires.yfilter)) leaf_name_data.push_back(expires.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());
    if (numreports.is_set || is_set(numreports.yfilter)) leaf_name_data.push_back(numreports.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::ExpTrackItems::ExpTrackRecList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::ExpTrackItems::ExpTrackRecList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::ExpTrackItems::ExpTrackRecList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vlanid")
    {
        vlanid = value;
        vlanid.value_namespace = name_space;
        vlanid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "grpAddr")
    {
        grpaddr = value;
        grpaddr.value_namespace = name_space;
        grpaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srcAddr")
    {
        srcaddr = value;
        srcaddr.value_namespace = name_space;
        srcaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "intf")
    {
        intf = value;
        intf.value_namespace = name_space;
        intf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reporter")
    {
        reporter = value;
        reporter.value_namespace = name_space;
        reporter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "uptime")
    {
        uptime = value;
        uptime.value_namespace = name_space;
        uptime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lastJoin")
    {
        lastjoin = value;
        lastjoin.value_namespace = name_space;
        lastjoin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "expires")
    {
        expires = value;
        expires.value_namespace = name_space;
        expires.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "numReports")
    {
        numreports = value;
        numreports.value_namespace = name_space;
        numreports.value_namespace_prefix = name_space_prefix;
    }
}

void System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::ExpTrackItems::ExpTrackRecList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vlanid")
    {
        vlanid.yfilter = yfilter;
    }
    if(value_path == "grpAddr")
    {
        grpaddr.yfilter = yfilter;
    }
    if(value_path == "srcAddr")
    {
        srcaddr.yfilter = yfilter;
    }
    if(value_path == "intf")
    {
        intf.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "reporter")
    {
        reporter.yfilter = yfilter;
    }
    if(value_path == "uptime")
    {
        uptime.yfilter = yfilter;
    }
    if(value_path == "lastJoin")
    {
        lastjoin.yfilter = yfilter;
    }
    if(value_path == "expires")
    {
        expires.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
    if(value_path == "numReports")
    {
        numreports.yfilter = yfilter;
    }
}

bool System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::ExpTrackItems::ExpTrackRecList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlanid" || name == "grpAddr" || name == "srcAddr" || name == "intf" || name == "name" || name == "reporter" || name == "uptime" || name == "lastJoin" || name == "expires" || name == "version" || name == "numReports")
        return true;
    return false;
}

System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::VstatsItems::VstatsItems()
    :
    vlanstatsrec_list(this, {"vlanid"})
{

    yang_name = "vstats-items"; yang_parent_name = "Db-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::VstatsItems::~VstatsItems()
{
}

bool System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::VstatsItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vlanstatsrec_list.len(); index++)
    {
        if(vlanstatsrec_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::VstatsItems::has_operation() const
{
    for (std::size_t index=0; index<vlanstatsrec_list.len(); index++)
    {
        if(vlanstatsrec_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::VstatsItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vstats-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::VstatsItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::VstatsItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "VlanStatsRec-list")
    {
        auto c = std::make_shared<System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::VstatsItems::VlanStatsRecList>();
        c->parent = this;
        vlanstatsrec_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::VstatsItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : vlanstatsrec_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::VstatsItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::VstatsItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::VstatsItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "VlanStatsRec-list")
        return true;
    return false;
}

System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::VstatsItems::VlanStatsRecList::VlanStatsRecList()
    :
    vlanid{YType::uint32, "vlanid"},
    uptime{YType::str, "uptime"},
    vpr{YType::uint32, "vpr"},
    v1rr{YType::uint32, "v1rr"},
    v2rr{YType::uint32, "v2rr"},
    v3rr{YType::uint32, "v3rr"},
    v3qr{YType::uint32, "v3qr"},
    v2lr{YType::uint32, "v2lr"},
    phr{YType::uint32, "phr"},
    irr{YType::uint32, "irr"},
    iqr{YType::uint32, "iqr"},
    v2ls{YType::uint32, "v2ls"},
    v3gs{YType::uint32, "v3gs"},
    vmr{YType::uint32, "vmr"},
    upr{YType::uint32, "upr"},
    qo{YType::uint32, "qo"},
    v2ro{YType::uint32, "v2ro"},
    v2lo{YType::uint32, "v2lo"},
    v3ro{YType::uint32, "v3ro"},
    vpsr{YType::uint32, "vpsr"},
    str{YType::uint32, "str"},
    cps{YType::uint32, "cps"},
    cpr{YType::uint32, "cpr"},
    cpe{YType::uint32, "cpe"},
    mps{YType::uint32, "mps"},
    mpr{YType::uint32, "mpr"},
    mpe{YType::uint32, "mpe"},
    v1qr{YType::uint32, "v1qr"},
    v2qr{YType::uint32, "v2qr"},
    v1rs{YType::uint32, "v1rs"},
    v2rs{YType::uint32, "v2rs"}
{

    yang_name = "VlanStatsRec-list"; yang_parent_name = "vstats-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::VstatsItems::VlanStatsRecList::~VlanStatsRecList()
{
}

bool System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::VstatsItems::VlanStatsRecList::has_data() const
{
    if (is_presence_container) return true;
    return vlanid.is_set
	|| uptime.is_set
	|| vpr.is_set
	|| v1rr.is_set
	|| v2rr.is_set
	|| v3rr.is_set
	|| v3qr.is_set
	|| v2lr.is_set
	|| phr.is_set
	|| irr.is_set
	|| iqr.is_set
	|| v2ls.is_set
	|| v3gs.is_set
	|| vmr.is_set
	|| upr.is_set
	|| qo.is_set
	|| v2ro.is_set
	|| v2lo.is_set
	|| v3ro.is_set
	|| vpsr.is_set
	|| str.is_set
	|| cps.is_set
	|| cpr.is_set
	|| cpe.is_set
	|| mps.is_set
	|| mpr.is_set
	|| mpe.is_set
	|| v1qr.is_set
	|| v2qr.is_set
	|| v1rs.is_set
	|| v2rs.is_set;
}

bool System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::VstatsItems::VlanStatsRecList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vlanid.yfilter)
	|| ydk::is_set(uptime.yfilter)
	|| ydk::is_set(vpr.yfilter)
	|| ydk::is_set(v1rr.yfilter)
	|| ydk::is_set(v2rr.yfilter)
	|| ydk::is_set(v3rr.yfilter)
	|| ydk::is_set(v3qr.yfilter)
	|| ydk::is_set(v2lr.yfilter)
	|| ydk::is_set(phr.yfilter)
	|| ydk::is_set(irr.yfilter)
	|| ydk::is_set(iqr.yfilter)
	|| ydk::is_set(v2ls.yfilter)
	|| ydk::is_set(v3gs.yfilter)
	|| ydk::is_set(vmr.yfilter)
	|| ydk::is_set(upr.yfilter)
	|| ydk::is_set(qo.yfilter)
	|| ydk::is_set(v2ro.yfilter)
	|| ydk::is_set(v2lo.yfilter)
	|| ydk::is_set(v3ro.yfilter)
	|| ydk::is_set(vpsr.yfilter)
	|| ydk::is_set(str.yfilter)
	|| ydk::is_set(cps.yfilter)
	|| ydk::is_set(cpr.yfilter)
	|| ydk::is_set(cpe.yfilter)
	|| ydk::is_set(mps.yfilter)
	|| ydk::is_set(mpr.yfilter)
	|| ydk::is_set(mpe.yfilter)
	|| ydk::is_set(v1qr.yfilter)
	|| ydk::is_set(v2qr.yfilter)
	|| ydk::is_set(v1rs.yfilter)
	|| ydk::is_set(v2rs.yfilter);
}

std::string System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::VstatsItems::VlanStatsRecList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "VlanStatsRec-list";
    ADD_KEY_TOKEN(vlanid, "vlanid");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::VstatsItems::VlanStatsRecList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlanid.is_set || is_set(vlanid.yfilter)) leaf_name_data.push_back(vlanid.get_name_leafdata());
    if (uptime.is_set || is_set(uptime.yfilter)) leaf_name_data.push_back(uptime.get_name_leafdata());
    if (vpr.is_set || is_set(vpr.yfilter)) leaf_name_data.push_back(vpr.get_name_leafdata());
    if (v1rr.is_set || is_set(v1rr.yfilter)) leaf_name_data.push_back(v1rr.get_name_leafdata());
    if (v2rr.is_set || is_set(v2rr.yfilter)) leaf_name_data.push_back(v2rr.get_name_leafdata());
    if (v3rr.is_set || is_set(v3rr.yfilter)) leaf_name_data.push_back(v3rr.get_name_leafdata());
    if (v3qr.is_set || is_set(v3qr.yfilter)) leaf_name_data.push_back(v3qr.get_name_leafdata());
    if (v2lr.is_set || is_set(v2lr.yfilter)) leaf_name_data.push_back(v2lr.get_name_leafdata());
    if (phr.is_set || is_set(phr.yfilter)) leaf_name_data.push_back(phr.get_name_leafdata());
    if (irr.is_set || is_set(irr.yfilter)) leaf_name_data.push_back(irr.get_name_leafdata());
    if (iqr.is_set || is_set(iqr.yfilter)) leaf_name_data.push_back(iqr.get_name_leafdata());
    if (v2ls.is_set || is_set(v2ls.yfilter)) leaf_name_data.push_back(v2ls.get_name_leafdata());
    if (v3gs.is_set || is_set(v3gs.yfilter)) leaf_name_data.push_back(v3gs.get_name_leafdata());
    if (vmr.is_set || is_set(vmr.yfilter)) leaf_name_data.push_back(vmr.get_name_leafdata());
    if (upr.is_set || is_set(upr.yfilter)) leaf_name_data.push_back(upr.get_name_leafdata());
    if (qo.is_set || is_set(qo.yfilter)) leaf_name_data.push_back(qo.get_name_leafdata());
    if (v2ro.is_set || is_set(v2ro.yfilter)) leaf_name_data.push_back(v2ro.get_name_leafdata());
    if (v2lo.is_set || is_set(v2lo.yfilter)) leaf_name_data.push_back(v2lo.get_name_leafdata());
    if (v3ro.is_set || is_set(v3ro.yfilter)) leaf_name_data.push_back(v3ro.get_name_leafdata());
    if (vpsr.is_set || is_set(vpsr.yfilter)) leaf_name_data.push_back(vpsr.get_name_leafdata());
    if (str.is_set || is_set(str.yfilter)) leaf_name_data.push_back(str.get_name_leafdata());
    if (cps.is_set || is_set(cps.yfilter)) leaf_name_data.push_back(cps.get_name_leafdata());
    if (cpr.is_set || is_set(cpr.yfilter)) leaf_name_data.push_back(cpr.get_name_leafdata());
    if (cpe.is_set || is_set(cpe.yfilter)) leaf_name_data.push_back(cpe.get_name_leafdata());
    if (mps.is_set || is_set(mps.yfilter)) leaf_name_data.push_back(mps.get_name_leafdata());
    if (mpr.is_set || is_set(mpr.yfilter)) leaf_name_data.push_back(mpr.get_name_leafdata());
    if (mpe.is_set || is_set(mpe.yfilter)) leaf_name_data.push_back(mpe.get_name_leafdata());
    if (v1qr.is_set || is_set(v1qr.yfilter)) leaf_name_data.push_back(v1qr.get_name_leafdata());
    if (v2qr.is_set || is_set(v2qr.yfilter)) leaf_name_data.push_back(v2qr.get_name_leafdata());
    if (v1rs.is_set || is_set(v1rs.yfilter)) leaf_name_data.push_back(v1rs.get_name_leafdata());
    if (v2rs.is_set || is_set(v2rs.yfilter)) leaf_name_data.push_back(v2rs.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::VstatsItems::VlanStatsRecList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::VstatsItems::VlanStatsRecList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::VstatsItems::VlanStatsRecList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vlanid")
    {
        vlanid = value;
        vlanid.value_namespace = name_space;
        vlanid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "uptime")
    {
        uptime = value;
        uptime.value_namespace = name_space;
        uptime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vpr")
    {
        vpr = value;
        vpr.value_namespace = name_space;
        vpr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "v1rr")
    {
        v1rr = value;
        v1rr.value_namespace = name_space;
        v1rr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "v2rr")
    {
        v2rr = value;
        v2rr.value_namespace = name_space;
        v2rr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "v3rr")
    {
        v3rr = value;
        v3rr.value_namespace = name_space;
        v3rr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "v3qr")
    {
        v3qr = value;
        v3qr.value_namespace = name_space;
        v3qr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "v2lr")
    {
        v2lr = value;
        v2lr.value_namespace = name_space;
        v2lr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "phr")
    {
        phr = value;
        phr.value_namespace = name_space;
        phr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "irr")
    {
        irr = value;
        irr.value_namespace = name_space;
        irr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "iqr")
    {
        iqr = value;
        iqr.value_namespace = name_space;
        iqr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "v2ls")
    {
        v2ls = value;
        v2ls.value_namespace = name_space;
        v2ls.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "v3gs")
    {
        v3gs = value;
        v3gs.value_namespace = name_space;
        v3gs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vmr")
    {
        vmr = value;
        vmr.value_namespace = name_space;
        vmr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "upr")
    {
        upr = value;
        upr.value_namespace = name_space;
        upr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qo")
    {
        qo = value;
        qo.value_namespace = name_space;
        qo.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "v2ro")
    {
        v2ro = value;
        v2ro.value_namespace = name_space;
        v2ro.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "v2lo")
    {
        v2lo = value;
        v2lo.value_namespace = name_space;
        v2lo.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "v3ro")
    {
        v3ro = value;
        v3ro.value_namespace = name_space;
        v3ro.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vpsr")
    {
        vpsr = value;
        vpsr.value_namespace = name_space;
        vpsr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "str")
    {
        str = value;
        str.value_namespace = name_space;
        str.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cps")
    {
        cps = value;
        cps.value_namespace = name_space;
        cps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpr")
    {
        cpr = value;
        cpr.value_namespace = name_space;
        cpr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpe")
    {
        cpe = value;
        cpe.value_namespace = name_space;
        cpe.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mps")
    {
        mps = value;
        mps.value_namespace = name_space;
        mps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpr")
    {
        mpr = value;
        mpr.value_namespace = name_space;
        mpr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpe")
    {
        mpe = value;
        mpe.value_namespace = name_space;
        mpe.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "v1qr")
    {
        v1qr = value;
        v1qr.value_namespace = name_space;
        v1qr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "v2qr")
    {
        v2qr = value;
        v2qr.value_namespace = name_space;
        v2qr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "v1rs")
    {
        v1rs = value;
        v1rs.value_namespace = name_space;
        v1rs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "v2rs")
    {
        v2rs = value;
        v2rs.value_namespace = name_space;
        v2rs.value_namespace_prefix = name_space_prefix;
    }
}

void System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::VstatsItems::VlanStatsRecList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vlanid")
    {
        vlanid.yfilter = yfilter;
    }
    if(value_path == "uptime")
    {
        uptime.yfilter = yfilter;
    }
    if(value_path == "vpr")
    {
        vpr.yfilter = yfilter;
    }
    if(value_path == "v1rr")
    {
        v1rr.yfilter = yfilter;
    }
    if(value_path == "v2rr")
    {
        v2rr.yfilter = yfilter;
    }
    if(value_path == "v3rr")
    {
        v3rr.yfilter = yfilter;
    }
    if(value_path == "v3qr")
    {
        v3qr.yfilter = yfilter;
    }
    if(value_path == "v2lr")
    {
        v2lr.yfilter = yfilter;
    }
    if(value_path == "phr")
    {
        phr.yfilter = yfilter;
    }
    if(value_path == "irr")
    {
        irr.yfilter = yfilter;
    }
    if(value_path == "iqr")
    {
        iqr.yfilter = yfilter;
    }
    if(value_path == "v2ls")
    {
        v2ls.yfilter = yfilter;
    }
    if(value_path == "v3gs")
    {
        v3gs.yfilter = yfilter;
    }
    if(value_path == "vmr")
    {
        vmr.yfilter = yfilter;
    }
    if(value_path == "upr")
    {
        upr.yfilter = yfilter;
    }
    if(value_path == "qo")
    {
        qo.yfilter = yfilter;
    }
    if(value_path == "v2ro")
    {
        v2ro.yfilter = yfilter;
    }
    if(value_path == "v2lo")
    {
        v2lo.yfilter = yfilter;
    }
    if(value_path == "v3ro")
    {
        v3ro.yfilter = yfilter;
    }
    if(value_path == "vpsr")
    {
        vpsr.yfilter = yfilter;
    }
    if(value_path == "str")
    {
        str.yfilter = yfilter;
    }
    if(value_path == "cps")
    {
        cps.yfilter = yfilter;
    }
    if(value_path == "cpr")
    {
        cpr.yfilter = yfilter;
    }
    if(value_path == "cpe")
    {
        cpe.yfilter = yfilter;
    }
    if(value_path == "mps")
    {
        mps.yfilter = yfilter;
    }
    if(value_path == "mpr")
    {
        mpr.yfilter = yfilter;
    }
    if(value_path == "mpe")
    {
        mpe.yfilter = yfilter;
    }
    if(value_path == "v1qr")
    {
        v1qr.yfilter = yfilter;
    }
    if(value_path == "v2qr")
    {
        v2qr.yfilter = yfilter;
    }
    if(value_path == "v1rs")
    {
        v1rs.yfilter = yfilter;
    }
    if(value_path == "v2rs")
    {
        v2rs.yfilter = yfilter;
    }
}

bool System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::VstatsItems::VlanStatsRecList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlanid" || name == "uptime" || name == "vpr" || name == "v1rr" || name == "v2rr" || name == "v3rr" || name == "v3qr" || name == "v2lr" || name == "phr" || name == "irr" || name == "iqr" || name == "v2ls" || name == "v3gs" || name == "vmr" || name == "upr" || name == "qo" || name == "v2ro" || name == "v2lo" || name == "v3ro" || name == "vpsr" || name == "str" || name == "cps" || name == "cpr" || name == "cpe" || name == "mps" || name == "mpr" || name == "mpe" || name == "v1qr" || name == "v2qr" || name == "v1rs" || name == "v2rs")
        return true;
    return false;
}

System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::GstatsItems::GstatsItems()
    :
    pr{YType::uint32, "pr"},
    invpkt{YType::uint32, "invPkt"},
    pnv{YType::uint32, "pnv"},
    loopbkpkt{YType::uint32, "loopBkPkt"},
    mrdloopbk{YType::uint32, "mrdLoopBk"},
    pf{YType::uint32, "pf"},
    vpcdrqs{YType::uint32, "vpcDrQs"},
    vpcdrqr{YType::uint32, "vpcDrQr"},
    vpcdrqf{YType::uint32, "vpcDrQf"},
    vpcdrus{YType::uint32, "vpcDrUs"},
    vpcdrur{YType::uint32, "vpcDrUr"},
    vpcdruf{YType::uint32, "vpcDrUf"},
    vpccfssf{YType::uint32, "vpcCfsSf"},
    vpccfsrs{YType::uint32, "vpcCfsRs"},
    vpccfsrr{YType::uint32, "vpcCfsRr"},
    vpccfsrf{YType::uint32, "vpcCfsRf"},
    vpccfsrfp{YType::uint32, "vpcCfsRfp"},
    vpccfsurls{YType::uint32, "vpcCfsUrls"},
    vpccfsurr{YType::uint32, "vpcCfsUrR"},
    vpccfscrlf{YType::uint32, "vpcCfsCrlF"},
    vpccfsrls{YType::uint32, "vpccfsrls"},
    vpccfsrlr{YType::uint32, "vpccfsrlr"},
    vpccfsrlf{YType::uint32, "vpccfsrlf"},
    inviod{YType::uint32, "invIod"},
    stptcnr{YType::uint32, "stptcnr"},
    imapif{YType::uint32, "imapif"},
    mfreqr{YType::uint32, "mfreqr"},
    mfcmps{YType::uint32, "mfcmps"},
    mfdgcmps{YType::uint32, "mfdgcmps"},
    bufsnt{YType::uint32, "bufsnt"},
    bufackr{YType::uint32, "bufackr"},
    vpcmismatch{YType::uint32, "vpcmismatch"}
{

    yang_name = "gstats-items"; yang_parent_name = "Db-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::GstatsItems::~GstatsItems()
{
}

bool System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::GstatsItems::has_data() const
{
    if (is_presence_container) return true;
    return pr.is_set
	|| invpkt.is_set
	|| pnv.is_set
	|| loopbkpkt.is_set
	|| mrdloopbk.is_set
	|| pf.is_set
	|| vpcdrqs.is_set
	|| vpcdrqr.is_set
	|| vpcdrqf.is_set
	|| vpcdrus.is_set
	|| vpcdrur.is_set
	|| vpcdruf.is_set
	|| vpccfssf.is_set
	|| vpccfsrs.is_set
	|| vpccfsrr.is_set
	|| vpccfsrf.is_set
	|| vpccfsrfp.is_set
	|| vpccfsurls.is_set
	|| vpccfsurr.is_set
	|| vpccfscrlf.is_set
	|| vpccfsrls.is_set
	|| vpccfsrlr.is_set
	|| vpccfsrlf.is_set
	|| inviod.is_set
	|| stptcnr.is_set
	|| imapif.is_set
	|| mfreqr.is_set
	|| mfcmps.is_set
	|| mfdgcmps.is_set
	|| bufsnt.is_set
	|| bufackr.is_set
	|| vpcmismatch.is_set;
}

bool System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::GstatsItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pr.yfilter)
	|| ydk::is_set(invpkt.yfilter)
	|| ydk::is_set(pnv.yfilter)
	|| ydk::is_set(loopbkpkt.yfilter)
	|| ydk::is_set(mrdloopbk.yfilter)
	|| ydk::is_set(pf.yfilter)
	|| ydk::is_set(vpcdrqs.yfilter)
	|| ydk::is_set(vpcdrqr.yfilter)
	|| ydk::is_set(vpcdrqf.yfilter)
	|| ydk::is_set(vpcdrus.yfilter)
	|| ydk::is_set(vpcdrur.yfilter)
	|| ydk::is_set(vpcdruf.yfilter)
	|| ydk::is_set(vpccfssf.yfilter)
	|| ydk::is_set(vpccfsrs.yfilter)
	|| ydk::is_set(vpccfsrr.yfilter)
	|| ydk::is_set(vpccfsrf.yfilter)
	|| ydk::is_set(vpccfsrfp.yfilter)
	|| ydk::is_set(vpccfsurls.yfilter)
	|| ydk::is_set(vpccfsurr.yfilter)
	|| ydk::is_set(vpccfscrlf.yfilter)
	|| ydk::is_set(vpccfsrls.yfilter)
	|| ydk::is_set(vpccfsrlr.yfilter)
	|| ydk::is_set(vpccfsrlf.yfilter)
	|| ydk::is_set(inviod.yfilter)
	|| ydk::is_set(stptcnr.yfilter)
	|| ydk::is_set(imapif.yfilter)
	|| ydk::is_set(mfreqr.yfilter)
	|| ydk::is_set(mfcmps.yfilter)
	|| ydk::is_set(mfdgcmps.yfilter)
	|| ydk::is_set(bufsnt.yfilter)
	|| ydk::is_set(bufackr.yfilter)
	|| ydk::is_set(vpcmismatch.yfilter);
}

std::string System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::GstatsItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "gstats-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::GstatsItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pr.is_set || is_set(pr.yfilter)) leaf_name_data.push_back(pr.get_name_leafdata());
    if (invpkt.is_set || is_set(invpkt.yfilter)) leaf_name_data.push_back(invpkt.get_name_leafdata());
    if (pnv.is_set || is_set(pnv.yfilter)) leaf_name_data.push_back(pnv.get_name_leafdata());
    if (loopbkpkt.is_set || is_set(loopbkpkt.yfilter)) leaf_name_data.push_back(loopbkpkt.get_name_leafdata());
    if (mrdloopbk.is_set || is_set(mrdloopbk.yfilter)) leaf_name_data.push_back(mrdloopbk.get_name_leafdata());
    if (pf.is_set || is_set(pf.yfilter)) leaf_name_data.push_back(pf.get_name_leafdata());
    if (vpcdrqs.is_set || is_set(vpcdrqs.yfilter)) leaf_name_data.push_back(vpcdrqs.get_name_leafdata());
    if (vpcdrqr.is_set || is_set(vpcdrqr.yfilter)) leaf_name_data.push_back(vpcdrqr.get_name_leafdata());
    if (vpcdrqf.is_set || is_set(vpcdrqf.yfilter)) leaf_name_data.push_back(vpcdrqf.get_name_leafdata());
    if (vpcdrus.is_set || is_set(vpcdrus.yfilter)) leaf_name_data.push_back(vpcdrus.get_name_leafdata());
    if (vpcdrur.is_set || is_set(vpcdrur.yfilter)) leaf_name_data.push_back(vpcdrur.get_name_leafdata());
    if (vpcdruf.is_set || is_set(vpcdruf.yfilter)) leaf_name_data.push_back(vpcdruf.get_name_leafdata());
    if (vpccfssf.is_set || is_set(vpccfssf.yfilter)) leaf_name_data.push_back(vpccfssf.get_name_leafdata());
    if (vpccfsrs.is_set || is_set(vpccfsrs.yfilter)) leaf_name_data.push_back(vpccfsrs.get_name_leafdata());
    if (vpccfsrr.is_set || is_set(vpccfsrr.yfilter)) leaf_name_data.push_back(vpccfsrr.get_name_leafdata());
    if (vpccfsrf.is_set || is_set(vpccfsrf.yfilter)) leaf_name_data.push_back(vpccfsrf.get_name_leafdata());
    if (vpccfsrfp.is_set || is_set(vpccfsrfp.yfilter)) leaf_name_data.push_back(vpccfsrfp.get_name_leafdata());
    if (vpccfsurls.is_set || is_set(vpccfsurls.yfilter)) leaf_name_data.push_back(vpccfsurls.get_name_leafdata());
    if (vpccfsurr.is_set || is_set(vpccfsurr.yfilter)) leaf_name_data.push_back(vpccfsurr.get_name_leafdata());
    if (vpccfscrlf.is_set || is_set(vpccfscrlf.yfilter)) leaf_name_data.push_back(vpccfscrlf.get_name_leafdata());
    if (vpccfsrls.is_set || is_set(vpccfsrls.yfilter)) leaf_name_data.push_back(vpccfsrls.get_name_leafdata());
    if (vpccfsrlr.is_set || is_set(vpccfsrlr.yfilter)) leaf_name_data.push_back(vpccfsrlr.get_name_leafdata());
    if (vpccfsrlf.is_set || is_set(vpccfsrlf.yfilter)) leaf_name_data.push_back(vpccfsrlf.get_name_leafdata());
    if (inviod.is_set || is_set(inviod.yfilter)) leaf_name_data.push_back(inviod.get_name_leafdata());
    if (stptcnr.is_set || is_set(stptcnr.yfilter)) leaf_name_data.push_back(stptcnr.get_name_leafdata());
    if (imapif.is_set || is_set(imapif.yfilter)) leaf_name_data.push_back(imapif.get_name_leafdata());
    if (mfreqr.is_set || is_set(mfreqr.yfilter)) leaf_name_data.push_back(mfreqr.get_name_leafdata());
    if (mfcmps.is_set || is_set(mfcmps.yfilter)) leaf_name_data.push_back(mfcmps.get_name_leafdata());
    if (mfdgcmps.is_set || is_set(mfdgcmps.yfilter)) leaf_name_data.push_back(mfdgcmps.get_name_leafdata());
    if (bufsnt.is_set || is_set(bufsnt.yfilter)) leaf_name_data.push_back(bufsnt.get_name_leafdata());
    if (bufackr.is_set || is_set(bufackr.yfilter)) leaf_name_data.push_back(bufackr.get_name_leafdata());
    if (vpcmismatch.is_set || is_set(vpcmismatch.yfilter)) leaf_name_data.push_back(vpcmismatch.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::GstatsItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::GstatsItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::GstatsItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pr")
    {
        pr = value;
        pr.value_namespace = name_space;
        pr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "invPkt")
    {
        invpkt = value;
        invpkt.value_namespace = name_space;
        invpkt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pnv")
    {
        pnv = value;
        pnv.value_namespace = name_space;
        pnv.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "loopBkPkt")
    {
        loopbkpkt = value;
        loopbkpkt.value_namespace = name_space;
        loopbkpkt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mrdLoopBk")
    {
        mrdloopbk = value;
        mrdloopbk.value_namespace = name_space;
        mrdloopbk.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pf")
    {
        pf = value;
        pf.value_namespace = name_space;
        pf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vpcDrQs")
    {
        vpcdrqs = value;
        vpcdrqs.value_namespace = name_space;
        vpcdrqs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vpcDrQr")
    {
        vpcdrqr = value;
        vpcdrqr.value_namespace = name_space;
        vpcdrqr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vpcDrQf")
    {
        vpcdrqf = value;
        vpcdrqf.value_namespace = name_space;
        vpcdrqf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vpcDrUs")
    {
        vpcdrus = value;
        vpcdrus.value_namespace = name_space;
        vpcdrus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vpcDrUr")
    {
        vpcdrur = value;
        vpcdrur.value_namespace = name_space;
        vpcdrur.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vpcDrUf")
    {
        vpcdruf = value;
        vpcdruf.value_namespace = name_space;
        vpcdruf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vpcCfsSf")
    {
        vpccfssf = value;
        vpccfssf.value_namespace = name_space;
        vpccfssf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vpcCfsRs")
    {
        vpccfsrs = value;
        vpccfsrs.value_namespace = name_space;
        vpccfsrs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vpcCfsRr")
    {
        vpccfsrr = value;
        vpccfsrr.value_namespace = name_space;
        vpccfsrr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vpcCfsRf")
    {
        vpccfsrf = value;
        vpccfsrf.value_namespace = name_space;
        vpccfsrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vpcCfsRfp")
    {
        vpccfsrfp = value;
        vpccfsrfp.value_namespace = name_space;
        vpccfsrfp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vpcCfsUrls")
    {
        vpccfsurls = value;
        vpccfsurls.value_namespace = name_space;
        vpccfsurls.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vpcCfsUrR")
    {
        vpccfsurr = value;
        vpccfsurr.value_namespace = name_space;
        vpccfsurr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vpcCfsCrlF")
    {
        vpccfscrlf = value;
        vpccfscrlf.value_namespace = name_space;
        vpccfscrlf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vpccfsrls")
    {
        vpccfsrls = value;
        vpccfsrls.value_namespace = name_space;
        vpccfsrls.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vpccfsrlr")
    {
        vpccfsrlr = value;
        vpccfsrlr.value_namespace = name_space;
        vpccfsrlr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vpccfsrlf")
    {
        vpccfsrlf = value;
        vpccfsrlf.value_namespace = name_space;
        vpccfsrlf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "invIod")
    {
        inviod = value;
        inviod.value_namespace = name_space;
        inviod.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stptcnr")
    {
        stptcnr = value;
        stptcnr.value_namespace = name_space;
        stptcnr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "imapif")
    {
        imapif = value;
        imapif.value_namespace = name_space;
        imapif.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mfreqr")
    {
        mfreqr = value;
        mfreqr.value_namespace = name_space;
        mfreqr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mfcmps")
    {
        mfcmps = value;
        mfcmps.value_namespace = name_space;
        mfcmps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mfdgcmps")
    {
        mfdgcmps = value;
        mfdgcmps.value_namespace = name_space;
        mfdgcmps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bufsnt")
    {
        bufsnt = value;
        bufsnt.value_namespace = name_space;
        bufsnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bufackr")
    {
        bufackr = value;
        bufackr.value_namespace = name_space;
        bufackr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vpcmismatch")
    {
        vpcmismatch = value;
        vpcmismatch.value_namespace = name_space;
        vpcmismatch.value_namespace_prefix = name_space_prefix;
    }
}

void System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::GstatsItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pr")
    {
        pr.yfilter = yfilter;
    }
    if(value_path == "invPkt")
    {
        invpkt.yfilter = yfilter;
    }
    if(value_path == "pnv")
    {
        pnv.yfilter = yfilter;
    }
    if(value_path == "loopBkPkt")
    {
        loopbkpkt.yfilter = yfilter;
    }
    if(value_path == "mrdLoopBk")
    {
        mrdloopbk.yfilter = yfilter;
    }
    if(value_path == "pf")
    {
        pf.yfilter = yfilter;
    }
    if(value_path == "vpcDrQs")
    {
        vpcdrqs.yfilter = yfilter;
    }
    if(value_path == "vpcDrQr")
    {
        vpcdrqr.yfilter = yfilter;
    }
    if(value_path == "vpcDrQf")
    {
        vpcdrqf.yfilter = yfilter;
    }
    if(value_path == "vpcDrUs")
    {
        vpcdrus.yfilter = yfilter;
    }
    if(value_path == "vpcDrUr")
    {
        vpcdrur.yfilter = yfilter;
    }
    if(value_path == "vpcDrUf")
    {
        vpcdruf.yfilter = yfilter;
    }
    if(value_path == "vpcCfsSf")
    {
        vpccfssf.yfilter = yfilter;
    }
    if(value_path == "vpcCfsRs")
    {
        vpccfsrs.yfilter = yfilter;
    }
    if(value_path == "vpcCfsRr")
    {
        vpccfsrr.yfilter = yfilter;
    }
    if(value_path == "vpcCfsRf")
    {
        vpccfsrf.yfilter = yfilter;
    }
    if(value_path == "vpcCfsRfp")
    {
        vpccfsrfp.yfilter = yfilter;
    }
    if(value_path == "vpcCfsUrls")
    {
        vpccfsurls.yfilter = yfilter;
    }
    if(value_path == "vpcCfsUrR")
    {
        vpccfsurr.yfilter = yfilter;
    }
    if(value_path == "vpcCfsCrlF")
    {
        vpccfscrlf.yfilter = yfilter;
    }
    if(value_path == "vpccfsrls")
    {
        vpccfsrls.yfilter = yfilter;
    }
    if(value_path == "vpccfsrlr")
    {
        vpccfsrlr.yfilter = yfilter;
    }
    if(value_path == "vpccfsrlf")
    {
        vpccfsrlf.yfilter = yfilter;
    }
    if(value_path == "invIod")
    {
        inviod.yfilter = yfilter;
    }
    if(value_path == "stptcnr")
    {
        stptcnr.yfilter = yfilter;
    }
    if(value_path == "imapif")
    {
        imapif.yfilter = yfilter;
    }
    if(value_path == "mfreqr")
    {
        mfreqr.yfilter = yfilter;
    }
    if(value_path == "mfcmps")
    {
        mfcmps.yfilter = yfilter;
    }
    if(value_path == "mfdgcmps")
    {
        mfdgcmps.yfilter = yfilter;
    }
    if(value_path == "bufsnt")
    {
        bufsnt.yfilter = yfilter;
    }
    if(value_path == "bufackr")
    {
        bufackr.yfilter = yfilter;
    }
    if(value_path == "vpcmismatch")
    {
        vpcmismatch.yfilter = yfilter;
    }
}

bool System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::GstatsItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pr" || name == "invPkt" || name == "pnv" || name == "loopBkPkt" || name == "mrdLoopBk" || name == "pf" || name == "vpcDrQs" || name == "vpcDrQr" || name == "vpcDrQf" || name == "vpcDrUs" || name == "vpcDrUr" || name == "vpcDrUf" || name == "vpcCfsSf" || name == "vpcCfsRs" || name == "vpcCfsRr" || name == "vpcCfsRf" || name == "vpcCfsRfp" || name == "vpcCfsUrls" || name == "vpcCfsUrR" || name == "vpcCfsCrlF" || name == "vpccfsrls" || name == "vpccfsrlr" || name == "vpccfsrlf" || name == "invIod" || name == "stptcnr" || name == "imapif" || name == "mfreqr" || name == "mfcmps" || name == "mfdgcmps" || name == "bufsnt" || name == "bufackr" || name == "vpcmismatch")
        return true;
    return false;
}

System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::PolicyItems::PolicyItems()
    :
    reportpolicystats_list(this, {"vlanid", "qcount"})
{

    yang_name = "policy-items"; yang_parent_name = "Db-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::PolicyItems::~PolicyItems()
{
}

bool System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::PolicyItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<reportpolicystats_list.len(); index++)
    {
        if(reportpolicystats_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::PolicyItems::has_operation() const
{
    for (std::size_t index=0; index<reportpolicystats_list.len(); index++)
    {
        if(reportpolicystats_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::PolicyItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::PolicyItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::PolicyItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ReportPolicyStats-list")
    {
        auto c = std::make_shared<System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::PolicyItems::ReportPolicyStatsList>();
        c->parent = this;
        reportpolicystats_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::PolicyItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : reportpolicystats_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::PolicyItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::PolicyItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::PolicyItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ReportPolicyStats-list")
        return true;
    return false;
}

System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::PolicyItems::ReportPolicyStatsList::ReportPolicyStatsList()
    :
    vlanid{YType::uint32, "vlanid"},
    qcount{YType::uint32, "qcount"},
    rpmtype{YType::uint32, "rpmType"},
    policyname{YType::str, "policyName"},
    acceptcount{YType::uint32, "acceptCount"},
    rejectcount{YType::uint32, "rejectCount"}
        ,
    qcount_items(std::make_shared<System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::PolicyItems::ReportPolicyStatsList::QcountItems>())
{
    qcount_items->parent = this;

    yang_name = "ReportPolicyStats-list"; yang_parent_name = "policy-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::PolicyItems::ReportPolicyStatsList::~ReportPolicyStatsList()
{
}

bool System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::PolicyItems::ReportPolicyStatsList::has_data() const
{
    if (is_presence_container) return true;
    return vlanid.is_set
	|| qcount.is_set
	|| rpmtype.is_set
	|| policyname.is_set
	|| acceptcount.is_set
	|| rejectcount.is_set
	|| (qcount_items !=  nullptr && qcount_items->has_data());
}

bool System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::PolicyItems::ReportPolicyStatsList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vlanid.yfilter)
	|| ydk::is_set(qcount.yfilter)
	|| ydk::is_set(rpmtype.yfilter)
	|| ydk::is_set(policyname.yfilter)
	|| ydk::is_set(acceptcount.yfilter)
	|| ydk::is_set(rejectcount.yfilter)
	|| (qcount_items !=  nullptr && qcount_items->has_operation());
}

std::string System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::PolicyItems::ReportPolicyStatsList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ReportPolicyStats-list";
    ADD_KEY_TOKEN(vlanid, "vlanid");
    ADD_KEY_TOKEN(qcount, "qcount");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::PolicyItems::ReportPolicyStatsList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlanid.is_set || is_set(vlanid.yfilter)) leaf_name_data.push_back(vlanid.get_name_leafdata());
    if (qcount.is_set || is_set(qcount.yfilter)) leaf_name_data.push_back(qcount.get_name_leafdata());
    if (rpmtype.is_set || is_set(rpmtype.yfilter)) leaf_name_data.push_back(rpmtype.get_name_leafdata());
    if (policyname.is_set || is_set(policyname.yfilter)) leaf_name_data.push_back(policyname.get_name_leafdata());
    if (acceptcount.is_set || is_set(acceptcount.yfilter)) leaf_name_data.push_back(acceptcount.get_name_leafdata());
    if (rejectcount.is_set || is_set(rejectcount.yfilter)) leaf_name_data.push_back(rejectcount.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::PolicyItems::ReportPolicyStatsList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Qcount-items")
    {
        if(qcount_items == nullptr)
        {
            qcount_items = std::make_shared<System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::PolicyItems::ReportPolicyStatsList::QcountItems>();
        }
        return qcount_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::PolicyItems::ReportPolicyStatsList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(qcount_items != nullptr)
    {
        children["Qcount-items"] = qcount_items;
    }

    return children;
}

void System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::PolicyItems::ReportPolicyStatsList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vlanid")
    {
        vlanid = value;
        vlanid.value_namespace = name_space;
        vlanid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qcount")
    {
        qcount = value;
        qcount.value_namespace = name_space;
        qcount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpmType")
    {
        rpmtype = value;
        rpmtype.value_namespace = name_space;
        rpmtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policyName")
    {
        policyname = value;
        policyname.value_namespace = name_space;
        policyname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "acceptCount")
    {
        acceptcount = value;
        acceptcount.value_namespace = name_space;
        acceptcount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rejectCount")
    {
        rejectcount = value;
        rejectcount.value_namespace = name_space;
        rejectcount.value_namespace_prefix = name_space_prefix;
    }
}

void System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::PolicyItems::ReportPolicyStatsList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vlanid")
    {
        vlanid.yfilter = yfilter;
    }
    if(value_path == "qcount")
    {
        qcount.yfilter = yfilter;
    }
    if(value_path == "rpmType")
    {
        rpmtype.yfilter = yfilter;
    }
    if(value_path == "policyName")
    {
        policyname.yfilter = yfilter;
    }
    if(value_path == "acceptCount")
    {
        acceptcount.yfilter = yfilter;
    }
    if(value_path == "rejectCount")
    {
        rejectcount.yfilter = yfilter;
    }
}

bool System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::PolicyItems::ReportPolicyStatsList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Qcount-items" || name == "vlanid" || name == "qcount" || name == "rpmType" || name == "policyName" || name == "acceptCount" || name == "rejectCount")
        return true;
    return false;
}

System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::PolicyItems::ReportPolicyStatsList::QcountItems::QcountItems()
    :
    policyqcnt_list(this, {"count"})
{

    yang_name = "Qcount-items"; yang_parent_name = "ReportPolicyStats-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::PolicyItems::ReportPolicyStatsList::QcountItems::~QcountItems()
{
}

bool System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::PolicyItems::ReportPolicyStatsList::QcountItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<policyqcnt_list.len(); index++)
    {
        if(policyqcnt_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::PolicyItems::ReportPolicyStatsList::QcountItems::has_operation() const
{
    for (std::size_t index=0; index<policyqcnt_list.len(); index++)
    {
        if(policyqcnt_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::PolicyItems::ReportPolicyStatsList::QcountItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Qcount-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::PolicyItems::ReportPolicyStatsList::QcountItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::PolicyItems::ReportPolicyStatsList::QcountItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "PolicyQcnt-list")
    {
        auto c = std::make_shared<System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::PolicyItems::ReportPolicyStatsList::QcountItems::PolicyQcntList>();
        c->parent = this;
        policyqcnt_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::PolicyItems::ReportPolicyStatsList::QcountItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : policyqcnt_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::PolicyItems::ReportPolicyStatsList::QcountItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::PolicyItems::ReportPolicyStatsList::QcountItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::PolicyItems::ReportPolicyStatsList::QcountItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "PolicyQcnt-list")
        return true;
    return false;
}

System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::PolicyItems::ReportPolicyStatsList::QcountItems::PolicyQcntList::PolicyQcntList()
    :
    count{YType::uint32, "count"}
{

    yang_name = "PolicyQcnt-list"; yang_parent_name = "Qcount-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::PolicyItems::ReportPolicyStatsList::QcountItems::PolicyQcntList::~PolicyQcntList()
{
}

bool System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::PolicyItems::ReportPolicyStatsList::QcountItems::PolicyQcntList::has_data() const
{
    if (is_presence_container) return true;
    return count.is_set;
}

bool System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::PolicyItems::ReportPolicyStatsList::QcountItems::PolicyQcntList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(count.yfilter);
}

std::string System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::PolicyItems::ReportPolicyStatsList::QcountItems::PolicyQcntList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "PolicyQcnt-list";
    ADD_KEY_TOKEN(count, "count");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::PolicyItems::ReportPolicyStatsList::QcountItems::PolicyQcntList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (count.is_set || is_set(count.yfilter)) leaf_name_data.push_back(count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::PolicyItems::ReportPolicyStatsList::QcountItems::PolicyQcntList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::PolicyItems::ReportPolicyStatsList::QcountItems::PolicyQcntList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::PolicyItems::ReportPolicyStatsList::QcountItems::PolicyQcntList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "count")
    {
        count = value;
        count.value_namespace = name_space;
        count.value_namespace_prefix = name_space_prefix;
    }
}

void System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::PolicyItems::ReportPolicyStatsList::QcountItems::PolicyQcntList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "count")
    {
        count.yfilter = yfilter;
    }
}

bool System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::PolicyItems::ReportPolicyStatsList::QcountItems::PolicyQcntList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "count")
        return true;
    return false;
}

System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::GroupItems::GroupItems()
    :
    igmpsngrouprec_list(this, {"vlanid", "groupaddr", "sourceaddr", "ifname"})
{

    yang_name = "group-items"; yang_parent_name = "Db-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::GroupItems::~GroupItems()
{
}

bool System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::GroupItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<igmpsngrouprec_list.len(); index++)
    {
        if(igmpsngrouprec_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::GroupItems::has_operation() const
{
    for (std::size_t index=0; index<igmpsngrouprec_list.len(); index++)
    {
        if(igmpsngrouprec_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::GroupItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::GroupItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::GroupItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "IgmpsnGroupRec-list")
    {
        auto c = std::make_shared<System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::GroupItems::IgmpsnGroupRecList>();
        c->parent = this;
        igmpsngrouprec_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::GroupItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : igmpsngrouprec_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::GroupItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::GroupItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::GroupItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "IgmpsnGroupRec-list")
        return true;
    return false;
}

System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::GroupItems::IgmpsnGroupRecList::IgmpsnGroupRecList()
    :
    vlanid{YType::uint32, "vlanid"},
    groupaddr{YType::str, "groupaddr"},
    sourceaddr{YType::str, "sourceaddr"},
    ifname{YType::str, "ifname"},
    ver{YType::str, "ver"},
    sporttype{YType::str, "sportType"},
    gporttype{YType::str, "gportType"},
    rporttype{YType::str, "rportType"},
    rifname{YType::str, "rifname"}
{

    yang_name = "IgmpsnGroupRec-list"; yang_parent_name = "group-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::GroupItems::IgmpsnGroupRecList::~IgmpsnGroupRecList()
{
}

bool System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::GroupItems::IgmpsnGroupRecList::has_data() const
{
    if (is_presence_container) return true;
    return vlanid.is_set
	|| groupaddr.is_set
	|| sourceaddr.is_set
	|| ifname.is_set
	|| ver.is_set
	|| sporttype.is_set
	|| gporttype.is_set
	|| rporttype.is_set
	|| rifname.is_set;
}

bool System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::GroupItems::IgmpsnGroupRecList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vlanid.yfilter)
	|| ydk::is_set(groupaddr.yfilter)
	|| ydk::is_set(sourceaddr.yfilter)
	|| ydk::is_set(ifname.yfilter)
	|| ydk::is_set(ver.yfilter)
	|| ydk::is_set(sporttype.yfilter)
	|| ydk::is_set(gporttype.yfilter)
	|| ydk::is_set(rporttype.yfilter)
	|| ydk::is_set(rifname.yfilter);
}

std::string System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::GroupItems::IgmpsnGroupRecList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "IgmpsnGroupRec-list";
    ADD_KEY_TOKEN(vlanid, "vlanid");
    ADD_KEY_TOKEN(groupaddr, "groupaddr");
    ADD_KEY_TOKEN(sourceaddr, "sourceaddr");
    ADD_KEY_TOKEN(ifname, "ifname");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::GroupItems::IgmpsnGroupRecList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlanid.is_set || is_set(vlanid.yfilter)) leaf_name_data.push_back(vlanid.get_name_leafdata());
    if (groupaddr.is_set || is_set(groupaddr.yfilter)) leaf_name_data.push_back(groupaddr.get_name_leafdata());
    if (sourceaddr.is_set || is_set(sourceaddr.yfilter)) leaf_name_data.push_back(sourceaddr.get_name_leafdata());
    if (ifname.is_set || is_set(ifname.yfilter)) leaf_name_data.push_back(ifname.get_name_leafdata());
    if (ver.is_set || is_set(ver.yfilter)) leaf_name_data.push_back(ver.get_name_leafdata());
    if (sporttype.is_set || is_set(sporttype.yfilter)) leaf_name_data.push_back(sporttype.get_name_leafdata());
    if (gporttype.is_set || is_set(gporttype.yfilter)) leaf_name_data.push_back(gporttype.get_name_leafdata());
    if (rporttype.is_set || is_set(rporttype.yfilter)) leaf_name_data.push_back(rporttype.get_name_leafdata());
    if (rifname.is_set || is_set(rifname.yfilter)) leaf_name_data.push_back(rifname.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::GroupItems::IgmpsnGroupRecList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::GroupItems::IgmpsnGroupRecList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::GroupItems::IgmpsnGroupRecList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vlanid")
    {
        vlanid = value;
        vlanid.value_namespace = name_space;
        vlanid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "groupaddr")
    {
        groupaddr = value;
        groupaddr.value_namespace = name_space;
        groupaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sourceaddr")
    {
        sourceaddr = value;
        sourceaddr.value_namespace = name_space;
        sourceaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ifname")
    {
        ifname = value;
        ifname.value_namespace = name_space;
        ifname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ver")
    {
        ver = value;
        ver.value_namespace = name_space;
        ver.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sportType")
    {
        sporttype = value;
        sporttype.value_namespace = name_space;
        sporttype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "gportType")
    {
        gporttype = value;
        gporttype.value_namespace = name_space;
        gporttype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rportType")
    {
        rporttype = value;
        rporttype.value_namespace = name_space;
        rporttype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rifname")
    {
        rifname = value;
        rifname.value_namespace = name_space;
        rifname.value_namespace_prefix = name_space_prefix;
    }
}

void System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::GroupItems::IgmpsnGroupRecList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vlanid")
    {
        vlanid.yfilter = yfilter;
    }
    if(value_path == "groupaddr")
    {
        groupaddr.yfilter = yfilter;
    }
    if(value_path == "sourceaddr")
    {
        sourceaddr.yfilter = yfilter;
    }
    if(value_path == "ifname")
    {
        ifname.yfilter = yfilter;
    }
    if(value_path == "ver")
    {
        ver.yfilter = yfilter;
    }
    if(value_path == "sportType")
    {
        sporttype.yfilter = yfilter;
    }
    if(value_path == "gportType")
    {
        gporttype.yfilter = yfilter;
    }
    if(value_path == "rportType")
    {
        rporttype.yfilter = yfilter;
    }
    if(value_path == "rifname")
    {
        rifname.yfilter = yfilter;
    }
}

bool System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::GroupItems::IgmpsnGroupRecList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlanid" || name == "groupaddr" || name == "sourceaddr" || name == "ifname" || name == "ver" || name == "sportType" || name == "gportType" || name == "rportType" || name == "rifname")
        return true;
    return false;
}

System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McgrpItems()
    :
    mcgrprec_list(this, {"addr"})
{

    yang_name = "mcgrp-items"; yang_parent_name = "Db-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::~McgrpItems()
{
}

bool System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<mcgrprec_list.len(); index++)
    {
        if(mcgrprec_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::has_operation() const
{
    for (std::size_t index=0; index<mcgrprec_list.len(); index++)
    {
        if(mcgrprec_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mcgrp-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "McGrpRec-list")
    {
        auto c = std::make_shared<System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList>();
        c->parent = this;
        mcgrprec_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : mcgrprec_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "McGrpRec-list")
        return true;
    return false;
}

System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::McGrpRecList()
    :
    addr{YType::str, "addr"},
    name{YType::str, "name"},
    ver{YType::enumeration, "ver"},
    latreporter{YType::str, "latReporter"},
    oldhostts{YType::str, "oldHostTs"},
    reportts{YType::str, "reportTs"},
    numsrc{YType::uint32, "numSrc"}
        ,
    epg_items(std::make_shared<System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems>())
    , rep_items(std::make_shared<System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::RepItems>())
{
    epg_items->parent = this;
    rep_items->parent = this;

    yang_name = "McGrpRec-list"; yang_parent_name = "mcgrp-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::~McGrpRecList()
{
}

bool System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::has_data() const
{
    if (is_presence_container) return true;
    return addr.is_set
	|| name.is_set
	|| ver.is_set
	|| latreporter.is_set
	|| oldhostts.is_set
	|| reportts.is_set
	|| numsrc.is_set
	|| (epg_items !=  nullptr && epg_items->has_data())
	|| (rep_items !=  nullptr && rep_items->has_data());
}

bool System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(addr.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(ver.yfilter)
	|| ydk::is_set(latreporter.yfilter)
	|| ydk::is_set(oldhostts.yfilter)
	|| ydk::is_set(reportts.yfilter)
	|| ydk::is_set(numsrc.yfilter)
	|| (epg_items !=  nullptr && epg_items->has_operation())
	|| (rep_items !=  nullptr && rep_items->has_operation());
}

std::string System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "McGrpRec-list";
    ADD_KEY_TOKEN(addr, "addr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (ver.is_set || is_set(ver.yfilter)) leaf_name_data.push_back(ver.get_name_leafdata());
    if (latreporter.is_set || is_set(latreporter.yfilter)) leaf_name_data.push_back(latreporter.get_name_leafdata());
    if (oldhostts.is_set || is_set(oldhostts.yfilter)) leaf_name_data.push_back(oldhostts.get_name_leafdata());
    if (reportts.is_set || is_set(reportts.yfilter)) leaf_name_data.push_back(reportts.get_name_leafdata());
    if (numsrc.is_set || is_set(numsrc.yfilter)) leaf_name_data.push_back(numsrc.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "epg-items")
    {
        if(epg_items == nullptr)
        {
            epg_items = std::make_shared<System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems>();
        }
        return epg_items;
    }

    if(child_yang_name == "rep-items")
    {
        if(rep_items == nullptr)
        {
            rep_items = std::make_shared<System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::RepItems>();
        }
        return rep_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(epg_items != nullptr)
    {
        children["epg-items"] = epg_items;
    }

    if(rep_items != nullptr)
    {
        children["rep-items"] = rep_items;
    }

    return children;
}

void System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "addr")
    {
        addr = value;
        addr.value_namespace = name_space;
        addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ver")
    {
        ver = value;
        ver.value_namespace = name_space;
        ver.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "latReporter")
    {
        latreporter = value;
        latreporter.value_namespace = name_space;
        latreporter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oldHostTs")
    {
        oldhostts = value;
        oldhostts.value_namespace = name_space;
        oldhostts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reportTs")
    {
        reportts = value;
        reportts.value_namespace = name_space;
        reportts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "numSrc")
    {
        numsrc = value;
        numsrc.value_namespace = name_space;
        numsrc.value_namespace_prefix = name_space_prefix;
    }
}

void System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "addr")
    {
        addr.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "ver")
    {
        ver.yfilter = yfilter;
    }
    if(value_path == "latReporter")
    {
        latreporter.yfilter = yfilter;
    }
    if(value_path == "oldHostTs")
    {
        oldhostts.yfilter = yfilter;
    }
    if(value_path == "reportTs")
    {
        reportts.yfilter = yfilter;
    }
    if(value_path == "numSrc")
    {
        numsrc.yfilter = yfilter;
    }
}

bool System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "epg-items" || name == "rep-items" || name == "addr" || name == "name" || name == "ver" || name == "latReporter" || name == "oldHostTs" || name == "reportTs" || name == "numSrc")
        return true;
    return false;
}

System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgItems()
    :
    epgrec_list(this, {"fabencap"})
{

    yang_name = "epg-items"; yang_parent_name = "McGrpRec-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::~EpgItems()
{
}

bool System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<epgrec_list.len(); index++)
    {
        if(epgrec_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::has_operation() const
{
    for (std::size_t index=0; index<epgrec_list.len(); index++)
    {
        if(epgrec_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "epg-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "EpgRec-list")
    {
        auto c = std::make_shared<System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList>();
        c->parent = this;
        epgrec_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : epgrec_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "EpgRec-list")
        return true;
    return false;
}

System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::EpgRecList()
    :
    fabencap{YType::str, "fabEncap"},
    name{YType::str, "name"},
    id{YType::uint32, "id"},
    mcastencap{YType::str, "mcastEncap"}
        ,
    rep_items(std::make_shared<System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems>())
{
    rep_items->parent = this;

    yang_name = "EpgRec-list"; yang_parent_name = "epg-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::~EpgRecList()
{
}

bool System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::has_data() const
{
    if (is_presence_container) return true;
    return fabencap.is_set
	|| name.is_set
	|| id.is_set
	|| mcastencap.is_set
	|| (rep_items !=  nullptr && rep_items->has_data());
}

bool System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fabencap.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(mcastencap.yfilter)
	|| (rep_items !=  nullptr && rep_items->has_operation());
}

std::string System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "EpgRec-list";
    ADD_KEY_TOKEN(fabencap, "fabEncap");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fabencap.is_set || is_set(fabencap.yfilter)) leaf_name_data.push_back(fabencap.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (mcastencap.is_set || is_set(mcastencap.yfilter)) leaf_name_data.push_back(mcastencap.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rep-items")
    {
        if(rep_items == nullptr)
        {
            rep_items = std::make_shared<System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems>();
        }
        return rep_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(rep_items != nullptr)
    {
        children["rep-items"] = rep_items;
    }

    return children;
}

void System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fabEncap")
    {
        fabencap = value;
        fabencap.value_namespace = name_space;
        fabencap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mcastEncap")
    {
        mcastencap = value;
        mcastencap.value_namespace = name_space;
        mcastencap.value_namespace_prefix = name_space_prefix;
    }
}

void System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fabEncap")
    {
        fabencap.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "mcastEncap")
    {
        mcastencap.yfilter = yfilter;
    }
}

bool System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rep-items" || name == "fabEncap" || name == "name" || name == "id" || name == "mcastEncap")
        return true;
    return false;
}

System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::RepItems()
    :
    reportrec_list(this, {"mcastsrc", "ver"})
{

    yang_name = "rep-items"; yang_parent_name = "EpgRec-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::~RepItems()
{
}

bool System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<reportrec_list.len(); index++)
    {
        if(reportrec_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::has_operation() const
{
    for (std::size_t index=0; index<reportrec_list.len(); index++)
    {
        if(reportrec_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rep-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ReportRec-list")
    {
        auto c = std::make_shared<System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList>();
        c->parent = this;
        reportrec_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : reportrec_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ReportRec-list")
        return true;
    return false;
}

System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::ReportRecList()
    :
    mcastsrc{YType::str, "mcastSrc"},
    ver{YType::enumeration, "ver"},
    name{YType::str, "name"},
    filtmode{YType::enumeration, "filtMode"},
    flags{YType::str, "flags"}
        ,
    oif_items(std::make_shared<System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems>())
{
    oif_items->parent = this;

    yang_name = "ReportRec-list"; yang_parent_name = "rep-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::~ReportRecList()
{
}

bool System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::has_data() const
{
    if (is_presence_container) return true;
    return mcastsrc.is_set
	|| ver.is_set
	|| name.is_set
	|| filtmode.is_set
	|| flags.is_set
	|| (oif_items !=  nullptr && oif_items->has_data());
}

bool System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mcastsrc.yfilter)
	|| ydk::is_set(ver.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(filtmode.yfilter)
	|| ydk::is_set(flags.yfilter)
	|| (oif_items !=  nullptr && oif_items->has_operation());
}

std::string System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ReportRec-list";
    ADD_KEY_TOKEN(mcastsrc, "mcastSrc");
    ADD_KEY_TOKEN(ver, "ver");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mcastsrc.is_set || is_set(mcastsrc.yfilter)) leaf_name_data.push_back(mcastsrc.get_name_leafdata());
    if (ver.is_set || is_set(ver.yfilter)) leaf_name_data.push_back(ver.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (filtmode.is_set || is_set(filtmode.yfilter)) leaf_name_data.push_back(filtmode.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "oif-items")
    {
        if(oif_items == nullptr)
        {
            oif_items = std::make_shared<System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems>();
        }
        return oif_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(oif_items != nullptr)
    {
        children["oif-items"] = oif_items;
    }

    return children;
}

void System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mcastSrc")
    {
        mcastsrc = value;
        mcastsrc.value_namespace = name_space;
        mcastsrc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ver")
    {
        ver = value;
        ver.value_namespace = name_space;
        ver.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "filtMode")
    {
        filtmode = value;
        filtmode.value_namespace = name_space;
        filtmode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
}

void System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mcastSrc")
    {
        mcastsrc.yfilter = yfilter;
    }
    if(value_path == "ver")
    {
        ver.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "filtMode")
    {
        filtmode.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
}

bool System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "oif-items" || name == "mcastSrc" || name == "ver" || name == "name" || name == "filtMode" || name == "flags")
        return true;
    return false;
}

System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems::OifItems()
    :
    oifrec_list(this, {"id"})
{

    yang_name = "oif-items"; yang_parent_name = "ReportRec-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems::~OifItems()
{
}

bool System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<oifrec_list.len(); index++)
    {
        if(oifrec_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems::has_operation() const
{
    for (std::size_t index=0; index<oifrec_list.len(); index++)
    {
        if(oifrec_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oif-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "OIFRec-list")
    {
        auto c = std::make_shared<System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems::OIFRecList>();
        c->parent = this;
        oifrec_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : oifrec_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "OIFRec-list")
        return true;
    return false;
}

System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems::OIFRecList::OIFRecList()
    :
    id{YType::str, "id"},
    name{YType::str, "name"},
    numgqmiss{YType::uint16, "numGqMiss"},
    expirets{YType::str, "expireTs"}
        ,
    host_items(std::make_shared<System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems::OIFRecList::HostItems>())
{
    host_items->parent = this;

    yang_name = "OIFRec-list"; yang_parent_name = "oif-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems::OIFRecList::~OIFRecList()
{
}

bool System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems::OIFRecList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| name.is_set
	|| numgqmiss.is_set
	|| expirets.is_set
	|| (host_items !=  nullptr && host_items->has_data());
}

bool System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems::OIFRecList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(numgqmiss.yfilter)
	|| ydk::is_set(expirets.yfilter)
	|| (host_items !=  nullptr && host_items->has_operation());
}

std::string System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems::OIFRecList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "OIFRec-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems::OIFRecList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (numgqmiss.is_set || is_set(numgqmiss.yfilter)) leaf_name_data.push_back(numgqmiss.get_name_leafdata());
    if (expirets.is_set || is_set(expirets.yfilter)) leaf_name_data.push_back(expirets.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems::OIFRecList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "host-items")
    {
        if(host_items == nullptr)
        {
            host_items = std::make_shared<System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems::OIFRecList::HostItems>();
        }
        return host_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems::OIFRecList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(host_items != nullptr)
    {
        children["host-items"] = host_items;
    }

    return children;
}

void System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems::OIFRecList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "numGqMiss")
    {
        numgqmiss = value;
        numgqmiss.value_namespace = name_space;
        numgqmiss.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "expireTs")
    {
        expirets = value;
        expirets.value_namespace = name_space;
        expirets.value_namespace_prefix = name_space_prefix;
    }
}

void System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems::OIFRecList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "numGqMiss")
    {
        numgqmiss.yfilter = yfilter;
    }
    if(value_path == "expireTs")
    {
        expirets.yfilter = yfilter;
    }
}

bool System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems::OIFRecList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "host-items" || name == "id" || name == "name" || name == "numGqMiss" || name == "expireTs")
        return true;
    return false;
}

System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems::OIFRecList::HostItems::HostItems()
    :
    hostrec_list(this, {"addr"})
{

    yang_name = "host-items"; yang_parent_name = "OIFRec-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems::OIFRecList::HostItems::~HostItems()
{
}

bool System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems::OIFRecList::HostItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<hostrec_list.len(); index++)
    {
        if(hostrec_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems::OIFRecList::HostItems::has_operation() const
{
    for (std::size_t index=0; index<hostrec_list.len(); index++)
    {
        if(hostrec_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems::OIFRecList::HostItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "host-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems::OIFRecList::HostItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems::OIFRecList::HostItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "HostRec-list")
    {
        auto c = std::make_shared<System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems::OIFRecList::HostItems::HostRecList>();
        c->parent = this;
        hostrec_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems::OIFRecList::HostItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : hostrec_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems::OIFRecList::HostItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems::OIFRecList::HostItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IgmpsnoopItems::InstItems::DomItems::DbItems::DbList::McgrpItems::McGrpRecList::EpgItems::EpgRecList::RepItems::ReportRecList::OifItems::OIFRecList::HostItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "HostRec-list")
        return true;
    return false;
}


}
}

