
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "CISCO_HSRP_EXT_MIB.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace CISCO_HSRP_EXT_MIB {

CiscoHsrpExtMib::CiscoHsrpExtMib()
    :
    chsrpextifstandbytable(std::make_shared<CiscoHsrpExtMib::Chsrpextifstandbytable>())
	,chsrpextiftable(std::make_shared<CiscoHsrpExtMib::Chsrpextiftable>())
	,chsrpextiftrackedtable(std::make_shared<CiscoHsrpExtMib::Chsrpextiftrackedtable>())
	,chsrpextsecaddrtable(std::make_shared<CiscoHsrpExtMib::Chsrpextsecaddrtable>())
{
    chsrpextifstandbytable->parent = this;

    chsrpextiftable->parent = this;

    chsrpextiftrackedtable->parent = this;

    chsrpextsecaddrtable->parent = this;

    yang_name = "CISCO-HSRP-EXT-MIB"; yang_parent_name = "CISCO-HSRP-EXT-MIB";
}

CiscoHsrpExtMib::~CiscoHsrpExtMib()
{
}

bool CiscoHsrpExtMib::has_data() const
{
    return (chsrpextifstandbytable !=  nullptr && chsrpextifstandbytable->has_data())
	|| (chsrpextiftable !=  nullptr && chsrpextiftable->has_data())
	|| (chsrpextiftrackedtable !=  nullptr && chsrpextiftrackedtable->has_data())
	|| (chsrpextsecaddrtable !=  nullptr && chsrpextsecaddrtable->has_data());
}

bool CiscoHsrpExtMib::has_operation() const
{
    return is_set(yfilter)
	|| (chsrpextifstandbytable !=  nullptr && chsrpextifstandbytable->has_operation())
	|| (chsrpextiftable !=  nullptr && chsrpextiftable->has_operation())
	|| (chsrpextiftrackedtable !=  nullptr && chsrpextiftrackedtable->has_operation())
	|| (chsrpextsecaddrtable !=  nullptr && chsrpextsecaddrtable->has_operation());
}

std::string CiscoHsrpExtMib::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-HSRP-EXT-MIB:CISCO-HSRP-EXT-MIB";

    return path_buffer.str();

}

const EntityPath CiscoHsrpExtMib::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node. Path: "+get_segment_path()});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoHsrpExtMib::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cHsrpExtIfStandbyTable")
    {
        if(chsrpextifstandbytable == nullptr)
        {
            chsrpextifstandbytable = std::make_shared<CiscoHsrpExtMib::Chsrpextifstandbytable>();
        }
        return chsrpextifstandbytable;
    }

    if(child_yang_name == "cHsrpExtIfTable")
    {
        if(chsrpextiftable == nullptr)
        {
            chsrpextiftable = std::make_shared<CiscoHsrpExtMib::Chsrpextiftable>();
        }
        return chsrpextiftable;
    }

    if(child_yang_name == "cHsrpExtIfTrackedTable")
    {
        if(chsrpextiftrackedtable == nullptr)
        {
            chsrpextiftrackedtable = std::make_shared<CiscoHsrpExtMib::Chsrpextiftrackedtable>();
        }
        return chsrpextiftrackedtable;
    }

    if(child_yang_name == "cHsrpExtSecAddrTable")
    {
        if(chsrpextsecaddrtable == nullptr)
        {
            chsrpextsecaddrtable = std::make_shared<CiscoHsrpExtMib::Chsrpextsecaddrtable>();
        }
        return chsrpextsecaddrtable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoHsrpExtMib::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(chsrpextifstandbytable != nullptr)
    {
        children["cHsrpExtIfStandbyTable"] = chsrpextifstandbytable;
    }

    if(chsrpextiftable != nullptr)
    {
        children["cHsrpExtIfTable"] = chsrpextiftable;
    }

    if(chsrpextiftrackedtable != nullptr)
    {
        children["cHsrpExtIfTrackedTable"] = chsrpextiftrackedtable;
    }

    if(chsrpextsecaddrtable != nullptr)
    {
        children["cHsrpExtSecAddrTable"] = chsrpextsecaddrtable;
    }

    return children;
}

void CiscoHsrpExtMib::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoHsrpExtMib::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> CiscoHsrpExtMib::clone_ptr() const
{
    return std::make_shared<CiscoHsrpExtMib>();
}

