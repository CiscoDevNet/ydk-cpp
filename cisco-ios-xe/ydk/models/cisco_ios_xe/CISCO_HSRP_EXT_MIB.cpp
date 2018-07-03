
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "CISCO_HSRP_EXT_MIB.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace CISCO_HSRP_EXT_MIB {

CISCOHSRPEXTMIB::CISCOHSRPEXTMIB()
    :
    chsrpextiftrackedtable(std::make_shared<CISCOHSRPEXTMIB::CHsrpExtIfTrackedTable>())
    , chsrpextsecaddrtable(std::make_shared<CISCOHSRPEXTMIB::CHsrpExtSecAddrTable>())
    , chsrpextifstandbytable(std::make_shared<CISCOHSRPEXTMIB::CHsrpExtIfStandbyTable>())
    , chsrpextiftable(std::make_shared<CISCOHSRPEXTMIB::CHsrpExtIfTable>())
{
    chsrpextiftrackedtable->parent = this;
    chsrpextsecaddrtable->parent = this;
    chsrpextifstandbytable->parent = this;
    chsrpextiftable->parent = this;

    yang_name = "CISCO-HSRP-EXT-MIB"; yang_parent_name = "CISCO-HSRP-EXT-MIB"; is_top_level_class = true; has_list_ancestor = false; 
}

CISCOHSRPEXTMIB::~CISCOHSRPEXTMIB()
{
}

bool CISCOHSRPEXTMIB::has_data() const
{
    if (is_presence_container) return true;
    return (chsrpextiftrackedtable !=  nullptr && chsrpextiftrackedtable->has_data())
	|| (chsrpextsecaddrtable !=  nullptr && chsrpextsecaddrtable->has_data())
	|| (chsrpextifstandbytable !=  nullptr && chsrpextifstandbytable->has_data())
	|| (chsrpextiftable !=  nullptr && chsrpextiftable->has_data());
}

bool CISCOHSRPEXTMIB::has_operation() const
{
    return is_set(yfilter)
	|| (chsrpextiftrackedtable !=  nullptr && chsrpextiftrackedtable->has_operation())
	|| (chsrpextsecaddrtable !=  nullptr && chsrpextsecaddrtable->has_operation())
	|| (chsrpextifstandbytable !=  nullptr && chsrpextifstandbytable->has_operation())
	|| (chsrpextiftable !=  nullptr && chsrpextiftable->has_operation());
}

std::string CISCOHSRPEXTMIB::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-HSRP-EXT-MIB:CISCO-HSRP-EXT-MIB";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOHSRPEXTMIB::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOHSRPEXTMIB::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cHsrpExtIfTrackedTable")
    {
        if(chsrpextiftrackedtable == nullptr)
        {
            chsrpextiftrackedtable = std::make_shared<CISCOHSRPEXTMIB::CHsrpExtIfTrackedTable>();
        }
        return chsrpextiftrackedtable;
    }

    if(child_yang_name == "cHsrpExtSecAddrTable")
    {
        if(chsrpextsecaddrtable == nullptr)
        {
            chsrpextsecaddrtable = std::make_shared<CISCOHSRPEXTMIB::CHsrpExtSecAddrTable>();
        }
        return chsrpextsecaddrtable;
    }

    if(child_yang_name == "cHsrpExtIfStandbyTable")
    {
        if(chsrpextifstandbytable == nullptr)
        {
            chsrpextifstandbytable = std::make_shared<CISCOHSRPEXTMIB::CHsrpExtIfStandbyTable>();
        }
        return chsrpextifstandbytable;
    }

    if(child_yang_name == "cHsrpExtIfTable")
    {
        if(chsrpextiftable == nullptr)
        {
            chsrpextiftable = std::make_shared<CISCOHSRPEXTMIB::CHsrpExtIfTable>();
        }
        return chsrpextiftable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOHSRPEXTMIB::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(chsrpextiftrackedtable != nullptr)
    {
        children["cHsrpExtIfTrackedTable"] = chsrpextiftrackedtable;
    }

    if(chsrpextsecaddrtable != nullptr)
    {
        children["cHsrpExtSecAddrTable"] = chsrpextsecaddrtable;
    }

    if(chsrpextifstandbytable != nullptr)
    {
        children["cHsrpExtIfStandbyTable"] = chsrpextifstandbytable;
    }

    if(chsrpextiftable != nullptr)
    {
        children["cHsrpExtIfTable"] = chsrpextiftable;
    }

    return children;
}

