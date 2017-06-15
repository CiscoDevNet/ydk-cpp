
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "ETHER_WIS.hpp"

namespace ydk {
namespace ETHER_WIS {

EtherWis::EtherWis()
    :
    etherwisdevicetable_(std::make_shared<EtherWis::Etherwisdevicetable>())
	,etherwisfarendpathcurrenttable_(std::make_shared<EtherWis::Etherwisfarendpathcurrenttable>())
	,etherwispathcurrenttable_(std::make_shared<EtherWis::Etherwispathcurrenttable>())
	,etherwissectioncurrenttable_(std::make_shared<EtherWis::Etherwissectioncurrenttable>())
{
    etherwisdevicetable_->parent = this;

    etherwisfarendpathcurrenttable_->parent = this;

    etherwispathcurrenttable_->parent = this;

    etherwissectioncurrenttable_->parent = this;

    yang_name = "ETHER-WIS"; yang_parent_name = "ETHER-WIS";
}

EtherWis::~EtherWis()
{
}

bool EtherWis::has_data() const
{
    return (etherwisdevicetable_ !=  nullptr && etherwisdevicetable_->has_data())
	|| (etherwisfarendpathcurrenttable_ !=  nullptr && etherwisfarendpathcurrenttable_->has_data())
	|| (etherwispathcurrenttable_ !=  nullptr && etherwispathcurrenttable_->has_data())
	|| (etherwissectioncurrenttable_ !=  nullptr && etherwissectioncurrenttable_->has_data());
}

bool EtherWis::has_operation() const
{
    return is_set(operation)
	|| (etherwisdevicetable_ !=  nullptr && etherwisdevicetable_->has_operation())
	|| (etherwisfarendpathcurrenttable_ !=  nullptr && etherwisfarendpathcurrenttable_->has_operation())
	|| (etherwispathcurrenttable_ !=  nullptr && etherwispathcurrenttable_->has_operation())
	|| (etherwissectioncurrenttable_ !=  nullptr && etherwissectioncurrenttable_->has_operation());
}

std::string EtherWis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ETHER-WIS:ETHER-WIS";

    return path_buffer.str();

}

const EntityPath EtherWis::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> EtherWis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "etherWisDeviceTable")
    {
        if(etherwisdevicetable_ == nullptr)
        {
            etherwisdevicetable_ = std::make_shared<EtherWis::Etherwisdevicetable>();
        }
        return etherwisdevicetable_;
    }

    if(child_yang_name == "etherWisFarEndPathCurrentTable")
    {
        if(etherwisfarendpathcurrenttable_ == nullptr)
        {
            etherwisfarendpathcurrenttable_ = std::make_shared<EtherWis::Etherwisfarendpathcurrenttable>();
        }
        return etherwisfarendpathcurrenttable_;
    }

    if(child_yang_name == "etherWisPathCurrentTable")
    {
        if(etherwispathcurrenttable_ == nullptr)
        {
            etherwispathcurrenttable_ = std::make_shared<EtherWis::Etherwispathcurrenttable>();
        }
        return etherwispathcurrenttable_;
    }

    if(child_yang_name == "etherWisSectionCurrentTable")
    {
        if(etherwissectioncurrenttable_ == nullptr)
        {
            etherwissectioncurrenttable_ = std::make_shared<EtherWis::Etherwissectioncurrenttable>();
        }
        return etherwissectioncurrenttable_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> EtherWis::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(etherwisdevicetable_ != nullptr)
    {
        children["etherWisDeviceTable"] = etherwisdevicetable_;
    }

    if(etherwisfarendpathcurrenttable_ != nullptr)
    {
        children["etherWisFarEndPathCurrentTable"] = etherwisfarendpathcurrenttable_;
    }

    if(etherwispathcurrenttable_ != nullptr)
    {
        children["etherWisPathCurrentTable"] = etherwispathcurrenttable_;
    }

    if(etherwissectioncurrenttable_ != nullptr)
    {
        children["etherWisSectionCurrentTable"] = etherwissectioncurrenttable_;
    }

    return children;
}

void EtherWis::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> EtherWis::clone_ptr() const
{
    return std::make_shared<EtherWis>();
}

std::string EtherWis::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string EtherWis::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function EtherWis::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

EtherWis::Etherwisdevicetable::Etherwisdevicetable()
{
    yang_name = "etherWisDeviceTable"; yang_parent_name = "ETHER-WIS";
}

EtherWis::Etherwisdevicetable::~Etherwisdevicetable()
{
}

