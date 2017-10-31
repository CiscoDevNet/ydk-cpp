
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
    chsrpextiftrackedtable(std::make_shared<CISCOHSRPEXTMIB::Chsrpextiftrackedtable>())
	,chsrpextsecaddrtable(std::make_shared<CISCOHSRPEXTMIB::Chsrpextsecaddrtable>())
	,chsrpextifstandbytable(std::make_shared<CISCOHSRPEXTMIB::Chsrpextifstandbytable>())
	,chsrpextiftable(std::make_shared<CISCOHSRPEXTMIB::Chsrpextiftable>())
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
            chsrpextiftrackedtable = std::make_shared<CISCOHSRPEXTMIB::Chsrpextiftrackedtable>();
        }
        return chsrpextiftrackedtable;
    }

    if(child_yang_name == "cHsrpExtSecAddrTable")
    {
        if(chsrpextsecaddrtable == nullptr)
        {
            chsrpextsecaddrtable = std::make_shared<CISCOHSRPEXTMIB::Chsrpextsecaddrtable>();
        }
        return chsrpextsecaddrtable;
    }

    if(child_yang_name == "cHsrpExtIfStandbyTable")
    {
        if(chsrpextifstandbytable == nullptr)
        {
            chsrpextifstandbytable = std::make_shared<CISCOHSRPEXTMIB::Chsrpextifstandbytable>();
        }
        return chsrpextifstandbytable;
    }

    if(child_yang_name == "cHsrpExtIfTable")
    {
        if(chsrpextiftable == nullptr)
        {
            chsrpextiftable = std::make_shared<CISCOHSRPEXTMIB::Chsrpextiftable>();
        }
        return chsrpextiftable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOHSRPEXTMIB::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
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

CISCOHSRPEXTMIB::Chsrpextiftrackedtable::Chsrpextiftrackedtable()
{

    yang_name = "cHsrpExtIfTrackedTable"; yang_parent_name = "CISCO-HSRP-EXT-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOHSRPEXTMIB::Chsrpextiftrackedtable::~Chsrpextiftrackedtable()
{
}

bool CISCOHSRPEXTMIB::Chsrpextiftrackedtable::has_data() const
{
    for (std::size_t index=0; index<chsrpextiftrackedentry.size(); index++)
    {
        if(chsrpextiftrackedentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOHSRPEXTMIB::Chsrpextiftrackedtable::has_operation() const
{
    for (std::size_t index=0; index<chsrpextiftrackedentry.size(); index++)
    {
        if(chsrpextiftrackedentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOHSRPEXTMIB::Chsrpextiftrackedtable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-HSRP-EXT-MIB:CISCO-HSRP-EXT-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOHSRPEXTMIB::Chsrpextiftrackedtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cHsrpExtIfTrackedTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOHSRPEXTMIB::Chsrpextiftrackedtable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOHSRPEXTMIB::Chsrpextiftrackedtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cHsrpExtIfTrackedEntry")
    {
        for(auto const & c : chsrpextiftrackedentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CISCOHSRPEXTMIB::Chsrpextiftrackedtable::Chsrpextiftrackedentry>();
        c->parent = this;
        chsrpextiftrackedentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOHSRPEXTMIB::Chsrpextiftrackedtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : chsrpextiftrackedentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CISCOHSRPEXTMIB::Chsrpextiftrackedtable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOHSRPEXTMIB::Chsrpextiftrackedtable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOHSRPEXTMIB::Chsrpextiftrackedtable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cHsrpExtIfTrackedEntry")
        return true;
    return false;
}

CISCOHSRPEXTMIB::Chsrpextiftrackedtable::Chsrpextiftrackedentry::Chsrpextiftrackedentry()
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

CISCOHSRPEXTMIB::Chsrpextiftrackedtable::Chsrpextiftrackedentry::~Chsrpextiftrackedentry()
{
}

bool CISCOHSRPEXTMIB::Chsrpextiftrackedtable::Chsrpextiftrackedentry::has_data() const
{
    return ifindex.is_set
	|| chsrpgrpnumber.is_set
	|| chsrpextiftracked.is_set
	|| chsrpextiftrackedpriority.is_set
	|| chsrpextiftrackedrowstatus.is_set
	|| chsrpextiftrackedipnone.is_set;
}

bool CISCOHSRPEXTMIB::Chsrpextiftrackedtable::Chsrpextiftrackedentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ifindex.yfilter)
	|| ydk::is_set(chsrpgrpnumber.yfilter)
	|| ydk::is_set(chsrpextiftracked.yfilter)
	|| ydk::is_set(chsrpextiftrackedpriority.yfilter)
	|| ydk::is_set(chsrpextiftrackedrowstatus.yfilter)
	|| ydk::is_set(chsrpextiftrackedipnone.yfilter);
}

std::string CISCOHSRPEXTMIB::Chsrpextiftrackedtable::Chsrpextiftrackedentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-HSRP-EXT-MIB:CISCO-HSRP-EXT-MIB/cHsrpExtIfTrackedTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOHSRPEXTMIB::Chsrpextiftrackedtable::Chsrpextiftrackedentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cHsrpExtIfTrackedEntry" <<"[ifIndex='" <<ifindex <<"']" <<"[cHsrpGrpNumber='" <<chsrpgrpnumber <<"']" <<"[cHsrpExtIfTracked='" <<chsrpextiftracked <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOHSRPEXTMIB::Chsrpextiftrackedtable::Chsrpextiftrackedentry::get_name_leaf_data() const
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

std::shared_ptr<Entity> CISCOHSRPEXTMIB::Chsrpextiftrackedtable::Chsrpextiftrackedentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOHSRPEXTMIB::Chsrpextiftrackedtable::Chsrpextiftrackedentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CISCOHSRPEXTMIB::Chsrpextiftrackedtable::Chsrpextiftrackedentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void CISCOHSRPEXTMIB::Chsrpextiftrackedtable::Chsrpextiftrackedentry::set_filter(const std::string & value_path, YFilter yfilter)
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

bool CISCOHSRPEXTMIB::Chsrpextiftrackedtable::Chsrpextiftrackedentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifIndex" || name == "cHsrpGrpNumber" || name == "cHsrpExtIfTracked" || name == "cHsrpExtIfTrackedPriority" || name == "cHsrpExtIfTrackedRowStatus" || name == "cHsrpExtIfTrackedIpNone")
        return true;
    return false;
}

CISCOHSRPEXTMIB::Chsrpextsecaddrtable::Chsrpextsecaddrtable()
{

    yang_name = "cHsrpExtSecAddrTable"; yang_parent_name = "CISCO-HSRP-EXT-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOHSRPEXTMIB::Chsrpextsecaddrtable::~Chsrpextsecaddrtable()
{
}

bool CISCOHSRPEXTMIB::Chsrpextsecaddrtable::has_data() const
{
    for (std::size_t index=0; index<chsrpextsecaddrentry.size(); index++)
    {
        if(chsrpextsecaddrentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOHSRPEXTMIB::Chsrpextsecaddrtable::has_operation() const
{
    for (std::size_t index=0; index<chsrpextsecaddrentry.size(); index++)
    {
        if(chsrpextsecaddrentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOHSRPEXTMIB::Chsrpextsecaddrtable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-HSRP-EXT-MIB:CISCO-HSRP-EXT-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOHSRPEXTMIB::Chsrpextsecaddrtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cHsrpExtSecAddrTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOHSRPEXTMIB::Chsrpextsecaddrtable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOHSRPEXTMIB::Chsrpextsecaddrtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cHsrpExtSecAddrEntry")
    {
        for(auto const & c : chsrpextsecaddrentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CISCOHSRPEXTMIB::Chsrpextsecaddrtable::Chsrpextsecaddrentry>();
        c->parent = this;
        chsrpextsecaddrentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOHSRPEXTMIB::Chsrpextsecaddrtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : chsrpextsecaddrentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CISCOHSRPEXTMIB::Chsrpextsecaddrtable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOHSRPEXTMIB::Chsrpextsecaddrtable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOHSRPEXTMIB::Chsrpextsecaddrtable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cHsrpExtSecAddrEntry")
        return true;
    return false;
}

CISCOHSRPEXTMIB::Chsrpextsecaddrtable::Chsrpextsecaddrentry::Chsrpextsecaddrentry()
    :
    ifindex{YType::str, "ifIndex"},
    chsrpgrpnumber{YType::str, "cHsrpGrpNumber"},
    chsrpextsecaddraddress{YType::str, "cHsrpExtSecAddrAddress"},
    chsrpextsecaddrrowstatus{YType::enumeration, "cHsrpExtSecAddrRowStatus"}
{

    yang_name = "cHsrpExtSecAddrEntry"; yang_parent_name = "cHsrpExtSecAddrTable"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOHSRPEXTMIB::Chsrpextsecaddrtable::Chsrpextsecaddrentry::~Chsrpextsecaddrentry()
{
}

bool CISCOHSRPEXTMIB::Chsrpextsecaddrtable::Chsrpextsecaddrentry::has_data() const
{
    return ifindex.is_set
	|| chsrpgrpnumber.is_set
	|| chsrpextsecaddraddress.is_set
	|| chsrpextsecaddrrowstatus.is_set;
}

bool CISCOHSRPEXTMIB::Chsrpextsecaddrtable::Chsrpextsecaddrentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ifindex.yfilter)
	|| ydk::is_set(chsrpgrpnumber.yfilter)
	|| ydk::is_set(chsrpextsecaddraddress.yfilter)
	|| ydk::is_set(chsrpextsecaddrrowstatus.yfilter);
}

std::string CISCOHSRPEXTMIB::Chsrpextsecaddrtable::Chsrpextsecaddrentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-HSRP-EXT-MIB:CISCO-HSRP-EXT-MIB/cHsrpExtSecAddrTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOHSRPEXTMIB::Chsrpextsecaddrtable::Chsrpextsecaddrentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cHsrpExtSecAddrEntry" <<"[ifIndex='" <<ifindex <<"']" <<"[cHsrpGrpNumber='" <<chsrpgrpnumber <<"']" <<"[cHsrpExtSecAddrAddress='" <<chsrpextsecaddraddress <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOHSRPEXTMIB::Chsrpextsecaddrtable::Chsrpextsecaddrentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (chsrpgrpnumber.is_set || is_set(chsrpgrpnumber.yfilter)) leaf_name_data.push_back(chsrpgrpnumber.get_name_leafdata());
    if (chsrpextsecaddraddress.is_set || is_set(chsrpextsecaddraddress.yfilter)) leaf_name_data.push_back(chsrpextsecaddraddress.get_name_leafdata());
    if (chsrpextsecaddrrowstatus.is_set || is_set(chsrpextsecaddrrowstatus.yfilter)) leaf_name_data.push_back(chsrpextsecaddrrowstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOHSRPEXTMIB::Chsrpextsecaddrtable::Chsrpextsecaddrentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOHSRPEXTMIB::Chsrpextsecaddrtable::Chsrpextsecaddrentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CISCOHSRPEXTMIB::Chsrpextsecaddrtable::Chsrpextsecaddrentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void CISCOHSRPEXTMIB::Chsrpextsecaddrtable::Chsrpextsecaddrentry::set_filter(const std::string & value_path, YFilter yfilter)
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

bool CISCOHSRPEXTMIB::Chsrpextsecaddrtable::Chsrpextsecaddrentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifIndex" || name == "cHsrpGrpNumber" || name == "cHsrpExtSecAddrAddress" || name == "cHsrpExtSecAddrRowStatus")
        return true;
    return false;
}

CISCOHSRPEXTMIB::Chsrpextifstandbytable::Chsrpextifstandbytable()
{

    yang_name = "cHsrpExtIfStandbyTable"; yang_parent_name = "CISCO-HSRP-EXT-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOHSRPEXTMIB::Chsrpextifstandbytable::~Chsrpextifstandbytable()
{
}

bool CISCOHSRPEXTMIB::Chsrpextifstandbytable::has_data() const
{
    for (std::size_t index=0; index<chsrpextifstandbyentry.size(); index++)
    {
        if(chsrpextifstandbyentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOHSRPEXTMIB::Chsrpextifstandbytable::has_operation() const
{
    for (std::size_t index=0; index<chsrpextifstandbyentry.size(); index++)
    {
        if(chsrpextifstandbyentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOHSRPEXTMIB::Chsrpextifstandbytable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-HSRP-EXT-MIB:CISCO-HSRP-EXT-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOHSRPEXTMIB::Chsrpextifstandbytable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cHsrpExtIfStandbyTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOHSRPEXTMIB::Chsrpextifstandbytable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOHSRPEXTMIB::Chsrpextifstandbytable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cHsrpExtIfStandbyEntry")
    {
        for(auto const & c : chsrpextifstandbyentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CISCOHSRPEXTMIB::Chsrpextifstandbytable::Chsrpextifstandbyentry>();
        c->parent = this;
        chsrpextifstandbyentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOHSRPEXTMIB::Chsrpextifstandbytable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : chsrpextifstandbyentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CISCOHSRPEXTMIB::Chsrpextifstandbytable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOHSRPEXTMIB::Chsrpextifstandbytable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOHSRPEXTMIB::Chsrpextifstandbytable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cHsrpExtIfStandbyEntry")
        return true;
    return false;
}

CISCOHSRPEXTMIB::Chsrpextifstandbytable::Chsrpextifstandbyentry::Chsrpextifstandbyentry()
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

CISCOHSRPEXTMIB::Chsrpextifstandbytable::Chsrpextifstandbyentry::~Chsrpextifstandbyentry()
{
}

bool CISCOHSRPEXTMIB::Chsrpextifstandbytable::Chsrpextifstandbyentry::has_data() const
{
    return ifindex.is_set
	|| chsrpgrpnumber.is_set
	|| chsrpextifstandbyindex.is_set
	|| chsrpextifstandbydestaddrtype.is_set
	|| chsrpextifstandbydestaddr.is_set
	|| chsrpextifstandbysourceaddrtype.is_set
	|| chsrpextifstandbysourceaddr.is_set
	|| chsrpextifstandbyrowstatus.is_set;
}

bool CISCOHSRPEXTMIB::Chsrpextifstandbytable::Chsrpextifstandbyentry::has_operation() const
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

std::string CISCOHSRPEXTMIB::Chsrpextifstandbytable::Chsrpextifstandbyentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-HSRP-EXT-MIB:CISCO-HSRP-EXT-MIB/cHsrpExtIfStandbyTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOHSRPEXTMIB::Chsrpextifstandbytable::Chsrpextifstandbyentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cHsrpExtIfStandbyEntry" <<"[ifIndex='" <<ifindex <<"']" <<"[cHsrpGrpNumber='" <<chsrpgrpnumber <<"']" <<"[cHsrpExtIfStandbyIndex='" <<chsrpextifstandbyindex <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOHSRPEXTMIB::Chsrpextifstandbytable::Chsrpextifstandbyentry::get_name_leaf_data() const
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

std::shared_ptr<Entity> CISCOHSRPEXTMIB::Chsrpextifstandbytable::Chsrpextifstandbyentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOHSRPEXTMIB::Chsrpextifstandbytable::Chsrpextifstandbyentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CISCOHSRPEXTMIB::Chsrpextifstandbytable::Chsrpextifstandbyentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void CISCOHSRPEXTMIB::Chsrpextifstandbytable::Chsrpextifstandbyentry::set_filter(const std::string & value_path, YFilter yfilter)
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

bool CISCOHSRPEXTMIB::Chsrpextifstandbytable::Chsrpextifstandbyentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifIndex" || name == "cHsrpGrpNumber" || name == "cHsrpExtIfStandbyIndex" || name == "cHsrpExtIfStandbyDestAddrType" || name == "cHsrpExtIfStandbyDestAddr" || name == "cHsrpExtIfStandbySourceAddrType" || name == "cHsrpExtIfStandbySourceAddr" || name == "cHsrpExtIfStandbyRowStatus")
        return true;
    return false;
}

CISCOHSRPEXTMIB::Chsrpextiftable::Chsrpextiftable()
{

    yang_name = "cHsrpExtIfTable"; yang_parent_name = "CISCO-HSRP-EXT-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOHSRPEXTMIB::Chsrpextiftable::~Chsrpextiftable()
{
}

bool CISCOHSRPEXTMIB::Chsrpextiftable::has_data() const
{
    for (std::size_t index=0; index<chsrpextifentry.size(); index++)
    {
        if(chsrpextifentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOHSRPEXTMIB::Chsrpextiftable::has_operation() const
{
    for (std::size_t index=0; index<chsrpextifentry.size(); index++)
    {
        if(chsrpextifentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOHSRPEXTMIB::Chsrpextiftable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-HSRP-EXT-MIB:CISCO-HSRP-EXT-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOHSRPEXTMIB::Chsrpextiftable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cHsrpExtIfTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOHSRPEXTMIB::Chsrpextiftable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOHSRPEXTMIB::Chsrpextiftable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cHsrpExtIfEntry")
    {
        for(auto const & c : chsrpextifentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CISCOHSRPEXTMIB::Chsrpextiftable::Chsrpextifentry>();
        c->parent = this;
        chsrpextifentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOHSRPEXTMIB::Chsrpextiftable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : chsrpextifentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CISCOHSRPEXTMIB::Chsrpextiftable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOHSRPEXTMIB::Chsrpextiftable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOHSRPEXTMIB::Chsrpextiftable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cHsrpExtIfEntry")
        return true;
    return false;
}

CISCOHSRPEXTMIB::Chsrpextiftable::Chsrpextifentry::Chsrpextifentry()
    :
    ifindex{YType::str, "ifIndex"},
    chsrpextifusebia{YType::boolean, "cHsrpExtIfUseBIA"},
    chsrpextifrowstatus{YType::enumeration, "cHsrpExtIfRowStatus"}
{

    yang_name = "cHsrpExtIfEntry"; yang_parent_name = "cHsrpExtIfTable"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOHSRPEXTMIB::Chsrpextiftable::Chsrpextifentry::~Chsrpextifentry()
{
}

bool CISCOHSRPEXTMIB::Chsrpextiftable::Chsrpextifentry::has_data() const
{
    return ifindex.is_set
	|| chsrpextifusebia.is_set
	|| chsrpextifrowstatus.is_set;
}

bool CISCOHSRPEXTMIB::Chsrpextiftable::Chsrpextifentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ifindex.yfilter)
	|| ydk::is_set(chsrpextifusebia.yfilter)
	|| ydk::is_set(chsrpextifrowstatus.yfilter);
}

std::string CISCOHSRPEXTMIB::Chsrpextiftable::Chsrpextifentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-HSRP-EXT-MIB:CISCO-HSRP-EXT-MIB/cHsrpExtIfTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOHSRPEXTMIB::Chsrpextiftable::Chsrpextifentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cHsrpExtIfEntry" <<"[ifIndex='" <<ifindex <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOHSRPEXTMIB::Chsrpextiftable::Chsrpextifentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (chsrpextifusebia.is_set || is_set(chsrpextifusebia.yfilter)) leaf_name_data.push_back(chsrpextifusebia.get_name_leafdata());
    if (chsrpextifrowstatus.is_set || is_set(chsrpextifrowstatus.yfilter)) leaf_name_data.push_back(chsrpextifrowstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOHSRPEXTMIB::Chsrpextiftable::Chsrpextifentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOHSRPEXTMIB::Chsrpextiftable::Chsrpextifentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CISCOHSRPEXTMIB::Chsrpextiftable::Chsrpextifentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void CISCOHSRPEXTMIB::Chsrpextiftable::Chsrpextifentry::set_filter(const std::string & value_path, YFilter yfilter)
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

bool CISCOHSRPEXTMIB::Chsrpextiftable::Chsrpextifentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifIndex" || name == "cHsrpExtIfUseBIA" || name == "cHsrpExtIfRowStatus")
        return true;
    return false;
}


}
}