void CISCOHSRPEXTMIB::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOHSRPEXTMIB::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> CISCOHSRPEXTMIB::clone_ptr() const
{
    return std::make_shared<CISCOHSRPEXTMIB>();
}

std::string CISCOHSRPEXTMIB::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string CISCOHSRPEXTMIB::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function CISCOHSRPEXTMIB::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> CISCOHSRPEXTMIB::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool CISCOHSRPEXTMIB::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cHsrpExtIfTrackedTable" || name == "cHsrpExtSecAddrTable" || name == "cHsrpExtIfStandbyTable" || name == "cHsrpExtIfTable")
        return true;
    return false;
}

CISCOHSRPEXTMIB::CHsrpExtIfTrackedTable::CHsrpExtIfTrackedTable()
    :
    chsrpextiftrackedentry(this, {"ifindex", "chsrpgrpnumber", "chsrpextiftracked"})
{

    yang_name = "cHsrpExtIfTrackedTable"; yang_parent_name = "CISCO-HSRP-EXT-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOHSRPEXTMIB::CHsrpExtIfTrackedTable::~CHsrpExtIfTrackedTable()
{
}

bool CISCOHSRPEXTMIB::CHsrpExtIfTrackedTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<chsrpextiftrackedentry.len(); index++)
    {
        if(chsrpextiftrackedentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOHSRPEXTMIB::CHsrpExtIfTrackedTable::has_operation() const
{
    for (std::size_t index=0; index<chsrpextiftrackedentry.len(); index++)
    {
        if(chsrpextiftrackedentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOHSRPEXTMIB::CHsrpExtIfTrackedTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-HSRP-EXT-MIB:CISCO-HSRP-EXT-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOHSRPEXTMIB::CHsrpExtIfTrackedTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cHsrpExtIfTrackedTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOHSRPEXTMIB::CHsrpExtIfTrackedTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOHSRPEXTMIB::CHsrpExtIfTrackedTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cHsrpExtIfTrackedEntry")
    {
        auto c = std::make_shared<CISCOHSRPEXTMIB::CHsrpExtIfTrackedTable::CHsrpExtIfTrackedEntry>();
        c->parent = this;
        chsrpextiftrackedentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOHSRPEXTMIB::CHsrpExtIfTrackedTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : chsrpextiftrackedentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCOHSRPEXTMIB::CHsrpExtIfTrackedTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOHSRPEXTMIB::CHsrpExtIfTrackedTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOHSRPEXTMIB::CHsrpExtIfTrackedTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cHsrpExtIfTrackedEntry")
        return true;
    return false;
}

CISCOHSRPEXTMIB::CHsrpExtIfTrackedTable::CHsrpExtIfTrackedEntry::CHsrpExtIfTrackedEntry()
    :
    ifindex{YType::str, "ifIndex"},
    chsrpgrpnumber{YType::str, "cHsrpGrpNumber"},
    chsrpextiftracked{YType::int32, "cHsrpExtIfTracked"},
    chsrpextiftrackedpriority{YType::uint32, "cHsrpExtIfTrackedPriority"},
    chsrpextiftrackedrowstatus{YType::enumeration, "cHsrpExtIfTrackedRowStatus"},
    chsrpextiftrackedipnone{YType::boolean, "cHsrpExtIfTrackedIpNone"}
{

    yang_name = "cHsrpExtIfTrackedEntry"; yang_parent_name = "cHsrpExtIfTrackedTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOHSRPEXTMIB::CHsrpExtIfTrackedTable::CHsrpExtIfTrackedEntry::~CHsrpExtIfTrackedEntry()
{
}

bool CISCOHSRPEXTMIB::CHsrpExtIfTrackedTable::CHsrpExtIfTrackedEntry::has_data() const
{
    if (is_presence_container) return true;
    return ifindex.is_set
	|| chsrpgrpnumber.is_set
	|| chsrpextiftracked.is_set
	|| chsrpextiftrackedpriority.is_set
	|| chsrpextiftrackedrowstatus.is_set
	|| chsrpextiftrackedipnone.is_set;
}

bool CISCOHSRPEXTMIB::CHsrpExtIfTrackedTable::CHsrpExtIfTrackedEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ifindex.yfilter)
	|| ydk::is_set(chsrpgrpnumber.yfilter)
	|| ydk::is_set(chsrpextiftracked.yfilter)
	|| ydk::is_set(chsrpextiftrackedpriority.yfilter)
	|| ydk::is_set(chsrpextiftrackedrowstatus.yfilter)
	|| ydk::is_set(chsrpextiftrackedipnone.yfilter);
}

std::string CISCOHSRPEXTMIB::CHsrpExtIfTrackedTable::CHsrpExtIfTrackedEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-HSRP-EXT-MIB:CISCO-HSRP-EXT-MIB/cHsrpExtIfTrackedTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOHSRPEXTMIB::CHsrpExtIfTrackedTable::CHsrpExtIfTrackedEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cHsrpExtIfTrackedEntry";
    ADD_KEY_TOKEN(ifindex, "ifIndex");
    ADD_KEY_TOKEN(chsrpgrpnumber, "cHsrpGrpNumber");
    ADD_KEY_TOKEN(chsrpextiftracked, "cHsrpExtIfTracked");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOHSRPEXTMIB::CHsrpExtIfTrackedTable::CHsrpExtIfTrackedEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (chsrpgrpnumber.is_set || is_set(chsrpgrpnumber.yfilter)) leaf_name_data.push_back(chsrpgrpnumber.get_name_leafdata());
    if (chsrpextiftracked.is_set || is_set(chsrpextiftracked.yfilter)) leaf_name_data.push_back(chsrpextiftracked.get_name_leafdata());
    if (chsrpextiftrackedpriority.is_set || is_set(chsrpextiftrackedpriority.yfilter)) leaf_name_data.push_back(chsrpextiftrackedpriority.get_name_leafdata());
    if (chsrpextiftrackedrowstatus.is_set || is_set(chsrpextiftrackedrowstatus.yfilter)) leaf_name_data.push_back(chsrpextiftrackedrowstatus.get_name_leafdata());
    if (chsrpextiftrackedipnone.is_set || is_set(chsrpextiftrackedipnone.yfilter)) leaf_name_data.push_back(chsrpextiftrackedipnone.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOHSRPEXTMIB::CHsrpExtIfTrackedTable::CHsrpExtIfTrackedEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOHSRPEXTMIB::CHsrpExtIfTrackedTable::CHsrpExtIfTrackedEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOHSRPEXTMIB::CHsrpExtIfTrackedTable::CHsrpExtIfTrackedEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
        ifindex.value_namespace = name_space;
        ifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cHsrpGrpNumber")
    {
        chsrpgrpnumber = value;
        chsrpgrpnumber.value_namespace = name_space;
        chsrpgrpnumber.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cHsrpExtIfTracked")
    {
        chsrpextiftracked = value;
        chsrpextiftracked.value_namespace = name_space;
        chsrpextiftracked.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cHsrpExtIfTrackedPriority")
    {
        chsrpextiftrackedpriority = value;
        chsrpextiftrackedpriority.value_namespace = name_space;
        chsrpextiftrackedpriority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cHsrpExtIfTrackedRowStatus")
    {
        chsrpextiftrackedrowstatus = value;
        chsrpextiftrackedrowstatus.value_namespace = name_space;
        chsrpextiftrackedrowstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cHsrpExtIfTrackedIpNone")
    {
        chsrpextiftrackedipnone = value;
        chsrpextiftrackedipnone.value_namespace = name_space;
        chsrpextiftrackedipnone.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOHSRPEXTMIB::CHsrpExtIfTrackedTable::CHsrpExtIfTrackedEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ifIndex")
    {
        ifindex.yfilter = yfilter;
    }
    if(value_path == "cHsrpGrpNumber")
    {
        chsrpgrpnumber.yfilter = yfilter;
    }
    if(value_path == "cHsrpExtIfTracked")
    {
        chsrpextiftracked.yfilter = yfilter;
    }
    if(value_path == "cHsrpExtIfTrackedPriority")
    {
        chsrpextiftrackedpriority.yfilter = yfilter;
    }
    if(value_path == "cHsrpExtIfTrackedRowStatus")
    {
        chsrpextiftrackedrowstatus.yfilter = yfilter;
    }
    if(value_path == "cHsrpExtIfTrackedIpNone")
    {
        chsrpextiftrackedipnone.yfilter = yfilter;
    }
}

bool CISCOHSRPEXTMIB::CHsrpExtIfTrackedTable::CHsrpExtIfTrackedEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifIndex" || name == "cHsrpGrpNumber" || name == "cHsrpExtIfTracked" || name == "cHsrpExtIfTrackedPriority" || name == "cHsrpExtIfTrackedRowStatus" || name == "cHsrpExtIfTrackedIpNone")
        return true;
    return false;
}

CISCOHSRPEXTMIB::CHsrpExtSecAddrTable::CHsrpExtSecAddrTable()
    :
    chsrpextsecaddrentry(this, {"ifindex", "chsrpgrpnumber", "chsrpextsecaddraddress"})
{

    yang_name = "cHsrpExtSecAddrTable"; yang_parent_name = "CISCO-HSRP-EXT-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOHSRPEXTMIB::CHsrpExtSecAddrTable::~CHsrpExtSecAddrTable()
{
}

bool CISCOHSRPEXTMIB::CHsrpExtSecAddrTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<chsrpextsecaddrentry.len(); index++)
    {
        if(chsrpextsecaddrentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOHSRPEXTMIB::CHsrpExtSecAddrTable::has_operation() const
{
    for (std::size_t index=0; index<chsrpextsecaddrentry.len(); index++)
    {
        if(chsrpextsecaddrentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOHSRPEXTMIB::CHsrpExtSecAddrTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-HSRP-EXT-MIB:CISCO-HSRP-EXT-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOHSRPEXTMIB::CHsrpExtSecAddrTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cHsrpExtSecAddrTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOHSRPEXTMIB::CHsrpExtSecAddrTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOHSRPEXTMIB::CHsrpExtSecAddrTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cHsrpExtSecAddrEntry")
    {
        auto c = std::make_shared<CISCOHSRPEXTMIB::CHsrpExtSecAddrTable::CHsrpExtSecAddrEntry>();
        c->parent = this;
        chsrpextsecaddrentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOHSRPEXTMIB::CHsrpExtSecAddrTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : chsrpextsecaddrentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCOHSRPEXTMIB::CHsrpExtSecAddrTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOHSRPEXTMIB::CHsrpExtSecAddrTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOHSRPEXTMIB::CHsrpExtSecAddrTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cHsrpExtSecAddrEntry")
        return true;
    return false;
}

CISCOHSRPEXTMIB::CHsrpExtSecAddrTable::CHsrpExtSecAddrEntry::CHsrpExtSecAddrEntry()
    :
    ifindex{YType::str, "ifIndex"},
    chsrpgrpnumber{YType::str, "cHsrpGrpNumber"},
    chsrpextsecaddraddress{YType::str, "cHsrpExtSecAddrAddress"},
    chsrpextsecaddrrowstatus{YType::enumeration, "cHsrpExtSecAddrRowStatus"}
{

    yang_name = "cHsrpExtSecAddrEntry"; yang_parent_name = "cHsrpExtSecAddrTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOHSRPEXTMIB::CHsrpExtSecAddrTable::CHsrpExtSecAddrEntry::~CHsrpExtSecAddrEntry()
{
}

bool CISCOHSRPEXTMIB::CHsrpExtSecAddrTable::CHsrpExtSecAddrEntry::has_data() const
{
    if (is_presence_container) return true;
    return ifindex.is_set
	|| chsrpgrpnumber.is_set
	|| chsrpextsecaddraddress.is_set
	|| chsrpextsecaddrrowstatus.is_set;
}

bool CISCOHSRPEXTMIB::CHsrpExtSecAddrTable::CHsrpExtSecAddrEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ifindex.yfilter)
	|| ydk::is_set(chsrpgrpnumber.yfilter)
	|| ydk::is_set(chsrpextsecaddraddress.yfilter)
	|| ydk::is_set(chsrpextsecaddrrowstatus.yfilter);
}

std::string CISCOHSRPEXTMIB::CHsrpExtSecAddrTable::CHsrpExtSecAddrEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-HSRP-EXT-MIB:CISCO-HSRP-EXT-MIB/cHsrpExtSecAddrTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOHSRPEXTMIB::CHsrpExtSecAddrTable::CHsrpExtSecAddrEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cHsrpExtSecAddrEntry";
    ADD_KEY_TOKEN(ifindex, "ifIndex");
    ADD_KEY_TOKEN(chsrpgrpnumber, "cHsrpGrpNumber");
    ADD_KEY_TOKEN(chsrpextsecaddraddress, "cHsrpExtSecAddrAddress");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOHSRPEXTMIB::CHsrpExtSecAddrTable::CHsrpExtSecAddrEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (chsrpgrpnumber.is_set || is_set(chsrpgrpnumber.yfilter)) leaf_name_data.push_back(chsrpgrpnumber.get_name_leafdata());
    if (chsrpextsecaddraddress.is_set || is_set(chsrpextsecaddraddress.yfilter)) leaf_name_data.push_back(chsrpextsecaddraddress.get_name_leafdata());
    if (chsrpextsecaddrrowstatus.is_set || is_set(chsrpextsecaddrrowstatus.yfilter)) leaf_name_data.push_back(chsrpextsecaddrrowstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOHSRPEXTMIB::CHsrpExtSecAddrTable::CHsrpExtSecAddrEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOHSRPEXTMIB::CHsrpExtSecAddrTable::CHsrpExtSecAddrEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOHSRPEXTMIB::CHsrpExtSecAddrTable::CHsrpExtSecAddrEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
        ifindex.value_namespace = name_space;
        ifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cHsrpGrpNumber")
    {
        chsrpgrpnumber = value;
        chsrpgrpnumber.value_namespace = name_space;
        chsrpgrpnumber.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cHsrpExtSecAddrAddress")
    {
        chsrpextsecaddraddress = value;
        chsrpextsecaddraddress.value_namespace = name_space;
        chsrpextsecaddraddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cHsrpExtSecAddrRowStatus")
    {
        chsrpextsecaddrrowstatus = value;
        chsrpextsecaddrrowstatus.value_namespace = name_space;
        chsrpextsecaddrrowstatus.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOHSRPEXTMIB::CHsrpExtSecAddrTable::CHsrpExtSecAddrEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ifIndex")
    {
        ifindex.yfilter = yfilter;
    }
    if(value_path == "cHsrpGrpNumber")
    {
        chsrpgrpnumber.yfilter = yfilter;
    }
    if(value_path == "cHsrpExtSecAddrAddress")
    {
        chsrpextsecaddraddress.yfilter = yfilter;
    }
    if(value_path == "cHsrpExtSecAddrRowStatus")
    {
        chsrpextsecaddrrowstatus.yfilter = yfilter;
    }
}

bool CISCOHSRPEXTMIB::CHsrpExtSecAddrTable::CHsrpExtSecAddrEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifIndex" || name == "cHsrpGrpNumber" || name == "cHsrpExtSecAddrAddress" || name == "cHsrpExtSecAddrRowStatus")
        return true;
    return false;
}

CISCOHSRPEXTMIB::CHsrpExtIfStandbyTable::CHsrpExtIfStandbyTable()
    :
    chsrpextifstandbyentry(this, {"ifindex", "chsrpgrpnumber", "chsrpextifstandbyindex"})
{

    yang_name = "cHsrpExtIfStandbyTable"; yang_parent_name = "CISCO-HSRP-EXT-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOHSRPEXTMIB::CHsrpExtIfStandbyTable::~CHsrpExtIfStandbyTable()
{
}

bool CISCOHSRPEXTMIB::CHsrpExtIfStandbyTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<chsrpextifstandbyentry.len(); index++)
    {
        if(chsrpextifstandbyentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOHSRPEXTMIB::CHsrpExtIfStandbyTable::has_operation() const
{
    for (std::size_t index=0; index<chsrpextifstandbyentry.len(); index++)
    {
        if(chsrpextifstandbyentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOHSRPEXTMIB::CHsrpExtIfStandbyTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-HSRP-EXT-MIB:CISCO-HSRP-EXT-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOHSRPEXTMIB::CHsrpExtIfStandbyTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cHsrpExtIfStandbyTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOHSRPEXTMIB::CHsrpExtIfStandbyTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOHSRPEXTMIB::CHsrpExtIfStandbyTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cHsrpExtIfStandbyEntry")
    {
        auto c = std::make_shared<CISCOHSRPEXTMIB::CHsrpExtIfStandbyTable::CHsrpExtIfStandbyEntry>();
        c->parent = this;
        chsrpextifstandbyentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOHSRPEXTMIB::CHsrpExtIfStandbyTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : chsrpextifstandbyentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCOHSRPEXTMIB::CHsrpExtIfStandbyTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOHSRPEXTMIB::CHsrpExtIfStandbyTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOHSRPEXTMIB::CHsrpExtIfStandbyTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cHsrpExtIfStandbyEntry")
        return true;
    return false;
}

CISCOHSRPEXTMIB::CHsrpExtIfStandbyTable::CHsrpExtIfStandbyEntry::CHsrpExtIfStandbyEntry()
    :
    ifindex{YType::str, "ifIndex"},
    chsrpgrpnumber{YType::str, "cHsrpGrpNumber"},
    chsrpextifstandbyindex{YType::uint32, "cHsrpExtIfStandbyIndex"},
    chsrpextifstandbydestaddrtype{YType::enumeration, "cHsrpExtIfStandbyDestAddrType"},
    chsrpextifstandbydestaddr{YType::str, "cHsrpExtIfStandbyDestAddr"},
    chsrpextifstandbysourceaddrtype{YType::enumeration, "cHsrpExtIfStandbySourceAddrType"},
    chsrpextifstandbysourceaddr{YType::str, "cHsrpExtIfStandbySourceAddr"},
    chsrpextifstandbyrowstatus{YType::enumeration, "cHsrpExtIfStandbyRowStatus"}
{

    yang_name = "cHsrpExtIfStandbyEntry"; yang_parent_name = "cHsrpExtIfStandbyTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOHSRPEXTMIB::CHsrpExtIfStandbyTable::CHsrpExtIfStandbyEntry::~CHsrpExtIfStandbyEntry()
{
}

bool CISCOHSRPEXTMIB::CHsrpExtIfStandbyTable::CHsrpExtIfStandbyEntry::has_data() const
{
    if (is_presence_container) return true;
    return ifindex.is_set
	|| chsrpgrpnumber.is_set
	|| chsrpextifstandbyindex.is_set
	|| chsrpextifstandbydestaddrtype.is_set
	|| chsrpextifstandbydestaddr.is_set
	|| chsrpextifstandbysourceaddrtype.is_set
	|| chsrpextifstandbysourceaddr.is_set
	|| chsrpextifstandbyrowstatus.is_set;
}

bool CISCOHSRPEXTMIB::CHsrpExtIfStandbyTable::CHsrpExtIfStandbyEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ifindex.yfilter)
	|| ydk::is_set(chsrpgrpnumber.yfilter)
	|| ydk::is_set(chsrpextifstandbyindex.yfilter)
	|| ydk::is_set(chsrpextifstandbydestaddrtype.yfilter)
	|| ydk::is_set(chsrpextifstandbydestaddr.yfilter)
	|| ydk::is_set(chsrpextifstandbysourceaddrtype.yfilter)
	|| ydk::is_set(chsrpextifstandbysourceaddr.yfilter)
	|| ydk::is_set(chsrpextifstandbyrowstatus.yfilter);
}

std::string CISCOHSRPEXTMIB::CHsrpExtIfStandbyTable::CHsrpExtIfStandbyEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-HSRP-EXT-MIB:CISCO-HSRP-EXT-MIB/cHsrpExtIfStandbyTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOHSRPEXTMIB::CHsrpExtIfStandbyTable::CHsrpExtIfStandbyEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cHsrpExtIfStandbyEntry";
    ADD_KEY_TOKEN(ifindex, "ifIndex");
    ADD_KEY_TOKEN(chsrpgrpnumber, "cHsrpGrpNumber");
    ADD_KEY_TOKEN(chsrpextifstandbyindex, "cHsrpExtIfStandbyIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOHSRPEXTMIB::CHsrpExtIfStandbyTable::CHsrpExtIfStandbyEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (chsrpgrpnumber.is_set || is_set(chsrpgrpnumber.yfilter)) leaf_name_data.push_back(chsrpgrpnumber.get_name_leafdata());
    if (chsrpextifstandbyindex.is_set || is_set(chsrpextifstandbyindex.yfilter)) leaf_name_data.push_back(chsrpextifstandbyindex.get_name_leafdata());
    if (chsrpextifstandbydestaddrtype.is_set || is_set(chsrpextifstandbydestaddrtype.yfilter)) leaf_name_data.push_back(chsrpextifstandbydestaddrtype.get_name_leafdata());
    if (chsrpextifstandbydestaddr.is_set || is_set(chsrpextifstandbydestaddr.yfilter)) leaf_name_data.push_back(chsrpextifstandbydestaddr.get_name_leafdata());
    if (chsrpextifstandbysourceaddrtype.is_set || is_set(chsrpextifstandbysourceaddrtype.yfilter)) leaf_name_data.push_back(chsrpextifstandbysourceaddrtype.get_name_leafdata());
    if (chsrpextifstandbysourceaddr.is_set || is_set(chsrpextifstandbysourceaddr.yfilter)) leaf_name_data.push_back(chsrpextifstandbysourceaddr.get_name_leafdata());
    if (chsrpextifstandbyrowstatus.is_set || is_set(chsrpextifstandbyrowstatus.yfilter)) leaf_name_data.push_back(chsrpextifstandbyrowstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOHSRPEXTMIB::CHsrpExtIfStandbyTable::CHsrpExtIfStandbyEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOHSRPEXTMIB::CHsrpExtIfStandbyTable::CHsrpExtIfStandbyEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOHSRPEXTMIB::CHsrpExtIfStandbyTable::CHsrpExtIfStandbyEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
        ifindex.value_namespace = name_space;
        ifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cHsrpGrpNumber")
    {
        chsrpgrpnumber = value;
        chsrpgrpnumber.value_namespace = name_space;
        chsrpgrpnumber.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cHsrpExtIfStandbyIndex")
    {
        chsrpextifstandbyindex = value;
        chsrpextifstandbyindex.value_namespace = name_space;
        chsrpextifstandbyindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cHsrpExtIfStandbyDestAddrType")
    {
        chsrpextifstandbydestaddrtype = value;
        chsrpextifstandbydestaddrtype.value_namespace = name_space;
        chsrpextifstandbydestaddrtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cHsrpExtIfStandbyDestAddr")
    {
        chsrpextifstandbydestaddr = value;
        chsrpextifstandbydestaddr.value_namespace = name_space;
        chsrpextifstandbydestaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cHsrpExtIfStandbySourceAddrType")
    {
        chsrpextifstandbysourceaddrtype = value;
        chsrpextifstandbysourceaddrtype.value_namespace = name_space;
        chsrpextifstandbysourceaddrtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cHsrpExtIfStandbySourceAddr")
    {
        chsrpextifstandbysourceaddr = value;
        chsrpextifstandbysourceaddr.value_namespace = name_space;
        chsrpextifstandbysourceaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cHsrpExtIfStandbyRowStatus")
    {
        chsrpextifstandbyrowstatus = value;
        chsrpextifstandbyrowstatus.value_namespace = name_space;
        chsrpextifstandbyrowstatus.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOHSRPEXTMIB::CHsrpExtIfStandbyTable::CHsrpExtIfStandbyEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ifIndex")
    {
        ifindex.yfilter = yfilter;
    }
    if(value_path == "cHsrpGrpNumber")
    {
        chsrpgrpnumber.yfilter = yfilter;
    }
    if(value_path == "cHsrpExtIfStandbyIndex")
    {
        chsrpextifstandbyindex.yfilter = yfilter;
    }
    if(value_path == "cHsrpExtIfStandbyDestAddrType")
    {
        chsrpextifstandbydestaddrtype.yfilter = yfilter;
    }
    if(value_path == "cHsrpExtIfStandbyDestAddr")
    {
        chsrpextifstandbydestaddr.yfilter = yfilter;
    }
    if(value_path == "cHsrpExtIfStandbySourceAddrType")
    {
        chsrpextifstandbysourceaddrtype.yfilter = yfilter;
    }
    if(value_path == "cHsrpExtIfStandbySourceAddr")
    {
        chsrpextifstandbysourceaddr.yfilter = yfilter;
    }
    if(value_path == "cHsrpExtIfStandbyRowStatus")
    {
        chsrpextifstandbyrowstatus.yfilter = yfilter;
    }
}

bool CISCOHSRPEXTMIB::CHsrpExtIfStandbyTable::CHsrpExtIfStandbyEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifIndex" || name == "cHsrpGrpNumber" || name == "cHsrpExtIfStandbyIndex" || name == "cHsrpExtIfStandbyDestAddrType" || name == "cHsrpExtIfStandbyDestAddr" || name == "cHsrpExtIfStandbySourceAddrType" || name == "cHsrpExtIfStandbySourceAddr" || name == "cHsrpExtIfStandbyRowStatus")
        return true;
    return false;
}

CISCOHSRPEXTMIB::CHsrpExtIfTable::CHsrpExtIfTable()
    :
    chsrpextifentry(this, {"ifindex"})
{

    yang_name = "cHsrpExtIfTable"; yang_parent_name = "CISCO-HSRP-EXT-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOHSRPEXTMIB::CHsrpExtIfTable::~CHsrpExtIfTable()
{
}

bool CISCOHSRPEXTMIB::CHsrpExtIfTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<chsrpextifentry.len(); index++)
    {
        if(chsrpextifentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOHSRPEXTMIB::CHsrpExtIfTable::has_operation() const
{
    for (std::size_t index=0; index<chsrpextifentry.len(); index++)
    {
        if(chsrpextifentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOHSRPEXTMIB::CHsrpExtIfTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-HSRP-EXT-MIB:CISCO-HSRP-EXT-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOHSRPEXTMIB::CHsrpExtIfTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cHsrpExtIfTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOHSRPEXTMIB::CHsrpExtIfTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOHSRPEXTMIB::CHsrpExtIfTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cHsrpExtIfEntry")
    {
        auto c = std::make_shared<CISCOHSRPEXTMIB::CHsrpExtIfTable::CHsrpExtIfEntry>();
        c->parent = this;
        chsrpextifentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOHSRPEXTMIB::CHsrpExtIfTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : chsrpextifentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCOHSRPEXTMIB::CHsrpExtIfTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOHSRPEXTMIB::CHsrpExtIfTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOHSRPEXTMIB::CHsrpExtIfTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cHsrpExtIfEntry")
        return true;
    return false;
}

CISCOHSRPEXTMIB::CHsrpExtIfTable::CHsrpExtIfEntry::CHsrpExtIfEntry()
    :
    ifindex{YType::str, "ifIndex"},
    chsrpextifusebia{YType::boolean, "cHsrpExtIfUseBIA"},
    chsrpextifrowstatus{YType::enumeration, "cHsrpExtIfRowStatus"}
{

    yang_name = "cHsrpExtIfEntry"; yang_parent_name = "cHsrpExtIfTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOHSRPEXTMIB::CHsrpExtIfTable::CHsrpExtIfEntry::~CHsrpExtIfEntry()
{
}

bool CISCOHSRPEXTMIB::CHsrpExtIfTable::CHsrpExtIfEntry::has_data() const
{
    if (is_presence_container) return true;
    return ifindex.is_set
	|| chsrpextifusebia.is_set
	|| chsrpextifrowstatus.is_set;
}

bool CISCOHSRPEXTMIB::CHsrpExtIfTable::CHsrpExtIfEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ifindex.yfilter)
	|| ydk::is_set(chsrpextifusebia.yfilter)
	|| ydk::is_set(chsrpextifrowstatus.yfilter);
}

std::string CISCOHSRPEXTMIB::CHsrpExtIfTable::CHsrpExtIfEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-HSRP-EXT-MIB:CISCO-HSRP-EXT-MIB/cHsrpExtIfTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOHSRPEXTMIB::CHsrpExtIfTable::CHsrpExtIfEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cHsrpExtIfEntry";
    ADD_KEY_TOKEN(ifindex, "ifIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOHSRPEXTMIB::CHsrpExtIfTable::CHsrpExtIfEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (chsrpextifusebia.is_set || is_set(chsrpextifusebia.yfilter)) leaf_name_data.push_back(chsrpextifusebia.get_name_leafdata());
    if (chsrpextifrowstatus.is_set || is_set(chsrpextifrowstatus.yfilter)) leaf_name_data.push_back(chsrpextifrowstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOHSRPEXTMIB::CHsrpExtIfTable::CHsrpExtIfEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOHSRPEXTMIB::CHsrpExtIfTable::CHsrpExtIfEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOHSRPEXTMIB::CHsrpExtIfTable::CHsrpExtIfEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
        ifindex.value_namespace = name_space;
        ifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cHsrpExtIfUseBIA")
    {
        chsrpextifusebia = value;
        chsrpextifusebia.value_namespace = name_space;
        chsrpextifusebia.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cHsrpExtIfRowStatus")
    {
        chsrpextifrowstatus = value;
        chsrpextifrowstatus.value_namespace = name_space;
        chsrpextifrowstatus.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOHSRPEXTMIB::CHsrpExtIfTable::CHsrpExtIfEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ifIndex")
    {
        ifindex.yfilter = yfilter;
    }
    if(value_path == "cHsrpExtIfUseBIA")
    {
        chsrpextifusebia.yfilter = yfilter;
    }
    if(value_path == "cHsrpExtIfRowStatus")
    {
        chsrpextifrowstatus.yfilter = yfilter;
    }
}

bool CISCOHSRPEXTMIB::CHsrpExtIfTable::CHsrpExtIfEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifIndex" || name == "cHsrpExtIfUseBIA" || name == "cHsrpExtIfRowStatus")
        return true;
    return false;
}


}
}

