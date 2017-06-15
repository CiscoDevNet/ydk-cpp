
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "CISCO_HSRP_EXT_MIB.hpp"

namespace ydk {
namespace CISCO_HSRP_EXT_MIB {

CiscoHsrpExtMib::CiscoHsrpExtMib()
    :
    chsrpextifstandbytable_(std::make_shared<CiscoHsrpExtMib::Chsrpextifstandbytable>())
	,chsrpextiftable_(std::make_shared<CiscoHsrpExtMib::Chsrpextiftable>())
	,chsrpextiftrackedtable_(std::make_shared<CiscoHsrpExtMib::Chsrpextiftrackedtable>())
	,chsrpextsecaddrtable_(std::make_shared<CiscoHsrpExtMib::Chsrpextsecaddrtable>())
{
    chsrpextifstandbytable_->parent = this;

    chsrpextiftable_->parent = this;

    chsrpextiftrackedtable_->parent = this;

    chsrpextsecaddrtable_->parent = this;

    yang_name = "CISCO-HSRP-EXT-MIB"; yang_parent_name = "CISCO-HSRP-EXT-MIB";
}

CiscoHsrpExtMib::~CiscoHsrpExtMib()
{
}

bool CiscoHsrpExtMib::has_data() const
{
    return (chsrpextifstandbytable_ !=  nullptr && chsrpextifstandbytable_->has_data())
	|| (chsrpextiftable_ !=  nullptr && chsrpextiftable_->has_data())
	|| (chsrpextiftrackedtable_ !=  nullptr && chsrpextiftrackedtable_->has_data())
	|| (chsrpextsecaddrtable_ !=  nullptr && chsrpextsecaddrtable_->has_data());
}

bool CiscoHsrpExtMib::has_operation() const
{
    return is_set(operation)
	|| (chsrpextifstandbytable_ !=  nullptr && chsrpextifstandbytable_->has_operation())
	|| (chsrpextiftable_ !=  nullptr && chsrpextiftable_->has_operation())
	|| (chsrpextiftrackedtable_ !=  nullptr && chsrpextiftrackedtable_->has_operation())
	|| (chsrpextsecaddrtable_ !=  nullptr && chsrpextsecaddrtable_->has_operation());
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
        if(chsrpextifstandbytable_ == nullptr)
        {
            chsrpextifstandbytable_ = std::make_shared<CiscoHsrpExtMib::Chsrpextifstandbytable>();
        }
        return chsrpextifstandbytable_;
    }

    if(child_yang_name == "cHsrpExtIfTable")
    {
        if(chsrpextiftable_ == nullptr)
        {
            chsrpextiftable_ = std::make_shared<CiscoHsrpExtMib::Chsrpextiftable>();
        }
        return chsrpextiftable_;
    }

    if(child_yang_name == "cHsrpExtIfTrackedTable")
    {
        if(chsrpextiftrackedtable_ == nullptr)
        {
            chsrpextiftrackedtable_ = std::make_shared<CiscoHsrpExtMib::Chsrpextiftrackedtable>();
        }
        return chsrpextiftrackedtable_;
    }