bool EtherWis::Etherwisdevicetable::has_data() const
{
    for (std::size_t index=0; index<etherwisdeviceentry_.size(); index++)
    {
        if(etherwisdeviceentry_[index]->has_data())
            return true;
    }
    return false;
}

bool EtherWis::Etherwisdevicetable::has_operation() const
{
    for (std::size_t index=0; index<etherwisdeviceentry_.size(); index++)
    {
        if(etherwisdeviceentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string EtherWis::Etherwisdevicetable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "etherWisDeviceTable";

    return path_buffer.str();

}

const EntityPath EtherWis::Etherwisdevicetable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "ETHER-WIS:ETHER-WIS/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> EtherWis::Etherwisdevicetable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "etherWisDeviceEntry")
    {
        for(auto const & c : etherwisdeviceentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<EtherWis::Etherwisdevicetable::Etherwisdeviceentry>();
        c->parent = this;
        etherwisdeviceentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> EtherWis::Etherwisdevicetable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : etherwisdeviceentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void EtherWis::Etherwisdevicetable::set_value(const std::string & value_path, std::string value)
{
}

EtherWis::Etherwisdevicetable::Etherwisdeviceentry::Etherwisdeviceentry()
    :
    ifindex{YType::str, "ifIndex"},
    etherwisdevicerxtestpatternerrors{YType::uint32, "etherWisDeviceRxTestPatternErrors"},
    etherwisdevicerxtestpatternmode{YType::enumeration, "etherWisDeviceRxTestPatternMode"},
    etherwisdevicetxtestpatternmode{YType::enumeration, "etherWisDeviceTxTestPatternMode"}
{
    yang_name = "etherWisDeviceEntry"; yang_parent_name = "etherWisDeviceTable";
}

EtherWis::Etherwisdevicetable::Etherwisdeviceentry::~Etherwisdeviceentry()
{
}

bool EtherWis::Etherwisdevicetable::Etherwisdeviceentry::has_data() const
{
    return ifindex.is_set
	|| etherwisdevicerxtestpatternerrors.is_set
	|| etherwisdevicerxtestpatternmode.is_set
	|| etherwisdevicetxtestpatternmode.is_set;
}

bool EtherWis::Etherwisdevicetable::Etherwisdeviceentry::has_operation() const
{
    return is_set(operation)
	|| is_set(ifindex.operation)
	|| is_set(etherwisdevicerxtestpatternerrors.operation)
	|| is_set(etherwisdevicerxtestpatternmode.operation)
	|| is_set(etherwisdevicetxtestpatternmode.operation);
}

std::string EtherWis::Etherwisdevicetable::Etherwisdeviceentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "etherWisDeviceEntry" <<"[ifIndex='" <<ifindex <<"']";

    return path_buffer.str();

}

const EntityPath EtherWis::Etherwisdevicetable::Etherwisdeviceentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "ETHER-WIS:ETHER-WIS/etherWisDeviceTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.operation)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (etherwisdevicerxtestpatternerrors.is_set || is_set(etherwisdevicerxtestpatternerrors.operation)) leaf_name_data.push_back(etherwisdevicerxtestpatternerrors.get_name_leafdata());
    if (etherwisdevicerxtestpatternmode.is_set || is_set(etherwisdevicerxtestpatternmode.operation)) leaf_name_data.push_back(etherwisdevicerxtestpatternmode.get_name_leafdata());
    if (etherwisdevicetxtestpatternmode.is_set || is_set(etherwisdevicetxtestpatternmode.operation)) leaf_name_data.push_back(etherwisdevicetxtestpatternmode.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> EtherWis::Etherwisdevicetable::Etherwisdeviceentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> EtherWis::Etherwisdevicetable::Etherwisdeviceentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void EtherWis::Etherwisdevicetable::Etherwisdeviceentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
    }
    if(value_path == "etherWisDeviceRxTestPatternErrors")
    {
        etherwisdevicerxtestpatternerrors = value;
    }
    if(value_path == "etherWisDeviceRxTestPatternMode")
    {
        etherwisdevicerxtestpatternmode = value;
    }
    if(value_path == "etherWisDeviceTxTestPatternMode")
    {
        etherwisdevicetxtestpatternmode = value;
    }
}

EtherWis::Etherwissectioncurrenttable::Etherwissectioncurrenttable()
{
    yang_name = "etherWisSectionCurrentTable"; yang_parent_name = "ETHER-WIS";
}

EtherWis::Etherwissectioncurrenttable::~Etherwissectioncurrenttable()
{
}

bool EtherWis::Etherwissectioncurrenttable::has_data() const
{
    for (std::size_t index=0; index<etherwissectioncurrententry_.size(); index++)
    {
        if(etherwissectioncurrententry_[index]->has_data())
            return true;
    }
    return false;
}

bool EtherWis::Etherwissectioncurrenttable::has_operation() const
{
    for (std::size_t index=0; index<etherwissectioncurrententry_.size(); index++)
    {
        if(etherwissectioncurrententry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string EtherWis::Etherwissectioncurrenttable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "etherWisSectionCurrentTable";

    return path_buffer.str();

}

const EntityPath EtherWis::Etherwissectioncurrenttable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "ETHER-WIS:ETHER-WIS/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> EtherWis::Etherwissectioncurrenttable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "etherWisSectionCurrentEntry")
    {
        for(auto const & c : etherwissectioncurrententry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<EtherWis::Etherwissectioncurrenttable::Etherwissectioncurrententry>();
        c->parent = this;
        etherwissectioncurrententry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> EtherWis::Etherwissectioncurrenttable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : etherwissectioncurrententry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void EtherWis::Etherwissectioncurrenttable::set_value(const std::string & value_path, std::string value)
{
}

EtherWis::Etherwissectioncurrenttable::Etherwissectioncurrententry::Etherwissectioncurrententry()
    :
    ifindex{YType::str, "ifIndex"},
    etherwissectioncurrentj0received{YType::str, "etherWisSectionCurrentJ0Received"},
    etherwissectioncurrentj0transmitted{YType::str, "etherWisSectionCurrentJ0Transmitted"}
{
    yang_name = "etherWisSectionCurrentEntry"; yang_parent_name = "etherWisSectionCurrentTable";
}

EtherWis::Etherwissectioncurrenttable::Etherwissectioncurrententry::~Etherwissectioncurrententry()
{
}

bool EtherWis::Etherwissectioncurrenttable::Etherwissectioncurrententry::has_data() const
{
    return ifindex.is_set
	|| etherwissectioncurrentj0received.is_set
	|| etherwissectioncurrentj0transmitted.is_set;
}

bool EtherWis::Etherwissectioncurrenttable::Etherwissectioncurrententry::has_operation() const
{
    return is_set(operation)
	|| is_set(ifindex.operation)
	|| is_set(etherwissectioncurrentj0received.operation)
	|| is_set(etherwissectioncurrentj0transmitted.operation);
}

std::string EtherWis::Etherwissectioncurrenttable::Etherwissectioncurrententry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "etherWisSectionCurrentEntry" <<"[ifIndex='" <<ifindex <<"']";

    return path_buffer.str();

}

const EntityPath EtherWis::Etherwissectioncurrenttable::Etherwissectioncurrententry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "ETHER-WIS:ETHER-WIS/etherWisSectionCurrentTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.operation)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (etherwissectioncurrentj0received.is_set || is_set(etherwissectioncurrentj0received.operation)) leaf_name_data.push_back(etherwissectioncurrentj0received.get_name_leafdata());
    if (etherwissectioncurrentj0transmitted.is_set || is_set(etherwissectioncurrentj0transmitted.operation)) leaf_name_data.push_back(etherwissectioncurrentj0transmitted.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> EtherWis::Etherwissectioncurrenttable::Etherwissectioncurrententry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> EtherWis::Etherwissectioncurrenttable::Etherwissectioncurrententry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void EtherWis::Etherwissectioncurrenttable::Etherwissectioncurrententry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
    }
    if(value_path == "etherWisSectionCurrentJ0Received")
    {
        etherwissectioncurrentj0received = value;
    }
    if(value_path == "etherWisSectionCurrentJ0Transmitted")
    {
        etherwissectioncurrentj0transmitted = value;
    }
}

EtherWis::Etherwispathcurrenttable::Etherwispathcurrenttable()
{
    yang_name = "etherWisPathCurrentTable"; yang_parent_name = "ETHER-WIS";
}

EtherWis::Etherwispathcurrenttable::~Etherwispathcurrenttable()
{
}

bool EtherWis::Etherwispathcurrenttable::has_data() const
{
    for (std::size_t index=0; index<etherwispathcurrententry_.size(); index++)
    {
        if(etherwispathcurrententry_[index]->has_data())
            return true;
    }
    return false;
}

bool EtherWis::Etherwispathcurrenttable::has_operation() const
{
    for (std::size_t index=0; index<etherwispathcurrententry_.size(); index++)
    {
        if(etherwispathcurrententry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string EtherWis::Etherwispathcurrenttable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "etherWisPathCurrentTable";

    return path_buffer.str();

}

const EntityPath EtherWis::Etherwispathcurrenttable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "ETHER-WIS:ETHER-WIS/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> EtherWis::Etherwispathcurrenttable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "etherWisPathCurrentEntry")
    {
        for(auto const & c : etherwispathcurrententry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<EtherWis::Etherwispathcurrenttable::Etherwispathcurrententry>();
        c->parent = this;
        etherwispathcurrententry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> EtherWis::Etherwispathcurrenttable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : etherwispathcurrententry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void EtherWis::Etherwispathcurrenttable::set_value(const std::string & value_path, std::string value)
{
}

EtherWis::Etherwispathcurrenttable::Etherwispathcurrententry::Etherwispathcurrententry()
    :
    ifindex{YType::str, "ifIndex"},
    etherwispathcurrentj1received{YType::str, "etherWisPathCurrentJ1Received"},
    etherwispathcurrentj1transmitted{YType::str, "etherWisPathCurrentJ1Transmitted"},
    etherwispathcurrentstatus{YType::bits, "etherWisPathCurrentStatus"}
{
    yang_name = "etherWisPathCurrentEntry"; yang_parent_name = "etherWisPathCurrentTable";
}

EtherWis::Etherwispathcurrenttable::Etherwispathcurrententry::~Etherwispathcurrententry()
{
}

bool EtherWis::Etherwispathcurrenttable::Etherwispathcurrententry::has_data() const
{
    return ifindex.is_set
	|| etherwispathcurrentj1received.is_set
	|| etherwispathcurrentj1transmitted.is_set
	|| etherwispathcurrentstatus.is_set;
}

bool EtherWis::Etherwispathcurrenttable::Etherwispathcurrententry::has_operation() const
{
    return is_set(operation)
	|| is_set(ifindex.operation)
	|| is_set(etherwispathcurrentj1received.operation)
	|| is_set(etherwispathcurrentj1transmitted.operation)
	|| is_set(etherwispathcurrentstatus.operation);
}

std::string EtherWis::Etherwispathcurrenttable::Etherwispathcurrententry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "etherWisPathCurrentEntry" <<"[ifIndex='" <<ifindex <<"']";

    return path_buffer.str();

}

const EntityPath EtherWis::Etherwispathcurrenttable::Etherwispathcurrententry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "ETHER-WIS:ETHER-WIS/etherWisPathCurrentTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.operation)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (etherwispathcurrentj1received.is_set || is_set(etherwispathcurrentj1received.operation)) leaf_name_data.push_back(etherwispathcurrentj1received.get_name_leafdata());
    if (etherwispathcurrentj1transmitted.is_set || is_set(etherwispathcurrentj1transmitted.operation)) leaf_name_data.push_back(etherwispathcurrentj1transmitted.get_name_leafdata());
    if (etherwispathcurrentstatus.is_set || is_set(etherwispathcurrentstatus.operation)) leaf_name_data.push_back(etherwispathcurrentstatus.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> EtherWis::Etherwispathcurrenttable::Etherwispathcurrententry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> EtherWis::Etherwispathcurrenttable::Etherwispathcurrententry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void EtherWis::Etherwispathcurrenttable::Etherwispathcurrententry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
    }
    if(value_path == "etherWisPathCurrentJ1Received")
    {
        etherwispathcurrentj1received = value;
    }
    if(value_path == "etherWisPathCurrentJ1Transmitted")
    {
        etherwispathcurrentj1transmitted = value;
    }
    if(value_path == "etherWisPathCurrentStatus")
    {
        etherwispathcurrentstatus[value] = true;
    }
}

EtherWis::Etherwisfarendpathcurrenttable::Etherwisfarendpathcurrenttable()
{
    yang_name = "etherWisFarEndPathCurrentTable"; yang_parent_name = "ETHER-WIS";
}

EtherWis::Etherwisfarendpathcurrenttable::~Etherwisfarendpathcurrenttable()
{
}

bool EtherWis::Etherwisfarendpathcurrenttable::has_data() const
{
    for (std::size_t index=0; index<etherwisfarendpathcurrententry_.size(); index++)
    {
        if(etherwisfarendpathcurrententry_[index]->has_data())
            return true;
    }
    return false;
}

bool EtherWis::Etherwisfarendpathcurrenttable::has_operation() const
{
    for (std::size_t index=0; index<etherwisfarendpathcurrententry_.size(); index++)
    {
        if(etherwisfarendpathcurrententry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string EtherWis::Etherwisfarendpathcurrenttable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "etherWisFarEndPathCurrentTable";

    return path_buffer.str();

}

const EntityPath EtherWis::Etherwisfarendpathcurrenttable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "ETHER-WIS:ETHER-WIS/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> EtherWis::Etherwisfarendpathcurrenttable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "etherWisFarEndPathCurrentEntry")
    {
        for(auto const & c : etherwisfarendpathcurrententry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<EtherWis::Etherwisfarendpathcurrenttable::Etherwisfarendpathcurrententry>();
        c->parent = this;
        etherwisfarendpathcurrententry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> EtherWis::Etherwisfarendpathcurrenttable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : etherwisfarendpathcurrententry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void EtherWis::Etherwisfarendpathcurrenttable::set_value(const std::string & value_path, std::string value)
{
}

EtherWis::Etherwisfarendpathcurrenttable::Etherwisfarendpathcurrententry::Etherwisfarendpathcurrententry()
    :
    ifindex{YType::str, "ifIndex"},
    etherwisfarendpathcurrentstatus{YType::bits, "etherWisFarEndPathCurrentStatus"}
{
    yang_name = "etherWisFarEndPathCurrentEntry"; yang_parent_name = "etherWisFarEndPathCurrentTable";
}

EtherWis::Etherwisfarendpathcurrenttable::Etherwisfarendpathcurrententry::~Etherwisfarendpathcurrententry()
{
}

bool EtherWis::Etherwisfarendpathcurrenttable::Etherwisfarendpathcurrententry::has_data() const
{
    return ifindex.is_set
	|| etherwisfarendpathcurrentstatus.is_set;
}

bool EtherWis::Etherwisfarendpathcurrenttable::Etherwisfarendpathcurrententry::has_operation() const
{
    return is_set(operation)
	|| is_set(ifindex.operation)
	|| is_set(etherwisfarendpathcurrentstatus.operation);
}

std::string EtherWis::Etherwisfarendpathcurrenttable::Etherwisfarendpathcurrententry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "etherWisFarEndPathCurrentEntry" <<"[ifIndex='" <<ifindex <<"']";

    return path_buffer.str();

}

const EntityPath EtherWis::Etherwisfarendpathcurrenttable::Etherwisfarendpathcurrententry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "ETHER-WIS:ETHER-WIS/etherWisFarEndPathCurrentTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.operation)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (etherwisfarendpathcurrentstatus.is_set || is_set(etherwisfarendpathcurrentstatus.operation)) leaf_name_data.push_back(etherwisfarendpathcurrentstatus.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> EtherWis::Etherwisfarendpathcurrenttable::Etherwisfarendpathcurrententry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> EtherWis::Etherwisfarendpathcurrenttable::Etherwisfarendpathcurrententry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void EtherWis::Etherwisfarendpathcurrenttable::Etherwisfarendpathcurrententry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
    }
    if(value_path == "etherWisFarEndPathCurrentStatus")
    {
        etherwisfarendpathcurrentstatus[value] = true;
    }
}

const Enum::YLeaf EtherWis::Etherwisdevicetable::Etherwisdeviceentry::EtherwisdevicetxtestpatternmodeEnum::none {1, "none"};
const Enum::YLeaf EtherWis::Etherwisdevicetable::Etherwisdeviceentry::EtherwisdevicetxtestpatternmodeEnum::squareWave {2, "squareWave"};
const Enum::YLeaf EtherWis::Etherwisdevicetable::Etherwisdeviceentry::EtherwisdevicetxtestpatternmodeEnum::prbs31 {3, "prbs31"};
const Enum::YLeaf EtherWis::Etherwisdevicetable::Etherwisdeviceentry::EtherwisdevicetxtestpatternmodeEnum::mixedFrequency {4, "mixedFrequency"};

const Enum::YLeaf EtherWis::Etherwisdevicetable::Etherwisdeviceentry::EtherwisdevicerxtestpatternmodeEnum::none {1, "none"};
const Enum::YLeaf EtherWis::Etherwisdevicetable::Etherwisdeviceentry::EtherwisdevicerxtestpatternmodeEnum::prbs31 {3, "prbs31"};
const Enum::YLeaf EtherWis::Etherwisdevicetable::Etherwisdeviceentry::EtherwisdevicerxtestpatternmodeEnum::mixedFrequency {4, "mixedFrequency"};


}
}