std::string CiscoHsrpExtMib::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string CiscoHsrpExtMib::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function CiscoHsrpExtMib::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> CiscoHsrpExtMib::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool CiscoHsrpExtMib::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cHsrpExtIfStandbyTable" || name == "cHsrpExtIfTable" || name == "cHsrpExtIfTrackedTable" || name == "cHsrpExtSecAddrTable")
        return true;
    return false;
}

CiscoHsrpExtMib::Chsrpextiftrackedtable::Chsrpextiftrackedtable()
{
    yang_name = "cHsrpExtIfTrackedTable"; yang_parent_name = "CISCO-HSRP-EXT-MIB";
}

CiscoHsrpExtMib::Chsrpextiftrackedtable::~Chsrpextiftrackedtable()
{
}

bool CiscoHsrpExtMib::Chsrpextiftrackedtable::has_data() const
{
    for (std::size_t index=0; index<chsrpextiftrackedentry.size(); index++)
    {
        if(chsrpextiftrackedentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoHsrpExtMib::Chsrpextiftrackedtable::has_operation() const
{
    for (std::size_t index=0; index<chsrpextiftrackedentry.size(); index++)
    {
        if(chsrpextiftrackedentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CiscoHsrpExtMib::Chsrpextiftrackedtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cHsrpExtIfTrackedTable";

    return path_buffer.str();

}

const EntityPath CiscoHsrpExtMib::Chsrpextiftrackedtable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-HSRP-EXT-MIB:CISCO-HSRP-EXT-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoHsrpExtMib::Chsrpextiftrackedtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<CiscoHsrpExtMib::Chsrpextiftrackedtable::Chsrpextiftrackedentry>();
        c->parent = this;
        chsrpextiftrackedentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoHsrpExtMib::Chsrpextiftrackedtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : chsrpextiftrackedentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoHsrpExtMib::Chsrpextiftrackedtable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoHsrpExtMib::Chsrpextiftrackedtable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CiscoHsrpExtMib::Chsrpextiftrackedtable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cHsrpExtIfTrackedEntry")
        return true;
    return false;
}

CiscoHsrpExtMib::Chsrpextiftrackedtable::Chsrpextiftrackedentry::Chsrpextiftrackedentry()
    :
    ifindex{YType::str, "ifIndex"},
    chsrpgrpnumber{YType::str, "cHsrpGrpNumber"},
    chsrpextiftracked{YType::int32, "cHsrpExtIfTracked"},
    chsrpextiftrackedipnone{YType::boolean, "cHsrpExtIfTrackedIpNone"},
    chsrpextiftrackedpriority{YType::uint32, "cHsrpExtIfTrackedPriority"},
    chsrpextiftrackedrowstatus{YType::enumeration, "cHsrpExtIfTrackedRowStatus"}
{
    yang_name = "cHsrpExtIfTrackedEntry"; yang_parent_name = "cHsrpExtIfTrackedTable";
}

CiscoHsrpExtMib::Chsrpextiftrackedtable::Chsrpextiftrackedentry::~Chsrpextiftrackedentry()
{
}

bool CiscoHsrpExtMib::Chsrpextiftrackedtable::Chsrpextiftrackedentry::has_data() const
{
    return ifindex.is_set
	|| chsrpgrpnumber.is_set
	|| chsrpextiftracked.is_set
	|| chsrpextiftrackedipnone.is_set
	|| chsrpextiftrackedpriority.is_set
	|| chsrpextiftrackedrowstatus.is_set;
}

bool CiscoHsrpExtMib::Chsrpextiftrackedtable::Chsrpextiftrackedentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ifindex.yfilter)
	|| ydk::is_set(chsrpgrpnumber.yfilter)
	|| ydk::is_set(chsrpextiftracked.yfilter)
	|| ydk::is_set(chsrpextiftrackedipnone.yfilter)
	|| ydk::is_set(chsrpextiftrackedpriority.yfilter)
	|| ydk::is_set(chsrpextiftrackedrowstatus.yfilter);
}

std::string CiscoHsrpExtMib::Chsrpextiftrackedtable::Chsrpextiftrackedentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cHsrpExtIfTrackedEntry" <<"[ifIndex='" <<ifindex <<"']" <<"[cHsrpGrpNumber='" <<chsrpgrpnumber <<"']" <<"[cHsrpExtIfTracked='" <<chsrpextiftracked <<"']";

    return path_buffer.str();

}

const EntityPath CiscoHsrpExtMib::Chsrpextiftrackedtable::Chsrpextiftrackedentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-HSRP-EXT-MIB:CISCO-HSRP-EXT-MIB/cHsrpExtIfTrackedTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (chsrpgrpnumber.is_set || is_set(chsrpgrpnumber.yfilter)) leaf_name_data.push_back(chsrpgrpnumber.get_name_leafdata());
    if (chsrpextiftracked.is_set || is_set(chsrpextiftracked.yfilter)) leaf_name_data.push_back(chsrpextiftracked.get_name_leafdata());
    if (chsrpextiftrackedipnone.is_set || is_set(chsrpextiftrackedipnone.yfilter)) leaf_name_data.push_back(chsrpextiftrackedipnone.get_name_leafdata());
    if (chsrpextiftrackedpriority.is_set || is_set(chsrpextiftrackedpriority.yfilter)) leaf_name_data.push_back(chsrpextiftrackedpriority.get_name_leafdata());
    if (chsrpextiftrackedrowstatus.is_set || is_set(chsrpextiftrackedrowstatus.yfilter)) leaf_name_data.push_back(chsrpextiftrackedrowstatus.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoHsrpExtMib::Chsrpextiftrackedtable::Chsrpextiftrackedentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoHsrpExtMib::Chsrpextiftrackedtable::Chsrpextiftrackedentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoHsrpExtMib::Chsrpextiftrackedtable::Chsrpextiftrackedentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "cHsrpExtIfTrackedIpNone")
    {
        chsrpextiftrackedipnone = value;
        chsrpextiftrackedipnone.value_namespace = name_space;
        chsrpextiftrackedipnone.value_namespace_prefix = name_space_prefix;
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
}

void CiscoHsrpExtMib::Chsrpextiftrackedtable::Chsrpextiftrackedentry::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "cHsrpExtIfTrackedIpNone")
    {
        chsrpextiftrackedipnone.yfilter = yfilter;
    }
    if(value_path == "cHsrpExtIfTrackedPriority")
    {
        chsrpextiftrackedpriority.yfilter = yfilter;
    }
    if(value_path == "cHsrpExtIfTrackedRowStatus")
    {
        chsrpextiftrackedrowstatus.yfilter = yfilter;
    }
}