    if(child_yang_name == "cHsrpExtSecAddrTable")
    {
        if(chsrpextsecaddrtable_ == nullptr)
        {
            chsrpextsecaddrtable_ = std::make_shared<CiscoHsrpExtMib::Chsrpextsecaddrtable>();
        }
        return chsrpextsecaddrtable_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoHsrpExtMib::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(chsrpextifstandbytable_ != nullptr)
    {
        children["cHsrpExtIfStandbyTable"] = chsrpextifstandbytable_;
    }

    if(chsrpextiftable_ != nullptr)
    {
        children["cHsrpExtIfTable"] = chsrpextiftable_;
    }

    if(chsrpextiftrackedtable_ != nullptr)
    {
        children["cHsrpExtIfTrackedTable"] = chsrpextiftrackedtable_;
    }

    if(chsrpextsecaddrtable_ != nullptr)
    {
        children["cHsrpExtSecAddrTable"] = chsrpextsecaddrtable_;
    }

    return children;
}

void CiscoHsrpExtMib::set_value(const std::string & value_path, std::string value)
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

CiscoHsrpExtMib::Chsrpextiftrackedtable::Chsrpextiftrackedtable()
{
    yang_name = "cHsrpExtIfTrackedTable"; yang_parent_name = "CISCO-HSRP-EXT-MIB";
}

CiscoHsrpExtMib::Chsrpextiftrackedtable::~Chsrpextiftrackedtable()
{
}

bool CiscoHsrpExtMib::Chsrpextiftrackedtable::has_data() const
{
    for (std::size_t index=0; index<chsrpextiftrackedentry_.size(); index++)
    {
        if(chsrpextiftrackedentry_[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoHsrpExtMib::Chsrpextiftrackedtable::has_operation() const
{
    for (std::size_t index=0; index<chsrpextiftrackedentry_.size(); index++)
    {
        if(chsrpextiftrackedentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
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
        for(auto const & c : chsrpextiftrackedentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoHsrpExtMib::Chsrpextiftrackedtable::Chsrpextiftrackedentry>();
        c->parent = this;
        chsrpextiftrackedentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoHsrpExtMib::Chsrpextiftrackedtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : chsrpextiftrackedentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoHsrpExtMib::Chsrpextiftrackedtable::set_value(const std::string & value_path, std::string value)
{
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
    return is_set(operation)
	|| is_set(ifindex.operation)
	|| is_set(chsrpgrpnumber.operation)
	|| is_set(chsrpextiftracked.operation)
	|| is_set(chsrpextiftrackedipnone.operation)
	|| is_set(chsrpextiftrackedpriority.operation)
	|| is_set(chsrpextiftrackedrowstatus.operation);
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

    if (ifindex.is_set || is_set(ifindex.operation)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (chsrpgrpnumber.is_set || is_set(chsrpgrpnumber.operation)) leaf_name_data.push_back(chsrpgrpnumber.get_name_leafdata());
    if (chsrpextiftracked.is_set || is_set(chsrpextiftracked.operation)) leaf_name_data.push_back(chsrpextiftracked.get_name_leafdata());
    if (chsrpextiftrackedipnone.is_set || is_set(chsrpextiftrackedipnone.operation)) leaf_name_data.push_back(chsrpextiftrackedipnone.get_name_leafdata());
    if (chsrpextiftrackedpriority.is_set || is_set(chsrpextiftrackedpriority.operation)) leaf_name_data.push_back(chsrpextiftrackedpriority.get_name_leafdata());
    if (chsrpextiftrackedrowstatus.is_set || is_set(chsrpextiftrackedrowstatus.operation)) leaf_name_data.push_back(chsrpextiftrackedrowstatus.get_name_leafdata());


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

void CiscoHsrpExtMib::Chsrpextiftrackedtable::Chsrpextiftrackedentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
    }
    if(value_path == "cHsrpGrpNumber")
    {
        chsrpgrpnumber = value;
    }
    if(value_path == "cHsrpExtIfTracked")
    {
        chsrpextiftracked = value;
    }
    if(value_path == "cHsrpExtIfTrackedIpNone")
    {
        chsrpextiftrackedipnone = value;
    }
    if(value_path == "cHsrpExtIfTrackedPriority")
    {
        chsrpextiftrackedpriority = value;
    }
    if(value_path == "cHsrpExtIfTrackedRowStatus")
    {
        chsrpextiftrackedrowstatus = value;
    }
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
    for (std::size_t index=0; index<chsrpextsecaddrentry_.size(); index++)
    {
        if(chsrpextsecaddrentry_[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoHsrpExtMib::Chsrpextsecaddrtable::has_operation() const
{
    for (std::size_t index=0; index<chsrpextsecaddrentry_.size(); index++)
    {
        if(chsrpextsecaddrentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
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
        for(auto const & c : chsrpextsecaddrentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoHsrpExtMib::Chsrpextsecaddrtable::Chsrpextsecaddrentry>();
        c->parent = this;
        chsrpextsecaddrentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoHsrpExtMib::Chsrpextsecaddrtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : chsrpextsecaddrentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoHsrpExtMib::Chsrpextsecaddrtable::set_value(const std::string & value_path, std::string value)
{
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
    return is_set(operation)
	|| is_set(ifindex.operation)
	|| is_set(chsrpgrpnumber.operation)
	|| is_set(chsrpextsecaddraddress.operation)
	|| is_set(chsrpextsecaddrrowstatus.operation);
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

    if (ifindex.is_set || is_set(ifindex.operation)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (chsrpgrpnumber.is_set || is_set(chsrpgrpnumber.operation)) leaf_name_data.push_back(chsrpgrpnumber.get_name_leafdata());
    if (chsrpextsecaddraddress.is_set || is_set(chsrpextsecaddraddress.operation)) leaf_name_data.push_back(chsrpextsecaddraddress.get_name_leafdata());
    if (chsrpextsecaddrrowstatus.is_set || is_set(chsrpextsecaddrrowstatus.operation)) leaf_name_data.push_back(chsrpextsecaddrrowstatus.get_name_leafdata());


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

void CiscoHsrpExtMib::Chsrpextsecaddrtable::Chsrpextsecaddrentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
    }
    if(value_path == "cHsrpGrpNumber")
    {
        chsrpgrpnumber = value;
    }
    if(value_path == "cHsrpExtSecAddrAddress")
    {
        chsrpextsecaddraddress = value;
    }
    if(value_path == "cHsrpExtSecAddrRowStatus")
    {
        chsrpextsecaddrrowstatus = value;
    }
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
    for (std::size_t index=0; index<chsrpextifstandbyentry_.size(); index++)
    {
        if(chsrpextifstandbyentry_[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoHsrpExtMib::Chsrpextifstandbytable::has_operation() const
{
    for (std::size_t index=0; index<chsrpextifstandbyentry_.size(); index++)
    {
        if(chsrpextifstandbyentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
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
        for(auto const & c : chsrpextifstandbyentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoHsrpExtMib::Chsrpextifstandbytable::Chsrpextifstandbyentry>();
        c->parent = this;
        chsrpextifstandbyentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoHsrpExtMib::Chsrpextifstandbytable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : chsrpextifstandbyentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoHsrpExtMib::Chsrpextifstandbytable::set_value(const std::string & value_path, std::string value)
{
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
    return is_set(operation)
	|| is_set(ifindex.operation)
	|| is_set(chsrpgrpnumber.operation)
	|| is_set(chsrpextifstandbyindex.operation)
	|| is_set(chsrpextifstandbydestaddr.operation)
	|| is_set(chsrpextifstandbydestaddrtype.operation)
	|| is_set(chsrpextifstandbyrowstatus.operation)
	|| is_set(chsrpextifstandbysourceaddr.operation)
	|| is_set(chsrpextifstandbysourceaddrtype.operation);
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

    if (ifindex.is_set || is_set(ifindex.operation)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (chsrpgrpnumber.is_set || is_set(chsrpgrpnumber.operation)) leaf_name_data.push_back(chsrpgrpnumber.get_name_leafdata());
    if (chsrpextifstandbyindex.is_set || is_set(chsrpextifstandbyindex.operation)) leaf_name_data.push_back(chsrpextifstandbyindex.get_name_leafdata());
    if (chsrpextifstandbydestaddr.is_set || is_set(chsrpextifstandbydestaddr.operation)) leaf_name_data.push_back(chsrpextifstandbydestaddr.get_name_leafdata());
    if (chsrpextifstandbydestaddrtype.is_set || is_set(chsrpextifstandbydestaddrtype.operation)) leaf_name_data.push_back(chsrpextifstandbydestaddrtype.get_name_leafdata());
    if (chsrpextifstandbyrowstatus.is_set || is_set(chsrpextifstandbyrowstatus.operation)) leaf_name_data.push_back(chsrpextifstandbyrowstatus.get_name_leafdata());
    if (chsrpextifstandbysourceaddr.is_set || is_set(chsrpextifstandbysourceaddr.operation)) leaf_name_data.push_back(chsrpextifstandbysourceaddr.get_name_leafdata());
    if (chsrpextifstandbysourceaddrtype.is_set || is_set(chsrpextifstandbysourceaddrtype.operation)) leaf_name_data.push_back(chsrpextifstandbysourceaddrtype.get_name_leafdata());


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

void CiscoHsrpExtMib::Chsrpextifstandbytable::Chsrpextifstandbyentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
    }
    if(value_path == "cHsrpGrpNumber")
    {
        chsrpgrpnumber = value;
    }
    if(value_path == "cHsrpExtIfStandbyIndex")
    {
        chsrpextifstandbyindex = value;
    }
    if(value_path == "cHsrpExtIfStandbyDestAddr")
    {
        chsrpextifstandbydestaddr = value;
    }
    if(value_path == "cHsrpExtIfStandbyDestAddrType")
    {
        chsrpextifstandbydestaddrtype = value;
    }
    if(value_path == "cHsrpExtIfStandbyRowStatus")
    {
        chsrpextifstandbyrowstatus = value;
    }
    if(value_path == "cHsrpExtIfStandbySourceAddr")
    {
        chsrpextifstandbysourceaddr = value;
    }
    if(value_path == "cHsrpExtIfStandbySourceAddrType")
    {
        chsrpextifstandbysourceaddrtype = value;
    }
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
    for (std::size_t index=0; index<chsrpextifentry_.size(); index++)
    {
        if(chsrpextifentry_[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoHsrpExtMib::Chsrpextiftable::has_operation() const
{
    for (std::size_t index=0; index<chsrpextifentry_.size(); index++)
    {
        if(chsrpextifentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
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
        for(auto const & c : chsrpextifentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoHsrpExtMib::Chsrpextiftable::Chsrpextifentry>();
        c->parent = this;
        chsrpextifentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoHsrpExtMib::Chsrpextiftable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : chsrpextifentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoHsrpExtMib::Chsrpextiftable::set_value(const std::string & value_path, std::string value)
{
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
    return is_set(operation)
	|| is_set(ifindex.operation)
	|| is_set(chsrpextifrowstatus.operation)
	|| is_set(chsrpextifusebia.operation);
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

    if (ifindex.is_set || is_set(ifindex.operation)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (chsrpextifrowstatus.is_set || is_set(chsrpextifrowstatus.operation)) leaf_name_data.push_back(chsrpextifrowstatus.get_name_leafdata());
    if (chsrpextifusebia.is_set || is_set(chsrpextifusebia.operation)) leaf_name_data.push_back(chsrpextifusebia.get_name_leafdata());


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

void CiscoHsrpExtMib::Chsrpextiftable::Chsrpextifentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
    }
    if(value_path == "cHsrpExtIfRowStatus")
    {
        chsrpextifrowstatus = value;
    }
    if(value_path == "cHsrpExtIfUseBIA")
    {
        chsrpextifusebia = value;
    }
}


}
}