bool CiscoHsrpExtMib::Chsrpextiftrackedtable::Chsrpextiftrackedentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifIndex" || name == "cHsrpGrpNumber" || name == "cHsrpExtIfTracked" || name == "cHsrpExtIfTrackedIpNone" || name == "cHsrpExtIfTrackedPriority" || name == "cHsrpExtIfTrackedRowStatus")
        return true;
    return false;
}

CiscoHsrpExtMib::Chsrpextsecaddrtable::Chsrpextsecaddrtable()
{
    yang_name = "cHsrpExtSecAddrTable"; yang_parent_name = "CISCO-HSRP-EXT-MIB";
}

CiscoHsrpExtMib::Chsrpextsecaddrtable::~Chsrpextsecaddrtable()
{
}

bool CiscoHsrpExtMib::Chsrpextsecaddrtable::has_data() const
{
    for (std::size_t index=0; index<chsrpextsecaddrentry.size(); index++)
    {
        if(chsrpextsecaddrentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoHsrpExtMib::Chsrpextsecaddrtable::has_operation() const
{
    for (std::size_t index=0; index<chsrpextsecaddrentry.size(); index++)
    {
        if(chsrpextsecaddrentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CiscoHsrpExtMib::Chsrpextsecaddrtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cHsrpExtSecAddrTable";

    return path_buffer.str();

}

const EntityPath CiscoHsrpExtMib::Chsrpextsecaddrtable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-HSRP-EXT-MIB:CISCO-HSRP-EXT-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoHsrpExtMib::Chsrpextsecaddrtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<CiscoHsrpExtMib::Chsrpextsecaddrtable::Chsrpextsecaddrentry>();
        c->parent = this;
        chsrpextsecaddrentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoHsrpExtMib::Chsrpextsecaddrtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : chsrpextsecaddrentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoHsrpExtMib::Chsrpextsecaddrtable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoHsrpExtMib::Chsrpextsecaddrtable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CiscoHsrpExtMib::Chsrpextsecaddrtable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cHsrpExtSecAddrEntry")
        return true;
    return false;
}

CiscoHsrpExtMib::Chsrpextsecaddrtable::Chsrpextsecaddrentry::Chsrpextsecaddrentry()
    :
    ifindex{YType::str, "ifIndex"},
    chsrpgrpnumber{YType::str, "cHsrpGrpNumber"},
    chsrpextsecaddraddress{YType::str, "cHsrpExtSecAddrAddress"},
    chsrpextsecaddrrowstatus{YType::enumeration, "cHsrpExtSecAddrRowStatus"}
{
    yang_name = "cHsrpExtSecAddrEntry"; yang_parent_name = "cHsrpExtSecAddrTable";
}

CiscoHsrpExtMib::Chsrpextsecaddrtable::Chsrpextsecaddrentry::~Chsrpextsecaddrentry()
{
}

bool CiscoHsrpExtMib::Chsrpextsecaddrtable::Chsrpextsecaddrentry::has_data() const
{
    return ifindex.is_set
	|| chsrpgrpnumber.is_set
	|| chsrpextsecaddraddress.is_set
	|| chsrpextsecaddrrowstatus.is_set;
}

bool CiscoHsrpExtMib::Chsrpextsecaddrtable::Chsrpextsecaddrentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ifindex.yfilter)
	|| ydk::is_set(chsrpgrpnumber.yfilter)
	|| ydk::is_set(chsrpextsecaddraddress.yfilter)
	|| ydk::is_set(chsrpextsecaddrrowstatus.yfilter);
}

std::string CiscoHsrpExtMib::Chsrpextsecaddrtable::Chsrpextsecaddrentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cHsrpExtSecAddrEntry" <<"[ifIndex='" <<ifindex <<"']" <<"[cHsrpGrpNumber='" <<chsrpgrpnumber <<"']" <<"[cHsrpExtSecAddrAddress='" <<chsrpextsecaddraddress <<"']";

    return path_buffer.str();

}

const EntityPath CiscoHsrpExtMib::Chsrpextsecaddrtable::Chsrpextsecaddrentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-HSRP-EXT-MIB:CISCO-HSRP-EXT-MIB/cHsrpExtSecAddrTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (chsrpgrpnumber.is_set || is_set(chsrpgrpnumber.yfilter)) leaf_name_data.push_back(chsrpgrpnumber.get_name_leafdata());
    if (chsrpextsecaddraddress.is_set || is_set(chsrpextsecaddraddress.yfilter)) leaf_name_data.push_back(chsrpextsecaddraddress.get_name_leafdata());
    if (chsrpextsecaddrrowstatus.is_set || is_set(chsrpextsecaddrrowstatus.yfilter)) leaf_name_data.push_back(chsrpextsecaddrrowstatus.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoHsrpExtMib::Chsrpextsecaddrtable::Chsrpextsecaddrentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoHsrpExtMib::Chsrpextsecaddrtable::Chsrpextsecaddrentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoHsrpExtMib::Chsrpextsecaddrtable::Chsrpextsecaddrentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void CiscoHsrpExtMib::Chsrpextsecaddrtable::Chsrpextsecaddrentry::set_filter(const std::string & value_path, YFilter yfilter)
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

bool CiscoHsrpExtMib::Chsrpextsecaddrtable::Chsrpextsecaddrentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifIndex" || name == "cHsrpGrpNumber" || name == "cHsrpExtSecAddrAddress" || name == "cHsrpExtSecAddrRowStatus")
        return true;
    return false;
}

CiscoHsrpExtMib::Chsrpextifstandbytable::Chsrpextifstandbytable()
{
    yang_name = "cHsrpExtIfStandbyTable"; yang_parent_name = "CISCO-HSRP-EXT-MIB";
}

CiscoHsrpExtMib::Chsrpextifstandbytable::~Chsrpextifstandbytable()
{
}

bool CiscoHsrpExtMib::Chsrpextifstandbytable::has_data() const
{
    for (std::size_t index=0; index<chsrpextifstandbyentry.size(); index++)
    {
        if(chsrpextifstandbyentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoHsrpExtMib::Chsrpextifstandbytable::has_operation() const
{
    for (std::size_t index=0; index<chsrpextifstandbyentry.size(); index++)
    {
        if(chsrpextifstandbyentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CiscoHsrpExtMib::Chsrpextifstandbytable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cHsrpExtIfStandbyTable";

    return path_buffer.str();

}

const EntityPath CiscoHsrpExtMib::Chsrpextifstandbytable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-HSRP-EXT-MIB:CISCO-HSRP-EXT-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoHsrpExtMib::Chsrpextifstandbytable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<CiscoHsrpExtMib::Chsrpextifstandbytable::Chsrpextifstandbyentry>();
        c->parent = this;
        chsrpextifstandbyentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoHsrpExtMib::Chsrpextifstandbytable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : chsrpextifstandbyentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoHsrpExtMib::Chsrpextifstandbytable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoHsrpExtMib::Chsrpextifstandbytable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CiscoHsrpExtMib::Chsrpextifstandbytable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cHsrpExtIfStandbyEntry")
        return true;
    return false;
}

CiscoHsrpExtMib::Chsrpextifstandbytable::Chsrpextifstandbyentry::Chsrpextifstandbyentry()
    :
    ifindex{YType::str, "ifIndex"},
    chsrpgrpnumber{YType::str, "cHsrpGrpNumber"},
    chsrpextifstandbyindex{YType::uint32, "cHsrpExtIfStandbyIndex"},
    chsrpextifstandbydestaddr{YType::str, "cHsrpExtIfStandbyDestAddr"},
    chsrpextifstandbydestaddrtype{YType::enumeration, "cHsrpExtIfStandbyDestAddrType"},
    chsrpextifstandbyrowstatus{YType::enumeration, "cHsrpExtIfStandbyRowStatus"},
    chsrpextifstandbysourceaddr{YType::str, "cHsrpExtIfStandbySourceAddr"},
    chsrpextifstandbysourceaddrtype{YType::enumeration, "cHsrpExtIfStandbySourceAddrType"}
{
    yang_name = "cHsrpExtIfStandbyEntry"; yang_parent_name = "cHsrpExtIfStandbyTable";
}

CiscoHsrpExtMib::Chsrpextifstandbytable::Chsrpextifstandbyentry::~Chsrpextifstandbyentry()
{
}

bool CiscoHsrpExtMib::Chsrpextifstandbytable::Chsrpextifstandbyentry::has_data() const
{
    return ifindex.is_set
	|| chsrpgrpnumber.is_set
	|| chsrpextifstandbyindex.is_set
	|| chsrpextifstandbydestaddr.is_set
	|| chsrpextifstandbydestaddrtype.is_set
	|| chsrpextifstandbyrowstatus.is_set
	|| chsrpextifstandbysourceaddr.is_set
	|| chsrpextifstandbysourceaddrtype.is_set;
}

bool CiscoHsrpExtMib::Chsrpextifstandbytable::Chsrpextifstandbyentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ifindex.yfilter)
	|| ydk::is_set(chsrpgrpnumber.yfilter)
	|| ydk::is_set(chsrpextifstandbyindex.yfilter)
	|| ydk::is_set(chsrpextifstandbydestaddr.yfilter)
	|| ydk::is_set(chsrpextifstandbydestaddrtype.yfilter)
	|| ydk::is_set(chsrpextifstandbyrowstatus.yfilter)
	|| ydk::is_set(chsrpextifstandbysourceaddr.yfilter)
	|| ydk::is_set(chsrpextifstandbysourceaddrtype.yfilter);
}

std::string CiscoHsrpExtMib::Chsrpextifstandbytable::Chsrpextifstandbyentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cHsrpExtIfStandbyEntry" <<"[ifIndex='" <<ifindex <<"']" <<"[cHsrpGrpNumber='" <<chsrpgrpnumber <<"']" <<"[cHsrpExtIfStandbyIndex='" <<chsrpextifstandbyindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoHsrpExtMib::Chsrpextifstandbytable::Chsrpextifstandbyentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-HSRP-EXT-MIB:CISCO-HSRP-EXT-MIB/cHsrpExtIfStandbyTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (chsrpgrpnumber.is_set || is_set(chsrpgrpnumber.yfilter)) leaf_name_data.push_back(chsrpgrpnumber.get_name_leafdata());
    if (chsrpextifstandbyindex.is_set || is_set(chsrpextifstandbyindex.yfilter)) leaf_name_data.push_back(chsrpextifstandbyindex.get_name_leafdata());
    if (chsrpextifstandbydestaddr.is_set || is_set(chsrpextifstandbydestaddr.yfilter)) leaf_name_data.push_back(chsrpextifstandbydestaddr.get_name_leafdata());
    if (chsrpextifstandbydestaddrtype.is_set || is_set(chsrpextifstandbydestaddrtype.yfilter)) leaf_name_data.push_back(chsrpextifstandbydestaddrtype.get_name_leafdata());
    if (chsrpextifstandbyrowstatus.is_set || is_set(chsrpextifstandbyrowstatus.yfilter)) leaf_name_data.push_back(chsrpextifstandbyrowstatus.get_name_leafdata());
    if (chsrpextifstandbysourceaddr.is_set || is_set(chsrpextifstandbysourceaddr.yfilter)) leaf_name_data.push_back(chsrpextifstandbysourceaddr.get_name_leafdata());
    if (chsrpextifstandbysourceaddrtype.is_set || is_set(chsrpextifstandbysourceaddrtype.yfilter)) leaf_name_data.push_back(chsrpextifstandbysourceaddrtype.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoHsrpExtMib::Chsrpextifstandbytable::Chsrpextifstandbyentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoHsrpExtMib::Chsrpextifstandbytable::Chsrpextifstandbyentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoHsrpExtMib::Chsrpextifstandbytable::Chsrpextifstandbyentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "cHsrpExtIfStandbyDestAddr")
    {
        chsrpextifstandbydestaddr = value;
        chsrpextifstandbydestaddr.value_namespace = name_space;
        chsrpextifstandbydestaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cHsrpExtIfStandbyDestAddrType")
    {
        chsrpextifstandbydestaddrtype = value;
        chsrpextifstandbydestaddrtype.value_namespace = name_space;
        chsrpextifstandbydestaddrtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cHsrpExtIfStandbyRowStatus")
    {
        chsrpextifstandbyrowstatus = value;
        chsrpextifstandbyrowstatus.value_namespace = name_space;
        chsrpextifstandbyrowstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cHsrpExtIfStandbySourceAddr")
    {
        chsrpextifstandbysourceaddr = value;
        chsrpextifstandbysourceaddr.value_namespace = name_space;
        chsrpextifstandbysourceaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cHsrpExtIfStandbySourceAddrType")
    {
        chsrpextifstandbysourceaddrtype = value;
        chsrpextifstandbysourceaddrtype.value_namespace = name_space;
        chsrpextifstandbysourceaddrtype.value_namespace_prefix = name_space_prefix;
    }
}

void CiscoHsrpExtMib::Chsrpextifstandbytable::Chsrpextifstandbyentry::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "cHsrpExtIfStandbyDestAddr")
    {
        chsrpextifstandbydestaddr.yfilter = yfilter;
    }
    if(value_path == "cHsrpExtIfStandbyDestAddrType")
    {
        chsrpextifstandbydestaddrtype.yfilter = yfilter;
    }
    if(value_path == "cHsrpExtIfStandbyRowStatus")
    {
        chsrpextifstandbyrowstatus.yfilter = yfilter;
    }
    if(value_path == "cHsrpExtIfStandbySourceAddr")
    {
        chsrpextifstandbysourceaddr.yfilter = yfilter;
    }
    if(value_path == "cHsrpExtIfStandbySourceAddrType")
    {
        chsrpextifstandbysourceaddrtype.yfilter = yfilter;
    }
}

bool CiscoHsrpExtMib::Chsrpextifstandbytable::Chsrpextifstandbyentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifIndex" || name == "cHsrpGrpNumber" || name == "cHsrpExtIfStandbyIndex" || name == "cHsrpExtIfStandbyDestAddr" || name == "cHsrpExtIfStandbyDestAddrType" || name == "cHsrpExtIfStandbyRowStatus" || name == "cHsrpExtIfStandbySourceAddr" || name == "cHsrpExtIfStandbySourceAddrType")
        return true;
    return false;
}

CiscoHsrpExtMib::Chsrpextiftable::Chsrpextiftable()
{
    yang_name = "cHsrpExtIfTable"; yang_parent_name = "CISCO-HSRP-EXT-MIB";
}

CiscoHsrpExtMib::Chsrpextiftable::~Chsrpextiftable()
{
}

bool CiscoHsrpExtMib::Chsrpextiftable::has_data() const
{
    for (std::size_t index=0; index<chsrpextifentry.size(); index++)
    {
        if(chsrpextifentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoHsrpExtMib::Chsrpextiftable::has_operation() const
{
    for (std::size_t index=0; index<chsrpextifentry.size(); index++)
    {
        if(chsrpextifentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CiscoHsrpExtMib::Chsrpextiftable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cHsrpExtIfTable";

    return path_buffer.str();

}

const EntityPath CiscoHsrpExtMib::Chsrpextiftable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-HSRP-EXT-MIB:CISCO-HSRP-EXT-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoHsrpExtMib::Chsrpextiftable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<CiscoHsrpExtMib::Chsrpextiftable::Chsrpextifentry>();
        c->parent = this;
        chsrpextifentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoHsrpExtMib::Chsrpextiftable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : chsrpextifentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoHsrpExtMib::Chsrpextiftable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoHsrpExtMib::Chsrpextiftable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CiscoHsrpExtMib::Chsrpextiftable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cHsrpExtIfEntry")
        return true;
    return false;
}

CiscoHsrpExtMib::Chsrpextiftable::Chsrpextifentry::Chsrpextifentry()
    :
    ifindex{YType::str, "ifIndex"},
    chsrpextifrowstatus{YType::enumeration, "cHsrpExtIfRowStatus"},
    chsrpextifusebia{YType::boolean, "cHsrpExtIfUseBIA"}
{
    yang_name = "cHsrpExtIfEntry"; yang_parent_name = "cHsrpExtIfTable";
}

CiscoHsrpExtMib::Chsrpextiftable::Chsrpextifentry::~Chsrpextifentry()
{
}

bool CiscoHsrpExtMib::Chsrpextiftable::Chsrpextifentry::has_data() const
{
    return ifindex.is_set
	|| chsrpextifrowstatus.is_set
	|| chsrpextifusebia.is_set;
}

bool CiscoHsrpExtMib::Chsrpextiftable::Chsrpextifentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ifindex.yfilter)
	|| ydk::is_set(chsrpextifrowstatus.yfilter)
	|| ydk::is_set(chsrpextifusebia.yfilter);
}

std::string CiscoHsrpExtMib::Chsrpextiftable::Chsrpextifentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cHsrpExtIfEntry" <<"[ifIndex='" <<ifindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoHsrpExtMib::Chsrpextiftable::Chsrpextifentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-HSRP-EXT-MIB:CISCO-HSRP-EXT-MIB/cHsrpExtIfTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (chsrpextifrowstatus.is_set || is_set(chsrpextifrowstatus.yfilter)) leaf_name_data.push_back(chsrpextifrowstatus.get_name_leafdata());
    if (chsrpextifusebia.is_set || is_set(chsrpextifusebia.yfilter)) leaf_name_data.push_back(chsrpextifusebia.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoHsrpExtMib::Chsrpextiftable::Chsrpextifentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoHsrpExtMib::Chsrpextiftable::Chsrpextifentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoHsrpExtMib::Chsrpextiftable::Chsrpextifentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
        ifindex.value_namespace = name_space;
        ifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cHsrpExtIfRowStatus")
    {
        chsrpextifrowstatus = value;
        chsrpextifrowstatus.value_namespace = name_space;
        chsrpextifrowstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cHsrpExtIfUseBIA")
    {
        chsrpextifusebia = value;
        chsrpextifusebia.value_namespace = name_space;
        chsrpextifusebia.value_namespace_prefix = name_space_prefix;
    }
}

void CiscoHsrpExtMib::Chsrpextiftable::Chsrpextifentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ifIndex")
    {
        ifindex.yfilter = yfilter;
    }
    if(value_path == "cHsrpExtIfRowStatus")
    {
        chsrpextifrowstatus.yfilter = yfilter;
    }
    if(value_path == "cHsrpExtIfUseBIA")
    {
        chsrpextifusebia.yfilter = yfilter;
    }
}

bool CiscoHsrpExtMib::Chsrpextiftable::Chsrpextifentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifIndex" || name == "cHsrpExtIfRowStatus" || name == "cHsrpExtIfUseBIA")
        return true;
    return false;
}


}
}

