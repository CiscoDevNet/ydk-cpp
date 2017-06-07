
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_native_151.hpp"
#include "Cisco_IOS_XE_native_152.hpp"

namespace ydk {
namespace Cisco_IOS_XE_native {

Native::SnmpServer::Enable::EnableChoice::Traps::Vstack::Vstack()
    :
    addition{YType::empty, "addition"},
    failure{YType::empty, "failure"},
    lost{YType::empty, "lost"},
    operation_{YType::empty, "operation"}
{
    yang_name = "vstack"; yang_parent_name = "traps";
}

Native::SnmpServer::Enable::EnableChoice::Traps::Vstack::~Vstack()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Vstack::has_data() const
{
    return addition.is_set
	|| failure.is_set
	|| lost.is_set
	|| operation_.is_set;
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Vstack::has_operation() const
{
    return is_set(operation)
	|| is_set(addition.operation)
	|| is_set(failure.operation)
	|| is_set(lost.operation)
	|| is_set(operation_.operation);
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Vstack::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vstack";

    return path_buffer.str();

}

const EntityPath Native::SnmpServer::Enable::EnableChoice::Traps::Vstack::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addition.is_set || is_set(addition.operation)) leaf_name_data.push_back(addition.get_name_leafdata());
    if (failure.is_set || is_set(failure.operation)) leaf_name_data.push_back(failure.get_name_leafdata());
    if (lost.is_set || is_set(lost.operation)) leaf_name_data.push_back(lost.get_name_leafdata());
    if (operation_.is_set || is_set(operation_.operation)) leaf_name_data.push_back(operation_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SnmpServer::Enable::EnableChoice::Traps::Vstack::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::Vstack::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Vstack::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "addition")
    {
        addition = value;
    }
    if(value_path == "failure")
    {
        failure = value;
    }
    if(value_path == "lost")
    {
        lost = value;
    }
    if(value_path == "operation")
    {
        operation_ = value;
    }
}

Native::SnmpServer::Enable::EnableChoice::Traps::Wireless::Wireless()
    :
    bsnmobilestation(nullptr) // presence node
{
    yang_name = "wireless"; yang_parent_name = "traps";
}

Native::SnmpServer::Enable::EnableChoice::Traps::Wireless::~Wireless()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Wireless::has_data() const
{
    return (bsnmobilestation !=  nullptr && bsnmobilestation->has_data());
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Wireless::has_operation() const
{
    return is_set(operation)
	|| (bsnmobilestation !=  nullptr && bsnmobilestation->has_operation());
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Wireless::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "wireless";

    return path_buffer.str();

}

const EntityPath Native::SnmpServer::Enable::EnableChoice::Traps::Wireless::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SnmpServer::Enable::EnableChoice::Traps::Wireless::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bsnMobileStation")
    {
        if(bsnmobilestation == nullptr)
        {
            bsnmobilestation = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Wireless::Bsnmobilestation>();
        }
        return bsnmobilestation;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::Wireless::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bsnmobilestation != nullptr)
    {
        children["bsnMobileStation"] = bsnmobilestation;
    }

    return children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Wireless::set_value(const std::string & value_path, std::string value)
{
}

Native::SnmpServer::Enable::EnableChoice::Traps::Wireless::Bsnmobilestation::Bsnmobilestation()
    :
    bsnaccesspoint(nullptr) // presence node
{
    yang_name = "bsnMobileStation"; yang_parent_name = "wireless";
}

Native::SnmpServer::Enable::EnableChoice::Traps::Wireless::Bsnmobilestation::~Bsnmobilestation()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Wireless::Bsnmobilestation::has_data() const
{
    return (bsnaccesspoint !=  nullptr && bsnaccesspoint->has_data());
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Wireless::Bsnmobilestation::has_operation() const
{
    return is_set(operation)
	|| (bsnaccesspoint !=  nullptr && bsnaccesspoint->has_operation());
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Wireless::Bsnmobilestation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bsnMobileStation";

    return path_buffer.str();

}

const EntityPath Native::SnmpServer::Enable::EnableChoice::Traps::Wireless::Bsnmobilestation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/wireless/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SnmpServer::Enable::EnableChoice::Traps::Wireless::Bsnmobilestation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bsnAccessPoint")
    {
        if(bsnaccesspoint == nullptr)
        {
            bsnaccesspoint = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Wireless::Bsnmobilestation::Bsnaccesspoint>();
        }
        return bsnaccesspoint;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::Wireless::Bsnmobilestation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bsnaccesspoint != nullptr)
    {
        children["bsnAccessPoint"] = bsnaccesspoint;
    }

    return children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Wireless::Bsnmobilestation::set_value(const std::string & value_path, std::string value)
{
}

Native::SnmpServer::Enable::EnableChoice::Traps::Wireless::Bsnmobilestation::Bsnaccesspoint::Bsnaccesspoint()
    :
    bsnrogue{YType::empty, "bsnRogue"}
{
    yang_name = "bsnAccessPoint"; yang_parent_name = "bsnMobileStation";
}

Native::SnmpServer::Enable::EnableChoice::Traps::Wireless::Bsnmobilestation::Bsnaccesspoint::~Bsnaccesspoint()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Wireless::Bsnmobilestation::Bsnaccesspoint::has_data() const
{
    return bsnrogue.is_set;
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Wireless::Bsnmobilestation::Bsnaccesspoint::has_operation() const
{
    return is_set(operation)
	|| is_set(bsnrogue.operation);
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Wireless::Bsnmobilestation::Bsnaccesspoint::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bsnAccessPoint";

    return path_buffer.str();

}

const EntityPath Native::SnmpServer::Enable::EnableChoice::Traps::Wireless::Bsnmobilestation::Bsnaccesspoint::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/wireless/bsnMobileStation/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bsnrogue.is_set || is_set(bsnrogue.operation)) leaf_name_data.push_back(bsnrogue.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SnmpServer::Enable::EnableChoice::Traps::Wireless::Bsnmobilestation::Bsnaccesspoint::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::Wireless::Bsnmobilestation::Bsnaccesspoint::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Wireless::Bsnmobilestation::Bsnaccesspoint::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bsnRogue")
    {
        bsnrogue = value;
    }
}

Native::SnmpServer::Engineid::Engineid()
    :
    local{YType::str, "local"}
    	,
    remote(std::make_shared<Native::SnmpServer::Engineid::Remote>())
{
    remote->parent = this;

    yang_name = "engineID"; yang_parent_name = "snmp-server";
}

Native::SnmpServer::Engineid::~Engineid()
{
}

bool Native::SnmpServer::Engineid::has_data() const
{
    return local.is_set
	|| (remote !=  nullptr && remote->has_data());
}

bool Native::SnmpServer::Engineid::has_operation() const
{
    return is_set(operation)
	|| is_set(local.operation)
	|| (remote !=  nullptr && remote->has_operation());
}

std::string Native::SnmpServer::Engineid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-snmp:engineID";

    return path_buffer.str();

}

const EntityPath Native::SnmpServer::Engineid::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/snmp-server/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local.is_set || is_set(local.operation)) leaf_name_data.push_back(local.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SnmpServer::Engineid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "remote")
    {
        if(remote == nullptr)
        {
            remote = std::make_shared<Native::SnmpServer::Engineid::Remote>();
        }
        return remote;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::Engineid::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(remote != nullptr)
    {
        children["remote"] = remote;
    }

    return children;
}

void Native::SnmpServer::Engineid::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "local")
    {
        local = value;
    }
}

Native::SnmpServer::Engineid::Remote::Remote()
{
    yang_name = "remote"; yang_parent_name = "engineID";
}

Native::SnmpServer::Engineid::Remote::~Remote()
{
}

bool Native::SnmpServer::Engineid::Remote::has_data() const
{
    return false;
}

bool Native::SnmpServer::Engineid::Remote::has_operation() const
{
    return is_set(operation);
}

std::string Native::SnmpServer::Engineid::Remote::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote";

    return path_buffer.str();

}

const EntityPath Native::SnmpServer::Engineid::Remote::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:engineID/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SnmpServer::Engineid::Remote::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::Engineid::Remote::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SnmpServer::Engineid::Remote::set_value(const std::string & value_path, std::string value)
{
}

Native::SnmpServer::Group::Group()
    :
    id{YType::str, "id"}
    	,
    v1(std::make_shared<Native::SnmpServer::Group::V1>())
	,v2c(std::make_shared<Native::SnmpServer::Group::V2C>())
	,v3(std::make_shared<Native::SnmpServer::Group::V3>())
{
    v1->parent = this;

    v2c->parent = this;

    v3->parent = this;

    yang_name = "group"; yang_parent_name = "snmp-server";
}

Native::SnmpServer::Group::~Group()
{
}

bool Native::SnmpServer::Group::has_data() const
{
    return id.is_set
	|| (v1 !=  nullptr && v1->has_data())
	|| (v2c !=  nullptr && v2c->has_data())
	|| (v3 !=  nullptr && v3->has_data());
}

bool Native::SnmpServer::Group::has_operation() const
{
    return is_set(operation)
	|| is_set(id.operation)
	|| (v1 !=  nullptr && v1->has_operation())
	|| (v2c !=  nullptr && v2c->has_operation())
	|| (v3 !=  nullptr && v3->has_operation());
}

std::string Native::SnmpServer::Group::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-snmp:group" <<"[id='" <<id <<"']";

    return path_buffer.str();

}

const EntityPath Native::SnmpServer::Group::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/snmp-server/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.operation)) leaf_name_data.push_back(id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SnmpServer::Group::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "v1")
    {
        if(v1 == nullptr)
        {
            v1 = std::make_shared<Native::SnmpServer::Group::V1>();
        }
        return v1;
    }

    if(child_yang_name == "v2c")
    {
        if(v2c == nullptr)
        {
            v2c = std::make_shared<Native::SnmpServer::Group::V2C>();
        }
        return v2c;
    }

    if(child_yang_name == "v3")
    {
        if(v3 == nullptr)
        {
            v3 = std::make_shared<Native::SnmpServer::Group::V3>();
        }
        return v3;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::Group::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(v1 != nullptr)
    {
        children["v1"] = v1;
    }

    if(v2c != nullptr)
    {
        children["v2c"] = v2c;
    }

    if(v3 != nullptr)
    {
        children["v3"] = v3;
    }

    return children;
}

void Native::SnmpServer::Group::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "id")
    {
        id = value;
    }
}

Native::SnmpServer::Group::V1::V1()
{
    yang_name = "v1"; yang_parent_name = "group";
}

Native::SnmpServer::Group::V1::~V1()
{
}

bool Native::SnmpServer::Group::V1::has_data() const
{
    return false;
}

bool Native::SnmpServer::Group::V1::has_operation() const
{
    return is_set(operation);
}

std::string Native::SnmpServer::Group::V1::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "v1";

    return path_buffer.str();

}

const EntityPath Native::SnmpServer::Group::V1::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'V1' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SnmpServer::Group::V1::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::Group::V1::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SnmpServer::Group::V1::set_value(const std::string & value_path, std::string value)
{
}

Native::SnmpServer::Group::V2C::V2C()
{
    yang_name = "v2c"; yang_parent_name = "group";
}

Native::SnmpServer::Group::V2C::~V2C()
{
}

bool Native::SnmpServer::Group::V2C::has_data() const
{
    return false;
}

bool Native::SnmpServer::Group::V2C::has_operation() const
{
    return is_set(operation);
}

std::string Native::SnmpServer::Group::V2C::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "v2c";

    return path_buffer.str();

}

const EntityPath Native::SnmpServer::Group::V2C::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'V2C' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SnmpServer::Group::V2C::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::Group::V2C::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SnmpServer::Group::V2C::set_value(const std::string & value_path, std::string value)
{
}

Native::SnmpServer::Group::V3::V3()
    :
    access{YType::str, "access"},
    context{YType::str, "context"},
    match{YType::enumeration, "match"},
    notify{YType::str, "notify"},
    read{YType::str, "read"},
    security_level{YType::enumeration, "security-level"},
    write{YType::str, "write"}
{
    yang_name = "v3"; yang_parent_name = "group";
}

Native::SnmpServer::Group::V3::~V3()
{
}

bool Native::SnmpServer::Group::V3::has_data() const
{
    return access.is_set
	|| context.is_set
	|| match.is_set
	|| notify.is_set
	|| read.is_set
	|| security_level.is_set
	|| write.is_set;
}

bool Native::SnmpServer::Group::V3::has_operation() const
{
    return is_set(operation)
	|| is_set(access.operation)
	|| is_set(context.operation)
	|| is_set(match.operation)
	|| is_set(notify.operation)
	|| is_set(read.operation)
	|| is_set(security_level.operation)
	|| is_set(write.operation);
}

std::string Native::SnmpServer::Group::V3::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "v3";

    return path_buffer.str();

}

const EntityPath Native::SnmpServer::Group::V3::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'V3' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (access.is_set || is_set(access.operation)) leaf_name_data.push_back(access.get_name_leafdata());
    if (context.is_set || is_set(context.operation)) leaf_name_data.push_back(context.get_name_leafdata());
    if (match.is_set || is_set(match.operation)) leaf_name_data.push_back(match.get_name_leafdata());
    if (notify.is_set || is_set(notify.operation)) leaf_name_data.push_back(notify.get_name_leafdata());
    if (read.is_set || is_set(read.operation)) leaf_name_data.push_back(read.get_name_leafdata());
    if (security_level.is_set || is_set(security_level.operation)) leaf_name_data.push_back(security_level.get_name_leafdata());
    if (write.is_set || is_set(write.operation)) leaf_name_data.push_back(write.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SnmpServer::Group::V3::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::Group::V3::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SnmpServer::Group::V3::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "access")
    {
        access = value;
    }
    if(value_path == "context")
    {
        context = value;
    }
    if(value_path == "match")
    {
        match = value;
    }
    if(value_path == "notify")
    {
        notify = value;
    }
    if(value_path == "read")
    {
        read = value;
    }
    if(value_path == "security-level")
    {
        security_level = value;
    }
    if(value_path == "write")
    {
        write = value;
    }
}

Native::SnmpServer::Host::Host()
    :
    ip_address{YType::str, "ip-address"},
    community_string{YType::str, "community-string"},
    informs{YType::empty, "informs"},
    security_level{YType::enumeration, "security-level"},
    traps{YType::empty, "traps"},
    version{YType::enumeration, "version"},
    vrf{YType::str, "vrf"}
    	,
    trap_enable(std::make_shared<Native::SnmpServer::Host::TrapEnable>())
{
    trap_enable->parent = this;

    yang_name = "host"; yang_parent_name = "snmp-server";
}

Native::SnmpServer::Host::~Host()
{
}

bool Native::SnmpServer::Host::has_data() const
{
    return ip_address.is_set
	|| community_string.is_set
	|| informs.is_set
	|| security_level.is_set
	|| traps.is_set
	|| version.is_set
	|| vrf.is_set
	|| (trap_enable !=  nullptr && trap_enable->has_data());
}

bool Native::SnmpServer::Host::has_operation() const
{
    return is_set(operation)
	|| is_set(ip_address.operation)
	|| is_set(community_string.operation)
	|| is_set(informs.operation)
	|| is_set(security_level.operation)
	|| is_set(traps.operation)
	|| is_set(version.operation)
	|| is_set(vrf.operation)
	|| (trap_enable !=  nullptr && trap_enable->has_operation());
}

std::string Native::SnmpServer::Host::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-snmp:host" <<"[ip-address='" <<ip_address <<"']" <<"[community-string='" <<community_string <<"']";

    return path_buffer.str();

}

const EntityPath Native::SnmpServer::Host::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/snmp-server/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_address.is_set || is_set(ip_address.operation)) leaf_name_data.push_back(ip_address.get_name_leafdata());
    if (community_string.is_set || is_set(community_string.operation)) leaf_name_data.push_back(community_string.get_name_leafdata());
    if (informs.is_set || is_set(informs.operation)) leaf_name_data.push_back(informs.get_name_leafdata());
    if (security_level.is_set || is_set(security_level.operation)) leaf_name_data.push_back(security_level.get_name_leafdata());
    if (traps.is_set || is_set(traps.operation)) leaf_name_data.push_back(traps.get_name_leafdata());
    if (version.is_set || is_set(version.operation)) leaf_name_data.push_back(version.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.operation)) leaf_name_data.push_back(vrf.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SnmpServer::Host::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "trap-enable")
    {
        if(trap_enable == nullptr)
        {
            trap_enable = std::make_shared<Native::SnmpServer::Host::TrapEnable>();
        }
        return trap_enable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::Host::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(trap_enable != nullptr)
    {
        children["trap-enable"] = trap_enable;
    }

    return children;
}

void Native::SnmpServer::Host::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ip-address")
    {
        ip_address = value;
    }
    if(value_path == "community-string")
    {
        community_string = value;
    }
    if(value_path == "informs")
    {
        informs = value;
    }
    if(value_path == "security-level")
    {
        security_level = value;
    }
    if(value_path == "traps")
    {
        traps = value;
    }
    if(value_path == "version")
    {
        version = value;
    }
    if(value_path == "vrf")
    {
        vrf = value;
    }
}

Native::SnmpServer::Host::TrapEnable::TrapEnable()
    :
    aaa_server{YType::empty, "aaa_server"},
    alarms{YType::empty, "alarms"},
    atm{YType::empty, "atm"},
    bfd{YType::empty, "bfd"},
    bgp{YType::empty, "bgp"},
    bstun{YType::empty, "bstun"},
    bulkstat{YType::empty, "bulkstat"},
    call_home{YType::empty, "call-home"},
    casa{YType::empty, "casa"},
    cef{YType::empty, "cef"},
    cnpd{YType::empty, "cnpd"},
    config{YType::empty, "config"},
    config_copy{YType::empty, "config-copy"},
    config_ctid{YType::empty, "config-ctid"},
    cpu{YType::empty, "cpu"},
    dhcp{YType::empty, "dhcp"},
    dlsw{YType::empty, "dlsw"},
    ds1{YType::empty, "ds1"},
    dsp{YType::empty, "dsp"},
    dspu{YType::empty, "dspu"},
    eigrp{YType::empty, "eigrp"},
    entity_{YType::empty, "entity"},
    entity_diag{YType::empty, "entity-diag"},
    entity_qfp{YType::empty, "entity-qfp"},
    entity_state{YType::empty, "entity-state"},
    ethernet_cfm{YType::empty, "ethernet-cfm"},
    evc{YType::empty, "evc"},
    event_manager{YType::empty, "event-manager"},
    firewall{YType::empty, "firewall"},
    flash{YType::empty, "flash"},
    flowmon{YType::empty, "flowmon"},
    frame_relay{YType::empty, "frame-relay"},
    fru_ctrl{YType::empty, "fru-ctrl"},
    gdoi{YType::empty, "gdoi"},
    hsrp{YType::empty, "hsrp"},
    iplocalpool{YType::empty, "iplocalpool"},
    ipmulticast{YType::empty, "ipmulticast"},
    ipsec{YType::empty, "ipsec"},
    ipsla{YType::empty, "ipsla"},
    isakmp{YType::empty, "isakmp"},
    isg_mib{YType::empty, "isg-mib"},
    isis{YType::empty, "isis"},
    l2tun_pseudowire_status{YType::empty, "l2tun-pseudowire-status"},
    l2tun_session{YType::empty, "l2tun-session"},
    license{YType::empty, "license"},
    memory{YType::empty, "memory"},
    mpls_fast_reroute{YType::empty, "mpls-fast-reroute"},
    mpls_ldp{YType::empty, "mpls-ldp"},
    mpls_traffic_eng{YType::empty, "mpls-traffic-eng"},
    mpls_vpn{YType::empty, "mpls-vpn"},
    msdp{YType::empty, "msdp"},
    mvpn{YType::empty, "mvpn"},
    nhrp{YType::empty, "nhrp"},
    ospf{YType::empty, "ospf"},
    ospfv3{YType::empty, "ospfv3"},
    pfr{YType::empty, "pfr"},
    pim{YType::empty, "pim"},
    pw_vc{YType::empty, "pw-vc"},
    resource_policy{YType::empty, "resource-policy"},
    rf{YType::empty, "rf"},
    rsrb{YType::empty, "rsrb"},
    rsvp{YType::empty, "rsvp"},
    sdlc{YType::empty, "sdlc"},
    sdllc{YType::empty, "sdllc"},
    snmp{YType::empty, "snmp"},
    sonet{YType::empty, "sonet"},
    srp{YType::empty, "srp"},
    stun{YType::empty, "stun"},
    syslog{YType::empty, "syslog"},
    trustsec_sxp{YType::empty, "trustsec-sxp"},
    tty{YType::empty, "tty"},
    udp_port{YType::uint16, "udp-port"},
    voice{YType::empty, "voice"},
    vrfmib{YType::empty, "vrfmib"},
    vrrp{YType::empty, "vrrp"},
    x25{YType::empty, "x25"}
{
    yang_name = "trap-enable"; yang_parent_name = "host";
}

Native::SnmpServer::Host::TrapEnable::~TrapEnable()
{
}

bool Native::SnmpServer::Host::TrapEnable::has_data() const
{
    return aaa_server.is_set
	|| alarms.is_set
	|| atm.is_set
	|| bfd.is_set
	|| bgp.is_set
	|| bstun.is_set
	|| bulkstat.is_set
	|| call_home.is_set
	|| casa.is_set
	|| cef.is_set
	|| cnpd.is_set
	|| config.is_set
	|| config_copy.is_set
	|| config_ctid.is_set
	|| cpu.is_set
	|| dhcp.is_set
	|| dlsw.is_set
	|| ds1.is_set
	|| dsp.is_set
	|| dspu.is_set
	|| eigrp.is_set
	|| entity_.is_set
	|| entity_diag.is_set
	|| entity_qfp.is_set
	|| entity_state.is_set
	|| ethernet_cfm.is_set
	|| evc.is_set
	|| event_manager.is_set
	|| firewall.is_set
	|| flash.is_set
	|| flowmon.is_set
	|| frame_relay.is_set
	|| fru_ctrl.is_set
	|| gdoi.is_set
	|| hsrp.is_set
	|| iplocalpool.is_set
	|| ipmulticast.is_set
	|| ipsec.is_set
	|| ipsla.is_set
	|| isakmp.is_set
	|| isg_mib.is_set
	|| isis.is_set
	|| l2tun_pseudowire_status.is_set
	|| l2tun_session.is_set
	|| license.is_set
	|| memory.is_set
	|| mpls_fast_reroute.is_set
	|| mpls_ldp.is_set
	|| mpls_traffic_eng.is_set
	|| mpls_vpn.is_set
	|| msdp.is_set
	|| mvpn.is_set
	|| nhrp.is_set
	|| ospf.is_set
	|| ospfv3.is_set
	|| pfr.is_set
	|| pim.is_set
	|| pw_vc.is_set
	|| resource_policy.is_set
	|| rf.is_set
	|| rsrb.is_set
	|| rsvp.is_set
	|| sdlc.is_set
	|| sdllc.is_set
	|| snmp.is_set
	|| sonet.is_set
	|| srp.is_set
	|| stun.is_set
	|| syslog.is_set
	|| trustsec_sxp.is_set
	|| tty.is_set
	|| udp_port.is_set
	|| voice.is_set
	|| vrfmib.is_set
	|| vrrp.is_set
	|| x25.is_set;
}

bool Native::SnmpServer::Host::TrapEnable::has_operation() const
{
    return is_set(operation)
	|| is_set(aaa_server.operation)
	|| is_set(alarms.operation)
	|| is_set(atm.operation)
	|| is_set(bfd.operation)
	|| is_set(bgp.operation)
	|| is_set(bstun.operation)
	|| is_set(bulkstat.operation)
	|| is_set(call_home.operation)
	|| is_set(casa.operation)
	|| is_set(cef.operation)
	|| is_set(cnpd.operation)
	|| is_set(config.operation)
	|| is_set(config_copy.operation)
	|| is_set(config_ctid.operation)
	|| is_set(cpu.operation)
	|| is_set(dhcp.operation)
	|| is_set(dlsw.operation)
	|| is_set(ds1.operation)
	|| is_set(dsp.operation)
	|| is_set(dspu.operation)
	|| is_set(eigrp.operation)
	|| is_set(entity_.operation)
	|| is_set(entity_diag.operation)
	|| is_set(entity_qfp.operation)
	|| is_set(entity_state.operation)
	|| is_set(ethernet_cfm.operation)
	|| is_set(evc.operation)
	|| is_set(event_manager.operation)
	|| is_set(firewall.operation)
	|| is_set(flash.operation)
	|| is_set(flowmon.operation)
	|| is_set(frame_relay.operation)
	|| is_set(fru_ctrl.operation)
	|| is_set(gdoi.operation)
	|| is_set(hsrp.operation)
	|| is_set(iplocalpool.operation)
	|| is_set(ipmulticast.operation)
	|| is_set(ipsec.operation)
	|| is_set(ipsla.operation)
	|| is_set(isakmp.operation)
	|| is_set(isg_mib.operation)
	|| is_set(isis.operation)
	|| is_set(l2tun_pseudowire_status.operation)
	|| is_set(l2tun_session.operation)
	|| is_set(license.operation)
	|| is_set(memory.operation)
	|| is_set(mpls_fast_reroute.operation)
	|| is_set(mpls_ldp.operation)
	|| is_set(mpls_traffic_eng.operation)
	|| is_set(mpls_vpn.operation)
	|| is_set(msdp.operation)
	|| is_set(mvpn.operation)
	|| is_set(nhrp.operation)
	|| is_set(ospf.operation)
	|| is_set(ospfv3.operation)
	|| is_set(pfr.operation)
	|| is_set(pim.operation)
	|| is_set(pw_vc.operation)
	|| is_set(resource_policy.operation)
	|| is_set(rf.operation)
	|| is_set(rsrb.operation)
	|| is_set(rsvp.operation)
	|| is_set(sdlc.operation)
	|| is_set(sdllc.operation)
	|| is_set(snmp.operation)
	|| is_set(sonet.operation)
	|| is_set(srp.operation)
	|| is_set(stun.operation)
	|| is_set(syslog.operation)
	|| is_set(trustsec_sxp.operation)
	|| is_set(tty.operation)
	|| is_set(udp_port.operation)
	|| is_set(voice.operation)
	|| is_set(vrfmib.operation)
	|| is_set(vrrp.operation)
	|| is_set(x25.operation);
}

std::string Native::SnmpServer::Host::TrapEnable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trap-enable";

    return path_buffer.str();

}

const EntityPath Native::SnmpServer::Host::TrapEnable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TrapEnable' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aaa_server.is_set || is_set(aaa_server.operation)) leaf_name_data.push_back(aaa_server.get_name_leafdata());
    if (alarms.is_set || is_set(alarms.operation)) leaf_name_data.push_back(alarms.get_name_leafdata());
    if (atm.is_set || is_set(atm.operation)) leaf_name_data.push_back(atm.get_name_leafdata());
    if (bfd.is_set || is_set(bfd.operation)) leaf_name_data.push_back(bfd.get_name_leafdata());
    if (bgp.is_set || is_set(bgp.operation)) leaf_name_data.push_back(bgp.get_name_leafdata());
    if (bstun.is_set || is_set(bstun.operation)) leaf_name_data.push_back(bstun.get_name_leafdata());
    if (bulkstat.is_set || is_set(bulkstat.operation)) leaf_name_data.push_back(bulkstat.get_name_leafdata());
    if (call_home.is_set || is_set(call_home.operation)) leaf_name_data.push_back(call_home.get_name_leafdata());
    if (casa.is_set || is_set(casa.operation)) leaf_name_data.push_back(casa.get_name_leafdata());
    if (cef.is_set || is_set(cef.operation)) leaf_name_data.push_back(cef.get_name_leafdata());
    if (cnpd.is_set || is_set(cnpd.operation)) leaf_name_data.push_back(cnpd.get_name_leafdata());
    if (config.is_set || is_set(config.operation)) leaf_name_data.push_back(config.get_name_leafdata());
    if (config_copy.is_set || is_set(config_copy.operation)) leaf_name_data.push_back(config_copy.get_name_leafdata());
    if (config_ctid.is_set || is_set(config_ctid.operation)) leaf_name_data.push_back(config_ctid.get_name_leafdata());
    if (cpu.is_set || is_set(cpu.operation)) leaf_name_data.push_back(cpu.get_name_leafdata());
    if (dhcp.is_set || is_set(dhcp.operation)) leaf_name_data.push_back(dhcp.get_name_leafdata());
    if (dlsw.is_set || is_set(dlsw.operation)) leaf_name_data.push_back(dlsw.get_name_leafdata());
    if (ds1.is_set || is_set(ds1.operation)) leaf_name_data.push_back(ds1.get_name_leafdata());
    if (dsp.is_set || is_set(dsp.operation)) leaf_name_data.push_back(dsp.get_name_leafdata());
    if (dspu.is_set || is_set(dspu.operation)) leaf_name_data.push_back(dspu.get_name_leafdata());
    if (eigrp.is_set || is_set(eigrp.operation)) leaf_name_data.push_back(eigrp.get_name_leafdata());
    if (entity_.is_set || is_set(entity_.operation)) leaf_name_data.push_back(entity_.get_name_leafdata());
    if (entity_diag.is_set || is_set(entity_diag.operation)) leaf_name_data.push_back(entity_diag.get_name_leafdata());
    if (entity_qfp.is_set || is_set(entity_qfp.operation)) leaf_name_data.push_back(entity_qfp.get_name_leafdata());
    if (entity_state.is_set || is_set(entity_state.operation)) leaf_name_data.push_back(entity_state.get_name_leafdata());
    if (ethernet_cfm.is_set || is_set(ethernet_cfm.operation)) leaf_name_data.push_back(ethernet_cfm.get_name_leafdata());
    if (evc.is_set || is_set(evc.operation)) leaf_name_data.push_back(evc.get_name_leafdata());
    if (event_manager.is_set || is_set(event_manager.operation)) leaf_name_data.push_back(event_manager.get_name_leafdata());
    if (firewall.is_set || is_set(firewall.operation)) leaf_name_data.push_back(firewall.get_name_leafdata());
    if (flash.is_set || is_set(flash.operation)) leaf_name_data.push_back(flash.get_name_leafdata());
    if (flowmon.is_set || is_set(flowmon.operation)) leaf_name_data.push_back(flowmon.get_name_leafdata());
    if (frame_relay.is_set || is_set(frame_relay.operation)) leaf_name_data.push_back(frame_relay.get_name_leafdata());
    if (fru_ctrl.is_set || is_set(fru_ctrl.operation)) leaf_name_data.push_back(fru_ctrl.get_name_leafdata());
    if (gdoi.is_set || is_set(gdoi.operation)) leaf_name_data.push_back(gdoi.get_name_leafdata());
    if (hsrp.is_set || is_set(hsrp.operation)) leaf_name_data.push_back(hsrp.get_name_leafdata());
    if (iplocalpool.is_set || is_set(iplocalpool.operation)) leaf_name_data.push_back(iplocalpool.get_name_leafdata());
    if (ipmulticast.is_set || is_set(ipmulticast.operation)) leaf_name_data.push_back(ipmulticast.get_name_leafdata());
    if (ipsec.is_set || is_set(ipsec.operation)) leaf_name_data.push_back(ipsec.get_name_leafdata());
    if (ipsla.is_set || is_set(ipsla.operation)) leaf_name_data.push_back(ipsla.get_name_leafdata());
    if (isakmp.is_set || is_set(isakmp.operation)) leaf_name_data.push_back(isakmp.get_name_leafdata());
    if (isg_mib.is_set || is_set(isg_mib.operation)) leaf_name_data.push_back(isg_mib.get_name_leafdata());
    if (isis.is_set || is_set(isis.operation)) leaf_name_data.push_back(isis.get_name_leafdata());
    if (l2tun_pseudowire_status.is_set || is_set(l2tun_pseudowire_status.operation)) leaf_name_data.push_back(l2tun_pseudowire_status.get_name_leafdata());
    if (l2tun_session.is_set || is_set(l2tun_session.operation)) leaf_name_data.push_back(l2tun_session.get_name_leafdata());
    if (license.is_set || is_set(license.operation)) leaf_name_data.push_back(license.get_name_leafdata());
    if (memory.is_set || is_set(memory.operation)) leaf_name_data.push_back(memory.get_name_leafdata());
    if (mpls_fast_reroute.is_set || is_set(mpls_fast_reroute.operation)) leaf_name_data.push_back(mpls_fast_reroute.get_name_leafdata());
    if (mpls_ldp.is_set || is_set(mpls_ldp.operation)) leaf_name_data.push_back(mpls_ldp.get_name_leafdata());
    if (mpls_traffic_eng.is_set || is_set(mpls_traffic_eng.operation)) leaf_name_data.push_back(mpls_traffic_eng.get_name_leafdata());
    if (mpls_vpn.is_set || is_set(mpls_vpn.operation)) leaf_name_data.push_back(mpls_vpn.get_name_leafdata());
    if (msdp.is_set || is_set(msdp.operation)) leaf_name_data.push_back(msdp.get_name_leafdata());
    if (mvpn.is_set || is_set(mvpn.operation)) leaf_name_data.push_back(mvpn.get_name_leafdata());
    if (nhrp.is_set || is_set(nhrp.operation)) leaf_name_data.push_back(nhrp.get_name_leafdata());
    if (ospf.is_set || is_set(ospf.operation)) leaf_name_data.push_back(ospf.get_name_leafdata());
    if (ospfv3.is_set || is_set(ospfv3.operation)) leaf_name_data.push_back(ospfv3.get_name_leafdata());
    if (pfr.is_set || is_set(pfr.operation)) leaf_name_data.push_back(pfr.get_name_leafdata());
    if (pim.is_set || is_set(pim.operation)) leaf_name_data.push_back(pim.get_name_leafdata());
    if (pw_vc.is_set || is_set(pw_vc.operation)) leaf_name_data.push_back(pw_vc.get_name_leafdata());
    if (resource_policy.is_set || is_set(resource_policy.operation)) leaf_name_data.push_back(resource_policy.get_name_leafdata());
    if (rf.is_set || is_set(rf.operation)) leaf_name_data.push_back(rf.get_name_leafdata());
    if (rsrb.is_set || is_set(rsrb.operation)) leaf_name_data.push_back(rsrb.get_name_leafdata());
    if (rsvp.is_set || is_set(rsvp.operation)) leaf_name_data.push_back(rsvp.get_name_leafdata());
    if (sdlc.is_set || is_set(sdlc.operation)) leaf_name_data.push_back(sdlc.get_name_leafdata());
    if (sdllc.is_set || is_set(sdllc.operation)) leaf_name_data.push_back(sdllc.get_name_leafdata());
    if (snmp.is_set || is_set(snmp.operation)) leaf_name_data.push_back(snmp.get_name_leafdata());
    if (sonet.is_set || is_set(sonet.operation)) leaf_name_data.push_back(sonet.get_name_leafdata());
    if (srp.is_set || is_set(srp.operation)) leaf_name_data.push_back(srp.get_name_leafdata());
    if (stun.is_set || is_set(stun.operation)) leaf_name_data.push_back(stun.get_name_leafdata());
    if (syslog.is_set || is_set(syslog.operation)) leaf_name_data.push_back(syslog.get_name_leafdata());
    if (trustsec_sxp.is_set || is_set(trustsec_sxp.operation)) leaf_name_data.push_back(trustsec_sxp.get_name_leafdata());
    if (tty.is_set || is_set(tty.operation)) leaf_name_data.push_back(tty.get_name_leafdata());
    if (udp_port.is_set || is_set(udp_port.operation)) leaf_name_data.push_back(udp_port.get_name_leafdata());
    if (voice.is_set || is_set(voice.operation)) leaf_name_data.push_back(voice.get_name_leafdata());
    if (vrfmib.is_set || is_set(vrfmib.operation)) leaf_name_data.push_back(vrfmib.get_name_leafdata());
    if (vrrp.is_set || is_set(vrrp.operation)) leaf_name_data.push_back(vrrp.get_name_leafdata());
    if (x25.is_set || is_set(x25.operation)) leaf_name_data.push_back(x25.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SnmpServer::Host::TrapEnable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::Host::TrapEnable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SnmpServer::Host::TrapEnable::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "aaa_server")
    {
        aaa_server = value;
    }
    if(value_path == "alarms")
    {
        alarms = value;
    }
    if(value_path == "atm")
    {
        atm = value;
    }
    if(value_path == "bfd")
    {
        bfd = value;
    }
    if(value_path == "bgp")
    {
        bgp = value;
    }
    if(value_path == "bstun")
    {
        bstun = value;
    }
    if(value_path == "bulkstat")
    {
        bulkstat = value;
    }
    if(value_path == "call-home")
    {
        call_home = value;
    }
    if(value_path == "casa")
    {
        casa = value;
    }
    if(value_path == "cef")
    {
        cef = value;
    }
    if(value_path == "cnpd")
    {
        cnpd = value;
    }
    if(value_path == "config")
    {
        config = value;
    }
    if(value_path == "config-copy")
    {
        config_copy = value;
    }
    if(value_path == "config-ctid")
    {
        config_ctid = value;
    }
    if(value_path == "cpu")
    {
        cpu = value;
    }
    if(value_path == "dhcp")
    {
        dhcp = value;
    }
    if(value_path == "dlsw")
    {
        dlsw = value;
    }
    if(value_path == "ds1")
    {
        ds1 = value;
    }
    if(value_path == "dsp")
    {
        dsp = value;
    }
    if(value_path == "dspu")
    {
        dspu = value;
    }
    if(value_path == "eigrp")
    {
        eigrp = value;
    }
    if(value_path == "entity")
    {
        entity_ = value;
    }
    if(value_path == "entity-diag")
    {
        entity_diag = value;
    }
    if(value_path == "entity-qfp")
    {
        entity_qfp = value;
    }
    if(value_path == "entity-state")
    {
        entity_state = value;
    }
    if(value_path == "ethernet-cfm")
    {
        ethernet_cfm = value;
    }
    if(value_path == "evc")
    {
        evc = value;
    }
    if(value_path == "event-manager")
    {
        event_manager = value;
    }
    if(value_path == "firewall")
    {
        firewall = value;
    }
    if(value_path == "flash")
    {
        flash = value;
    }
    if(value_path == "flowmon")
    {
        flowmon = value;
    }
    if(value_path == "frame-relay")
    {
        frame_relay = value;
    }
    if(value_path == "fru-ctrl")
    {
        fru_ctrl = value;
    }
    if(value_path == "gdoi")
    {
        gdoi = value;
    }
    if(value_path == "hsrp")
    {
        hsrp = value;
    }
    if(value_path == "iplocalpool")
    {
        iplocalpool = value;
    }
    if(value_path == "ipmulticast")
    {
        ipmulticast = value;
    }
    if(value_path == "ipsec")
    {
        ipsec = value;
    }
    if(value_path == "ipsla")
    {
        ipsla = value;
    }
    if(value_path == "isakmp")
    {
        isakmp = value;
    }
    if(value_path == "isg-mib")
    {
        isg_mib = value;
    }
    if(value_path == "isis")
    {
        isis = value;
    }
    if(value_path == "l2tun-pseudowire-status")
    {
        l2tun_pseudowire_status = value;
    }
    if(value_path == "l2tun-session")
    {
        l2tun_session = value;
    }
    if(value_path == "license")
    {
        license = value;
    }
    if(value_path == "memory")
    {
        memory = value;
    }
    if(value_path == "mpls-fast-reroute")
    {
        mpls_fast_reroute = value;
    }
    if(value_path == "mpls-ldp")
    {
        mpls_ldp = value;
    }
    if(value_path == "mpls-traffic-eng")
    {
        mpls_traffic_eng = value;
    }
    if(value_path == "mpls-vpn")
    {
        mpls_vpn = value;
    }
    if(value_path == "msdp")
    {
        msdp = value;
    }
    if(value_path == "mvpn")
    {
        mvpn = value;
    }
    if(value_path == "nhrp")
    {
        nhrp = value;
    }
    if(value_path == "ospf")
    {
        ospf = value;
    }
    if(value_path == "ospfv3")
    {
        ospfv3 = value;
    }
    if(value_path == "pfr")
    {
        pfr = value;
    }
    if(value_path == "pim")
    {
        pim = value;
    }
    if(value_path == "pw-vc")
    {
        pw_vc = value;
    }
    if(value_path == "resource-policy")
    {
        resource_policy = value;
    }
    if(value_path == "rf")
    {
        rf = value;
    }
    if(value_path == "rsrb")
    {
        rsrb = value;
    }
    if(value_path == "rsvp")
    {
        rsvp = value;
    }
    if(value_path == "sdlc")
    {
        sdlc = value;
    }
    if(value_path == "sdllc")
    {
        sdllc = value;
    }
    if(value_path == "snmp")
    {
        snmp = value;
    }
    if(value_path == "sonet")
    {
        sonet = value;
    }
    if(value_path == "srp")
    {
        srp = value;
    }
    if(value_path == "stun")
    {
        stun = value;
    }
    if(value_path == "syslog")
    {
        syslog = value;
    }
    if(value_path == "trustsec-sxp")
    {
        trustsec_sxp = value;
    }
    if(value_path == "tty")
    {
        tty = value;
    }
    if(value_path == "udp-port")
    {
        udp_port = value;
    }
    if(value_path == "voice")
    {
        voice = value;
    }
    if(value_path == "vrfmib")
    {
        vrfmib = value;
    }
    if(value_path == "vrrp")
    {
        vrrp = value;
    }
    if(value_path == "x25")
    {
        x25 = value;
    }
}

Native::SnmpServer::Ip::Ip()
    :
    dscp{YType::uint8, "dscp"},
    precedence{YType::uint8, "precedence"}
{
    yang_name = "ip"; yang_parent_name = "snmp-server";
}

Native::SnmpServer::Ip::~Ip()
{
}

bool Native::SnmpServer::Ip::has_data() const
{
    return dscp.is_set
	|| precedence.is_set;
}

bool Native::SnmpServer::Ip::has_operation() const
{
    return is_set(operation)
	|| is_set(dscp.operation)
	|| is_set(precedence.operation);
}

std::string Native::SnmpServer::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-snmp:ip";

    return path_buffer.str();

}

const EntityPath Native::SnmpServer::Ip::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/snmp-server/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dscp.is_set || is_set(dscp.operation)) leaf_name_data.push_back(dscp.get_name_leafdata());
    if (precedence.is_set || is_set(precedence.operation)) leaf_name_data.push_back(precedence.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SnmpServer::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SnmpServer::Ip::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dscp")
    {
        dscp = value;
    }
    if(value_path == "precedence")
    {
        precedence = value;
    }
}

Native::SnmpServer::Ifindex::Ifindex()
    :
    persist{YType::empty, "persist"}
{
    yang_name = "ifindex"; yang_parent_name = "snmp-server";
}

Native::SnmpServer::Ifindex::~Ifindex()
{
}

bool Native::SnmpServer::Ifindex::has_data() const
{
    return persist.is_set;
}

bool Native::SnmpServer::Ifindex::has_operation() const
{
    return is_set(operation)
	|| is_set(persist.operation);
}

std::string Native::SnmpServer::Ifindex::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-snmp:ifindex";

    return path_buffer.str();

}

const EntityPath Native::SnmpServer::Ifindex::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/snmp-server/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (persist.is_set || is_set(persist.operation)) leaf_name_data.push_back(persist.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SnmpServer::Ifindex::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::Ifindex::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SnmpServer::Ifindex::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "persist")
    {
        persist = value;
    }
}

Native::SnmpServer::Manager::Manager()
    :
    session_timeout{YType::uint32, "session-timeout"}
{
    yang_name = "manager"; yang_parent_name = "snmp-server";
}

Native::SnmpServer::Manager::~Manager()
{
}

bool Native::SnmpServer::Manager::has_data() const
{
    return session_timeout.is_set;
}

bool Native::SnmpServer::Manager::has_operation() const
{
    return is_set(operation)
	|| is_set(session_timeout.operation);
}

std::string Native::SnmpServer::Manager::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-snmp:manager";

    return path_buffer.str();

}

const EntityPath Native::SnmpServer::Manager::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/snmp-server/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (session_timeout.is_set || is_set(session_timeout.operation)) leaf_name_data.push_back(session_timeout.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SnmpServer::Manager::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::Manager::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SnmpServer::Manager::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "session-timeout")
    {
        session_timeout = value;
    }
}

Native::SnmpServer::SourceInterface::SourceInterface()
    :
    informs(std::make_shared<Native::SnmpServer::SourceInterface::Informs>())
	,traps(std::make_shared<Native::SnmpServer::SourceInterface::Traps>())
{
    informs->parent = this;

    traps->parent = this;

    yang_name = "source-interface"; yang_parent_name = "snmp-server";
}

Native::SnmpServer::SourceInterface::~SourceInterface()
{
}

bool Native::SnmpServer::SourceInterface::has_data() const
{
    return (informs !=  nullptr && informs->has_data())
	|| (traps !=  nullptr && traps->has_data());
}

bool Native::SnmpServer::SourceInterface::has_operation() const
{
    return is_set(operation)
	|| (informs !=  nullptr && informs->has_operation())
	|| (traps !=  nullptr && traps->has_operation());
}

std::string Native::SnmpServer::SourceInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-snmp:source-interface";

    return path_buffer.str();

}

const EntityPath Native::SnmpServer::SourceInterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/snmp-server/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SnmpServer::SourceInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "informs")
    {
        if(informs == nullptr)
        {
            informs = std::make_shared<Native::SnmpServer::SourceInterface::Informs>();
        }
        return informs;
    }

    if(child_yang_name == "traps")
    {
        if(traps == nullptr)
        {
            traps = std::make_shared<Native::SnmpServer::SourceInterface::Traps>();
        }
        return traps;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::SourceInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(informs != nullptr)
    {
        children["informs"] = informs;
    }

    if(traps != nullptr)
    {
        children["traps"] = traps;
    }

    return children;
}

void Native::SnmpServer::SourceInterface::set_value(const std::string & value_path, std::string value)
{
}

Native::SnmpServer::SourceInterface::Informs::Informs()
    :
    appnav_compress{YType::uint16, "AppNav-Compress"},
    appnav_uncompress{YType::uint16, "AppNav-UnCompress"},
    atm{YType::str, "ATM"},
    atm_acr{YType::str, "ATM-ACR"},
    bdi{YType::str, "BDI"},
    cellular{YType::str, "Cellular"},
    cem{YType::str, "CEM"},
    cem_acr{YType::uint8, "CEM-ACR"},
    embedded_service_engine{YType::str, "Embedded-Service-Engine"},
    fastethernet{YType::str, "FastEthernet"},
    gigabitethernet{YType::str, "GigabitEthernet"},
    lisp{YType::uint16, "LISP"},
    loopback{YType::uint32, "Loopback"},
    multilink{YType::uint16, "Multilink"},
    nve{YType::uint16, "nve"},
    overlay{YType::uint16, "overlay"},
    port_channel{YType::uint32, "Port-channel"},
    pseudowire{YType::uint32, "pseudowire"},
    serial{YType::str, "Serial"},
    sm{YType::str, "SM"},
    tengigabitethernet{YType::str, "TenGigabitEthernet"},
    tunnel{YType::uint32, "Tunnel"},
    vasileft{YType::uint16, "vasileft"},
    vasiright{YType::uint16, "vasiright"},
    virtual_template{YType::uint16, "Virtual-Template"},
    virtualportgroup{YType::uint16, "VirtualPortGroup"},
    vlan{YType::uint16, "Vlan"}
    	,
    atm_acrsubinterface(std::make_shared<Native::SnmpServer::SourceInterface::Informs::AtmAcrsubinterface>())
	,atm_subinterface(std::make_shared<Native::SnmpServer::SourceInterface::Informs::AtmSubinterface>())
	,lisp_subinterface(std::make_shared<Native::SnmpServer::SourceInterface::Informs::LispSubinterface>())
	,port_channel_subinterface(std::make_shared<Native::SnmpServer::SourceInterface::Informs::PortChannelSubinterface>())
{
    atm_acrsubinterface->parent = this;

    atm_subinterface->parent = this;

    lisp_subinterface->parent = this;

    port_channel_subinterface->parent = this;

    yang_name = "informs"; yang_parent_name = "source-interface";
}

Native::SnmpServer::SourceInterface::Informs::~Informs()
{
}

bool Native::SnmpServer::SourceInterface::Informs::has_data() const
{
    return appnav_compress.is_set
	|| appnav_uncompress.is_set
	|| atm.is_set
	|| atm_acr.is_set
	|| bdi.is_set
	|| cellular.is_set
	|| cem.is_set
	|| cem_acr.is_set
	|| embedded_service_engine.is_set
	|| fastethernet.is_set
	|| gigabitethernet.is_set
	|| lisp.is_set
	|| loopback.is_set
	|| multilink.is_set
	|| nve.is_set
	|| overlay.is_set
	|| port_channel.is_set
	|| pseudowire.is_set
	|| serial.is_set
	|| sm.is_set
	|| tengigabitethernet.is_set
	|| tunnel.is_set
	|| vasileft.is_set
	|| vasiright.is_set
	|| virtual_template.is_set
	|| virtualportgroup.is_set
	|| vlan.is_set
	|| (atm_acrsubinterface !=  nullptr && atm_acrsubinterface->has_data())
	|| (atm_subinterface !=  nullptr && atm_subinterface->has_data())
	|| (lisp_subinterface !=  nullptr && lisp_subinterface->has_data())
	|| (port_channel_subinterface !=  nullptr && port_channel_subinterface->has_data());
}

bool Native::SnmpServer::SourceInterface::Informs::has_operation() const
{
    return is_set(operation)
	|| is_set(appnav_compress.operation)
	|| is_set(appnav_uncompress.operation)
	|| is_set(atm.operation)
	|| is_set(atm_acr.operation)
	|| is_set(bdi.operation)
	|| is_set(cellular.operation)
	|| is_set(cem.operation)
	|| is_set(cem_acr.operation)
	|| is_set(embedded_service_engine.operation)
	|| is_set(fastethernet.operation)
	|| is_set(gigabitethernet.operation)
	|| is_set(lisp.operation)
	|| is_set(loopback.operation)
	|| is_set(multilink.operation)
	|| is_set(nve.operation)
	|| is_set(overlay.operation)
	|| is_set(port_channel.operation)
	|| is_set(pseudowire.operation)
	|| is_set(serial.operation)
	|| is_set(sm.operation)
	|| is_set(tengigabitethernet.operation)
	|| is_set(tunnel.operation)
	|| is_set(vasileft.operation)
	|| is_set(vasiright.operation)
	|| is_set(virtual_template.operation)
	|| is_set(virtualportgroup.operation)
	|| is_set(vlan.operation)
	|| (atm_acrsubinterface !=  nullptr && atm_acrsubinterface->has_operation())
	|| (atm_subinterface !=  nullptr && atm_subinterface->has_operation())
	|| (lisp_subinterface !=  nullptr && lisp_subinterface->has_operation())
	|| (port_channel_subinterface !=  nullptr && port_channel_subinterface->has_operation());
}

std::string Native::SnmpServer::SourceInterface::Informs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "informs";

    return path_buffer.str();

}

const EntityPath Native::SnmpServer::SourceInterface::Informs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:source-interface/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (appnav_compress.is_set || is_set(appnav_compress.operation)) leaf_name_data.push_back(appnav_compress.get_name_leafdata());
    if (appnav_uncompress.is_set || is_set(appnav_uncompress.operation)) leaf_name_data.push_back(appnav_uncompress.get_name_leafdata());
    if (atm.is_set || is_set(atm.operation)) leaf_name_data.push_back(atm.get_name_leafdata());
    if (atm_acr.is_set || is_set(atm_acr.operation)) leaf_name_data.push_back(atm_acr.get_name_leafdata());
    if (bdi.is_set || is_set(bdi.operation)) leaf_name_data.push_back(bdi.get_name_leafdata());
    if (cellular.is_set || is_set(cellular.operation)) leaf_name_data.push_back(cellular.get_name_leafdata());
    if (cem.is_set || is_set(cem.operation)) leaf_name_data.push_back(cem.get_name_leafdata());
    if (cem_acr.is_set || is_set(cem_acr.operation)) leaf_name_data.push_back(cem_acr.get_name_leafdata());
    if (embedded_service_engine.is_set || is_set(embedded_service_engine.operation)) leaf_name_data.push_back(embedded_service_engine.get_name_leafdata());
    if (fastethernet.is_set || is_set(fastethernet.operation)) leaf_name_data.push_back(fastethernet.get_name_leafdata());
    if (gigabitethernet.is_set || is_set(gigabitethernet.operation)) leaf_name_data.push_back(gigabitethernet.get_name_leafdata());
    if (lisp.is_set || is_set(lisp.operation)) leaf_name_data.push_back(lisp.get_name_leafdata());
    if (loopback.is_set || is_set(loopback.operation)) leaf_name_data.push_back(loopback.get_name_leafdata());
    if (multilink.is_set || is_set(multilink.operation)) leaf_name_data.push_back(multilink.get_name_leafdata());
    if (nve.is_set || is_set(nve.operation)) leaf_name_data.push_back(nve.get_name_leafdata());
    if (overlay.is_set || is_set(overlay.operation)) leaf_name_data.push_back(overlay.get_name_leafdata());
    if (port_channel.is_set || is_set(port_channel.operation)) leaf_name_data.push_back(port_channel.get_name_leafdata());
    if (pseudowire.is_set || is_set(pseudowire.operation)) leaf_name_data.push_back(pseudowire.get_name_leafdata());
    if (serial.is_set || is_set(serial.operation)) leaf_name_data.push_back(serial.get_name_leafdata());
    if (sm.is_set || is_set(sm.operation)) leaf_name_data.push_back(sm.get_name_leafdata());
    if (tengigabitethernet.is_set || is_set(tengigabitethernet.operation)) leaf_name_data.push_back(tengigabitethernet.get_name_leafdata());
    if (tunnel.is_set || is_set(tunnel.operation)) leaf_name_data.push_back(tunnel.get_name_leafdata());
    if (vasileft.is_set || is_set(vasileft.operation)) leaf_name_data.push_back(vasileft.get_name_leafdata());
    if (vasiright.is_set || is_set(vasiright.operation)) leaf_name_data.push_back(vasiright.get_name_leafdata());
    if (virtual_template.is_set || is_set(virtual_template.operation)) leaf_name_data.push_back(virtual_template.get_name_leafdata());
    if (virtualportgroup.is_set || is_set(virtualportgroup.operation)) leaf_name_data.push_back(virtualportgroup.get_name_leafdata());
    if (vlan.is_set || is_set(vlan.operation)) leaf_name_data.push_back(vlan.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SnmpServer::SourceInterface::Informs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ATM-ACRsubinterface")
    {
        if(atm_acrsubinterface == nullptr)
        {
            atm_acrsubinterface = std::make_shared<Native::SnmpServer::SourceInterface::Informs::AtmAcrsubinterface>();
        }
        return atm_acrsubinterface;
    }

    if(child_yang_name == "ATM-subinterface")
    {
        if(atm_subinterface == nullptr)
        {
            atm_subinterface = std::make_shared<Native::SnmpServer::SourceInterface::Informs::AtmSubinterface>();
        }
        return atm_subinterface;
    }

    if(child_yang_name == "LISP-subinterface")
    {
        if(lisp_subinterface == nullptr)
        {
            lisp_subinterface = std::make_shared<Native::SnmpServer::SourceInterface::Informs::LispSubinterface>();
        }
        return lisp_subinterface;
    }

    if(child_yang_name == "Port-channel-subinterface")
    {
        if(port_channel_subinterface == nullptr)
        {
            port_channel_subinterface = std::make_shared<Native::SnmpServer::SourceInterface::Informs::PortChannelSubinterface>();
        }
        return port_channel_subinterface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::SourceInterface::Informs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(atm_acrsubinterface != nullptr)
    {
        children["ATM-ACRsubinterface"] = atm_acrsubinterface;
    }

    if(atm_subinterface != nullptr)
    {
        children["ATM-subinterface"] = atm_subinterface;
    }

    if(lisp_subinterface != nullptr)
    {
        children["LISP-subinterface"] = lisp_subinterface;
    }

    if(port_channel_subinterface != nullptr)
    {
        children["Port-channel-subinterface"] = port_channel_subinterface;
    }

    return children;
}

void Native::SnmpServer::SourceInterface::Informs::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "AppNav-Compress")
    {
        appnav_compress = value;
    }
    if(value_path == "AppNav-UnCompress")
    {
        appnav_uncompress = value;
    }
    if(value_path == "ATM")
    {
        atm = value;
    }
    if(value_path == "ATM-ACR")
    {
        atm_acr = value;
    }
    if(value_path == "BDI")
    {
        bdi = value;
    }
    if(value_path == "Cellular")
    {
        cellular = value;
    }
    if(value_path == "CEM")
    {
        cem = value;
    }
    if(value_path == "CEM-ACR")
    {
        cem_acr = value;
    }
    if(value_path == "Embedded-Service-Engine")
    {
        embedded_service_engine = value;
    }
    if(value_path == "FastEthernet")
    {
        fastethernet = value;
    }
    if(value_path == "GigabitEthernet")
    {
        gigabitethernet = value;
    }
    if(value_path == "LISP")
    {
        lisp = value;
    }
    if(value_path == "Loopback")
    {
        loopback = value;
    }
    if(value_path == "Multilink")
    {
        multilink = value;
    }
    if(value_path == "nve")
    {
        nve = value;
    }
    if(value_path == "overlay")
    {
        overlay = value;
    }
    if(value_path == "Port-channel")
    {
        port_channel = value;
    }
    if(value_path == "pseudowire")
    {
        pseudowire = value;
    }
    if(value_path == "Serial")
    {
        serial = value;
    }
    if(value_path == "SM")
    {
        sm = value;
    }
    if(value_path == "TenGigabitEthernet")
    {
        tengigabitethernet = value;
    }
    if(value_path == "Tunnel")
    {
        tunnel = value;
    }
    if(value_path == "vasileft")
    {
        vasileft = value;
    }
    if(value_path == "vasiright")
    {
        vasiright = value;
    }
    if(value_path == "Virtual-Template")
    {
        virtual_template = value;
    }
    if(value_path == "VirtualPortGroup")
    {
        virtualportgroup = value;
    }
    if(value_path == "Vlan")
    {
        vlan = value;
    }
}

Native::SnmpServer::SourceInterface::Informs::AtmSubinterface::AtmSubinterface()
    :
    atm{YType::str, "ATM"}
{
    yang_name = "ATM-subinterface"; yang_parent_name = "informs";
}

Native::SnmpServer::SourceInterface::Informs::AtmSubinterface::~AtmSubinterface()
{
}

bool Native::SnmpServer::SourceInterface::Informs::AtmSubinterface::has_data() const
{
    return atm.is_set;
}

bool Native::SnmpServer::SourceInterface::Informs::AtmSubinterface::has_operation() const
{
    return is_set(operation)
	|| is_set(atm.operation);
}

std::string Native::SnmpServer::SourceInterface::Informs::AtmSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-subinterface";

    return path_buffer.str();

}

const EntityPath Native::SnmpServer::SourceInterface::Informs::AtmSubinterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:source-interface/informs/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm.is_set || is_set(atm.operation)) leaf_name_data.push_back(atm.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SnmpServer::SourceInterface::Informs::AtmSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::SourceInterface::Informs::AtmSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SnmpServer::SourceInterface::Informs::AtmSubinterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ATM")
    {
        atm = value;
    }
}

Native::SnmpServer::SourceInterface::Informs::AtmAcrsubinterface::AtmAcrsubinterface()
    :
    atm_acr{YType::str, "ATM-ACR"}
{
    yang_name = "ATM-ACRsubinterface"; yang_parent_name = "informs";
}

Native::SnmpServer::SourceInterface::Informs::AtmAcrsubinterface::~AtmAcrsubinterface()
{
}

bool Native::SnmpServer::SourceInterface::Informs::AtmAcrsubinterface::has_data() const
{
    return atm_acr.is_set;
}

bool Native::SnmpServer::SourceInterface::Informs::AtmAcrsubinterface::has_operation() const
{
    return is_set(operation)
	|| is_set(atm_acr.operation);
}

std::string Native::SnmpServer::SourceInterface::Informs::AtmAcrsubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-ACRsubinterface";

    return path_buffer.str();

}

const EntityPath Native::SnmpServer::SourceInterface::Informs::AtmAcrsubinterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:source-interface/informs/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm_acr.is_set || is_set(atm_acr.operation)) leaf_name_data.push_back(atm_acr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SnmpServer::SourceInterface::Informs::AtmAcrsubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::SourceInterface::Informs::AtmAcrsubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SnmpServer::SourceInterface::Informs::AtmAcrsubinterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr = value;
    }
}

Native::SnmpServer::SourceInterface::Informs::LispSubinterface::LispSubinterface()
    :
    lisp{YType::str, "LISP"}
{
    yang_name = "LISP-subinterface"; yang_parent_name = "informs";
}

Native::SnmpServer::SourceInterface::Informs::LispSubinterface::~LispSubinterface()
{
}

bool Native::SnmpServer::SourceInterface::Informs::LispSubinterface::has_data() const
{
    return lisp.is_set;
}

bool Native::SnmpServer::SourceInterface::Informs::LispSubinterface::has_operation() const
{
    return is_set(operation)
	|| is_set(lisp.operation);
}

std::string Native::SnmpServer::SourceInterface::Informs::LispSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LISP-subinterface";

    return path_buffer.str();

}

const EntityPath Native::SnmpServer::SourceInterface::Informs::LispSubinterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:source-interface/informs/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lisp.is_set || is_set(lisp.operation)) leaf_name_data.push_back(lisp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SnmpServer::SourceInterface::Informs::LispSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::SourceInterface::Informs::LispSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SnmpServer::SourceInterface::Informs::LispSubinterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "LISP")
    {
        lisp = value;
    }
}

Native::SnmpServer::SourceInterface::Informs::PortChannelSubinterface::PortChannelSubinterface()
    :
    port_channel{YType::str, "Port-channel"}
{
    yang_name = "Port-channel-subinterface"; yang_parent_name = "informs";
}

Native::SnmpServer::SourceInterface::Informs::PortChannelSubinterface::~PortChannelSubinterface()
{
}

bool Native::SnmpServer::SourceInterface::Informs::PortChannelSubinterface::has_data() const
{
    return port_channel.is_set;
}

bool Native::SnmpServer::SourceInterface::Informs::PortChannelSubinterface::has_operation() const
{
    return is_set(operation)
	|| is_set(port_channel.operation);
}

std::string Native::SnmpServer::SourceInterface::Informs::PortChannelSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Port-channel-subinterface";

    return path_buffer.str();

}

const EntityPath Native::SnmpServer::SourceInterface::Informs::PortChannelSubinterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:source-interface/informs/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_channel.is_set || is_set(port_channel.operation)) leaf_name_data.push_back(port_channel.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SnmpServer::SourceInterface::Informs::PortChannelSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::SourceInterface::Informs::PortChannelSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SnmpServer::SourceInterface::Informs::PortChannelSubinterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "Port-channel")
    {
        port_channel = value;
    }
}

Native::SnmpServer::SourceInterface::Traps::Traps()
    :
    appnav_compress{YType::uint16, "AppNav-Compress"},
    appnav_uncompress{YType::uint16, "AppNav-UnCompress"},
    atm{YType::str, "ATM"},
    atm_acr{YType::str, "ATM-ACR"},
    bdi{YType::str, "BDI"},
    cellular{YType::str, "Cellular"},
    cem{YType::str, "CEM"},
    cem_acr{YType::uint8, "CEM-ACR"},
    embedded_service_engine{YType::str, "Embedded-Service-Engine"},
    fastethernet{YType::str, "FastEthernet"},
    gigabitethernet{YType::str, "GigabitEthernet"},
    lisp{YType::uint16, "LISP"},
    loopback{YType::uint32, "Loopback"},
    multilink{YType::uint16, "Multilink"},
    nve{YType::uint16, "nve"},
    overlay{YType::uint16, "overlay"},
    port_channel{YType::uint32, "Port-channel"},
    pseudowire{YType::uint32, "pseudowire"},
    serial{YType::str, "Serial"},
    sm{YType::str, "SM"},
    tengigabitethernet{YType::str, "TenGigabitEthernet"},
    tunnel{YType::uint32, "Tunnel"},
    vasileft{YType::uint16, "vasileft"},
    vasiright{YType::uint16, "vasiright"},
    virtual_template{YType::uint16, "Virtual-Template"},
    virtualportgroup{YType::uint16, "VirtualPortGroup"},
    vlan{YType::uint16, "Vlan"}
    	,
    atm_acrsubinterface(std::make_shared<Native::SnmpServer::SourceInterface::Traps::AtmAcrsubinterface>())
	,atm_subinterface(std::make_shared<Native::SnmpServer::SourceInterface::Traps::AtmSubinterface>())
	,lisp_subinterface(std::make_shared<Native::SnmpServer::SourceInterface::Traps::LispSubinterface>())
	,port_channel_subinterface(std::make_shared<Native::SnmpServer::SourceInterface::Traps::PortChannelSubinterface>())
{
    atm_acrsubinterface->parent = this;

    atm_subinterface->parent = this;

    lisp_subinterface->parent = this;

    port_channel_subinterface->parent = this;

    yang_name = "traps"; yang_parent_name = "source-interface";
}

Native::SnmpServer::SourceInterface::Traps::~Traps()
{
}

bool Native::SnmpServer::SourceInterface::Traps::has_data() const
{
    return appnav_compress.is_set
	|| appnav_uncompress.is_set
	|| atm.is_set
	|| atm_acr.is_set
	|| bdi.is_set
	|| cellular.is_set
	|| cem.is_set
	|| cem_acr.is_set
	|| embedded_service_engine.is_set
	|| fastethernet.is_set
	|| gigabitethernet.is_set
	|| lisp.is_set
	|| loopback.is_set
	|| multilink.is_set
	|| nve.is_set
	|| overlay.is_set
	|| port_channel.is_set
	|| pseudowire.is_set
	|| serial.is_set
	|| sm.is_set
	|| tengigabitethernet.is_set
	|| tunnel.is_set
	|| vasileft.is_set
	|| vasiright.is_set
	|| virtual_template.is_set
	|| virtualportgroup.is_set
	|| vlan.is_set
	|| (atm_acrsubinterface !=  nullptr && atm_acrsubinterface->has_data())
	|| (atm_subinterface !=  nullptr && atm_subinterface->has_data())
	|| (lisp_subinterface !=  nullptr && lisp_subinterface->has_data())
	|| (port_channel_subinterface !=  nullptr && port_channel_subinterface->has_data());
}

bool Native::SnmpServer::SourceInterface::Traps::has_operation() const
{
    return is_set(operation)
	|| is_set(appnav_compress.operation)
	|| is_set(appnav_uncompress.operation)
	|| is_set(atm.operation)
	|| is_set(atm_acr.operation)
	|| is_set(bdi.operation)
	|| is_set(cellular.operation)
	|| is_set(cem.operation)
	|| is_set(cem_acr.operation)
	|| is_set(embedded_service_engine.operation)
	|| is_set(fastethernet.operation)
	|| is_set(gigabitethernet.operation)
	|| is_set(lisp.operation)
	|| is_set(loopback.operation)
	|| is_set(multilink.operation)
	|| is_set(nve.operation)
	|| is_set(overlay.operation)
	|| is_set(port_channel.operation)
	|| is_set(pseudowire.operation)
	|| is_set(serial.operation)
	|| is_set(sm.operation)
	|| is_set(tengigabitethernet.operation)
	|| is_set(tunnel.operation)
	|| is_set(vasileft.operation)
	|| is_set(vasiright.operation)
	|| is_set(virtual_template.operation)
	|| is_set(virtualportgroup.operation)
	|| is_set(vlan.operation)
	|| (atm_acrsubinterface !=  nullptr && atm_acrsubinterface->has_operation())
	|| (atm_subinterface !=  nullptr && atm_subinterface->has_operation())
	|| (lisp_subinterface !=  nullptr && lisp_subinterface->has_operation())
	|| (port_channel_subinterface !=  nullptr && port_channel_subinterface->has_operation());
}

std::string Native::SnmpServer::SourceInterface::Traps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "traps";

    return path_buffer.str();

}

const EntityPath Native::SnmpServer::SourceInterface::Traps::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:source-interface/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (appnav_compress.is_set || is_set(appnav_compress.operation)) leaf_name_data.push_back(appnav_compress.get_name_leafdata());
    if (appnav_uncompress.is_set || is_set(appnav_uncompress.operation)) leaf_name_data.push_back(appnav_uncompress.get_name_leafdata());
    if (atm.is_set || is_set(atm.operation)) leaf_name_data.push_back(atm.get_name_leafdata());
    if (atm_acr.is_set || is_set(atm_acr.operation)) leaf_name_data.push_back(atm_acr.get_name_leafdata());
    if (bdi.is_set || is_set(bdi.operation)) leaf_name_data.push_back(bdi.get_name_leafdata());
    if (cellular.is_set || is_set(cellular.operation)) leaf_name_data.push_back(cellular.get_name_leafdata());
    if (cem.is_set || is_set(cem.operation)) leaf_name_data.push_back(cem.get_name_leafdata());
    if (cem_acr.is_set || is_set(cem_acr.operation)) leaf_name_data.push_back(cem_acr.get_name_leafdata());
    if (embedded_service_engine.is_set || is_set(embedded_service_engine.operation)) leaf_name_data.push_back(embedded_service_engine.get_name_leafdata());
    if (fastethernet.is_set || is_set(fastethernet.operation)) leaf_name_data.push_back(fastethernet.get_name_leafdata());
    if (gigabitethernet.is_set || is_set(gigabitethernet.operation)) leaf_name_data.push_back(gigabitethernet.get_name_leafdata());
    if (lisp.is_set || is_set(lisp.operation)) leaf_name_data.push_back(lisp.get_name_leafdata());
    if (loopback.is_set || is_set(loopback.operation)) leaf_name_data.push_back(loopback.get_name_leafdata());
    if (multilink.is_set || is_set(multilink.operation)) leaf_name_data.push_back(multilink.get_name_leafdata());
    if (nve.is_set || is_set(nve.operation)) leaf_name_data.push_back(nve.get_name_leafdata());
    if (overlay.is_set || is_set(overlay.operation)) leaf_name_data.push_back(overlay.get_name_leafdata());
    if (port_channel.is_set || is_set(port_channel.operation)) leaf_name_data.push_back(port_channel.get_name_leafdata());
    if (pseudowire.is_set || is_set(pseudowire.operation)) leaf_name_data.push_back(pseudowire.get_name_leafdata());
    if (serial.is_set || is_set(serial.operation)) leaf_name_data.push_back(serial.get_name_leafdata());
    if (sm.is_set || is_set(sm.operation)) leaf_name_data.push_back(sm.get_name_leafdata());
    if (tengigabitethernet.is_set || is_set(tengigabitethernet.operation)) leaf_name_data.push_back(tengigabitethernet.get_name_leafdata());
    if (tunnel.is_set || is_set(tunnel.operation)) leaf_name_data.push_back(tunnel.get_name_leafdata());
    if (vasileft.is_set || is_set(vasileft.operation)) leaf_name_data.push_back(vasileft.get_name_leafdata());
    if (vasiright.is_set || is_set(vasiright.operation)) leaf_name_data.push_back(vasiright.get_name_leafdata());
    if (virtual_template.is_set || is_set(virtual_template.operation)) leaf_name_data.push_back(virtual_template.get_name_leafdata());
    if (virtualportgroup.is_set || is_set(virtualportgroup.operation)) leaf_name_data.push_back(virtualportgroup.get_name_leafdata());
    if (vlan.is_set || is_set(vlan.operation)) leaf_name_data.push_back(vlan.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SnmpServer::SourceInterface::Traps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ATM-ACRsubinterface")
    {
        if(atm_acrsubinterface == nullptr)
        {
            atm_acrsubinterface = std::make_shared<Native::SnmpServer::SourceInterface::Traps::AtmAcrsubinterface>();
        }
        return atm_acrsubinterface;
    }

    if(child_yang_name == "ATM-subinterface")
    {
        if(atm_subinterface == nullptr)
        {
            atm_subinterface = std::make_shared<Native::SnmpServer::SourceInterface::Traps::AtmSubinterface>();
        }
        return atm_subinterface;
    }

    if(child_yang_name == "LISP-subinterface")
    {
        if(lisp_subinterface == nullptr)
        {
            lisp_subinterface = std::make_shared<Native::SnmpServer::SourceInterface::Traps::LispSubinterface>();
        }
        return lisp_subinterface;
    }

    if(child_yang_name == "Port-channel-subinterface")
    {
        if(port_channel_subinterface == nullptr)
        {
            port_channel_subinterface = std::make_shared<Native::SnmpServer::SourceInterface::Traps::PortChannelSubinterface>();
        }
        return port_channel_subinterface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::SourceInterface::Traps::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(atm_acrsubinterface != nullptr)
    {
        children["ATM-ACRsubinterface"] = atm_acrsubinterface;
    }

    if(atm_subinterface != nullptr)
    {
        children["ATM-subinterface"] = atm_subinterface;
    }

    if(lisp_subinterface != nullptr)
    {
        children["LISP-subinterface"] = lisp_subinterface;
    }

    if(port_channel_subinterface != nullptr)
    {
        children["Port-channel-subinterface"] = port_channel_subinterface;
    }

    return children;
}

void Native::SnmpServer::SourceInterface::Traps::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "AppNav-Compress")
    {
        appnav_compress = value;
    }
    if(value_path == "AppNav-UnCompress")
    {
        appnav_uncompress = value;
    }
    if(value_path == "ATM")
    {
        atm = value;
    }
    if(value_path == "ATM-ACR")
    {
        atm_acr = value;
    }
    if(value_path == "BDI")
    {
        bdi = value;
    }
    if(value_path == "Cellular")
    {
        cellular = value;
    }
    if(value_path == "CEM")
    {
        cem = value;
    }
    if(value_path == "CEM-ACR")
    {
        cem_acr = value;
    }
    if(value_path == "Embedded-Service-Engine")
    {
        embedded_service_engine = value;
    }
    if(value_path == "FastEthernet")
    {
        fastethernet = value;
    }
    if(value_path == "GigabitEthernet")
    {
        gigabitethernet = value;
    }
    if(value_path == "LISP")
    {
        lisp = value;
    }
    if(value_path == "Loopback")
    {
        loopback = value;
    }
    if(value_path == "Multilink")
    {
        multilink = value;
    }
    if(value_path == "nve")
    {
        nve = value;
    }
    if(value_path == "overlay")
    {
        overlay = value;
    }
    if(value_path == "Port-channel")
    {
        port_channel = value;
    }
    if(value_path == "pseudowire")
    {
        pseudowire = value;
    }
    if(value_path == "Serial")
    {
        serial = value;
    }
    if(value_path == "SM")
    {
        sm = value;
    }
    if(value_path == "TenGigabitEthernet")
    {
        tengigabitethernet = value;
    }
    if(value_path == "Tunnel")
    {
        tunnel = value;
    }
    if(value_path == "vasileft")
    {
        vasileft = value;
    }
    if(value_path == "vasiright")
    {
        vasiright = value;
    }
    if(value_path == "Virtual-Template")
    {
        virtual_template = value;
    }
    if(value_path == "VirtualPortGroup")
    {
        virtualportgroup = value;
    }
    if(value_path == "Vlan")
    {
        vlan = value;
    }
}

Native::SnmpServer::SourceInterface::Traps::AtmSubinterface::AtmSubinterface()
    :
    atm{YType::str, "ATM"}
{
    yang_name = "ATM-subinterface"; yang_parent_name = "traps";
}

Native::SnmpServer::SourceInterface::Traps::AtmSubinterface::~AtmSubinterface()
{
}

bool Native::SnmpServer::SourceInterface::Traps::AtmSubinterface::has_data() const
{
    return atm.is_set;
}

bool Native::SnmpServer::SourceInterface::Traps::AtmSubinterface::has_operation() const
{
    return is_set(operation)
	|| is_set(atm.operation);
}

std::string Native::SnmpServer::SourceInterface::Traps::AtmSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-subinterface";

    return path_buffer.str();

}

const EntityPath Native::SnmpServer::SourceInterface::Traps::AtmSubinterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:source-interface/traps/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm.is_set || is_set(atm.operation)) leaf_name_data.push_back(atm.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SnmpServer::SourceInterface::Traps::AtmSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::SourceInterface::Traps::AtmSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SnmpServer::SourceInterface::Traps::AtmSubinterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ATM")
    {
        atm = value;
    }
}

Native::SnmpServer::SourceInterface::Traps::AtmAcrsubinterface::AtmAcrsubinterface()
    :
    atm_acr{YType::str, "ATM-ACR"}
{
    yang_name = "ATM-ACRsubinterface"; yang_parent_name = "traps";
}

Native::SnmpServer::SourceInterface::Traps::AtmAcrsubinterface::~AtmAcrsubinterface()
{
}

bool Native::SnmpServer::SourceInterface::Traps::AtmAcrsubinterface::has_data() const
{
    return atm_acr.is_set;
}

bool Native::SnmpServer::SourceInterface::Traps::AtmAcrsubinterface::has_operation() const
{
    return is_set(operation)
	|| is_set(atm_acr.operation);
}

std::string Native::SnmpServer::SourceInterface::Traps::AtmAcrsubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-ACRsubinterface";

    return path_buffer.str();

}

const EntityPath Native::SnmpServer::SourceInterface::Traps::AtmAcrsubinterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:source-interface/traps/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm_acr.is_set || is_set(atm_acr.operation)) leaf_name_data.push_back(atm_acr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SnmpServer::SourceInterface::Traps::AtmAcrsubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::SourceInterface::Traps::AtmAcrsubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SnmpServer::SourceInterface::Traps::AtmAcrsubinterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr = value;
    }
}

Native::SnmpServer::SourceInterface::Traps::LispSubinterface::LispSubinterface()
    :
    lisp{YType::str, "LISP"}
{
    yang_name = "LISP-subinterface"; yang_parent_name = "traps";
}

Native::SnmpServer::SourceInterface::Traps::LispSubinterface::~LispSubinterface()
{
}

bool Native::SnmpServer::SourceInterface::Traps::LispSubinterface::has_data() const
{
    return lisp.is_set;
}

bool Native::SnmpServer::SourceInterface::Traps::LispSubinterface::has_operation() const
{
    return is_set(operation)
	|| is_set(lisp.operation);
}

std::string Native::SnmpServer::SourceInterface::Traps::LispSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LISP-subinterface";

    return path_buffer.str();

}

const EntityPath Native::SnmpServer::SourceInterface::Traps::LispSubinterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:source-interface/traps/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lisp.is_set || is_set(lisp.operation)) leaf_name_data.push_back(lisp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SnmpServer::SourceInterface::Traps::LispSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::SourceInterface::Traps::LispSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SnmpServer::SourceInterface::Traps::LispSubinterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "LISP")
    {
        lisp = value;
    }
}

Native::SnmpServer::SourceInterface::Traps::PortChannelSubinterface::PortChannelSubinterface()
    :
    port_channel{YType::str, "Port-channel"}
{
    yang_name = "Port-channel-subinterface"; yang_parent_name = "traps";
}

Native::SnmpServer::SourceInterface::Traps::PortChannelSubinterface::~PortChannelSubinterface()
{
}

bool Native::SnmpServer::SourceInterface::Traps::PortChannelSubinterface::has_data() const
{
    return port_channel.is_set;
}

bool Native::SnmpServer::SourceInterface::Traps::PortChannelSubinterface::has_operation() const
{
    return is_set(operation)
	|| is_set(port_channel.operation);
}

std::string Native::SnmpServer::SourceInterface::Traps::PortChannelSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Port-channel-subinterface";

    return path_buffer.str();

}

const EntityPath Native::SnmpServer::SourceInterface::Traps::PortChannelSubinterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:source-interface/traps/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_channel.is_set || is_set(port_channel.operation)) leaf_name_data.push_back(port_channel.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SnmpServer::SourceInterface::Traps::PortChannelSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::SourceInterface::Traps::PortChannelSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SnmpServer::SourceInterface::Traps::PortChannelSubinterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "Port-channel")
    {
        port_channel = value;
    }
}

Native::SnmpServer::Trap::Trap()
    :
    timeout{YType::uint16, "timeout"}
    	,
    link(std::make_shared<Native::SnmpServer::Trap::Link>())
{
    link->parent = this;

    yang_name = "trap"; yang_parent_name = "snmp-server";
}

Native::SnmpServer::Trap::~Trap()
{
}

bool Native::SnmpServer::Trap::has_data() const
{
    return timeout.is_set
	|| (link !=  nullptr && link->has_data());
}

bool Native::SnmpServer::Trap::has_operation() const
{
    return is_set(operation)
	|| is_set(timeout.operation)
	|| (link !=  nullptr && link->has_operation());
}

std::string Native::SnmpServer::Trap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-snmp:trap";

    return path_buffer.str();

}

const EntityPath Native::SnmpServer::Trap::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/snmp-server/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (timeout.is_set || is_set(timeout.operation)) leaf_name_data.push_back(timeout.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SnmpServer::Trap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "link")
    {
        if(link == nullptr)
        {
            link = std::make_shared<Native::SnmpServer::Trap::Link>();
        }
        return link;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::Trap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(link != nullptr)
    {
        children["link"] = link;
    }

    return children;
}

void Native::SnmpServer::Trap::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "timeout")
    {
        timeout = value;
    }
}

Native::SnmpServer::Trap::Link::Link()
    :
    ietf{YType::empty, "ietf"},
    switchover{YType::empty, "switchover"}
{
    yang_name = "link"; yang_parent_name = "trap";
}

Native::SnmpServer::Trap::Link::~Link()
{
}

bool Native::SnmpServer::Trap::Link::has_data() const
{
    return ietf.is_set
	|| switchover.is_set;
}

bool Native::SnmpServer::Trap::Link::has_operation() const
{
    return is_set(operation)
	|| is_set(ietf.operation)
	|| is_set(switchover.operation);
}

std::string Native::SnmpServer::Trap::Link::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link";

    return path_buffer.str();

}

const EntityPath Native::SnmpServer::Trap::Link::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:trap/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ietf.is_set || is_set(ietf.operation)) leaf_name_data.push_back(ietf.get_name_leafdata());
    if (switchover.is_set || is_set(switchover.operation)) leaf_name_data.push_back(switchover.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SnmpServer::Trap::Link::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::Trap::Link::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SnmpServer::Trap::Link::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ietf")
    {
        ietf = value;
    }
    if(value_path == "switchover")
    {
        switchover = value;
    }
}

Native::SnmpServer::TrapSource::TrapSource()
    :
    appnav_compress{YType::uint16, "AppNav-Compress"},
    appnav_uncompress{YType::uint16, "AppNav-UnCompress"},
    atm{YType::str, "ATM"},
    atm_acr{YType::str, "ATM-ACR"},
    bdi{YType::str, "BDI"},
    cellular{YType::str, "Cellular"},
    cem{YType::str, "CEM"},
    cem_acr{YType::uint8, "CEM-ACR"},
    embedded_service_engine{YType::str, "Embedded-Service-Engine"},
    fastethernet{YType::str, "FastEthernet"},
    gigabitethernet{YType::str, "GigabitEthernet"},
    lisp{YType::uint16, "LISP"},
    loopback{YType::uint32, "Loopback"},
    multilink{YType::uint16, "Multilink"},
    nve{YType::uint16, "nve"},
    overlay{YType::uint16, "overlay"},
    port_channel{YType::uint32, "Port-channel"},
    pseudowire{YType::uint32, "pseudowire"},
    serial{YType::str, "Serial"},
    sm{YType::str, "SM"},
    tengigabitethernet{YType::str, "TenGigabitEthernet"},
    tunnel{YType::uint32, "Tunnel"},
    vasileft{YType::uint16, "vasileft"},
    vasiright{YType::uint16, "vasiright"},
    virtual_template{YType::uint16, "Virtual-Template"},
    virtualportgroup{YType::uint16, "VirtualPortGroup"},
    vlan{YType::uint16, "Vlan"}
    	,
    atm_acrsubinterface(std::make_shared<Native::SnmpServer::TrapSource::AtmAcrsubinterface>())
	,atm_subinterface(std::make_shared<Native::SnmpServer::TrapSource::AtmSubinterface>())
	,lisp_subinterface(std::make_shared<Native::SnmpServer::TrapSource::LispSubinterface>())
	,port_channel_subinterface(std::make_shared<Native::SnmpServer::TrapSource::PortChannelSubinterface>())
{
    atm_acrsubinterface->parent = this;

    atm_subinterface->parent = this;

    lisp_subinterface->parent = this;

    port_channel_subinterface->parent = this;

    yang_name = "trap-source"; yang_parent_name = "snmp-server";
}

Native::SnmpServer::TrapSource::~TrapSource()
{
}

bool Native::SnmpServer::TrapSource::has_data() const
{
    return appnav_compress.is_set
	|| appnav_uncompress.is_set
	|| atm.is_set
	|| atm_acr.is_set
	|| bdi.is_set
	|| cellular.is_set
	|| cem.is_set
	|| cem_acr.is_set
	|| embedded_service_engine.is_set
	|| fastethernet.is_set
	|| gigabitethernet.is_set
	|| lisp.is_set
	|| loopback.is_set
	|| multilink.is_set
	|| nve.is_set
	|| overlay.is_set
	|| port_channel.is_set
	|| pseudowire.is_set
	|| serial.is_set
	|| sm.is_set
	|| tengigabitethernet.is_set
	|| tunnel.is_set
	|| vasileft.is_set
	|| vasiright.is_set
	|| virtual_template.is_set
	|| virtualportgroup.is_set
	|| vlan.is_set
	|| (atm_acrsubinterface !=  nullptr && atm_acrsubinterface->has_data())
	|| (atm_subinterface !=  nullptr && atm_subinterface->has_data())
	|| (lisp_subinterface !=  nullptr && lisp_subinterface->has_data())
	|| (port_channel_subinterface !=  nullptr && port_channel_subinterface->has_data());
}

bool Native::SnmpServer::TrapSource::has_operation() const
{
    return is_set(operation)
	|| is_set(appnav_compress.operation)
	|| is_set(appnav_uncompress.operation)
	|| is_set(atm.operation)
	|| is_set(atm_acr.operation)
	|| is_set(bdi.operation)
	|| is_set(cellular.operation)
	|| is_set(cem.operation)
	|| is_set(cem_acr.operation)
	|| is_set(embedded_service_engine.operation)
	|| is_set(fastethernet.operation)
	|| is_set(gigabitethernet.operation)
	|| is_set(lisp.operation)
	|| is_set(loopback.operation)
	|| is_set(multilink.operation)
	|| is_set(nve.operation)
	|| is_set(overlay.operation)
	|| is_set(port_channel.operation)
	|| is_set(pseudowire.operation)
	|| is_set(serial.operation)
	|| is_set(sm.operation)
	|| is_set(tengigabitethernet.operation)
	|| is_set(tunnel.operation)
	|| is_set(vasileft.operation)
	|| is_set(vasiright.operation)
	|| is_set(virtual_template.operation)
	|| is_set(virtualportgroup.operation)
	|| is_set(vlan.operation)
	|| (atm_acrsubinterface !=  nullptr && atm_acrsubinterface->has_operation())
	|| (atm_subinterface !=  nullptr && atm_subinterface->has_operation())
	|| (lisp_subinterface !=  nullptr && lisp_subinterface->has_operation())
	|| (port_channel_subinterface !=  nullptr && port_channel_subinterface->has_operation());
}

std::string Native::SnmpServer::TrapSource::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-snmp:trap-source";

    return path_buffer.str();

}

const EntityPath Native::SnmpServer::TrapSource::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/snmp-server/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (appnav_compress.is_set || is_set(appnav_compress.operation)) leaf_name_data.push_back(appnav_compress.get_name_leafdata());
    if (appnav_uncompress.is_set || is_set(appnav_uncompress.operation)) leaf_name_data.push_back(appnav_uncompress.get_name_leafdata());
    if (atm.is_set || is_set(atm.operation)) leaf_name_data.push_back(atm.get_name_leafdata());
    if (atm_acr.is_set || is_set(atm_acr.operation)) leaf_name_data.push_back(atm_acr.get_name_leafdata());
    if (bdi.is_set || is_set(bdi.operation)) leaf_name_data.push_back(bdi.get_name_leafdata());
    if (cellular.is_set || is_set(cellular.operation)) leaf_name_data.push_back(cellular.get_name_leafdata());
    if (cem.is_set || is_set(cem.operation)) leaf_name_data.push_back(cem.get_name_leafdata());
    if (cem_acr.is_set || is_set(cem_acr.operation)) leaf_name_data.push_back(cem_acr.get_name_leafdata());
    if (embedded_service_engine.is_set || is_set(embedded_service_engine.operation)) leaf_name_data.push_back(embedded_service_engine.get_name_leafdata());
    if (fastethernet.is_set || is_set(fastethernet.operation)) leaf_name_data.push_back(fastethernet.get_name_leafdata());
    if (gigabitethernet.is_set || is_set(gigabitethernet.operation)) leaf_name_data.push_back(gigabitethernet.get_name_leafdata());
    if (lisp.is_set || is_set(lisp.operation)) leaf_name_data.push_back(lisp.get_name_leafdata());
    if (loopback.is_set || is_set(loopback.operation)) leaf_name_data.push_back(loopback.get_name_leafdata());
    if (multilink.is_set || is_set(multilink.operation)) leaf_name_data.push_back(multilink.get_name_leafdata());
    if (nve.is_set || is_set(nve.operation)) leaf_name_data.push_back(nve.get_name_leafdata());
    if (overlay.is_set || is_set(overlay.operation)) leaf_name_data.push_back(overlay.get_name_leafdata());
    if (port_channel.is_set || is_set(port_channel.operation)) leaf_name_data.push_back(port_channel.get_name_leafdata());
    if (pseudowire.is_set || is_set(pseudowire.operation)) leaf_name_data.push_back(pseudowire.get_name_leafdata());
    if (serial.is_set || is_set(serial.operation)) leaf_name_data.push_back(serial.get_name_leafdata());
    if (sm.is_set || is_set(sm.operation)) leaf_name_data.push_back(sm.get_name_leafdata());
    if (tengigabitethernet.is_set || is_set(tengigabitethernet.operation)) leaf_name_data.push_back(tengigabitethernet.get_name_leafdata());
    if (tunnel.is_set || is_set(tunnel.operation)) leaf_name_data.push_back(tunnel.get_name_leafdata());
    if (vasileft.is_set || is_set(vasileft.operation)) leaf_name_data.push_back(vasileft.get_name_leafdata());
    if (vasiright.is_set || is_set(vasiright.operation)) leaf_name_data.push_back(vasiright.get_name_leafdata());
    if (virtual_template.is_set || is_set(virtual_template.operation)) leaf_name_data.push_back(virtual_template.get_name_leafdata());
    if (virtualportgroup.is_set || is_set(virtualportgroup.operation)) leaf_name_data.push_back(virtualportgroup.get_name_leafdata());
    if (vlan.is_set || is_set(vlan.operation)) leaf_name_data.push_back(vlan.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SnmpServer::TrapSource::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ATM-ACRsubinterface")
    {
        if(atm_acrsubinterface == nullptr)
        {
            atm_acrsubinterface = std::make_shared<Native::SnmpServer::TrapSource::AtmAcrsubinterface>();
        }
        return atm_acrsubinterface;
    }

    if(child_yang_name == "ATM-subinterface")
    {
        if(atm_subinterface == nullptr)
        {
            atm_subinterface = std::make_shared<Native::SnmpServer::TrapSource::AtmSubinterface>();
        }
        return atm_subinterface;
    }

    if(child_yang_name == "LISP-subinterface")
    {
        if(lisp_subinterface == nullptr)
        {
            lisp_subinterface = std::make_shared<Native::SnmpServer::TrapSource::LispSubinterface>();
        }
        return lisp_subinterface;
    }

    if(child_yang_name == "Port-channel-subinterface")
    {
        if(port_channel_subinterface == nullptr)
        {
            port_channel_subinterface = std::make_shared<Native::SnmpServer::TrapSource::PortChannelSubinterface>();
        }
        return port_channel_subinterface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::TrapSource::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(atm_acrsubinterface != nullptr)
    {
        children["ATM-ACRsubinterface"] = atm_acrsubinterface;
    }

    if(atm_subinterface != nullptr)
    {
        children["ATM-subinterface"] = atm_subinterface;
    }

    if(lisp_subinterface != nullptr)
    {
        children["LISP-subinterface"] = lisp_subinterface;
    }

    if(port_channel_subinterface != nullptr)
    {
        children["Port-channel-subinterface"] = port_channel_subinterface;
    }

    return children;
}

void Native::SnmpServer::TrapSource::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "AppNav-Compress")
    {
        appnav_compress = value;
    }
    if(value_path == "AppNav-UnCompress")
    {
        appnav_uncompress = value;
    }
    if(value_path == "ATM")
    {
        atm = value;
    }
    if(value_path == "ATM-ACR")
    {
        atm_acr = value;
    }
    if(value_path == "BDI")
    {
        bdi = value;
    }
    if(value_path == "Cellular")
    {
        cellular = value;
    }
    if(value_path == "CEM")
    {
        cem = value;
    }
    if(value_path == "CEM-ACR")
    {
        cem_acr = value;
    }
    if(value_path == "Embedded-Service-Engine")
    {
        embedded_service_engine = value;
    }
    if(value_path == "FastEthernet")
    {
        fastethernet = value;
    }
    if(value_path == "GigabitEthernet")
    {
        gigabitethernet = value;
    }
    if(value_path == "LISP")
    {
        lisp = value;
    }
    if(value_path == "Loopback")
    {
        loopback = value;
    }
    if(value_path == "Multilink")
    {
        multilink = value;
    }
    if(value_path == "nve")
    {
        nve = value;
    }
    if(value_path == "overlay")
    {
        overlay = value;
    }
    if(value_path == "Port-channel")
    {
        port_channel = value;
    }
    if(value_path == "pseudowire")
    {
        pseudowire = value;
    }
    if(value_path == "Serial")
    {
        serial = value;
    }
    if(value_path == "SM")
    {
        sm = value;
    }
    if(value_path == "TenGigabitEthernet")
    {
        tengigabitethernet = value;
    }
    if(value_path == "Tunnel")
    {
        tunnel = value;
    }
    if(value_path == "vasileft")
    {
        vasileft = value;
    }
    if(value_path == "vasiright")
    {
        vasiright = value;
    }
    if(value_path == "Virtual-Template")
    {
        virtual_template = value;
    }
    if(value_path == "VirtualPortGroup")
    {
        virtualportgroup = value;
    }
    if(value_path == "Vlan")
    {
        vlan = value;
    }
}

Native::SnmpServer::TrapSource::AtmSubinterface::AtmSubinterface()
    :
    atm{YType::str, "ATM"}
{
    yang_name = "ATM-subinterface"; yang_parent_name = "trap-source";
}

Native::SnmpServer::TrapSource::AtmSubinterface::~AtmSubinterface()
{
}

bool Native::SnmpServer::TrapSource::AtmSubinterface::has_data() const
{
    return atm.is_set;
}

bool Native::SnmpServer::TrapSource::AtmSubinterface::has_operation() const
{
    return is_set(operation)
	|| is_set(atm.operation);
}

std::string Native::SnmpServer::TrapSource::AtmSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-subinterface";

    return path_buffer.str();

}

const EntityPath Native::SnmpServer::TrapSource::AtmSubinterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:trap-source/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm.is_set || is_set(atm.operation)) leaf_name_data.push_back(atm.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SnmpServer::TrapSource::AtmSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::TrapSource::AtmSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SnmpServer::TrapSource::AtmSubinterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ATM")
    {
        atm = value;
    }
}

Native::SnmpServer::TrapSource::AtmAcrsubinterface::AtmAcrsubinterface()
    :
    atm_acr{YType::str, "ATM-ACR"}
{
    yang_name = "ATM-ACRsubinterface"; yang_parent_name = "trap-source";
}

Native::SnmpServer::TrapSource::AtmAcrsubinterface::~AtmAcrsubinterface()
{
}

bool Native::SnmpServer::TrapSource::AtmAcrsubinterface::has_data() const
{
    return atm_acr.is_set;
}

bool Native::SnmpServer::TrapSource::AtmAcrsubinterface::has_operation() const
{
    return is_set(operation)
	|| is_set(atm_acr.operation);
}

std::string Native::SnmpServer::TrapSource::AtmAcrsubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-ACRsubinterface";

    return path_buffer.str();

}

const EntityPath Native::SnmpServer::TrapSource::AtmAcrsubinterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:trap-source/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm_acr.is_set || is_set(atm_acr.operation)) leaf_name_data.push_back(atm_acr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SnmpServer::TrapSource::AtmAcrsubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::TrapSource::AtmAcrsubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SnmpServer::TrapSource::AtmAcrsubinterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr = value;
    }
}

Native::SnmpServer::TrapSource::LispSubinterface::LispSubinterface()
    :
    lisp{YType::str, "LISP"}
{
    yang_name = "LISP-subinterface"; yang_parent_name = "trap-source";
}

Native::SnmpServer::TrapSource::LispSubinterface::~LispSubinterface()
{
}

bool Native::SnmpServer::TrapSource::LispSubinterface::has_data() const
{
    return lisp.is_set;
}

bool Native::SnmpServer::TrapSource::LispSubinterface::has_operation() const
{
    return is_set(operation)
	|| is_set(lisp.operation);
}

std::string Native::SnmpServer::TrapSource::LispSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LISP-subinterface";

    return path_buffer.str();

}

const EntityPath Native::SnmpServer::TrapSource::LispSubinterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:trap-source/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lisp.is_set || is_set(lisp.operation)) leaf_name_data.push_back(lisp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SnmpServer::TrapSource::LispSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::TrapSource::LispSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SnmpServer::TrapSource::LispSubinterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "LISP")
    {
        lisp = value;
    }
}

Native::SnmpServer::TrapSource::PortChannelSubinterface::PortChannelSubinterface()
    :
    port_channel{YType::str, "Port-channel"}
{
    yang_name = "Port-channel-subinterface"; yang_parent_name = "trap-source";
}

Native::SnmpServer::TrapSource::PortChannelSubinterface::~PortChannelSubinterface()
{
}

bool Native::SnmpServer::TrapSource::PortChannelSubinterface::has_data() const
{
    return port_channel.is_set;
}

bool Native::SnmpServer::TrapSource::PortChannelSubinterface::has_operation() const
{
    return is_set(operation)
	|| is_set(port_channel.operation);
}

std::string Native::SnmpServer::TrapSource::PortChannelSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Port-channel-subinterface";

    return path_buffer.str();

}

const EntityPath Native::SnmpServer::TrapSource::PortChannelSubinterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:trap-source/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_channel.is_set || is_set(port_channel.operation)) leaf_name_data.push_back(port_channel.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SnmpServer::TrapSource::PortChannelSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::TrapSource::PortChannelSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SnmpServer::TrapSource::PortChannelSubinterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "Port-channel")
    {
        port_channel = value;
    }
}

Native::SnmpServer::User::User()
{
    yang_name = "user"; yang_parent_name = "snmp-server";
}

Native::SnmpServer::User::~User()
{
}

bool Native::SnmpServer::User::has_data() const
{
    for (std::size_t index=0; index<names.size(); index++)
    {
        if(names[index]->has_data())
            return true;
    }
    return false;
}

bool Native::SnmpServer::User::has_operation() const
{
    for (std::size_t index=0; index<names.size(); index++)
    {
        if(names[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::SnmpServer::User::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-snmp:user";

    return path_buffer.str();

}

const EntityPath Native::SnmpServer::User::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/snmp-server/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SnmpServer::User::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "names")
    {
        for(auto const & c : names)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::SnmpServer::User::Names>();
        c->parent = this;
        names.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::User::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : names)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::SnmpServer::User::set_value(const std::string & value_path, std::string value)
{
}

Native::SnmpServer::User::Names::Names()
    :
    username{YType::str, "username"},
    grpname{YType::str, "grpname"}
    	,
    v3(nullptr) // presence node
{
    yang_name = "names"; yang_parent_name = "user";
}

Native::SnmpServer::User::Names::~Names()
{
}

bool Native::SnmpServer::User::Names::has_data() const
{
    return username.is_set
	|| grpname.is_set
	|| (v3 !=  nullptr && v3->has_data());
}

bool Native::SnmpServer::User::Names::has_operation() const
{
    return is_set(operation)
	|| is_set(username.operation)
	|| is_set(grpname.operation)
	|| (v3 !=  nullptr && v3->has_operation());
}

std::string Native::SnmpServer::User::Names::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "names" <<"[username='" <<username <<"']" <<"[grpname='" <<grpname <<"']";

    return path_buffer.str();

}

const EntityPath Native::SnmpServer::User::Names::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:user/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (username.is_set || is_set(username.operation)) leaf_name_data.push_back(username.get_name_leafdata());
    if (grpname.is_set || is_set(grpname.operation)) leaf_name_data.push_back(grpname.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SnmpServer::User::Names::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "v3")
    {
        if(v3 == nullptr)
        {
            v3 = std::make_shared<Native::SnmpServer::User::Names::V3>();
        }
        return v3;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::User::Names::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(v3 != nullptr)
    {
        children["v3"] = v3;
    }

    return children;
}

void Native::SnmpServer::User::Names::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "username")
    {
        username = value;
    }
    if(value_path == "grpname")
    {
        grpname = value;
    }
}

Native::SnmpServer::User::Names::V3::V3()
    :
    auth(std::make_shared<Native::SnmpServer::User::Names::V3::Auth>())
{
    auth->parent = this;

    yang_name = "v3"; yang_parent_name = "names";
}

Native::SnmpServer::User::Names::V3::~V3()
{
}

bool Native::SnmpServer::User::Names::V3::has_data() const
{
    return (auth !=  nullptr && auth->has_data());
}

bool Native::SnmpServer::User::Names::V3::has_operation() const
{
    return is_set(operation)
	|| (auth !=  nullptr && auth->has_operation());
}

std::string Native::SnmpServer::User::Names::V3::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "v3";

    return path_buffer.str();

}

const EntityPath Native::SnmpServer::User::Names::V3::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'V3' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SnmpServer::User::Names::V3::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "auth")
    {
        if(auth == nullptr)
        {
            auth = std::make_shared<Native::SnmpServer::User::Names::V3::Auth>();
        }
        return auth;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::User::Names::V3::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(auth != nullptr)
    {
        children["auth"] = auth;
    }

    return children;
}

void Native::SnmpServer::User::Names::V3::set_value(const std::string & value_path, std::string value)
{
}

Native::SnmpServer::User::Names::V3::Auth::Auth()
    :
    sha(std::make_shared<Native::SnmpServer::User::Names::V3::Auth::Sha>())
{
    sha->parent = this;

    yang_name = "auth"; yang_parent_name = "v3";
}

Native::SnmpServer::User::Names::V3::Auth::~Auth()
{
}

bool Native::SnmpServer::User::Names::V3::Auth::has_data() const
{
    return (sha !=  nullptr && sha->has_data());
}

bool Native::SnmpServer::User::Names::V3::Auth::has_operation() const
{
    return is_set(operation)
	|| (sha !=  nullptr && sha->has_operation());
}

std::string Native::SnmpServer::User::Names::V3::Auth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auth";

    return path_buffer.str();

}

const EntityPath Native::SnmpServer::User::Names::V3::Auth::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Auth' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SnmpServer::User::Names::V3::Auth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sha")
    {
        if(sha == nullptr)
        {
            sha = std::make_shared<Native::SnmpServer::User::Names::V3::Auth::Sha>();
        }
        return sha;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::User::Names::V3::Auth::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(sha != nullptr)
    {
        children["sha"] = sha;
    }

    return children;
}

void Native::SnmpServer::User::Names::V3::Auth::set_value(const std::string & value_path, std::string value)
{
}

Native::SnmpServer::User::Names::V3::Auth::Sha::Sha()
    :
    auth(std::make_shared<Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_>())
{
    auth->parent = this;

    yang_name = "sha"; yang_parent_name = "auth";
}

Native::SnmpServer::User::Names::V3::Auth::Sha::~Sha()
{
}

bool Native::SnmpServer::User::Names::V3::Auth::Sha::has_data() const
{
    return (auth !=  nullptr && auth->has_data());
}

bool Native::SnmpServer::User::Names::V3::Auth::Sha::has_operation() const
{
    return is_set(operation)
	|| (auth !=  nullptr && auth->has_operation());
}

std::string Native::SnmpServer::User::Names::V3::Auth::Sha::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sha";

    return path_buffer.str();

}

const EntityPath Native::SnmpServer::User::Names::V3::Auth::Sha::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Sha' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SnmpServer::User::Names::V3::Auth::Sha::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "auth")
    {
        if(auth == nullptr)
        {
            auth = std::make_shared<Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_>();
        }
        return auth;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::User::Names::V3::Auth::Sha::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(auth != nullptr)
    {
        children["auth"] = auth;
    }

    return children;
}

void Native::SnmpServer::User::Names::V3::Auth::Sha::set_value(const std::string & value_path, std::string value)
{
}

Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::Auth_()
    :
    authpass{YType::str, "authpass"}
    	,
    priv(std::make_shared<Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::Priv>())
{
    priv->parent = this;

    yang_name = "auth"; yang_parent_name = "sha";
}

Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::~Auth_()
{
}

bool Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::has_data() const
{
    return authpass.is_set
	|| (priv !=  nullptr && priv->has_data());
}

bool Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::has_operation() const
{
    return is_set(operation)
	|| is_set(authpass.operation)
	|| (priv !=  nullptr && priv->has_operation());
}

std::string Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auth";

    return path_buffer.str();

}

const EntityPath Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Auth_' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (authpass.is_set || is_set(authpass.operation)) leaf_name_data.push_back(authpass.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "priv")
    {
        if(priv == nullptr)
        {
            priv = std::make_shared<Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::Priv>();
        }
        return priv;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(priv != nullptr)
    {
        children["priv"] = priv;
    }

    return children;
}

void Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "authpass")
    {
        authpass = value;
    }
}

Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::Priv::Priv()
    :
    aes(std::make_shared<Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::Priv::Aes>())
{
    aes->parent = this;

    yang_name = "priv"; yang_parent_name = "auth";
}

Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::Priv::~Priv()
{
}

bool Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::Priv::has_data() const
{
    return (aes !=  nullptr && aes->has_data());
}

bool Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::Priv::has_operation() const
{
    return is_set(operation)
	|| (aes !=  nullptr && aes->has_operation());
}

std::string Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::Priv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "priv";

    return path_buffer.str();

}

const EntityPath Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::Priv::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Priv' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::Priv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "aes")
    {
        if(aes == nullptr)
        {
            aes = std::make_shared<Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::Priv::Aes>();
        }
        return aes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::Priv::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(aes != nullptr)
    {
        children["aes"] = aes;
    }

    return children;
}

void Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::Priv::set_value(const std::string & value_path, std::string value)
{
}

Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::Priv::Aes::Aes()
    :
    algo128(std::make_shared<Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::Priv::Aes::Algo128>())
{
    algo128->parent = this;

    yang_name = "aes"; yang_parent_name = "priv";
}

Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::Priv::Aes::~Aes()
{
}

bool Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::Priv::Aes::has_data() const
{
    return (algo128 !=  nullptr && algo128->has_data());
}

bool Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::Priv::Aes::has_operation() const
{
    return is_set(operation)
	|| (algo128 !=  nullptr && algo128->has_operation());
}

std::string Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::Priv::Aes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aes";

    return path_buffer.str();

}

const EntityPath Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::Priv::Aes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Aes' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::Priv::Aes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "algo128")
    {
        if(algo128 == nullptr)
        {
            algo128 = std::make_shared<Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::Priv::Aes::Algo128>();
        }
        return algo128;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::Priv::Aes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(algo128 != nullptr)
    {
        children["algo128"] = algo128;
    }

    return children;
}

void Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::Priv::Aes::set_value(const std::string & value_path, std::string value)
{
}

Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::Priv::Aes::Algo128::Algo128()
    :
    privpass(std::make_shared<Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::Priv::Aes::Algo128::Privpass>())
{
    privpass->parent = this;

    yang_name = "algo128"; yang_parent_name = "aes";
}

Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::Priv::Aes::Algo128::~Algo128()
{
}

bool Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::Priv::Aes::Algo128::has_data() const
{
    return (privpass !=  nullptr && privpass->has_data());
}

bool Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::Priv::Aes::Algo128::has_operation() const
{
    return is_set(operation)
	|| (privpass !=  nullptr && privpass->has_operation());
}

std::string Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::Priv::Aes::Algo128::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "algo128";

    return path_buffer.str();

}

const EntityPath Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::Priv::Aes::Algo128::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Algo128' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::Priv::Aes::Algo128::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "privpass")
    {
        if(privpass == nullptr)
        {
            privpass = std::make_shared<Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::Priv::Aes::Algo128::Privpass>();
        }
        return privpass;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::Priv::Aes::Algo128::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(privpass != nullptr)
    {
        children["privpass"] = privpass;
    }

    return children;
}

void Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::Priv::Aes::Algo128::set_value(const std::string & value_path, std::string value)
{
}

Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::Priv::Aes::Algo128::Privpass::Privpass()
    :
    access{YType::str, "access"},
    privpass{YType::str, "privpass"}
{
    yang_name = "privpass"; yang_parent_name = "algo128";
}

Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::Priv::Aes::Algo128::Privpass::~Privpass()
{
}

bool Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::Priv::Aes::Algo128::Privpass::has_data() const
{
    return access.is_set
	|| privpass.is_set;
}

bool Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::Priv::Aes::Algo128::Privpass::has_operation() const
{
    return is_set(operation)
	|| is_set(access.operation)
	|| is_set(privpass.operation);
}

std::string Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::Priv::Aes::Algo128::Privpass::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "privpass";

    return path_buffer.str();

}

const EntityPath Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::Priv::Aes::Algo128::Privpass::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Privpass' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (access.is_set || is_set(access.operation)) leaf_name_data.push_back(access.get_name_leafdata());
    if (privpass.is_set || is_set(privpass.operation)) leaf_name_data.push_back(privpass.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::Priv::Aes::Algo128::Privpass::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::Priv::Aes::Algo128::Privpass::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::Priv::Aes::Algo128::Privpass::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "access")
    {
        access = value;
    }
    if(value_path == "privpass")
    {
        privpass = value;
    }
}

Native::SnmpServer::View::View()
    :
    name{YType::str, "name"},
    mib{YType::str, "mib"},
    inc_exl{YType::enumeration, "inc-exl"}
{
    yang_name = "view"; yang_parent_name = "snmp-server";
}

Native::SnmpServer::View::~View()
{
}

bool Native::SnmpServer::View::has_data() const
{
    return name.is_set
	|| mib.is_set
	|| inc_exl.is_set;
}

bool Native::SnmpServer::View::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation)
	|| is_set(mib.operation)
	|| is_set(inc_exl.operation);
}

std::string Native::SnmpServer::View::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-snmp:view" <<"[name='" <<name <<"']" <<"[mib='" <<mib <<"']";

    return path_buffer.str();

}

const EntityPath Native::SnmpServer::View::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/snmp-server/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (mib.is_set || is_set(mib.operation)) leaf_name_data.push_back(mib.get_name_leafdata());
    if (inc_exl.is_set || is_set(inc_exl.operation)) leaf_name_data.push_back(inc_exl.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SnmpServer::View::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::View::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SnmpServer::View::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "mib")
    {
        mib = value;
    }
    if(value_path == "inc-exl")
    {
        inc_exl = value;
    }
}

Native::SegmentRouting::SegmentRouting()
    :
    mpls(nullptr) // presence node
{
    yang_name = "segment-routing"; yang_parent_name = "native";
}

Native::SegmentRouting::~SegmentRouting()
{
}

bool Native::SegmentRouting::has_data() const
{
    return (mpls !=  nullptr && mpls->has_data());
}

bool Native::SegmentRouting::has_operation() const
{
    return is_set(operation)
	|| (mpls !=  nullptr && mpls->has_operation());
}

std::string Native::SegmentRouting::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "segment-routing";

    return path_buffer.str();

}

const EntityPath Native::SegmentRouting::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SegmentRouting::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mpls")
    {
        if(mpls == nullptr)
        {
            mpls = std::make_shared<Native::SegmentRouting::Mpls>();
        }
        return mpls;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SegmentRouting::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(mpls != nullptr)
    {
        children["mpls"] = mpls;
    }

    return children;
}

void Native::SegmentRouting::set_value(const std::string & value_path, std::string value)
{
}

Native::SegmentRouting::Mpls::Mpls()
    :
    shutdown{YType::empty, "shutdown"}
    	,
    connected_prefix_sid_map(nullptr) // presence node
	,global_block(std::make_shared<Native::SegmentRouting::Mpls::GlobalBlock>())
	,mapping_server(nullptr) // presence node
	,set_attributes(nullptr) // presence node
{
    global_block->parent = this;

    yang_name = "mpls"; yang_parent_name = "segment-routing";
}

Native::SegmentRouting::Mpls::~Mpls()
{
}

bool Native::SegmentRouting::Mpls::has_data() const
{
    return shutdown.is_set
	|| (connected_prefix_sid_map !=  nullptr && connected_prefix_sid_map->has_data())
	|| (global_block !=  nullptr && global_block->has_data())
	|| (mapping_server !=  nullptr && mapping_server->has_data())
	|| (set_attributes !=  nullptr && set_attributes->has_data());
}

bool Native::SegmentRouting::Mpls::has_operation() const
{
    return is_set(operation)
	|| is_set(shutdown.operation)
	|| (connected_prefix_sid_map !=  nullptr && connected_prefix_sid_map->has_operation())
	|| (global_block !=  nullptr && global_block->has_operation())
	|| (mapping_server !=  nullptr && mapping_server->has_operation())
	|| (set_attributes !=  nullptr && set_attributes->has_operation());
}

std::string Native::SegmentRouting::Mpls::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-segment-routing:mpls";

    return path_buffer.str();

}

const EntityPath Native::SegmentRouting::Mpls::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/segment-routing/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (shutdown.is_set || is_set(shutdown.operation)) leaf_name_data.push_back(shutdown.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SegmentRouting::Mpls::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "connected-prefix-sid-map")
    {
        if(connected_prefix_sid_map == nullptr)
        {
            connected_prefix_sid_map = std::make_shared<Native::SegmentRouting::Mpls::ConnectedPrefixSidMap>();
        }
        return connected_prefix_sid_map;
    }

    if(child_yang_name == "global-block")
    {
        if(global_block == nullptr)
        {
            global_block = std::make_shared<Native::SegmentRouting::Mpls::GlobalBlock>();
        }
        return global_block;
    }

    if(child_yang_name == "mapping-server")
    {
        if(mapping_server == nullptr)
        {
            mapping_server = std::make_shared<Native::SegmentRouting::Mpls::MappingServer>();
        }
        return mapping_server;
    }

    if(child_yang_name == "set-attributes")
    {
        if(set_attributes == nullptr)
        {
            set_attributes = std::make_shared<Native::SegmentRouting::Mpls::SetAttributes>();
        }
        return set_attributes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SegmentRouting::Mpls::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(connected_prefix_sid_map != nullptr)
    {
        children["connected-prefix-sid-map"] = connected_prefix_sid_map;
    }

    if(global_block != nullptr)
    {
        children["global-block"] = global_block;
    }

    if(mapping_server != nullptr)
    {
        children["mapping-server"] = mapping_server;
    }

    if(set_attributes != nullptr)
    {
        children["set-attributes"] = set_attributes;
    }

    return children;
}

void Native::SegmentRouting::Mpls::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "shutdown")
    {
        shutdown = value;
    }
}

Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::ConnectedPrefixSidMap()
    :
    address_family(std::make_shared<Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily>())
{
    address_family->parent = this;

    yang_name = "connected-prefix-sid-map"; yang_parent_name = "mpls";
}

Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::~ConnectedPrefixSidMap()
{
}

bool Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::has_data() const
{
    return (address_family !=  nullptr && address_family->has_data());
}

bool Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::has_operation() const
{
    return is_set(operation)
	|| (address_family !=  nullptr && address_family->has_operation());
}

std::string Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "connected-prefix-sid-map";

    return path_buffer.str();

}

const EntityPath Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/segment-routing/Cisco-IOS-XE-segment-routing:mpls/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address-family")
    {
        if(address_family == nullptr)
        {
            address_family = std::make_shared<Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily>();
        }
        return address_family;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(address_family != nullptr)
    {
        children["address-family"] = address_family;
    }

    return children;
}

void Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::set_value(const std::string & value_path, std::string value)
{
}

Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::AddressFamily()
    :
    ipv4(nullptr) // presence node
	,ipv4_strict_spf(std::make_shared<Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf>())
{
    ipv4_strict_spf->parent = this;

    yang_name = "address-family"; yang_parent_name = "connected-prefix-sid-map";
}

Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::~AddressFamily()
{
}

bool Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::has_data() const
{
    return (ipv4 !=  nullptr && ipv4->has_data())
	|| (ipv4_strict_spf !=  nullptr && ipv4_strict_spf->has_data());
}

bool Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::has_operation() const
{
    return is_set(operation)
	|| (ipv4 !=  nullptr && ipv4->has_operation())
	|| (ipv4_strict_spf !=  nullptr && ipv4_strict_spf->has_operation());
}

std::string Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address-family";

    return path_buffer.str();

}

const EntityPath Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/segment-routing/Cisco-IOS-XE-segment-routing:mpls/connected-prefix-sid-map/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4")
    {
        if(ipv4 == nullptr)
        {
            ipv4 = std::make_shared<Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4>();
        }
        return ipv4;
    }

    if(child_yang_name == "ipv4-strict-spf")
    {
        if(ipv4_strict_spf == nullptr)
        {
            ipv4_strict_spf = std::make_shared<Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf>();
        }
        return ipv4_strict_spf;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ipv4 != nullptr)
    {
        children["ipv4"] = ipv4;
    }

    if(ipv4_strict_spf != nullptr)
    {
        children["ipv4-strict-spf"] = ipv4_strict_spf;
    }

    return children;
}

void Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::set_value(const std::string & value_path, std::string value)
{
}

Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4::Ipv4()
{
    yang_name = "ipv4"; yang_parent_name = "address-family";
}

Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4::~Ipv4()
{
}

bool Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4::has_data() const
{
    for (std::size_t index=0; index<prefixes.size(); index++)
    {
        if(prefixes[index]->has_data())
            return true;
    }
    return false;
}

bool Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4::has_operation() const
{
    for (std::size_t index=0; index<prefixes.size(); index++)
    {
        if(prefixes[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";

    return path_buffer.str();

}

const EntityPath Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/segment-routing/Cisco-IOS-XE-segment-routing:mpls/connected-prefix-sid-map/address-family/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefixes")
    {
        for(auto const & c : prefixes)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4::Prefixes>();
        c->parent = this;
        prefixes.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : prefixes)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4::set_value(const std::string & value_path, std::string value)
{
}

Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4::Prefixes::Prefixes()
    :
    ipprefix{YType::str, "ipprefix"}
    	,
    absolute(std::make_shared<Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4::Prefixes::Absolute>())
	,index_(std::make_shared<Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4::Prefixes::Index_>())
{
    absolute->parent = this;

    index_->parent = this;

    yang_name = "prefixes"; yang_parent_name = "ipv4";
}

Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4::Prefixes::~Prefixes()
{
}

bool Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4::Prefixes::has_data() const
{
    return ipprefix.is_set
	|| (absolute !=  nullptr && absolute->has_data())
	|| (index_ !=  nullptr && index_->has_data());
}

bool Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4::Prefixes::has_operation() const
{
    return is_set(operation)
	|| is_set(ipprefix.operation)
	|| (absolute !=  nullptr && absolute->has_operation())
	|| (index_ !=  nullptr && index_->has_operation());
}

std::string Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4::Prefixes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefixes" <<"[ipprefix='" <<ipprefix <<"']";

    return path_buffer.str();

}

const EntityPath Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4::Prefixes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/segment-routing/Cisco-IOS-XE-segment-routing:mpls/connected-prefix-sid-map/address-family/ipv4/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipprefix.is_set || is_set(ipprefix.operation)) leaf_name_data.push_back(ipprefix.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4::Prefixes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "absolute")
    {
        if(absolute == nullptr)
        {
            absolute = std::make_shared<Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4::Prefixes::Absolute>();
        }
        return absolute;
    }

    if(child_yang_name == "index")
    {
        if(index_ == nullptr)
        {
            index_ = std::make_shared<Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4::Prefixes::Index_>();
        }
        return index_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4::Prefixes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(absolute != nullptr)
    {
        children["absolute"] = absolute;
    }

    if(index_ != nullptr)
    {
        children["index"] = index_;
    }

    return children;
}

void Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4::Prefixes::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipprefix")
    {
        ipprefix = value;
    }
}

Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4::Prefixes::Index_::Index_()
    :
    attach{YType::empty, "attach"},
    range{YType::uint32, "range"},
    range_start{YType::uint32, "range-start"}
{
    yang_name = "index"; yang_parent_name = "prefixes";
}

Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4::Prefixes::Index_::~Index_()
{
}

bool Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4::Prefixes::Index_::has_data() const
{
    return attach.is_set
	|| range.is_set
	|| range_start.is_set;
}

bool Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4::Prefixes::Index_::has_operation() const
{
    return is_set(operation)
	|| is_set(attach.operation)
	|| is_set(range.operation)
	|| is_set(range_start.operation);
}

std::string Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4::Prefixes::Index_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "index";

    return path_buffer.str();

}

const EntityPath Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4::Prefixes::Index_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Index_' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (attach.is_set || is_set(attach.operation)) leaf_name_data.push_back(attach.get_name_leafdata());
    if (range.is_set || is_set(range.operation)) leaf_name_data.push_back(range.get_name_leafdata());
    if (range_start.is_set || is_set(range_start.operation)) leaf_name_data.push_back(range_start.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4::Prefixes::Index_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4::Prefixes::Index_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4::Prefixes::Index_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "attach")
    {
        attach = value;
    }
    if(value_path == "range")
    {
        range = value;
    }
    if(value_path == "range-start")
    {
        range_start = value;
    }
}

Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4::Prefixes::Absolute::Absolute()
    :
    range{YType::uint32, "range"},
    range_start{YType::uint32, "range-start"}
{
    yang_name = "absolute"; yang_parent_name = "prefixes";
}

Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4::Prefixes::Absolute::~Absolute()
{
}

bool Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4::Prefixes::Absolute::has_data() const
{
    return range.is_set
	|| range_start.is_set;
}

bool Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4::Prefixes::Absolute::has_operation() const
{
    return is_set(operation)
	|| is_set(range.operation)
	|| is_set(range_start.operation);
}

std::string Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4::Prefixes::Absolute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "absolute";

    return path_buffer.str();

}

const EntityPath Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4::Prefixes::Absolute::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Absolute' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (range.is_set || is_set(range.operation)) leaf_name_data.push_back(range.get_name_leafdata());
    if (range_start.is_set || is_set(range_start.operation)) leaf_name_data.push_back(range_start.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4::Prefixes::Absolute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4::Prefixes::Absolute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4::Prefixes::Absolute::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "range")
    {
        range = value;
    }
    if(value_path == "range-start")
    {
        range_start = value;
    }
}

Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4StrictSpf()
    :
    ipv4(std::make_shared<Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4>())
{
    ipv4->parent = this;

    yang_name = "ipv4-strict-spf"; yang_parent_name = "address-family";
}

Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::~Ipv4StrictSpf()
{
}

bool Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::has_data() const
{
    return (ipv4 !=  nullptr && ipv4->has_data());
}

bool Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::has_operation() const
{
    return is_set(operation)
	|| (ipv4 !=  nullptr && ipv4->has_operation());
}

std::string Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-strict-spf";

    return path_buffer.str();

}

const EntityPath Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/segment-routing/Cisco-IOS-XE-segment-routing:mpls/connected-prefix-sid-map/address-family/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4")
    {
        if(ipv4 == nullptr)
        {
            ipv4 = std::make_shared<Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4>();
        }
        return ipv4;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ipv4 != nullptr)
    {
        children["ipv4"] = ipv4;
    }

    return children;
}

void Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::set_value(const std::string & value_path, std::string value)
{
}

Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::Ipv4()
    :
    strict_spf(nullptr) // presence node
{
    yang_name = "ipv4"; yang_parent_name = "ipv4-strict-spf";
}

Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::~Ipv4()
{
}

bool Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::has_data() const
{
    return (strict_spf !=  nullptr && strict_spf->has_data());
}

bool Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::has_operation() const
{
    return is_set(operation)
	|| (strict_spf !=  nullptr && strict_spf->has_operation());
}

std::string Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";

    return path_buffer.str();

}

const EntityPath Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/segment-routing/Cisco-IOS-XE-segment-routing:mpls/connected-prefix-sid-map/address-family/ipv4-strict-spf/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "strict-spf")
    {
        if(strict_spf == nullptr)
        {
            strict_spf = std::make_shared<Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf>();
        }
        return strict_spf;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(strict_spf != nullptr)
    {
        children["strict-spf"] = strict_spf;
    }

    return children;
}

void Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::set_value(const std::string & value_path, std::string value)
{
}

Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::StrictSpf()
{
    yang_name = "strict-spf"; yang_parent_name = "ipv4";
}

Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::~StrictSpf()
{
}

bool Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::has_data() const
{
    for (std::size_t index=0; index<prefixes.size(); index++)
    {
        if(prefixes[index]->has_data())
            return true;
    }
    return false;
}

bool Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::has_operation() const
{
    for (std::size_t index=0; index<prefixes.size(); index++)
    {
        if(prefixes[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "strict-spf";

    return path_buffer.str();

}

const EntityPath Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/segment-routing/Cisco-IOS-XE-segment-routing:mpls/connected-prefix-sid-map/address-family/ipv4-strict-spf/ipv4/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefixes")
    {
        for(auto const & c : prefixes)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes>();
        c->parent = this;
        prefixes.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : prefixes)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::set_value(const std::string & value_path, std::string value)
{
}

Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Prefixes()
    :
    ipprefix{YType::str, "ipprefix"}
    	,
    absolute(std::make_shared<Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Absolute>())
	,index_(std::make_shared<Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Index_>())
{
    absolute->parent = this;

    index_->parent = this;

    yang_name = "prefixes"; yang_parent_name = "strict-spf";
}

Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::~Prefixes()
{
}

bool Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::has_data() const
{
    return ipprefix.is_set
	|| (absolute !=  nullptr && absolute->has_data())
	|| (index_ !=  nullptr && index_->has_data());
}

bool Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::has_operation() const
{
    return is_set(operation)
	|| is_set(ipprefix.operation)
	|| (absolute !=  nullptr && absolute->has_operation())
	|| (index_ !=  nullptr && index_->has_operation());
}

std::string Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefixes" <<"[ipprefix='" <<ipprefix <<"']";

    return path_buffer.str();

}

const EntityPath Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/segment-routing/Cisco-IOS-XE-segment-routing:mpls/connected-prefix-sid-map/address-family/ipv4-strict-spf/ipv4/strict-spf/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipprefix.is_set || is_set(ipprefix.operation)) leaf_name_data.push_back(ipprefix.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "absolute")
    {
        if(absolute == nullptr)
        {
            absolute = std::make_shared<Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Absolute>();
        }
        return absolute;
    }

    if(child_yang_name == "index")
    {
        if(index_ == nullptr)
        {
            index_ = std::make_shared<Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Index_>();
        }
        return index_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(absolute != nullptr)
    {
        children["absolute"] = absolute;
    }

    if(index_ != nullptr)
    {
        children["index"] = index_;
    }

    return children;
}

void Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipprefix")
    {
        ipprefix = value;
    }
}

Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Index_::Index_()
    :
    attach{YType::empty, "attach"},
    range{YType::uint32, "range"},
    range_start{YType::uint32, "range-start"}
{
    yang_name = "index"; yang_parent_name = "prefixes";
}

Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Index_::~Index_()
{
}

bool Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Index_::has_data() const
{
    return attach.is_set
	|| range.is_set
	|| range_start.is_set;
}

bool Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Index_::has_operation() const
{
    return is_set(operation)
	|| is_set(attach.operation)
	|| is_set(range.operation)
	|| is_set(range_start.operation);
}

std::string Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Index_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "index";

    return path_buffer.str();

}

const EntityPath Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Index_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Index_' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (attach.is_set || is_set(attach.operation)) leaf_name_data.push_back(attach.get_name_leafdata());
    if (range.is_set || is_set(range.operation)) leaf_name_data.push_back(range.get_name_leafdata());
    if (range_start.is_set || is_set(range_start.operation)) leaf_name_data.push_back(range_start.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Index_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Index_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Index_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "attach")
    {
        attach = value;
    }
    if(value_path == "range")
    {
        range = value;
    }
    if(value_path == "range-start")
    {
        range_start = value;
    }
}

Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Absolute::Absolute()
    :
    range{YType::uint32, "range"},
    range_start{YType::uint32, "range-start"}
{
    yang_name = "absolute"; yang_parent_name = "prefixes";
}

Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Absolute::~Absolute()
{
}

bool Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Absolute::has_data() const
{
    return range.is_set
	|| range_start.is_set;
}

bool Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Absolute::has_operation() const
{
    return is_set(operation)
	|| is_set(range.operation)
	|| is_set(range_start.operation);
}

std::string Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Absolute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "absolute";

    return path_buffer.str();

}

const EntityPath Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Absolute::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Absolute' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (range.is_set || is_set(range.operation)) leaf_name_data.push_back(range.get_name_leafdata());
    if (range_start.is_set || is_set(range_start.operation)) leaf_name_data.push_back(range_start.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Absolute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Absolute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Absolute::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "range")
    {
        range = value;
    }
    if(value_path == "range-start")
    {
        range_start = value;
    }
}

Native::SegmentRouting::Mpls::GlobalBlock::GlobalBlock()
    :
    range_end{YType::uint32, "range-end"},
    range_start{YType::uint32, "range-start"}
{
    yang_name = "global-block"; yang_parent_name = "mpls";
}

Native::SegmentRouting::Mpls::GlobalBlock::~GlobalBlock()
{
}

bool Native::SegmentRouting::Mpls::GlobalBlock::has_data() const
{
    return range_end.is_set
	|| range_start.is_set;
}

bool Native::SegmentRouting::Mpls::GlobalBlock::has_operation() const
{
    return is_set(operation)
	|| is_set(range_end.operation)
	|| is_set(range_start.operation);
}

std::string Native::SegmentRouting::Mpls::GlobalBlock::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global-block";

    return path_buffer.str();

}

const EntityPath Native::SegmentRouting::Mpls::GlobalBlock::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/segment-routing/Cisco-IOS-XE-segment-routing:mpls/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (range_end.is_set || is_set(range_end.operation)) leaf_name_data.push_back(range_end.get_name_leafdata());
    if (range_start.is_set || is_set(range_start.operation)) leaf_name_data.push_back(range_start.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SegmentRouting::Mpls::GlobalBlock::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SegmentRouting::Mpls::GlobalBlock::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SegmentRouting::Mpls::GlobalBlock::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "range-end")
    {
        range_end = value;
    }
    if(value_path == "range-start")
    {
        range_start = value;
    }
}

Native::SegmentRouting::Mpls::MappingServer::MappingServer()
    :
    prefix_sid_map(nullptr) // presence node
{
    yang_name = "mapping-server"; yang_parent_name = "mpls";
}

Native::SegmentRouting::Mpls::MappingServer::~MappingServer()
{
}

bool Native::SegmentRouting::Mpls::MappingServer::has_data() const
{
    return (prefix_sid_map !=  nullptr && prefix_sid_map->has_data());
}

bool Native::SegmentRouting::Mpls::MappingServer::has_operation() const
{
    return is_set(operation)
	|| (prefix_sid_map !=  nullptr && prefix_sid_map->has_operation());
}

std::string Native::SegmentRouting::Mpls::MappingServer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mapping-server";

    return path_buffer.str();

}

const EntityPath Native::SegmentRouting::Mpls::MappingServer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/segment-routing/Cisco-IOS-XE-segment-routing:mpls/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SegmentRouting::Mpls::MappingServer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefix-sid-map")
    {
        if(prefix_sid_map == nullptr)
        {
            prefix_sid_map = std::make_shared<Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap>();
        }
        return prefix_sid_map;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SegmentRouting::Mpls::MappingServer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(prefix_sid_map != nullptr)
    {
        children["prefix-sid-map"] = prefix_sid_map;
    }

    return children;
}

void Native::SegmentRouting::Mpls::MappingServer::set_value(const std::string & value_path, std::string value)
{
}

Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::PrefixSidMap()
    :
    address_family(std::make_shared<Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily>())
{
    address_family->parent = this;

    yang_name = "prefix-sid-map"; yang_parent_name = "mapping-server";
}

Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::~PrefixSidMap()
{
}

bool Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::has_data() const
{
    return (address_family !=  nullptr && address_family->has_data());
}

bool Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::has_operation() const
{
    return is_set(operation)
	|| (address_family !=  nullptr && address_family->has_operation());
}

std::string Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-sid-map";

    return path_buffer.str();

}

const EntityPath Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/segment-routing/Cisco-IOS-XE-segment-routing:mpls/mapping-server/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address-family")
    {
        if(address_family == nullptr)
        {
            address_family = std::make_shared<Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily>();
        }
        return address_family;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(address_family != nullptr)
    {
        children["address-family"] = address_family;
    }

    return children;
}

void Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::set_value(const std::string & value_path, std::string value)
{
}

Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::AddressFamily()
    :
    ipv4(nullptr) // presence node
	,ipv4_strict_spf(std::make_shared<Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf>())
{
    ipv4_strict_spf->parent = this;

    yang_name = "address-family"; yang_parent_name = "prefix-sid-map";
}

Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::~AddressFamily()
{
}

bool Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::has_data() const
{
    return (ipv4 !=  nullptr && ipv4->has_data())
	|| (ipv4_strict_spf !=  nullptr && ipv4_strict_spf->has_data());
}

bool Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::has_operation() const
{
    return is_set(operation)
	|| (ipv4 !=  nullptr && ipv4->has_operation())
	|| (ipv4_strict_spf !=  nullptr && ipv4_strict_spf->has_operation());
}

std::string Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address-family";

    return path_buffer.str();

}

const EntityPath Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/segment-routing/Cisco-IOS-XE-segment-routing:mpls/mapping-server/prefix-sid-map/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4")
    {
        if(ipv4 == nullptr)
        {
            ipv4 = std::make_shared<Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4>();
        }
        return ipv4;
    }

    if(child_yang_name == "ipv4-strict-spf")
    {
        if(ipv4_strict_spf == nullptr)
        {
            ipv4_strict_spf = std::make_shared<Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf>();
        }
        return ipv4_strict_spf;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ipv4 != nullptr)
    {
        children["ipv4"] = ipv4;
    }

    if(ipv4_strict_spf != nullptr)
    {
        children["ipv4-strict-spf"] = ipv4_strict_spf;
    }

    return children;
}

void Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::set_value(const std::string & value_path, std::string value)
{
}

Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::Ipv4()
{
    yang_name = "ipv4"; yang_parent_name = "address-family";
}

Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::~Ipv4()
{
}

bool Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::has_data() const
{
    for (std::size_t index=0; index<prefixes.size(); index++)
    {
        if(prefixes[index]->has_data())
            return true;
    }
    return false;
}

bool Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::has_operation() const
{
    for (std::size_t index=0; index<prefixes.size(); index++)
    {
        if(prefixes[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";

    return path_buffer.str();

}

const EntityPath Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/segment-routing/Cisco-IOS-XE-segment-routing:mpls/mapping-server/prefix-sid-map/address-family/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefixes")
    {
        for(auto const & c : prefixes)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::Prefixes>();
        c->parent = this;
        prefixes.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : prefixes)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::set_value(const std::string & value_path, std::string value)
{
}

Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::Prefixes::Prefixes()
    :
    ipprefix{YType::str, "ipprefix"}
    	,
    absolute(std::make_shared<Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::Prefixes::Absolute>())
	,index_(std::make_shared<Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::Prefixes::Index_>())
{
    absolute->parent = this;

    index_->parent = this;

    yang_name = "prefixes"; yang_parent_name = "ipv4";
}

Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::Prefixes::~Prefixes()
{
}

bool Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::Prefixes::has_data() const
{
    return ipprefix.is_set
	|| (absolute !=  nullptr && absolute->has_data())
	|| (index_ !=  nullptr && index_->has_data());
}

bool Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::Prefixes::has_operation() const
{
    return is_set(operation)
	|| is_set(ipprefix.operation)
	|| (absolute !=  nullptr && absolute->has_operation())
	|| (index_ !=  nullptr && index_->has_operation());
}

std::string Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::Prefixes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefixes" <<"[ipprefix='" <<ipprefix <<"']";

    return path_buffer.str();

}

const EntityPath Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::Prefixes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/segment-routing/Cisco-IOS-XE-segment-routing:mpls/mapping-server/prefix-sid-map/address-family/ipv4/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipprefix.is_set || is_set(ipprefix.operation)) leaf_name_data.push_back(ipprefix.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::Prefixes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "absolute")
    {
        if(absolute == nullptr)
        {
            absolute = std::make_shared<Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::Prefixes::Absolute>();
        }
        return absolute;
    }

    if(child_yang_name == "index")
    {
        if(index_ == nullptr)
        {
            index_ = std::make_shared<Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::Prefixes::Index_>();
        }
        return index_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::Prefixes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(absolute != nullptr)
    {
        children["absolute"] = absolute;
    }

    if(index_ != nullptr)
    {
        children["index"] = index_;
    }

    return children;
}

void Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::Prefixes::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipprefix")
    {
        ipprefix = value;
    }
}

Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::Prefixes::Index_::Index_()
    :
    attach{YType::empty, "attach"},
    range{YType::uint32, "range"},
    range_start{YType::uint32, "range-start"}
{
    yang_name = "index"; yang_parent_name = "prefixes";
}

Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::Prefixes::Index_::~Index_()
{
}

bool Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::Prefixes::Index_::has_data() const
{
    return attach.is_set
	|| range.is_set
	|| range_start.is_set;
}

bool Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::Prefixes::Index_::has_operation() const
{
    return is_set(operation)
	|| is_set(attach.operation)
	|| is_set(range.operation)
	|| is_set(range_start.operation);
}

std::string Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::Prefixes::Index_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "index";

    return path_buffer.str();

}

const EntityPath Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::Prefixes::Index_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Index_' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (attach.is_set || is_set(attach.operation)) leaf_name_data.push_back(attach.get_name_leafdata());
    if (range.is_set || is_set(range.operation)) leaf_name_data.push_back(range.get_name_leafdata());
    if (range_start.is_set || is_set(range_start.operation)) leaf_name_data.push_back(range_start.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::Prefixes::Index_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::Prefixes::Index_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::Prefixes::Index_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "attach")
    {
        attach = value;
    }
    if(value_path == "range")
    {
        range = value;
    }
    if(value_path == "range-start")
    {
        range_start = value;
    }
}

Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::Prefixes::Absolute::Absolute()
    :
    range{YType::uint32, "range"},
    range_start{YType::uint32, "range-start"}
{
    yang_name = "absolute"; yang_parent_name = "prefixes";
}

Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::Prefixes::Absolute::~Absolute()
{
}

bool Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::Prefixes::Absolute::has_data() const
{
    return range.is_set
	|| range_start.is_set;
}

bool Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::Prefixes::Absolute::has_operation() const
{
    return is_set(operation)
	|| is_set(range.operation)
	|| is_set(range_start.operation);
}

std::string Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::Prefixes::Absolute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "absolute";

    return path_buffer.str();

}

const EntityPath Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::Prefixes::Absolute::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Absolute' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (range.is_set || is_set(range.operation)) leaf_name_data.push_back(range.get_name_leafdata());
    if (range_start.is_set || is_set(range_start.operation)) leaf_name_data.push_back(range_start.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::Prefixes::Absolute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::Prefixes::Absolute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::Prefixes::Absolute::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "range")
    {
        range = value;
    }
    if(value_path == "range-start")
    {
        range_start = value;
    }
}

Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4StrictSpf()
    :
    ipv4(std::make_shared<Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4>())
{
    ipv4->parent = this;

    yang_name = "ipv4-strict-spf"; yang_parent_name = "address-family";
}

Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::~Ipv4StrictSpf()
{
}

bool Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::has_data() const
{
    return (ipv4 !=  nullptr && ipv4->has_data());
}

bool Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::has_operation() const
{
    return is_set(operation)
	|| (ipv4 !=  nullptr && ipv4->has_operation());
}

std::string Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-strict-spf";

    return path_buffer.str();

}

const EntityPath Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/segment-routing/Cisco-IOS-XE-segment-routing:mpls/mapping-server/prefix-sid-map/address-family/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4")
    {
        if(ipv4 == nullptr)
        {
            ipv4 = std::make_shared<Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4>();
        }
        return ipv4;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ipv4 != nullptr)
    {
        children["ipv4"] = ipv4;
    }

    return children;
}

void Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::set_value(const std::string & value_path, std::string value)
{
}

Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::Ipv4()
    :
    strict_spf(nullptr) // presence node
{
    yang_name = "ipv4"; yang_parent_name = "ipv4-strict-spf";
}

Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::~Ipv4()
{
}

bool Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::has_data() const
{
    return (strict_spf !=  nullptr && strict_spf->has_data());
}

bool Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::has_operation() const
{
    return is_set(operation)
	|| (strict_spf !=  nullptr && strict_spf->has_operation());
}

std::string Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";

    return path_buffer.str();

}

const EntityPath Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/segment-routing/Cisco-IOS-XE-segment-routing:mpls/mapping-server/prefix-sid-map/address-family/ipv4-strict-spf/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "strict-spf")
    {
        if(strict_spf == nullptr)
        {
            strict_spf = std::make_shared<Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf>();
        }
        return strict_spf;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(strict_spf != nullptr)
    {
        children["strict-spf"] = strict_spf;
    }

    return children;
}

void Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::set_value(const std::string & value_path, std::string value)
{
}

Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::StrictSpf()
{
    yang_name = "strict-spf"; yang_parent_name = "ipv4";
}

Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::~StrictSpf()
{
}

bool Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::has_data() const
{
    for (std::size_t index=0; index<prefixes.size(); index++)
    {
        if(prefixes[index]->has_data())
            return true;
    }
    return false;
}

bool Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::has_operation() const
{
    for (std::size_t index=0; index<prefixes.size(); index++)
    {
        if(prefixes[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "strict-spf";

    return path_buffer.str();

}

const EntityPath Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/segment-routing/Cisco-IOS-XE-segment-routing:mpls/mapping-server/prefix-sid-map/address-family/ipv4-strict-spf/ipv4/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefixes")
    {
        for(auto const & c : prefixes)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes>();
        c->parent = this;
        prefixes.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : prefixes)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::set_value(const std::string & value_path, std::string value)
{
}

Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Prefixes()
    :
    ipprefix{YType::str, "ipprefix"}
    	,
    absolute(std::make_shared<Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Absolute>())
	,index_(std::make_shared<Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Index_>())
{
    absolute->parent = this;

    index_->parent = this;

    yang_name = "prefixes"; yang_parent_name = "strict-spf";
}

Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::~Prefixes()
{
}

bool Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::has_data() const
{
    return ipprefix.is_set
	|| (absolute !=  nullptr && absolute->has_data())
	|| (index_ !=  nullptr && index_->has_data());
}

bool Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::has_operation() const
{
    return is_set(operation)
	|| is_set(ipprefix.operation)
	|| (absolute !=  nullptr && absolute->has_operation())
	|| (index_ !=  nullptr && index_->has_operation());
}

std::string Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefixes" <<"[ipprefix='" <<ipprefix <<"']";

    return path_buffer.str();

}

const EntityPath Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/segment-routing/Cisco-IOS-XE-segment-routing:mpls/mapping-server/prefix-sid-map/address-family/ipv4-strict-spf/ipv4/strict-spf/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipprefix.is_set || is_set(ipprefix.operation)) leaf_name_data.push_back(ipprefix.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "absolute")
    {
        if(absolute == nullptr)
        {
            absolute = std::make_shared<Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Absolute>();
        }
        return absolute;
    }

    if(child_yang_name == "index")
    {
        if(index_ == nullptr)
        {
            index_ = std::make_shared<Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Index_>();
        }
        return index_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(absolute != nullptr)
    {
        children["absolute"] = absolute;
    }

    if(index_ != nullptr)
    {
        children["index"] = index_;
    }

    return children;
}

void Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipprefix")
    {
        ipprefix = value;
    }
}

Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Index_::Index_()
    :
    attach{YType::empty, "attach"},
    range{YType::uint32, "range"},
    range_start{YType::uint32, "range-start"}
{
    yang_name = "index"; yang_parent_name = "prefixes";
}

Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Index_::~Index_()
{
}

bool Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Index_::has_data() const
{
    return attach.is_set
	|| range.is_set
	|| range_start.is_set;
}

bool Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Index_::has_operation() const
{
    return is_set(operation)
	|| is_set(attach.operation)
	|| is_set(range.operation)
	|| is_set(range_start.operation);
}

std::string Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Index_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "index";

    return path_buffer.str();

}

const EntityPath Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Index_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Index_' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (attach.is_set || is_set(attach.operation)) leaf_name_data.push_back(attach.get_name_leafdata());
    if (range.is_set || is_set(range.operation)) leaf_name_data.push_back(range.get_name_leafdata());
    if (range_start.is_set || is_set(range_start.operation)) leaf_name_data.push_back(range_start.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Index_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Index_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Index_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "attach")
    {
        attach = value;
    }
    if(value_path == "range")
    {
        range = value;
    }
    if(value_path == "range-start")
    {
        range_start = value;
    }
}

Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Absolute::Absolute()
    :
    range{YType::uint32, "range"},
    range_start{YType::uint32, "range-start"}
{
    yang_name = "absolute"; yang_parent_name = "prefixes";
}

Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Absolute::~Absolute()
{
}

bool Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Absolute::has_data() const
{
    return range.is_set
	|| range_start.is_set;
}

bool Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Absolute::has_operation() const
{
    return is_set(operation)
	|| is_set(range.operation)
	|| is_set(range_start.operation);
}

std::string Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Absolute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "absolute";

    return path_buffer.str();

}

const EntityPath Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Absolute::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Absolute' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (range.is_set || is_set(range.operation)) leaf_name_data.push_back(range.get_name_leafdata());
    if (range_start.is_set || is_set(range_start.operation)) leaf_name_data.push_back(range_start.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Absolute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Absolute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Absolute::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "range")
    {
        range = value;
    }
    if(value_path == "range-start")
    {
        range_start = value;
    }
}

Native::SegmentRouting::Mpls::SetAttributes::SetAttributes()
    :
    address_family(std::make_shared<Native::SegmentRouting::Mpls::SetAttributes::AddressFamily>())
{
    address_family->parent = this;

    yang_name = "set-attributes"; yang_parent_name = "mpls";
}

Native::SegmentRouting::Mpls::SetAttributes::~SetAttributes()
{
}

bool Native::SegmentRouting::Mpls::SetAttributes::has_data() const
{
    return (address_family !=  nullptr && address_family->has_data());
}

bool Native::SegmentRouting::Mpls::SetAttributes::has_operation() const
{
    return is_set(operation)
	|| (address_family !=  nullptr && address_family->has_operation());
}

std::string Native::SegmentRouting::Mpls::SetAttributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "set-attributes";

    return path_buffer.str();

}

const EntityPath Native::SegmentRouting::Mpls::SetAttributes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/segment-routing/Cisco-IOS-XE-segment-routing:mpls/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SegmentRouting::Mpls::SetAttributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address-family")
    {
        if(address_family == nullptr)
        {
            address_family = std::make_shared<Native::SegmentRouting::Mpls::SetAttributes::AddressFamily>();
        }
        return address_family;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SegmentRouting::Mpls::SetAttributes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(address_family != nullptr)
    {
        children["address-family"] = address_family;
    }

    return children;
}

void Native::SegmentRouting::Mpls::SetAttributes::set_value(const std::string & value_path, std::string value)
{
}

Native::SegmentRouting::Mpls::SetAttributes::AddressFamily::AddressFamily()
    :
    ipv4(nullptr) // presence node
{
    yang_name = "address-family"; yang_parent_name = "set-attributes";
}

Native::SegmentRouting::Mpls::SetAttributes::AddressFamily::~AddressFamily()
{
}

bool Native::SegmentRouting::Mpls::SetAttributes::AddressFamily::has_data() const
{
    return (ipv4 !=  nullptr && ipv4->has_data());
}

bool Native::SegmentRouting::Mpls::SetAttributes::AddressFamily::has_operation() const
{
    return is_set(operation)
	|| (ipv4 !=  nullptr && ipv4->has_operation());
}

std::string Native::SegmentRouting::Mpls::SetAttributes::AddressFamily::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address-family";

    return path_buffer.str();

}

const EntityPath Native::SegmentRouting::Mpls::SetAttributes::AddressFamily::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/segment-routing/Cisco-IOS-XE-segment-routing:mpls/set-attributes/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SegmentRouting::Mpls::SetAttributes::AddressFamily::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4")
    {
        if(ipv4 == nullptr)
        {
            ipv4 = std::make_shared<Native::SegmentRouting::Mpls::SetAttributes::AddressFamily::Ipv4>();
        }
        return ipv4;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SegmentRouting::Mpls::SetAttributes::AddressFamily::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ipv4 != nullptr)
    {
        children["ipv4"] = ipv4;
    }

    return children;
}

void Native::SegmentRouting::Mpls::SetAttributes::AddressFamily::set_value(const std::string & value_path, std::string value)
{
}

Native::SegmentRouting::Mpls::SetAttributes::AddressFamily::Ipv4::Ipv4()
    :
    explicit_null{YType::empty, "explicit-null"},
    sr_label_preferred{YType::empty, "sr-label-preferred"}
{
    yang_name = "ipv4"; yang_parent_name = "address-family";
}

Native::SegmentRouting::Mpls::SetAttributes::AddressFamily::Ipv4::~Ipv4()
{
}

bool Native::SegmentRouting::Mpls::SetAttributes::AddressFamily::Ipv4::has_data() const
{
    return explicit_null.is_set
	|| sr_label_preferred.is_set;
}

bool Native::SegmentRouting::Mpls::SetAttributes::AddressFamily::Ipv4::has_operation() const
{
    return is_set(operation)
	|| is_set(explicit_null.operation)
	|| is_set(sr_label_preferred.operation);
}

std::string Native::SegmentRouting::Mpls::SetAttributes::AddressFamily::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";

    return path_buffer.str();

}

const EntityPath Native::SegmentRouting::Mpls::SetAttributes::AddressFamily::Ipv4::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/segment-routing/Cisco-IOS-XE-segment-routing:mpls/set-attributes/address-family/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (explicit_null.is_set || is_set(explicit_null.operation)) leaf_name_data.push_back(explicit_null.get_name_leafdata());
    if (sr_label_preferred.is_set || is_set(sr_label_preferred.operation)) leaf_name_data.push_back(sr_label_preferred.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SegmentRouting::Mpls::SetAttributes::AddressFamily::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SegmentRouting::Mpls::SetAttributes::AddressFamily::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SegmentRouting::Mpls::SetAttributes::AddressFamily::Ipv4::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "explicit-null")
    {
        explicit_null = value;
    }
    if(value_path == "sr-label-preferred")
    {
        sr_label_preferred = value;
    }
}

Native::License::License()
    :
    smart{YType::enumeration, "smart"}
    	,
    accept(std::make_shared<Native::License::Accept>())
	,boot(std::make_shared<Native::License::Boot>())
	,feature(std::make_shared<Native::License::Feature>())
	,udi(std::make_shared<Native::License::Udi>())
{
    accept->parent = this;

    boot->parent = this;

    feature->parent = this;

    udi->parent = this;

    yang_name = "license"; yang_parent_name = "native";
}

Native::License::~License()
{
}

bool Native::License::has_data() const
{
    return smart.is_set
	|| (accept !=  nullptr && accept->has_data())
	|| (boot !=  nullptr && boot->has_data())
	|| (feature !=  nullptr && feature->has_data())
	|| (udi !=  nullptr && udi->has_data());
}

bool Native::License::has_operation() const
{
    return is_set(operation)
	|| is_set(smart.operation)
	|| (accept !=  nullptr && accept->has_operation())
	|| (boot !=  nullptr && boot->has_operation())
	|| (feature !=  nullptr && feature->has_operation())
	|| (udi !=  nullptr && udi->has_operation());
}

std::string Native::License::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "license";

    return path_buffer.str();

}

const EntityPath Native::License::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (smart.is_set || is_set(smart.operation)) leaf_name_data.push_back(smart.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::License::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "accept")
    {
        if(accept == nullptr)
        {
            accept = std::make_shared<Native::License::Accept>();
        }
        return accept;
    }

    if(child_yang_name == "boot")
    {
        if(boot == nullptr)
        {
            boot = std::make_shared<Native::License::Boot>();
        }
        return boot;
    }

    if(child_yang_name == "feature")
    {
        if(feature == nullptr)
        {
            feature = std::make_shared<Native::License::Feature>();
        }
        return feature;
    }

    if(child_yang_name == "udi")
    {
        if(udi == nullptr)
        {
            udi = std::make_shared<Native::License::Udi>();
        }
        return udi;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::License::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(accept != nullptr)
    {
        children["accept"] = accept;
    }

    if(boot != nullptr)
    {
        children["boot"] = boot;
    }

    if(feature != nullptr)
    {
        children["feature"] = feature;
    }

    if(udi != nullptr)
    {
        children["udi"] = udi;
    }

    return children;
}

void Native::License::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "smart")
    {
        smart = value;
    }
}

Native::License::Udi::Udi()
    :
    pid{YType::str, "pid"},
    sn{YType::str, "sn"}
{
    yang_name = "udi"; yang_parent_name = "license";
}

Native::License::Udi::~Udi()
{
}

bool Native::License::Udi::has_data() const
{
    return pid.is_set
	|| sn.is_set;
}

bool Native::License::Udi::has_operation() const
{
    return is_set(operation)
	|| is_set(pid.operation)
	|| is_set(sn.operation);
}

std::string Native::License::Udi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "udi";

    return path_buffer.str();

}

const EntityPath Native::License::Udi::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/license/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pid.is_set || is_set(pid.operation)) leaf_name_data.push_back(pid.get_name_leafdata());
    if (sn.is_set || is_set(sn.operation)) leaf_name_data.push_back(sn.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::License::Udi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::License::Udi::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::License::Udi::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "pid")
    {
        pid = value;
    }
    if(value_path == "sn")
    {
        sn = value;
    }
}

Native::License::Feature::Feature()
    :
    name{YType::str, "name"}
    	,
    port(std::make_shared<Native::License::Feature::Port>())
{
    port->parent = this;

    yang_name = "feature"; yang_parent_name = "license";
}

Native::License::Feature::~Feature()
{
}

bool Native::License::Feature::has_data() const
{
    return name.is_set
	|| (port !=  nullptr && port->has_data());
}

bool Native::License::Feature::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation)
	|| (port !=  nullptr && port->has_operation());
}

std::string Native::License::Feature::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "feature";

    return path_buffer.str();

}

const EntityPath Native::License::Feature::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/license/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::License::Feature::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "port")
    {
        if(port == nullptr)
        {
            port = std::make_shared<Native::License::Feature::Port>();
        }
        return port;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::License::Feature::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(port != nullptr)
    {
        children["port"] = port;
    }

    return children;
}

void Native::License::Feature::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
}

Native::License::Feature::Port::Port()
    :
    b_6xonegig{YType::uint8, "b-6xonegig"},
    bulk{YType::empty, "bulk"},
    onegig{YType::uint8, "onegig"},
    tengig{YType::uint8, "tengig"}
{
    yang_name = "port"; yang_parent_name = "feature";
}

Native::License::Feature::Port::~Port()
{
}

bool Native::License::Feature::Port::has_data() const
{
    return b_6xonegig.is_set
	|| bulk.is_set
	|| onegig.is_set
	|| tengig.is_set;
}

bool Native::License::Feature::Port::has_operation() const
{
    return is_set(operation)
	|| is_set(b_6xonegig.operation)
	|| is_set(bulk.operation)
	|| is_set(onegig.operation)
	|| is_set(tengig.operation);
}

std::string Native::License::Feature::Port::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port";

    return path_buffer.str();

}

const EntityPath Native::License::Feature::Port::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/license/feature/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (b_6xonegig.is_set || is_set(b_6xonegig.operation)) leaf_name_data.push_back(b_6xonegig.get_name_leafdata());
    if (bulk.is_set || is_set(bulk.operation)) leaf_name_data.push_back(bulk.get_name_leafdata());
    if (onegig.is_set || is_set(onegig.operation)) leaf_name_data.push_back(onegig.get_name_leafdata());
    if (tengig.is_set || is_set(tengig.operation)) leaf_name_data.push_back(tengig.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::License::Feature::Port::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::License::Feature::Port::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::License::Feature::Port::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "b-6xonegig")
    {
        b_6xonegig = value;
    }
    if(value_path == "bulk")
    {
        bulk = value;
    }
    if(value_path == "onegig")
    {
        onegig = value;
    }
    if(value_path == "tengig")
    {
        tengig = value;
    }
}

Native::License::Accept::Accept()
    :
    agreement{YType::empty, "agreement"},
    end{YType::empty, "end"},
    user{YType::empty, "user"}
{
    yang_name = "accept"; yang_parent_name = "license";
}

Native::License::Accept::~Accept()
{
}

bool Native::License::Accept::has_data() const
{
    return agreement.is_set
	|| end.is_set
	|| user.is_set;
}

bool Native::License::Accept::has_operation() const
{
    return is_set(operation)
	|| is_set(agreement.operation)
	|| is_set(end.operation)
	|| is_set(user.operation);
}

std::string Native::License::Accept::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "accept";

    return path_buffer.str();

}

const EntityPath Native::License::Accept::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/license/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (agreement.is_set || is_set(agreement.operation)) leaf_name_data.push_back(agreement.get_name_leafdata());
    if (end.is_set || is_set(end.operation)) leaf_name_data.push_back(end.get_name_leafdata());
    if (user.is_set || is_set(user.operation)) leaf_name_data.push_back(user.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::License::Accept::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::License::Accept::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::License::Accept::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "agreement")
    {
        agreement = value;
    }
    if(value_path == "end")
    {
        end = value;
    }
    if(value_path == "user")
    {
        user = value;
    }
}

Native::License::Boot::Boot()
    :
    boot_module(std::make_shared<Native::License::Boot::BootModule>())
	,level(std::make_shared<Native::License::Boot::Level>())
{
    boot_module->parent = this;

    level->parent = this;

    yang_name = "boot"; yang_parent_name = "license";
}

Native::License::Boot::~Boot()
{
}

bool Native::License::Boot::has_data() const
{
    return (boot_module !=  nullptr && boot_module->has_data())
	|| (level !=  nullptr && level->has_data());
}

bool Native::License::Boot::has_operation() const
{
    return is_set(operation)
	|| (boot_module !=  nullptr && boot_module->has_operation())
	|| (level !=  nullptr && level->has_operation());
}

std::string Native::License::Boot::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "boot";

    return path_buffer.str();

}

const EntityPath Native::License::Boot::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/license/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::License::Boot::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "boot-module")
    {
        if(boot_module == nullptr)
        {
            boot_module = std::make_shared<Native::License::Boot::BootModule>();
        }
        return boot_module;
    }

    if(child_yang_name == "level")
    {
        if(level == nullptr)
        {
            level = std::make_shared<Native::License::Boot::Level>();
        }
        return level;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::License::Boot::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(boot_module != nullptr)
    {
        children["boot-module"] = boot_module;
    }

    if(level != nullptr)
    {
        children["level"] = level;
    }

    return children;
}

void Native::License::Boot::set_value(const std::string & value_path, std::string value)
{
}

Native::License::Boot::Level::Level()
    :
    advancedmetroipaccess{YType::empty, "advancedmetroipaccess"},
    adventerprise{YType::empty, "adventerprise"},
    appx{YType::empty, "appx"},
    appxk9{YType::empty, "appxk9"},
    entservices{YType::empty, "entservices"},
    ipbasek9{YType::empty, "ipbasek9"},
    lanbasek9{YType::empty, "lanbasek9"},
    metroaccess{YType::empty, "metroaccess"},
    metroipaccess{YType::empty, "metroipaccess"},
    securityk9{YType::empty, "securityk9"}
    	,
    ipbase(nullptr) // presence node
	,ipservices(nullptr) // presence node
	,ipservicesk9(nullptr) // presence node
	,lanbase(nullptr) // presence node
	,lite(nullptr) // presence node
	,metroaggrservices(nullptr) // presence node
	,uck9(nullptr) // presence node
{
    yang_name = "level"; yang_parent_name = "boot";
}

Native::License::Boot::Level::~Level()
{
}

bool Native::License::Boot::Level::has_data() const
{
    return advancedmetroipaccess.is_set
	|| adventerprise.is_set
	|| appx.is_set
	|| appxk9.is_set
	|| entservices.is_set
	|| ipbasek9.is_set
	|| lanbasek9.is_set
	|| metroaccess.is_set
	|| metroipaccess.is_set
	|| securityk9.is_set
	|| (ipbase !=  nullptr && ipbase->has_data())
	|| (ipservices !=  nullptr && ipservices->has_data())
	|| (ipservicesk9 !=  nullptr && ipservicesk9->has_data())
	|| (lanbase !=  nullptr && lanbase->has_data())
	|| (lite !=  nullptr && lite->has_data())
	|| (metroaggrservices !=  nullptr && metroaggrservices->has_data())
	|| (uck9 !=  nullptr && uck9->has_data());
}

bool Native::License::Boot::Level::has_operation() const
{
    return is_set(operation)
	|| is_set(advancedmetroipaccess.operation)
	|| is_set(adventerprise.operation)
	|| is_set(appx.operation)
	|| is_set(appxk9.operation)
	|| is_set(entservices.operation)
	|| is_set(ipbasek9.operation)
	|| is_set(lanbasek9.operation)
	|| is_set(metroaccess.operation)
	|| is_set(metroipaccess.operation)
	|| is_set(securityk9.operation)
	|| (ipbase !=  nullptr && ipbase->has_operation())
	|| (ipservices !=  nullptr && ipservices->has_operation())
	|| (ipservicesk9 !=  nullptr && ipservicesk9->has_operation())
	|| (lanbase !=  nullptr && lanbase->has_operation())
	|| (lite !=  nullptr && lite->has_operation())
	|| (metroaggrservices !=  nullptr && metroaggrservices->has_operation())
	|| (uck9 !=  nullptr && uck9->has_operation());
}

std::string Native::License::Boot::Level::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "level";

    return path_buffer.str();

}

const EntityPath Native::License::Boot::Level::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/license/boot/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (advancedmetroipaccess.is_set || is_set(advancedmetroipaccess.operation)) leaf_name_data.push_back(advancedmetroipaccess.get_name_leafdata());
    if (adventerprise.is_set || is_set(adventerprise.operation)) leaf_name_data.push_back(adventerprise.get_name_leafdata());
    if (appx.is_set || is_set(appx.operation)) leaf_name_data.push_back(appx.get_name_leafdata());
    if (appxk9.is_set || is_set(appxk9.operation)) leaf_name_data.push_back(appxk9.get_name_leafdata());
    if (entservices.is_set || is_set(entservices.operation)) leaf_name_data.push_back(entservices.get_name_leafdata());
    if (ipbasek9.is_set || is_set(ipbasek9.operation)) leaf_name_data.push_back(ipbasek9.get_name_leafdata());
    if (lanbasek9.is_set || is_set(lanbasek9.operation)) leaf_name_data.push_back(lanbasek9.get_name_leafdata());
    if (metroaccess.is_set || is_set(metroaccess.operation)) leaf_name_data.push_back(metroaccess.get_name_leafdata());
    if (metroipaccess.is_set || is_set(metroipaccess.operation)) leaf_name_data.push_back(metroipaccess.get_name_leafdata());
    if (securityk9.is_set || is_set(securityk9.operation)) leaf_name_data.push_back(securityk9.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::License::Boot::Level::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipbase")
    {
        if(ipbase == nullptr)
        {
            ipbase = std::make_shared<Native::License::Boot::Level::Ipbase>();
        }
        return ipbase;
    }

    if(child_yang_name == "ipservices")
    {
        if(ipservices == nullptr)
        {
            ipservices = std::make_shared<Native::License::Boot::Level::Ipservices>();
        }
        return ipservices;
    }

    if(child_yang_name == "ipservicesk9")
    {
        if(ipservicesk9 == nullptr)
        {
            ipservicesk9 = std::make_shared<Native::License::Boot::Level::Ipservicesk9>();
        }
        return ipservicesk9;
    }

    if(child_yang_name == "lanbase")
    {
        if(lanbase == nullptr)
        {
            lanbase = std::make_shared<Native::License::Boot::Level::Lanbase>();
        }
        return lanbase;
    }

    if(child_yang_name == "lite")
    {
        if(lite == nullptr)
        {
            lite = std::make_shared<Native::License::Boot::Level::Lite>();
        }
        return lite;
    }

    if(child_yang_name == "metroaggrservices")
    {
        if(metroaggrservices == nullptr)
        {
            metroaggrservices = std::make_shared<Native::License::Boot::Level::Metroaggrservices>();
        }
        return metroaggrservices;
    }

    if(child_yang_name == "uck9")
    {
        if(uck9 == nullptr)
        {
            uck9 = std::make_shared<Native::License::Boot::Level::Uck9>();
        }
        return uck9;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::License::Boot::Level::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ipbase != nullptr)
    {
        children["ipbase"] = ipbase;
    }

    if(ipservices != nullptr)
    {
        children["ipservices"] = ipservices;
    }

    if(ipservicesk9 != nullptr)
    {
        children["ipservicesk9"] = ipservicesk9;
    }

    if(lanbase != nullptr)
    {
        children["lanbase"] = lanbase;
    }

    if(lite != nullptr)
    {
        children["lite"] = lite;
    }

    if(metroaggrservices != nullptr)
    {
        children["metroaggrservices"] = metroaggrservices;
    }

    if(uck9 != nullptr)
    {
        children["uck9"] = uck9;
    }

    return children;
}

void Native::License::Boot::Level::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "advancedmetroipaccess")
    {
        advancedmetroipaccess = value;
    }
    if(value_path == "adventerprise")
    {
        adventerprise = value;
    }
    if(value_path == "appx")
    {
        appx = value;
    }
    if(value_path == "appxk9")
    {
        appxk9 = value;
    }
    if(value_path == "entservices")
    {
        entservices = value;
    }
    if(value_path == "ipbasek9")
    {
        ipbasek9 = value;
    }
    if(value_path == "lanbasek9")
    {
        lanbasek9 = value;
    }
    if(value_path == "metroaccess")
    {
        metroaccess = value;
    }
    if(value_path == "metroipaccess")
    {
        metroipaccess = value;
    }
    if(value_path == "securityk9")
    {
        securityk9 = value;
    }
}

Native::License::Boot::Level::Ipbase::Ipbase()
    :
    switch{YType::uint8, "switch"}
{
    yang_name = "ipbase"; yang_parent_name = "level";
}

Native::License::Boot::Level::Ipbase::~Ipbase()
{
}

bool Native::License::Boot::Level::Ipbase::has_data() const
{
    return switch.is_set;
}

bool Native::License::Boot::Level::Ipbase::has_operation() const
{
    return is_set(operation)
	|| is_set(switch.operation);
}

std::string Native::License::Boot::Level::Ipbase::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipbase";

    return path_buffer.str();

}

const EntityPath Native::License::Boot::Level::Ipbase::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/license/boot/level/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (switch.is_set || is_set(switch.operation)) leaf_name_data.push_back(switch.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::License::Boot::Level::Ipbase::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::License::Boot::Level::Ipbase::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::License::Boot::Level::Ipbase::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "switch")
    {
        switch = value;
    }
}

Native::License::Boot::Level::Ipservices::Ipservices()
    :
    switch{YType::empty, "switch"}
{
    yang_name = "ipservices"; yang_parent_name = "level";
}

Native::License::Boot::Level::Ipservices::~Ipservices()
{
}

bool Native::License::Boot::Level::Ipservices::has_data() const
{
    return switch.is_set;
}

bool Native::License::Boot::Level::Ipservices::has_operation() const
{
    return is_set(operation)
	|| is_set(switch.operation);
}

std::string Native::License::Boot::Level::Ipservices::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipservices";

    return path_buffer.str();

}

const EntityPath Native::License::Boot::Level::Ipservices::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/license/boot/level/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (switch.is_set || is_set(switch.operation)) leaf_name_data.push_back(switch.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::License::Boot::Level::Ipservices::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::License::Boot::Level::Ipservices::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::License::Boot::Level::Ipservices::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "switch")
    {
        switch = value;
    }
}

Native::License::Boot::Level::Ipservicesk9::Ipservicesk9()
    :
    switch{YType::empty, "switch"}
{
    yang_name = "ipservicesk9"; yang_parent_name = "level";
}

Native::License::Boot::Level::Ipservicesk9::~Ipservicesk9()
{
}

bool Native::License::Boot::Level::Ipservicesk9::has_data() const
{
    return switch.is_set;
}

bool Native::License::Boot::Level::Ipservicesk9::has_operation() const
{
    return is_set(operation)
	|| is_set(switch.operation);
}

std::string Native::License::Boot::Level::Ipservicesk9::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipservicesk9";

    return path_buffer.str();

}

const EntityPath Native::License::Boot::Level::Ipservicesk9::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/license/boot/level/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (switch.is_set || is_set(switch.operation)) leaf_name_data.push_back(switch.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::License::Boot::Level::Ipservicesk9::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::License::Boot::Level::Ipservicesk9::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::License::Boot::Level::Ipservicesk9::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "switch")
    {
        switch = value;
    }
}

Native::License::Boot::Level::Lanbase::Lanbase()
    :
    switch{YType::empty, "switch"}
{
    yang_name = "lanbase"; yang_parent_name = "level";
}

Native::License::Boot::Level::Lanbase::~Lanbase()
{
}

bool Native::License::Boot::Level::Lanbase::has_data() const
{
    return switch.is_set;
}

bool Native::License::Boot::Level::Lanbase::has_operation() const
{
    return is_set(operation)
	|| is_set(switch.operation);
}

std::string Native::License::Boot::Level::Lanbase::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lanbase";

    return path_buffer.str();

}

const EntityPath Native::License::Boot::Level::Lanbase::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/license/boot/level/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (switch.is_set || is_set(switch.operation)) leaf_name_data.push_back(switch.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::License::Boot::Level::Lanbase::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::License::Boot::Level::Lanbase::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::License::Boot::Level::Lanbase::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "switch")
    {
        switch = value;
    }
}

Native::License::Boot::Level::Lite::Lite()
    :
    switch{YType::empty, "switch"}
{
    yang_name = "lite"; yang_parent_name = "level";
}

Native::License::Boot::Level::Lite::~Lite()
{
}

bool Native::License::Boot::Level::Lite::has_data() const
{
    return switch.is_set;
}

bool Native::License::Boot::Level::Lite::has_operation() const
{
    return is_set(operation)
	|| is_set(switch.operation);
}

std::string Native::License::Boot::Level::Lite::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lite";

    return path_buffer.str();

}

const EntityPath Native::License::Boot::Level::Lite::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/license/boot/level/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (switch.is_set || is_set(switch.operation)) leaf_name_data.push_back(switch.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::License::Boot::Level::Lite::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::License::Boot::Level::Lite::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::License::Boot::Level::Lite::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "switch")
    {
        switch = value;
    }
}

Native::License::Boot::Level::Metroaggrservices::Metroaggrservices()
    :
    switch{YType::empty, "switch"}
{
    yang_name = "metroaggrservices"; yang_parent_name = "level";
}

Native::License::Boot::Level::Metroaggrservices::~Metroaggrservices()
{
}

bool Native::License::Boot::Level::Metroaggrservices::has_data() const
{
    return switch.is_set;
}

bool Native::License::Boot::Level::Metroaggrservices::has_operation() const
{
    return is_set(operation)
	|| is_set(switch.operation);
}

std::string Native::License::Boot::Level::Metroaggrservices::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metroaggrservices";

    return path_buffer.str();

}

const EntityPath Native::License::Boot::Level::Metroaggrservices::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/license/boot/level/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (switch.is_set || is_set(switch.operation)) leaf_name_data.push_back(switch.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::License::Boot::Level::Metroaggrservices::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::License::Boot::Level::Metroaggrservices::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::License::Boot::Level::Metroaggrservices::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "switch")
    {
        switch = value;
    }
}

Native::License::Boot::Level::Uck9::Uck9()
    :
    disable{YType::empty, "disable"}
{
    yang_name = "uck9"; yang_parent_name = "level";
}

Native::License::Boot::Level::Uck9::~Uck9()
{
}

bool Native::License::Boot::Level::Uck9::has_data() const
{
    return disable.is_set;
}

bool Native::License::Boot::Level::Uck9::has_operation() const
{
    return is_set(operation)
	|| is_set(disable.operation);
}

std::string Native::License::Boot::Level::Uck9::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uck9";

    return path_buffer.str();

}

const EntityPath Native::License::Boot::Level::Uck9::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/license/boot/level/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.operation)) leaf_name_data.push_back(disable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::License::Boot::Level::Uck9::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::License::Boot::Level::Uck9::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::License::Boot::Level::Uck9::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "disable")
    {
        disable = value;
    }
}

Native::License::Boot::BootModule::BootModule()
    :
    module{YType::enumeration, "module"}
    	,
    technology_package(std::make_shared<Native::License::Boot::BootModule::TechnologyPackage>())
{
    technology_package->parent = this;

    yang_name = "boot-module"; yang_parent_name = "boot";
}

Native::License::Boot::BootModule::~BootModule()
{
}

bool Native::License::Boot::BootModule::has_data() const
{
    return module.is_set
	|| (technology_package !=  nullptr && technology_package->has_data());
}

bool Native::License::Boot::BootModule::has_operation() const
{
    return is_set(operation)
	|| is_set(module.operation)
	|| (technology_package !=  nullptr && technology_package->has_operation());
}

std::string Native::License::Boot::BootModule::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "boot-module";

    return path_buffer.str();

}

const EntityPath Native::License::Boot::BootModule::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/license/boot/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (module.is_set || is_set(module.operation)) leaf_name_data.push_back(module.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::License::Boot::BootModule::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "technology-package")
    {
        if(technology_package == nullptr)
        {
            technology_package = std::make_shared<Native::License::Boot::BootModule::TechnologyPackage>();
        }
        return technology_package;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::License::Boot::BootModule::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(technology_package != nullptr)
    {
        children["technology-package"] = technology_package;
    }

    return children;
}

void Native::License::Boot::BootModule::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "module")
    {
        module = value;
    }
}

Native::License::Boot::BootModule::TechnologyPackage::TechnologyPackage()
    :
    datak9{YType::empty, "datak9"},
    securityk9{YType::empty, "securityk9"},
    uck9{YType::empty, "uck9"}
{
    yang_name = "technology-package"; yang_parent_name = "boot-module";
}

Native::License::Boot::BootModule::TechnologyPackage::~TechnologyPackage()
{
}

bool Native::License::Boot::BootModule::TechnologyPackage::has_data() const
{
    return datak9.is_set
	|| securityk9.is_set
	|| uck9.is_set;
}

bool Native::License::Boot::BootModule::TechnologyPackage::has_operation() const
{
    return is_set(operation)
	|| is_set(datak9.operation)
	|| is_set(securityk9.operation)
	|| is_set(uck9.operation);
}

std::string Native::License::Boot::BootModule::TechnologyPackage::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "technology-package";

    return path_buffer.str();

}

const EntityPath Native::License::Boot::BootModule::TechnologyPackage::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/license/boot/boot-module/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (datak9.is_set || is_set(datak9.operation)) leaf_name_data.push_back(datak9.get_name_leafdata());
    if (securityk9.is_set || is_set(securityk9.operation)) leaf_name_data.push_back(securityk9.get_name_leafdata());
    if (uck9.is_set || is_set(uck9.operation)) leaf_name_data.push_back(uck9.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::License::Boot::BootModule::TechnologyPackage::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::License::Boot::BootModule::TechnologyPackage::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::License::Boot::BootModule::TechnologyPackage::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "datak9")
    {
        datak9 = value;
    }
    if(value_path == "securityk9")
    {
        securityk9 = value;
    }
    if(value_path == "uck9")
    {
        uck9 = value;
    }
}

Native::MemorySize::MemorySize()
    :
    iomem{YType::uint8, "iomem"}
{
    yang_name = "memory-size"; yang_parent_name = "native";
}

Native::MemorySize::~MemorySize()
{
}

bool Native::MemorySize::has_data() const
{
    return iomem.is_set;
}

bool Native::MemorySize::has_operation() const
{
    return is_set(operation)
	|| is_set(iomem.operation);
}

std::string Native::MemorySize::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "memory-size";

    return path_buffer.str();

}

const EntityPath Native::MemorySize::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (iomem.is_set || is_set(iomem.operation)) leaf_name_data.push_back(iomem.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::MemorySize::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::MemorySize::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::MemorySize::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "iomem")
    {
        iomem = value;
    }
}

Native::Transceiver::Transceiver()
    :
    type(std::make_shared<Native::Transceiver::Type>())
{
    type->parent = this;

    yang_name = "transceiver"; yang_parent_name = "native";
}

Native::Transceiver::~Transceiver()
{
}

bool Native::Transceiver::has_data() const
{
    return (type !=  nullptr && type->has_data());
}

bool Native::Transceiver::has_operation() const
{
    return is_set(operation)
	|| (type !=  nullptr && type->has_operation());
}

std::string Native::Transceiver::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transceiver";

    return path_buffer.str();

}

const EntityPath Native::Transceiver::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Transceiver::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "type")
    {
        if(type == nullptr)
        {
            type = std::make_shared<Native::Transceiver::Type>();
        }
        return type;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Transceiver::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(type != nullptr)
    {
        children["type"] = type;
    }

    return children;
}

void Native::Transceiver::set_value(const std::string & value_path, std::string value)
{
}

Native::Transceiver::Type::Type()
    :
    all(std::make_shared<Native::Transceiver::Type::All>())
{
    all->parent = this;

    yang_name = "type"; yang_parent_name = "transceiver";
}

Native::Transceiver::Type::~Type()
{
}

bool Native::Transceiver::Type::has_data() const
{
    return (all !=  nullptr && all->has_data());
}

bool Native::Transceiver::Type::has_operation() const
{
    return is_set(operation)
	|| (all !=  nullptr && all->has_operation());
}

std::string Native::Transceiver::Type::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "type";

    return path_buffer.str();

}

const EntityPath Native::Transceiver::Type::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/transceiver/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Transceiver::Type::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "all")
    {
        if(all == nullptr)
        {
            all = std::make_shared<Native::Transceiver::Type::All>();
        }
        return all;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Transceiver::Type::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(all != nullptr)
    {
        children["all"] = all;
    }

    return children;
}

void Native::Transceiver::Type::set_value(const std::string & value_path, std::string value)
{
}

Native::Transceiver::Type::All::All()
    :
    monitoring(nullptr) // presence node
{
    yang_name = "all"; yang_parent_name = "type";
}

Native::Transceiver::Type::All::~All()
{
}

bool Native::Transceiver::Type::All::has_data() const
{
    return (monitoring !=  nullptr && monitoring->has_data());
}

bool Native::Transceiver::Type::All::has_operation() const
{
    return is_set(operation)
	|| (monitoring !=  nullptr && monitoring->has_operation());
}

std::string Native::Transceiver::Type::All::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "all";

    return path_buffer.str();

}

const EntityPath Native::Transceiver::Type::All::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/transceiver/type/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Transceiver::Type::All::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "monitoring")
    {
        if(monitoring == nullptr)
        {
            monitoring = std::make_shared<Native::Transceiver::Type::All::Monitoring>();
        }
        return monitoring;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Transceiver::Type::All::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(monitoring != nullptr)
    {
        children["monitoring"] = monitoring;
    }

    return children;
}

void Native::Transceiver::Type::All::set_value(const std::string & value_path, std::string value)
{
}

Native::Transceiver::Type::All::Monitoring::Monitoring()
    :
    interval{YType::uint16, "interval"}
{
    yang_name = "monitoring"; yang_parent_name = "all";
}

Native::Transceiver::Type::All::Monitoring::~Monitoring()
{
}

bool Native::Transceiver::Type::All::Monitoring::has_data() const
{
    return interval.is_set;
}

bool Native::Transceiver::Type::All::Monitoring::has_operation() const
{
    return is_set(operation)
	|| is_set(interval.operation);
}

std::string Native::Transceiver::Type::All::Monitoring::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "monitoring";

    return path_buffer.str();

}

const EntityPath Native::Transceiver::Type::All::Monitoring::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/transceiver/type/all/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interval.is_set || is_set(interval.operation)) leaf_name_data.push_back(interval.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Transceiver::Type::All::Monitoring::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Transceiver::Type::All::Monitoring::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Transceiver::Type::All::Monitoring::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interval")
    {
        interval = value;
    }
}

Native::ServiceInsertion::ServiceInsertion()
    :
    acg_reload_delay{YType::uint16, "Cisco-IOS-XE-service-insertion:acg-reload-delay"}
    	,
    service_context(std::make_shared<Native::ServiceInsertion::ServiceContext>())
	,swap(std::make_shared<Native::ServiceInsertion::Swap>())
{
    service_context->parent = this;

    swap->parent = this;

    yang_name = "service-insertion"; yang_parent_name = "native";
}

Native::ServiceInsertion::~ServiceInsertion()
{
}

bool Native::ServiceInsertion::has_data() const
{
    for (std::size_t index=0; index<appnav_controller_group.size(); index++)
    {
        if(appnav_controller_group[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<service_node_group.size(); index++)
    {
        if(service_node_group[index]->has_data())
            return true;
    }
    return acg_reload_delay.is_set
	|| (service_context !=  nullptr && service_context->has_data())
	|| (swap !=  nullptr && swap->has_data());
}

bool Native::ServiceInsertion::has_operation() const
{
    for (std::size_t index=0; index<appnav_controller_group.size(); index++)
    {
        if(appnav_controller_group[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<service_node_group.size(); index++)
    {
        if(service_node_group[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(acg_reload_delay.operation)
	|| (service_context !=  nullptr && service_context->has_operation())
	|| (swap !=  nullptr && swap->has_operation());
}

std::string Native::ServiceInsertion::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-insertion";

    return path_buffer.str();

}

const EntityPath Native::ServiceInsertion::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acg_reload_delay.is_set || is_set(acg_reload_delay.operation)) leaf_name_data.push_back(acg_reload_delay.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::ServiceInsertion::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "appnav-controller-group")
    {
        for(auto const & c : appnav_controller_group)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::ServiceInsertion::AppnavControllerGroup>();
        c->parent = this;
        appnav_controller_group.push_back(c);
        return c;
    }

    if(child_yang_name == "service-context")
    {
        if(service_context == nullptr)
        {
            service_context = std::make_shared<Native::ServiceInsertion::ServiceContext>();
        }
        return service_context;
    }

    if(child_yang_name == "service-node-group")
    {
        for(auto const & c : service_node_group)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::ServiceInsertion::ServiceNodeGroup>();
        c->parent = this;
        service_node_group.push_back(c);
        return c;
    }

    if(child_yang_name == "swap")
    {
        if(swap == nullptr)
        {
            swap = std::make_shared<Native::ServiceInsertion::Swap>();
        }
        return swap;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ServiceInsertion::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : appnav_controller_group)
    {
        children[c->get_segment_path()] = c;
    }

    if(service_context != nullptr)
    {
        children["service-context"] = service_context;
    }

    for (auto const & c : service_node_group)
    {
        children[c->get_segment_path()] = c;
    }

    if(swap != nullptr)
    {
        children["swap"] = swap;
    }

    return children;
}

void Native::ServiceInsertion::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "acg-reload-delay")
    {
        acg_reload_delay = value;
    }
}

Native::ServiceInsertion::AppnavControllerGroup::AppnavControllerGroup()
    :
    group_name{YType::str, "group-name"},
    appnav_controller{YType::str, "appnav-controller"},
    description{YType::str, "description"}
{
    yang_name = "appnav-controller-group"; yang_parent_name = "service-insertion";
}

Native::ServiceInsertion::AppnavControllerGroup::~AppnavControllerGroup()
{
}

bool Native::ServiceInsertion::AppnavControllerGroup::has_data() const
{
    for (auto const & leaf : appnav_controller.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return group_name.is_set
	|| description.is_set;
}

bool Native::ServiceInsertion::AppnavControllerGroup::has_operation() const
{
    for (auto const & leaf : appnav_controller.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(group_name.operation)
	|| is_set(appnav_controller.operation)
	|| is_set(description.operation);
}

std::string Native::ServiceInsertion::AppnavControllerGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-service-insertion:appnav-controller-group" <<"[group-name='" <<group_name <<"']";

    return path_buffer.str();

}

const EntityPath Native::ServiceInsertion::AppnavControllerGroup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/service-insertion/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group_name.is_set || is_set(group_name.operation)) leaf_name_data.push_back(group_name.get_name_leafdata());
    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());

    auto appnav_controller_name_datas = appnav_controller.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), appnav_controller_name_datas.begin(), appnav_controller_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::ServiceInsertion::AppnavControllerGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ServiceInsertion::AppnavControllerGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::ServiceInsertion::AppnavControllerGroup::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "group-name")
    {
        group_name = value;
    }
    if(value_path == "appnav-controller")
    {
        appnav_controller.append(value);
    }
    if(value_path == "description")
    {
        description = value;
    }
}

Native::ServiceInsertion::ServiceContext::ServiceContext()
{
    yang_name = "service-context"; yang_parent_name = "service-insertion";
}

Native::ServiceInsertion::ServiceContext::~ServiceContext()
{
}

bool Native::ServiceInsertion::ServiceContext::has_data() const
{
    for (std::size_t index=0; index<waas.size(); index++)
    {
        if(waas[index]->has_data())
            return true;
    }
    return false;
}

bool Native::ServiceInsertion::ServiceContext::has_operation() const
{
    for (std::size_t index=0; index<waas.size(); index++)
    {
        if(waas[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::ServiceInsertion::ServiceContext::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-service-insertion:service-context";

    return path_buffer.str();

}

const EntityPath Native::ServiceInsertion::ServiceContext::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/service-insertion/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::ServiceInsertion::ServiceContext::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "waas")
    {
        for(auto const & c : waas)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::ServiceInsertion::ServiceContext::Waas>();
        c->parent = this;
        waas.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ServiceInsertion::ServiceContext::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : waas)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::ServiceInsertion::ServiceContext::set_value(const std::string & value_path, std::string value)
{
}

Native::ServiceInsertion::ServiceContext::Waas::Waas()
    :
    name{YType::str, "name"},
    appnav_controller_group{YType::str, "appnav-controller-group"},
    enable{YType::empty, "enable"},
    service_node_group{YType::str, "service-node-group"},
    service_policy{YType::str, "service-policy"}
    	,
    authentication(std::make_shared<Native::ServiceInsertion::ServiceContext::Waas::Authentication>())
	,vrf(std::make_shared<Native::ServiceInsertion::ServiceContext::Waas::Vrf>())
{
    authentication->parent = this;

    vrf->parent = this;

    yang_name = "waas"; yang_parent_name = "service-context";
}

Native::ServiceInsertion::ServiceContext::Waas::~Waas()
{
}

bool Native::ServiceInsertion::ServiceContext::Waas::has_data() const
{
    return name.is_set
	|| appnav_controller_group.is_set
	|| enable.is_set
	|| service_node_group.is_set
	|| service_policy.is_set
	|| (authentication !=  nullptr && authentication->has_data())
	|| (vrf !=  nullptr && vrf->has_data());
}

bool Native::ServiceInsertion::ServiceContext::Waas::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation)
	|| is_set(appnav_controller_group.operation)
	|| is_set(enable.operation)
	|| is_set(service_node_group.operation)
	|| is_set(service_policy.operation)
	|| (authentication !=  nullptr && authentication->has_operation())
	|| (vrf !=  nullptr && vrf->has_operation());
}

std::string Native::ServiceInsertion::ServiceContext::Waas::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "waas" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Native::ServiceInsertion::ServiceContext::Waas::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/service-insertion/Cisco-IOS-XE-service-insertion:service-context/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (appnav_controller_group.is_set || is_set(appnav_controller_group.operation)) leaf_name_data.push_back(appnav_controller_group.get_name_leafdata());
    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (service_node_group.is_set || is_set(service_node_group.operation)) leaf_name_data.push_back(service_node_group.get_name_leafdata());
    if (service_policy.is_set || is_set(service_policy.operation)) leaf_name_data.push_back(service_policy.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::ServiceInsertion::ServiceContext::Waas::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "authentication")
    {
        if(authentication == nullptr)
        {
            authentication = std::make_shared<Native::ServiceInsertion::ServiceContext::Waas::Authentication>();
        }
        return authentication;
    }

    if(child_yang_name == "vrf")
    {
        if(vrf == nullptr)
        {
            vrf = std::make_shared<Native::ServiceInsertion::ServiceContext::Waas::Vrf>();
        }
        return vrf;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ServiceInsertion::ServiceContext::Waas::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(authentication != nullptr)
    {
        children["authentication"] = authentication;
    }

    if(vrf != nullptr)
    {
        children["vrf"] = vrf;
    }

    return children;
}

void Native::ServiceInsertion::ServiceContext::Waas::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "appnav-controller-group")
    {
        appnav_controller_group = value;
    }
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "service-node-group")
    {
        service_node_group = value;
    }
    if(value_path == "service-policy")
    {
        service_policy = value;
    }
}

Native::ServiceInsertion::ServiceContext::Waas::Authentication::Authentication()
    :
    encrypt{YType::enumeration, "encrypt"},
    key{YType::empty, "key"},
    sha1{YType::empty, "sha1"},
    string{YType::str, "string"}
{
    yang_name = "authentication"; yang_parent_name = "waas";
}

Native::ServiceInsertion::ServiceContext::Waas::Authentication::~Authentication()
{
}

bool Native::ServiceInsertion::ServiceContext::Waas::Authentication::has_data() const
{
    return encrypt.is_set
	|| key.is_set
	|| sha1.is_set
	|| string.is_set;
}

bool Native::ServiceInsertion::ServiceContext::Waas::Authentication::has_operation() const
{
    return is_set(operation)
	|| is_set(encrypt.operation)
	|| is_set(key.operation)
	|| is_set(sha1.operation)
	|| is_set(string.operation);
}

std::string Native::ServiceInsertion::ServiceContext::Waas::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";

    return path_buffer.str();

}

const EntityPath Native::ServiceInsertion::ServiceContext::Waas::Authentication::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Authentication' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encrypt.is_set || is_set(encrypt.operation)) leaf_name_data.push_back(encrypt.get_name_leafdata());
    if (key.is_set || is_set(key.operation)) leaf_name_data.push_back(key.get_name_leafdata());
    if (sha1.is_set || is_set(sha1.operation)) leaf_name_data.push_back(sha1.get_name_leafdata());
    if (string.is_set || is_set(string.operation)) leaf_name_data.push_back(string.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::ServiceInsertion::ServiceContext::Waas::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ServiceInsertion::ServiceContext::Waas::Authentication::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::ServiceInsertion::ServiceContext::Waas::Authentication::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "encrypt")
    {
        encrypt = value;
    }
    if(value_path == "key")
    {
        key = value;
    }
    if(value_path == "sha1")
    {
        sha1 = value;
    }
    if(value_path == "string")
    {
        string = value;
    }
}

Native::ServiceInsertion::ServiceContext::Waas::Vrf::Vrf()
    :
    default_{YType::empty, "default"},
    global{YType::empty, "global"},
    name{YType::str, "name"}
{
    yang_name = "vrf"; yang_parent_name = "waas";
}

Native::ServiceInsertion::ServiceContext::Waas::Vrf::~Vrf()
{
}

bool Native::ServiceInsertion::ServiceContext::Waas::Vrf::has_data() const
{
    return default_.is_set
	|| global.is_set
	|| name.is_set;
}

bool Native::ServiceInsertion::ServiceContext::Waas::Vrf::has_operation() const
{
    return is_set(operation)
	|| is_set(default_.operation)
	|| is_set(global.operation)
	|| is_set(name.operation);
}

std::string Native::ServiceInsertion::ServiceContext::Waas::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";

    return path_buffer.str();

}

const EntityPath Native::ServiceInsertion::ServiceContext::Waas::Vrf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Vrf' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_.is_set || is_set(default_.operation)) leaf_name_data.push_back(default_.get_name_leafdata());
    if (global.is_set || is_set(global.operation)) leaf_name_data.push_back(global.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::ServiceInsertion::ServiceContext::Waas::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ServiceInsertion::ServiceContext::Waas::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::ServiceInsertion::ServiceContext::Waas::Vrf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "default")
    {
        default_ = value;
    }
    if(value_path == "global")
    {
        global = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
}

Native::ServiceInsertion::ServiceNodeGroup::ServiceNodeGroup()
    :
    name{YType::str, "name"},
    description{YType::str, "description"},
    node_discovery{YType::enumeration, "node-discovery"},
    service_node{YType::str, "service-node"}
{
    yang_name = "service-node-group"; yang_parent_name = "service-insertion";
}

Native::ServiceInsertion::ServiceNodeGroup::~ServiceNodeGroup()
{
}

bool Native::ServiceInsertion::ServiceNodeGroup::has_data() const
{
    for (auto const & leaf : service_node.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return name.is_set
	|| description.is_set
	|| node_discovery.is_set;
}

bool Native::ServiceInsertion::ServiceNodeGroup::has_operation() const
{
    for (auto const & leaf : service_node.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(name.operation)
	|| is_set(description.operation)
	|| is_set(node_discovery.operation)
	|| is_set(service_node.operation);
}

std::string Native::ServiceInsertion::ServiceNodeGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-service-insertion:service-node-group" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Native::ServiceInsertion::ServiceNodeGroup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/service-insertion/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (node_discovery.is_set || is_set(node_discovery.operation)) leaf_name_data.push_back(node_discovery.get_name_leafdata());

    auto service_node_name_datas = service_node.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), service_node_name_datas.begin(), service_node_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::ServiceInsertion::ServiceNodeGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ServiceInsertion::ServiceNodeGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::ServiceInsertion::ServiceNodeGroup::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "node-discovery")
    {
        node_discovery = value;
    }
    if(value_path == "service-node")
    {
        service_node.append(value);
    }
}

Native::ServiceInsertion::Swap::Swap()
    :
    src_ip{YType::empty, "src-ip"}
{
    yang_name = "swap"; yang_parent_name = "service-insertion";
}

Native::ServiceInsertion::Swap::~Swap()
{
}

bool Native::ServiceInsertion::Swap::has_data() const
{
    return src_ip.is_set;
}

bool Native::ServiceInsertion::Swap::has_operation() const
{
    return is_set(operation)
	|| is_set(src_ip.operation);
}

std::string Native::ServiceInsertion::Swap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-service-insertion:swap";

    return path_buffer.str();

}

const EntityPath Native::ServiceInsertion::Swap::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/service-insertion/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (src_ip.is_set || is_set(src_ip.operation)) leaf_name_data.push_back(src_ip.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::ServiceInsertion::Swap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ServiceInsertion::Swap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::ServiceInsertion::Swap::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "src-ip")
    {
        src_ip = value;
    }
}

Native::Udld::Udld()
    :
    aggressive{YType::empty, "Cisco-IOS-XE-udld:aggressive"},
    enable{YType::empty, "Cisco-IOS-XE-udld:enable"}
    	,
    message(std::make_shared<Native::Udld::Message>())
	,recovery(nullptr) // presence node
{
    message->parent = this;

    yang_name = "udld"; yang_parent_name = "native";
}

Native::Udld::~Udld()
{
}

bool Native::Udld::has_data() const
{
    return aggressive.is_set
	|| enable.is_set
	|| (message !=  nullptr && message->has_data())
	|| (recovery !=  nullptr && recovery->has_data());
}

bool Native::Udld::has_operation() const
{
    return is_set(operation)
	|| is_set(aggressive.operation)
	|| is_set(enable.operation)
	|| (message !=  nullptr && message->has_operation())
	|| (recovery !=  nullptr && recovery->has_operation());
}

std::string Native::Udld::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "udld";

    return path_buffer.str();

}

const EntityPath Native::Udld::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aggressive.is_set || is_set(aggressive.operation)) leaf_name_data.push_back(aggressive.get_name_leafdata());
    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Udld::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "message")
    {
        if(message == nullptr)
        {
            message = std::make_shared<Native::Udld::Message>();
        }
        return message;
    }

    if(child_yang_name == "recovery")
    {
        if(recovery == nullptr)
        {
            recovery = std::make_shared<Native::Udld::Recovery>();
        }
        return recovery;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Udld::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(message != nullptr)
    {
        children["message"] = message;
    }

    if(recovery != nullptr)
    {
        children["recovery"] = recovery;
    }

    return children;
}

void Native::Udld::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "aggressive")
    {
        aggressive = value;
    }
    if(value_path == "enable")
    {
        enable = value;
    }
}

Native::Udld::Message::Message()
    :
    time{YType::uint8, "time"}
{
    yang_name = "message"; yang_parent_name = "udld";
}

Native::Udld::Message::~Message()
{
}

bool Native::Udld::Message::has_data() const
{
    return time.is_set;
}

bool Native::Udld::Message::has_operation() const
{
    return is_set(operation)
	|| is_set(time.operation);
}

std::string Native::Udld::Message::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-udld:message";

    return path_buffer.str();

}

const EntityPath Native::Udld::Message::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/udld/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time.is_set || is_set(time.operation)) leaf_name_data.push_back(time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Udld::Message::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Udld::Message::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Udld::Message::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "time")
    {
        time = value;
    }
}

Native::Udld::Recovery::Recovery()
    :
    interval{YType::uint32, "interval"}
{
    yang_name = "recovery"; yang_parent_name = "udld";
}

Native::Udld::Recovery::~Recovery()
{
}

bool Native::Udld::Recovery::has_data() const
{
    return interval.is_set;
}

bool Native::Udld::Recovery::has_operation() const
{
    return is_set(operation)
	|| is_set(interval.operation);
}

std::string Native::Udld::Recovery::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-udld:recovery";

    return path_buffer.str();

}

const EntityPath Native::Udld::Recovery::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/udld/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interval.is_set || is_set(interval.operation)) leaf_name_data.push_back(interval.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Udld::Recovery::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Udld::Recovery::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Udld::Recovery::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interval")
    {
        interval = value;
    }
}

Native::Wireless::Wireless()
    :
    mdns_bridging{YType::boolean, "mdns-bridging"}
{
    yang_name = "wireless"; yang_parent_name = "native";
}

Native::Wireless::~Wireless()
{
}

bool Native::Wireless::has_data() const
{
    return mdns_bridging.is_set;
}

bool Native::Wireless::has_operation() const
{
    return is_set(operation)
	|| is_set(mdns_bridging.operation);
}

std::string Native::Wireless::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "wireless";

    return path_buffer.str();

}

const EntityPath Native::Wireless::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mdns_bridging.is_set || is_set(mdns_bridging.operation)) leaf_name_data.push_back(mdns_bridging.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Wireless::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Wireless::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Wireless::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mdns-bridging")
    {
        mdns_bridging = value;
    }
}

Native::Qos::Qos()
    :
    diffservmib{YType::empty, "Cisco-IOS-XE-qos:diffservmib"}
    	,
    account(std::make_shared<Native::Qos::Account>())
	,control_packets(nullptr) // presence node
	,preserve(std::make_shared<Native::Qos::Preserve>())
	,queue_softmax_multiplier(std::make_shared<Native::Qos::QueueSoftmaxMultiplier>())
	,trace(std::make_shared<Native::Qos::Trace>())
{
    account->parent = this;

    preserve->parent = this;

    queue_softmax_multiplier->parent = this;

    trace->parent = this;

    yang_name = "qos"; yang_parent_name = "native";
}

Native::Qos::~Qos()
{
}

bool Native::Qos::has_data() const
{
    return diffservmib.is_set
	|| (account !=  nullptr && account->has_data())
	|| (control_packets !=  nullptr && control_packets->has_data())
	|| (preserve !=  nullptr && preserve->has_data())
	|| (queue_softmax_multiplier !=  nullptr && queue_softmax_multiplier->has_data())
	|| (trace !=  nullptr && trace->has_data());
}

bool Native::Qos::has_operation() const
{
    return is_set(operation)
	|| is_set(diffservmib.operation)
	|| (account !=  nullptr && account->has_operation())
	|| (control_packets !=  nullptr && control_packets->has_operation())
	|| (preserve !=  nullptr && preserve->has_operation())
	|| (queue_softmax_multiplier !=  nullptr && queue_softmax_multiplier->has_operation())
	|| (trace !=  nullptr && trace->has_operation());
}

std::string Native::Qos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qos";

    return path_buffer.str();

}

const EntityPath Native::Qos::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (diffservmib.is_set || is_set(diffservmib.operation)) leaf_name_data.push_back(diffservmib.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Qos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "account")
    {
        if(account == nullptr)
        {
            account = std::make_shared<Native::Qos::Account>();
        }
        return account;
    }

    if(child_yang_name == "control-packets")
    {
        if(control_packets == nullptr)
        {
            control_packets = std::make_shared<Native::Qos::ControlPackets>();
        }
        return control_packets;
    }

    if(child_yang_name == "preserve")
    {
        if(preserve == nullptr)
        {
            preserve = std::make_shared<Native::Qos::Preserve>();
        }
        return preserve;
    }

    if(child_yang_name == "queue-softmax-multiplier")
    {
        if(queue_softmax_multiplier == nullptr)
        {
            queue_softmax_multiplier = std::make_shared<Native::Qos::QueueSoftmaxMultiplier>();
        }
        return queue_softmax_multiplier;
    }

    if(child_yang_name == "trace")
    {
        if(trace == nullptr)
        {
            trace = std::make_shared<Native::Qos::Trace>();
        }
        return trace;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Qos::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(account != nullptr)
    {
        children["account"] = account;
    }

    if(control_packets != nullptr)
    {
        children["control-packets"] = control_packets;
    }

    if(preserve != nullptr)
    {
        children["preserve"] = preserve;
    }

    if(queue_softmax_multiplier != nullptr)
    {
        children["queue-softmax-multiplier"] = queue_softmax_multiplier;
    }

    if(trace != nullptr)
    {
        children["trace"] = trace;
    }

    return children;
}

void Native::Qos::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "diffservmib")
    {
        diffservmib = value;
    }
}

Native::Qos::Account::Account()
    :
    layer2(std::make_shared<Native::Qos::Account::Layer2>())
	,layer_all(std::make_shared<Native::Qos::Account::LayerAll>())
{
    layer2->parent = this;

    layer_all->parent = this;

    yang_name = "account"; yang_parent_name = "qos";
}

Native::Qos::Account::~Account()
{
}

bool Native::Qos::Account::has_data() const
{
    return (layer2 !=  nullptr && layer2->has_data())
	|| (layer_all !=  nullptr && layer_all->has_data());
}

bool Native::Qos::Account::has_operation() const
{
    return is_set(operation)
	|| (layer2 !=  nullptr && layer2->has_operation())
	|| (layer_all !=  nullptr && layer_all->has_operation());
}

std::string Native::Qos::Account::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-qos:account";

    return path_buffer.str();

}

const EntityPath Native::Qos::Account::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/qos/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Qos::Account::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "layer2")
    {
        if(layer2 == nullptr)
        {
            layer2 = std::make_shared<Native::Qos::Account::Layer2>();
        }
        return layer2;
    }

    if(child_yang_name == "layer-all")
    {
        if(layer_all == nullptr)
        {
            layer_all = std::make_shared<Native::Qos::Account::LayerAll>();
        }
        return layer_all;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Qos::Account::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(layer2 != nullptr)
    {
        children["layer2"] = layer2;
    }

    if(layer_all != nullptr)
    {
        children["layer-all"] = layer_all;
    }

    return children;
}

void Native::Qos::Account::set_value(const std::string & value_path, std::string value)
{
}

Native::Qos::Account::LayerAll::LayerAll()
    :
    encapsulation{YType::empty, "encapsulation"}
{
    yang_name = "layer-all"; yang_parent_name = "account";
}

Native::Qos::Account::LayerAll::~LayerAll()
{
}

bool Native::Qos::Account::LayerAll::has_data() const
{
    return encapsulation.is_set;
}

bool Native::Qos::Account::LayerAll::has_operation() const
{
    return is_set(operation)
	|| is_set(encapsulation.operation);
}

std::string Native::Qos::Account::LayerAll::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "layer-all";

    return path_buffer.str();

}

const EntityPath Native::Qos::Account::LayerAll::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/qos/Cisco-IOS-XE-qos:account/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encapsulation.is_set || is_set(encapsulation.operation)) leaf_name_data.push_back(encapsulation.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Qos::Account::LayerAll::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Qos::Account::LayerAll::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Qos::Account::LayerAll::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "encapsulation")
    {
        encapsulation = value;
    }
}

Native::Qos::Account::Layer2::Layer2()
    :
    encapsulation(std::make_shared<Native::Qos::Account::Layer2::Encapsulation>())
{
    encapsulation->parent = this;

    yang_name = "layer2"; yang_parent_name = "account";
}

Native::Qos::Account::Layer2::~Layer2()
{
}

bool Native::Qos::Account::Layer2::has_data() const
{
    return (encapsulation !=  nullptr && encapsulation->has_data());
}

bool Native::Qos::Account::Layer2::has_operation() const
{
    return is_set(operation)
	|| (encapsulation !=  nullptr && encapsulation->has_operation());
}

std::string Native::Qos::Account::Layer2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "layer2";

    return path_buffer.str();

}

const EntityPath Native::Qos::Account::Layer2::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/qos/Cisco-IOS-XE-qos:account/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Qos::Account::Layer2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "encapsulation")
    {
        if(encapsulation == nullptr)
        {
            encapsulation = std::make_shared<Native::Qos::Account::Layer2::Encapsulation>();
        }
        return encapsulation;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Qos::Account::Layer2::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(encapsulation != nullptr)
    {
        children["encapsulation"] = encapsulation;
    }

    return children;
}

void Native::Qos::Account::Layer2::set_value(const std::string & value_path, std::string value)
{
}

Native::Qos::Account::Layer2::Encapsulation::Encapsulation()
    :
    arpa{YType::empty, "arpa"},
    dot1q{YType::empty, "dot1q"},
    isl{YType::empty, "isl"}
    	,
    length(nullptr) // presence node
{
    yang_name = "encapsulation"; yang_parent_name = "layer2";
}

Native::Qos::Account::Layer2::Encapsulation::~Encapsulation()
{
}

bool Native::Qos::Account::Layer2::Encapsulation::has_data() const
{
    return arpa.is_set
	|| dot1q.is_set
	|| isl.is_set
	|| (length !=  nullptr && length->has_data());
}

bool Native::Qos::Account::Layer2::Encapsulation::has_operation() const
{
    return is_set(operation)
	|| is_set(arpa.operation)
	|| is_set(dot1q.operation)
	|| is_set(isl.operation)
	|| (length !=  nullptr && length->has_operation());
}

std::string Native::Qos::Account::Layer2::Encapsulation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "encapsulation";

    return path_buffer.str();

}

const EntityPath Native::Qos::Account::Layer2::Encapsulation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/qos/Cisco-IOS-XE-qos:account/layer2/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (arpa.is_set || is_set(arpa.operation)) leaf_name_data.push_back(arpa.get_name_leafdata());
    if (dot1q.is_set || is_set(dot1q.operation)) leaf_name_data.push_back(dot1q.get_name_leafdata());
    if (isl.is_set || is_set(isl.operation)) leaf_name_data.push_back(isl.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Qos::Account::Layer2::Encapsulation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "length")
    {
        if(length == nullptr)
        {
            length = std::make_shared<Native::Qos::Account::Layer2::Encapsulation::Length>();
        }
        return length;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Qos::Account::Layer2::Encapsulation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(length != nullptr)
    {
        children["length"] = length;
    }

    return children;
}

void Native::Qos::Account::Layer2::Encapsulation::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "arpa")
    {
        arpa = value;
    }
    if(value_path == "dot1q")
    {
        dot1q = value;
    }
    if(value_path == "isl")
    {
        isl = value;
    }
}

Native::Qos::Account::Layer2::Encapsulation::Length::Length()
    :
    byte_length{YType::int8, "byte-length"}
{
    yang_name = "length"; yang_parent_name = "encapsulation";
}

Native::Qos::Account::Layer2::Encapsulation::Length::~Length()
{
}

bool Native::Qos::Account::Layer2::Encapsulation::Length::has_data() const
{
    return byte_length.is_set;
}

bool Native::Qos::Account::Layer2::Encapsulation::Length::has_operation() const
{
    return is_set(operation)
	|| is_set(byte_length.operation);
}

std::string Native::Qos::Account::Layer2::Encapsulation::Length::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "length";

    return path_buffer.str();

}

const EntityPath Native::Qos::Account::Layer2::Encapsulation::Length::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/qos/Cisco-IOS-XE-qos:account/layer2/encapsulation/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_length.is_set || is_set(byte_length.operation)) leaf_name_data.push_back(byte_length.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Qos::Account::Layer2::Encapsulation::Length::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Qos::Account::Layer2::Encapsulation::Length::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Qos::Account::Layer2::Encapsulation::Length::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "byte-length")
    {
        byte_length = value;
    }
}

Native::Qos::ControlPackets::ControlPackets()
    :
    bpdu_range{YType::empty, "bpdu-range"},
    cdp_vtp{YType::empty, "cdp-vtp"},
    eapol{YType::empty, "eapol"},
    lldp{YType::empty, "lldp"},
    protocol_tunnel{YType::empty, "protocol-tunnel"},
    sstp{YType::empty, "sstp"}
{
    yang_name = "control-packets"; yang_parent_name = "qos";
}

Native::Qos::ControlPackets::~ControlPackets()
{
}

bool Native::Qos::ControlPackets::has_data() const
{
    return bpdu_range.is_set
	|| cdp_vtp.is_set
	|| eapol.is_set
	|| lldp.is_set
	|| protocol_tunnel.is_set
	|| sstp.is_set;
}

bool Native::Qos::ControlPackets::has_operation() const
{
    return is_set(operation)
	|| is_set(bpdu_range.operation)
	|| is_set(cdp_vtp.operation)
	|| is_set(eapol.operation)
	|| is_set(lldp.operation)
	|| is_set(protocol_tunnel.operation)
	|| is_set(sstp.operation);
}

std::string Native::Qos::ControlPackets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-qos:control-packets";

    return path_buffer.str();

}

const EntityPath Native::Qos::ControlPackets::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/qos/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bpdu_range.is_set || is_set(bpdu_range.operation)) leaf_name_data.push_back(bpdu_range.get_name_leafdata());
    if (cdp_vtp.is_set || is_set(cdp_vtp.operation)) leaf_name_data.push_back(cdp_vtp.get_name_leafdata());
    if (eapol.is_set || is_set(eapol.operation)) leaf_name_data.push_back(eapol.get_name_leafdata());
    if (lldp.is_set || is_set(lldp.operation)) leaf_name_data.push_back(lldp.get_name_leafdata());
    if (protocol_tunnel.is_set || is_set(protocol_tunnel.operation)) leaf_name_data.push_back(protocol_tunnel.get_name_leafdata());
    if (sstp.is_set || is_set(sstp.operation)) leaf_name_data.push_back(sstp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Qos::ControlPackets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Qos::ControlPackets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Qos::ControlPackets::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bpdu-range")
    {
        bpdu_range = value;
    }
    if(value_path == "cdp-vtp")
    {
        cdp_vtp = value;
    }
    if(value_path == "eapol")
    {
        eapol = value;
    }
    if(value_path == "lldp")
    {
        lldp = value;
    }
    if(value_path == "protocol-tunnel")
    {
        protocol_tunnel = value;
    }
    if(value_path == "sstp")
    {
        sstp = value;
    }
}

Native::Qos::Preserve::Preserve()
    :
    marking(std::make_shared<Native::Qos::Preserve::Marking>())
	,mpls(std::make_shared<Native::Qos::Preserve::Mpls>())
{
    marking->parent = this;

    mpls->parent = this;

    yang_name = "preserve"; yang_parent_name = "qos";
}

Native::Qos::Preserve::~Preserve()
{
}

bool Native::Qos::Preserve::has_data() const
{
    return (marking !=  nullptr && marking->has_data())
	|| (mpls !=  nullptr && mpls->has_data());
}

bool Native::Qos::Preserve::has_operation() const
{
    return is_set(operation)
	|| (marking !=  nullptr && marking->has_operation())
	|| (mpls !=  nullptr && mpls->has_operation());
}

std::string Native::Qos::Preserve::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-qos:preserve";

    return path_buffer.str();

}

const EntityPath Native::Qos::Preserve::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/qos/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Qos::Preserve::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "marking")
    {
        if(marking == nullptr)
        {
            marking = std::make_shared<Native::Qos::Preserve::Marking>();
        }
        return marking;
    }

    if(child_yang_name == "mpls")
    {
        if(mpls == nullptr)
        {
            mpls = std::make_shared<Native::Qos::Preserve::Mpls>();
        }
        return mpls;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Qos::Preserve::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(marking != nullptr)
    {
        children["marking"] = marking;
    }

    if(mpls != nullptr)
    {
        children["mpls"] = mpls;
    }

    return children;
}

void Native::Qos::Preserve::set_value(const std::string & value_path, std::string value)
{
}

Native::Qos::Preserve::Marking::Marking()
    :
    hipriority{YType::empty, "hipriority"}
{
    yang_name = "marking"; yang_parent_name = "preserve";
}

Native::Qos::Preserve::Marking::~Marking()
{
}

bool Native::Qos::Preserve::Marking::has_data() const
{
    return hipriority.is_set;
}

bool Native::Qos::Preserve::Marking::has_operation() const
{
    return is_set(operation)
	|| is_set(hipriority.operation);
}

std::string Native::Qos::Preserve::Marking::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "marking";

    return path_buffer.str();

}

const EntityPath Native::Qos::Preserve::Marking::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/qos/Cisco-IOS-XE-qos:preserve/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hipriority.is_set || is_set(hipriority.operation)) leaf_name_data.push_back(hipriority.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Qos::Preserve::Marking::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Qos::Preserve::Marking::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Qos::Preserve::Marking::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "hipriority")
    {
        hipriority = value;
    }
}

Native::Qos::Preserve::Mpls::Mpls()
    :
    exp{YType::empty, "exp"}
{
    yang_name = "mpls"; yang_parent_name = "preserve";
}

Native::Qos::Preserve::Mpls::~Mpls()
{
}

bool Native::Qos::Preserve::Mpls::has_data() const
{
    return exp.is_set;
}

bool Native::Qos::Preserve::Mpls::has_operation() const
{
    return is_set(operation)
	|| is_set(exp.operation);
}

std::string Native::Qos::Preserve::Mpls::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls";

    return path_buffer.str();

}

const EntityPath Native::Qos::Preserve::Mpls::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/qos/Cisco-IOS-XE-qos:preserve/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (exp.is_set || is_set(exp.operation)) leaf_name_data.push_back(exp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Qos::Preserve::Mpls::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Qos::Preserve::Mpls::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Qos::Preserve::Mpls::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "exp")
    {
        exp = value;
    }
}

Native::Qos::Trace::Trace()
    :
    resize(std::make_shared<Native::Qos::Trace::Resize>())
{
    resize->parent = this;

    yang_name = "trace"; yang_parent_name = "qos";
}

Native::Qos::Trace::~Trace()
{
}

bool Native::Qos::Trace::has_data() const
{
    return (resize !=  nullptr && resize->has_data());
}

bool Native::Qos::Trace::has_operation() const
{
    return is_set(operation)
	|| (resize !=  nullptr && resize->has_operation());
}

std::string Native::Qos::Trace::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-qos:trace";

    return path_buffer.str();

}

const EntityPath Native::Qos::Trace::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/qos/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Qos::Trace::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "resize")
    {
        if(resize == nullptr)
        {
            resize = std::make_shared<Native::Qos::Trace::Resize>();
        }
        return resize;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Qos::Trace::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(resize != nullptr)
    {
        children["resize"] = resize;
    }

    return children;
}

void Native::Qos::Trace::set_value(const std::string & value_path, std::string value)
{
}

Native::Qos::Trace::Resize::Resize()
    :
    all{YType::int32, "all"},
    error{YType::int32, "error"},
    event{YType::int32, "event"},
    size{YType::int32, "size"},
    warning{YType::int32, "warning"}
{
    yang_name = "resize"; yang_parent_name = "trace";
}

Native::Qos::Trace::Resize::~Resize()
{
}

bool Native::Qos::Trace::Resize::has_data() const
{
    return all.is_set
	|| error.is_set
	|| event.is_set
	|| size.is_set
	|| warning.is_set;
}

bool Native::Qos::Trace::Resize::has_operation() const
{
    return is_set(operation)
	|| is_set(all.operation)
	|| is_set(error.operation)
	|| is_set(event.operation)
	|| is_set(size.operation)
	|| is_set(warning.operation);
}

std::string Native::Qos::Trace::Resize::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "resize";

    return path_buffer.str();

}

const EntityPath Native::Qos::Trace::Resize::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/qos/Cisco-IOS-XE-qos:trace/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all.is_set || is_set(all.operation)) leaf_name_data.push_back(all.get_name_leafdata());
    if (error.is_set || is_set(error.operation)) leaf_name_data.push_back(error.get_name_leafdata());
    if (event.is_set || is_set(event.operation)) leaf_name_data.push_back(event.get_name_leafdata());
    if (size.is_set || is_set(size.operation)) leaf_name_data.push_back(size.get_name_leafdata());
    if (warning.is_set || is_set(warning.operation)) leaf_name_data.push_back(warning.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Qos::Trace::Resize::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Qos::Trace::Resize::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Qos::Trace::Resize::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "all")
    {
        all = value;
    }
    if(value_path == "error")
    {
        error = value;
    }
    if(value_path == "event")
    {
        event = value;
    }
    if(value_path == "size")
    {
        size = value;
    }
    if(value_path == "warning")
    {
        warning = value;
    }
}

Native::Qos::QueueSoftmaxMultiplier::QueueSoftmaxMultiplier()
    :
    value_{YType::int16, "value"}
{
    yang_name = "queue-softmax-multiplier"; yang_parent_name = "qos";
}

Native::Qos::QueueSoftmaxMultiplier::~QueueSoftmaxMultiplier()
{
}

bool Native::Qos::QueueSoftmaxMultiplier::has_data() const
{
    return value_.is_set;
}

bool Native::Qos::QueueSoftmaxMultiplier::has_operation() const
{
    return is_set(operation)
	|| is_set(value_.operation);
}

std::string Native::Qos::QueueSoftmaxMultiplier::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-qos:queue-softmax-multiplier";

    return path_buffer.str();

}

const EntityPath Native::Qos::QueueSoftmaxMultiplier::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/qos/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Qos::QueueSoftmaxMultiplier::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Qos::QueueSoftmaxMultiplier::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Qos::QueueSoftmaxMultiplier::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "value")
    {
        value_ = value;
    }
}

Native::TimeRange::TimeRange()
    :
    word{YType::str, "word"}
    	,
    absolute(std::make_shared<Native::TimeRange::Absolute>())
{
    absolute->parent = this;

    yang_name = "time-range"; yang_parent_name = "native";
}

Native::TimeRange::~TimeRange()
{
}

bool Native::TimeRange::has_data() const
{
    return word.is_set
	|| (absolute !=  nullptr && absolute->has_data());
}

bool Native::TimeRange::has_operation() const
{
    return is_set(operation)
	|| is_set(word.operation)
	|| (absolute !=  nullptr && absolute->has_operation());
}

std::string Native::TimeRange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "time-range" <<"[word='" <<word <<"']";

    return path_buffer.str();

}

const EntityPath Native::TimeRange::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (word.is_set || is_set(word.operation)) leaf_name_data.push_back(word.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::TimeRange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "absolute")
    {
        if(absolute == nullptr)
        {
            absolute = std::make_shared<Native::TimeRange::Absolute>();
        }
        return absolute;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::TimeRange::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(absolute != nullptr)
    {
        children["absolute"] = absolute;
    }

    return children;
}

void Native::TimeRange::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "word")
    {
        word = value;
    }
}

Native::TimeRange::Absolute::Absolute()
    :
    start(std::make_shared<Native::TimeRange::Absolute::Start>())
{
    start->parent = this;

    yang_name = "absolute"; yang_parent_name = "time-range";
}

Native::TimeRange::Absolute::~Absolute()
{
}

bool Native::TimeRange::Absolute::has_data() const
{
    return (start !=  nullptr && start->has_data());
}

bool Native::TimeRange::Absolute::has_operation() const
{
    return is_set(operation)
	|| (start !=  nullptr && start->has_operation());
}

std::string Native::TimeRange::Absolute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "absolute";

    return path_buffer.str();

}

const EntityPath Native::TimeRange::Absolute::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Absolute' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::TimeRange::Absolute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "start")
    {
        if(start == nullptr)
        {
            start = std::make_shared<Native::TimeRange::Absolute::Start>();
        }
        return start;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::TimeRange::Absolute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(start != nullptr)
    {
        children["start"] = start;
    }

    return children;
}

void Native::TimeRange::Absolute::set_value(const std::string & value_path, std::string value)
{
}

Native::TimeRange::Absolute::Start::Start()
    :
    day_of_month{YType::uint8, "day-of-month"},
    month{YType::str, "month"},
    start_time{YType::str, "start-time"},
    year{YType::uint16, "year"}
{
    yang_name = "start"; yang_parent_name = "absolute";
}

Native::TimeRange::Absolute::Start::~Start()
{
}

bool Native::TimeRange::Absolute::Start::has_data() const
{
    return day_of_month.is_set
	|| month.is_set
	|| start_time.is_set
	|| year.is_set;
}

bool Native::TimeRange::Absolute::Start::has_operation() const
{
    return is_set(operation)
	|| is_set(day_of_month.operation)
	|| is_set(month.operation)
	|| is_set(start_time.operation)
	|| is_set(year.operation);
}

std::string Native::TimeRange::Absolute::Start::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "start";

    return path_buffer.str();

}

const EntityPath Native::TimeRange::Absolute::Start::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Start' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (day_of_month.is_set || is_set(day_of_month.operation)) leaf_name_data.push_back(day_of_month.get_name_leafdata());
    if (month.is_set || is_set(month.operation)) leaf_name_data.push_back(month.get_name_leafdata());
    if (start_time.is_set || is_set(start_time.operation)) leaf_name_data.push_back(start_time.get_name_leafdata());
    if (year.is_set || is_set(year.operation)) leaf_name_data.push_back(year.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::TimeRange::Absolute::Start::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::TimeRange::Absolute::Start::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::TimeRange::Absolute::Start::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "day-of-month")
    {
        day_of_month = value;
    }
    if(value_path == "month")
    {
        month = value;
    }
    if(value_path == "start-time")
    {
        start_time = value;
    }
    if(value_path == "year")
    {
        year = value;
    }
}

Native::DeviceTracking::DeviceTracking()
{
    yang_name = "device-tracking"; yang_parent_name = "native";
}

Native::DeviceTracking::~DeviceTracking()
{
}

bool Native::DeviceTracking::has_data() const
{
    for (std::size_t index=0; index<policy.size(); index++)
    {
        if(policy[index]->has_data())
            return true;
    }
    return false;
}

bool Native::DeviceTracking::has_operation() const
{
    for (std::size_t index=0; index<policy.size(); index++)
    {
        if(policy[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::DeviceTracking::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "device-tracking";

    return path_buffer.str();

}

const EntityPath Native::DeviceTracking::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::DeviceTracking::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "policy")
    {
        for(auto const & c : policy)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::DeviceTracking::Policy>();
        c->parent = this;
        policy.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::DeviceTracking::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : policy)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::DeviceTracking::set_value(const std::string & value_path, std::string value)
{
}

Native::DeviceTracking::Policy::Policy()
    :
    word{YType::str, "word"}
    	,
    device_role(std::make_shared<Native::DeviceTracking::Policy::DeviceRole>())
	,limit(std::make_shared<Native::DeviceTracking::Policy::Limit>())
	,protocol(std::make_shared<Native::DeviceTracking::Policy::Protocol>())
	,security_level(std::make_shared<Native::DeviceTracking::Policy::SecurityLevel>())
	,tracking(std::make_shared<Native::DeviceTracking::Policy::Tracking>())
{
    device_role->parent = this;

    limit->parent = this;

    protocol->parent = this;

    security_level->parent = this;

    tracking->parent = this;

    yang_name = "policy"; yang_parent_name = "device-tracking";
}

Native::DeviceTracking::Policy::~Policy()
{
}

bool Native::DeviceTracking::Policy::has_data() const
{
    return word.is_set
	|| (device_role !=  nullptr && device_role->has_data())
	|| (limit !=  nullptr && limit->has_data())
	|| (protocol !=  nullptr && protocol->has_data())
	|| (security_level !=  nullptr && security_level->has_data())
	|| (tracking !=  nullptr && tracking->has_data());
}

bool Native::DeviceTracking::Policy::has_operation() const
{
    return is_set(operation)
	|| is_set(word.operation)
	|| (device_role !=  nullptr && device_role->has_operation())
	|| (limit !=  nullptr && limit->has_operation())
	|| (protocol !=  nullptr && protocol->has_operation())
	|| (security_level !=  nullptr && security_level->has_operation())
	|| (tracking !=  nullptr && tracking->has_operation());
}

std::string Native::DeviceTracking::Policy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-device-tracking:policy" <<"[word='" <<word <<"']";

    return path_buffer.str();

}

const EntityPath Native::DeviceTracking::Policy::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/device-tracking/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (word.is_set || is_set(word.operation)) leaf_name_data.push_back(word.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::DeviceTracking::Policy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "device-role")
    {
        if(device_role == nullptr)
        {
            device_role = std::make_shared<Native::DeviceTracking::Policy::DeviceRole>();
        }
        return device_role;
    }

    if(child_yang_name == "limit")
    {
        if(limit == nullptr)
        {
            limit = std::make_shared<Native::DeviceTracking::Policy::Limit>();
        }
        return limit;
    }

    if(child_yang_name == "protocol")
    {
        if(protocol == nullptr)
        {
            protocol = std::make_shared<Native::DeviceTracking::Policy::Protocol>();
        }
        return protocol;
    }

    if(child_yang_name == "security-level")
    {
        if(security_level == nullptr)
        {
            security_level = std::make_shared<Native::DeviceTracking::Policy::SecurityLevel>();
        }
        return security_level;
    }

    if(child_yang_name == "tracking")
    {
        if(tracking == nullptr)
        {
            tracking = std::make_shared<Native::DeviceTracking::Policy::Tracking>();
        }
        return tracking;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::DeviceTracking::Policy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(device_role != nullptr)
    {
        children["device-role"] = device_role;
    }

    if(limit != nullptr)
    {
        children["limit"] = limit;
    }

    if(protocol != nullptr)
    {
        children["protocol"] = protocol;
    }

    if(security_level != nullptr)
    {
        children["security-level"] = security_level;
    }

    if(tracking != nullptr)
    {
        children["tracking"] = tracking;
    }

    return children;
}

void Native::DeviceTracking::Policy::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "word")
    {
        word = value;
    }
}

Native::DeviceTracking::Policy::DeviceRole::DeviceRole()
    :
    node{YType::boolean, "node"},
    switch{YType::empty, "switch"}
{
    yang_name = "device-role"; yang_parent_name = "policy";
}

Native::DeviceTracking::Policy::DeviceRole::~DeviceRole()
{
}

bool Native::DeviceTracking::Policy::DeviceRole::has_data() const
{
    return node.is_set
	|| switch.is_set;
}

bool Native::DeviceTracking::Policy::DeviceRole::has_operation() const
{
    return is_set(operation)
	|| is_set(node.operation)
	|| is_set(switch.operation);
}

std::string Native::DeviceTracking::Policy::DeviceRole::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "device-role";

    return path_buffer.str();

}

const EntityPath Native::DeviceTracking::Policy::DeviceRole::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DeviceRole' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node.is_set || is_set(node.operation)) leaf_name_data.push_back(node.get_name_leafdata());
    if (switch.is_set || is_set(switch.operation)) leaf_name_data.push_back(switch.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::DeviceTracking::Policy::DeviceRole::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::DeviceTracking::Policy::DeviceRole::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::DeviceTracking::Policy::DeviceRole::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "node")
    {
        node = value;
    }
    if(value_path == "switch")
    {
        switch = value;
    }
}

Native::DeviceTracking::Policy::Protocol::Protocol()
    :
    arp{YType::boolean, "arp"},
    dhcp4{YType::boolean, "dhcp4"},
    dhcp6{YType::boolean, "dhcp6"},
    ndp{YType::boolean, "ndp"},
    udp{YType::boolean, "udp"}
{
    yang_name = "protocol"; yang_parent_name = "policy";
}

Native::DeviceTracking::Policy::Protocol::~Protocol()
{
}

bool Native::DeviceTracking::Policy::Protocol::has_data() const
{
    return arp.is_set
	|| dhcp4.is_set
	|| dhcp6.is_set
	|| ndp.is_set
	|| udp.is_set;
}

bool Native::DeviceTracking::Policy::Protocol::has_operation() const
{
    return is_set(operation)
	|| is_set(arp.operation)
	|| is_set(dhcp4.operation)
	|| is_set(dhcp6.operation)
	|| is_set(ndp.operation)
	|| is_set(udp.operation);
}

std::string Native::DeviceTracking::Policy::Protocol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocol";

    return path_buffer.str();

}

const EntityPath Native::DeviceTracking::Policy::Protocol::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Protocol' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (arp.is_set || is_set(arp.operation)) leaf_name_data.push_back(arp.get_name_leafdata());
    if (dhcp4.is_set || is_set(dhcp4.operation)) leaf_name_data.push_back(dhcp4.get_name_leafdata());
    if (dhcp6.is_set || is_set(dhcp6.operation)) leaf_name_data.push_back(dhcp6.get_name_leafdata());
    if (ndp.is_set || is_set(ndp.operation)) leaf_name_data.push_back(ndp.get_name_leafdata());
    if (udp.is_set || is_set(udp.operation)) leaf_name_data.push_back(udp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::DeviceTracking::Policy::Protocol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::DeviceTracking::Policy::Protocol::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::DeviceTracking::Policy::Protocol::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "arp")
    {
        arp = value;
    }
    if(value_path == "dhcp4")
    {
        dhcp4 = value;
    }
    if(value_path == "dhcp6")
    {
        dhcp6 = value;
    }
    if(value_path == "ndp")
    {
        ndp = value;
    }
    if(value_path == "udp")
    {
        udp = value;
    }
}

Native::DeviceTracking::Policy::Tracking::Tracking()
    :
    tracking_on_off{YType::enumeration, "tracking-on-off"}
{
    yang_name = "tracking"; yang_parent_name = "policy";
}

Native::DeviceTracking::Policy::Tracking::~Tracking()
{
}

bool Native::DeviceTracking::Policy::Tracking::has_data() const
{
    return tracking_on_off.is_set;
}

bool Native::DeviceTracking::Policy::Tracking::has_operation() const
{
    return is_set(operation)
	|| is_set(tracking_on_off.operation);
}

std::string Native::DeviceTracking::Policy::Tracking::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tracking";

    return path_buffer.str();

}

const EntityPath Native::DeviceTracking::Policy::Tracking::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Tracking' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tracking_on_off.is_set || is_set(tracking_on_off.operation)) leaf_name_data.push_back(tracking_on_off.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::DeviceTracking::Policy::Tracking::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::DeviceTracking::Policy::Tracking::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::DeviceTracking::Policy::Tracking::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "tracking-on-off")
    {
        tracking_on_off = value;
    }
}

Native::DeviceTracking::Policy::Limit::Limit()
    :
    address_count{YType::uint16, "address-count"}
{
    yang_name = "limit"; yang_parent_name = "policy";
}

Native::DeviceTracking::Policy::Limit::~Limit()
{
}

bool Native::DeviceTracking::Policy::Limit::has_data() const
{
    return address_count.is_set;
}

bool Native::DeviceTracking::Policy::Limit::has_operation() const
{
    return is_set(operation)
	|| is_set(address_count.operation);
}

std::string Native::DeviceTracking::Policy::Limit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "limit";

    return path_buffer.str();

}

const EntityPath Native::DeviceTracking::Policy::Limit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Limit' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_count.is_set || is_set(address_count.operation)) leaf_name_data.push_back(address_count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::DeviceTracking::Policy::Limit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::DeviceTracking::Policy::Limit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::DeviceTracking::Policy::Limit::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address-count")
    {
        address_count = value;
    }
}

Native::DeviceTracking::Policy::SecurityLevel::SecurityLevel()
    :
    glean{YType::empty, "glean"}
{
    yang_name = "security-level"; yang_parent_name = "policy";
}

Native::DeviceTracking::Policy::SecurityLevel::~SecurityLevel()
{
}

bool Native::DeviceTracking::Policy::SecurityLevel::has_data() const
{
    return glean.is_set;
}

bool Native::DeviceTracking::Policy::SecurityLevel::has_operation() const
{
    return is_set(operation)
	|| is_set(glean.operation);
}

std::string Native::DeviceTracking::Policy::SecurityLevel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "security-level";

    return path_buffer.str();

}

const EntityPath Native::DeviceTracking::Policy::SecurityLevel::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SecurityLevel' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (glean.is_set || is_set(glean.operation)) leaf_name_data.push_back(glean.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::DeviceTracking::Policy::SecurityLevel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::DeviceTracking::Policy::SecurityLevel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::DeviceTracking::Policy::SecurityLevel::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "glean")
    {
        glean = value;
    }
}

Native::Fhrp::Fhrp()
    :
    version(std::make_shared<Native::Fhrp::Version>())
{
    version->parent = this;

    yang_name = "fhrp"; yang_parent_name = "native";
}

Native::Fhrp::~Fhrp()
{
}

bool Native::Fhrp::has_data() const
{
    return (version !=  nullptr && version->has_data());
}

bool Native::Fhrp::has_operation() const
{
    return is_set(operation)
	|| (version !=  nullptr && version->has_operation());
}

std::string Native::Fhrp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fhrp";

    return path_buffer.str();

}

const EntityPath Native::Fhrp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Fhrp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "version")
    {
        if(version == nullptr)
        {
            version = std::make_shared<Native::Fhrp::Version>();
        }
        return version;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Fhrp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(version != nullptr)
    {
        children["version"] = version;
    }

    return children;
}

void Native::Fhrp::set_value(const std::string & value_path, std::string value)
{
}

Native::Fhrp::Version::Version()
    :
    vrrp{YType::enumeration, "vrrp"}
{
    yang_name = "version"; yang_parent_name = "fhrp";
}

Native::Fhrp::Version::~Version()
{
}

bool Native::Fhrp::Version::has_data() const
{
    return vrrp.is_set;
}

bool Native::Fhrp::Version::has_operation() const
{
    return is_set(operation)
	|| is_set(vrrp.operation);
}

std::string Native::Fhrp::Version::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "version";

    return path_buffer.str();

}

const EntityPath Native::Fhrp::Version::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/fhrp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrrp.is_set || is_set(vrrp.operation)) leaf_name_data.push_back(vrrp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Fhrp::Version::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Fhrp::Version::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Fhrp::Version::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "vrrp")
    {
        vrrp = value;
    }
}

Native::Metadata::Metadata()
    :
    flow(nullptr) // presence node
{
    yang_name = "metadata"; yang_parent_name = "native";
}

Native::Metadata::~Metadata()
{
}

bool Native::Metadata::has_data() const
{
    return (flow !=  nullptr && flow->has_data());
}

bool Native::Metadata::has_operation() const
{
    return is_set(operation)
	|| (flow !=  nullptr && flow->has_operation());
}

std::string Native::Metadata::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metadata";

    return path_buffer.str();

}

const EntityPath Native::Metadata::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Metadata::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flow")
    {
        if(flow == nullptr)
        {
            flow = std::make_shared<Native::Metadata::Flow>();
        }
        return flow;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Metadata::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(flow != nullptr)
    {
        children["flow"] = flow;
    }

    return children;
}

void Native::Metadata::set_value(const std::string & value_path, std::string value)
{
}

Native::Metadata::Flow::Flow()
    :
    transmit{YType::empty, "transmit"}
{
    yang_name = "flow"; yang_parent_name = "metadata";
}

Native::Metadata::Flow::~Flow()
{
}

bool Native::Metadata::Flow::has_data() const
{
    return transmit.is_set;
}

bool Native::Metadata::Flow::has_operation() const
{
    return is_set(operation)
	|| is_set(transmit.operation);
}

std::string Native::Metadata::Flow::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flow";

    return path_buffer.str();

}

const EntityPath Native::Metadata::Flow::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/metadata/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (transmit.is_set || is_set(transmit.operation)) leaf_name_data.push_back(transmit.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Metadata::Flow::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Metadata::Flow::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Metadata::Flow::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "transmit")
    {
        transmit = value;
    }
}

Native::Profile::Profile()
    :
    flow{YType::empty, "flow"}
{
    yang_name = "profile"; yang_parent_name = "native";
}

Native::Profile::~Profile()
{
}

bool Native::Profile::has_data() const
{
    return flow.is_set;
}

bool Native::Profile::has_operation() const
{
    return is_set(operation)
	|| is_set(flow.operation);
}

std::string Native::Profile::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "profile";

    return path_buffer.str();

}

const EntityPath Native::Profile::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flow.is_set || is_set(flow.operation)) leaf_name_data.push_back(flow.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Profile::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Profile::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Profile::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "flow")
    {
        flow = value;
    }
}

Native::Alias::Alias()
    :
    exec(std::make_shared<Native::Alias::Exec>())
{
    exec->parent = this;

    yang_name = "alias"; yang_parent_name = "native";
}

Native::Alias::~Alias()
{
}

bool Native::Alias::has_data() const
{
    return (exec !=  nullptr && exec->has_data());
}

bool Native::Alias::has_operation() const
{
    return is_set(operation)
	|| (exec !=  nullptr && exec->has_operation());
}

std::string Native::Alias::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "alias";

    return path_buffer.str();

}

const EntityPath Native::Alias::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Alias::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "exec")
    {
        if(exec == nullptr)
        {
            exec = std::make_shared<Native::Alias::Exec>();
        }
        return exec;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Alias::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(exec != nullptr)
    {
        children["exec"] = exec;
    }

    return children;
}

void Native::Alias::set_value(const std::string & value_path, std::string value)
{
}

Native::Alias::Exec::Exec()
    :
    alias_name{YType::str, "alias-name"},
    new_alias_name{YType::str, "new-alias-name"}
{
    yang_name = "exec"; yang_parent_name = "alias";
}

Native::Alias::Exec::~Exec()
{
}

bool Native::Alias::Exec::has_data() const
{
    return alias_name.is_set
	|| new_alias_name.is_set;
}

bool Native::Alias::Exec::has_operation() const
{
    return is_set(operation)
	|| is_set(alias_name.operation)
	|| is_set(new_alias_name.operation);
}

std::string Native::Alias::Exec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exec";

    return path_buffer.str();

}

const EntityPath Native::Alias::Exec::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/alias/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (alias_name.is_set || is_set(alias_name.operation)) leaf_name_data.push_back(alias_name.get_name_leafdata());
    if (new_alias_name.is_set || is_set(new_alias_name.operation)) leaf_name_data.push_back(new_alias_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Alias::Exec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Alias::Exec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Alias::Exec::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "alias-name")
    {
        alias_name = value;
    }
    if(value_path == "new-alias-name")
    {
        new_alias_name = value;
    }
}

Native::Line::Line()
{
    yang_name = "line"; yang_parent_name = "native";
}

Native::Line::~Line()
{
}

bool Native::Line::has_data() const
{
    for (std::size_t index=0; index<aux.size(); index++)
    {
        if(aux[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<console.size(); index++)
    {
        if(console[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<line_list.size(); index++)
    {
        if(line_list[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<vty.size(); index++)
    {
        if(vty[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Line::has_operation() const
{
    for (std::size_t index=0; index<aux.size(); index++)
    {
        if(aux[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<console.size(); index++)
    {
        if(console[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<line_list.size(); index++)
    {
        if(line_list[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<vty.size(); index++)
    {
        if(vty[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Line::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "line";

    return path_buffer.str();

}

const EntityPath Native::Line::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Line::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "aux")
    {
        for(auto const & c : aux)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Line::Aux>();
        c->parent = this;
        aux.push_back(c);
        return c;
    }

    if(child_yang_name == "console")
    {
        for(auto const & c : console)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Line::Console>();
        c->parent = this;
        console.push_back(c);
        return c;
    }

    if(child_yang_name == "line-list")
    {
        for(auto const & c : line_list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Line::LineList>();
        c->parent = this;
        line_list.push_back(c);
        return c;
    }

    if(child_yang_name == "vty")
    {
        for(auto const & c : vty)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Line::Vty>();
        c->parent = this;
        vty.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : aux)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : console)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : line_list)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : vty)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Line::set_value(const std::string & value_path, std::string value)
{
}

Native::Line::LineList::LineList()
    :
    first_number{YType::uint8, "first-number"},
    activation_character{YType::str, "activation-character"},
    data_character_bits{YType::uint8, "data-character-bits"},
    domain_lookup{YType::empty, "domain-lookup"},
    editing{YType::empty, "editing"},
    exec_banner{YType::empty, "exec-banner"},
    exec_character_bits{YType::uint8, "exec-character-bits"},
    full_help{YType::empty, "full-help"},
    international{YType::empty, "international"},
    last_number{YType::uint16, "last-number"},
    length{YType::uint16, "length"},
    line{YType::uint8, "line"},
    location{YType::str, "location"},
    monitor{YType::empty, "monitor"},
    motd_banner{YType::empty, "motd-banner"},
    no_activation_character{YType::boolean, "no-activation-character"},
    notify{YType::empty, "notify"},
    refuse_message{YType::str, "refuse-message"},
    rotary{YType::uint8, "rotary"},
    rxspeed{YType::uint32, "rxspeed"},
    special_character_bits{YType::uint8, "special-character-bits"},
    speed{YType::uint32, "speed"},
    start_character{YType::str, "start-character"},
    stop_character{YType::str, "stop-character"},
    stopbits{YType::enumeration, "stopbits"},
    terminal_type{YType::str, "terminal-type"},
    txspeed{YType::uint32, "txspeed"},
    width{YType::uint16, "width"}
    	,
    access_class(std::make_shared<Native::Line::LineList::AccessClass>())
	,authorization(std::make_shared<Native::Line::LineList::Authorization>())
	,autocommand(std::make_shared<Native::Line::LineList::Autocommand>())
	,autocommand_options(nullptr) // presence node
	,databits(std::make_shared<Native::Line::LineList::Databits>())
	,escape_character(std::make_shared<Native::Line::LineList::EscapeCharacter>())
	,exec(std::make_shared<Native::Line::LineList::Exec>())
	,exec_timeout(std::make_shared<Native::Line::LineList::ExecTimeout>())
	,flowcontrol(std::make_shared<Native::Line::LineList::Flowcontrol>())
	,history(nullptr) // presence node
	,ip(std::make_shared<Native::Line::LineList::Ip>())
	,ipv6(std::make_shared<Native::Line::LineList::Ipv6>())
	,logging(std::make_shared<Native::Line::LineList::Logging>())
	,login(nullptr) // presence node
	,media_type(std::make_shared<Native::Line::LineList::MediaType>())
	,modem(std::make_shared<Native::Line::LineList::Modem>())
	,no_exec(std::make_shared<Native::Line::LineList::NoExec>())
	,padding(std::make_shared<Native::Line::LineList::Padding>())
	,parity(std::make_shared<Native::Line::LineList::Parity>())
	,password(std::make_shared<Native::Line::LineList::Password>())
	,prc(std::make_shared<Native::Line::LineList::Prc>())
	,privilege(std::make_shared<Native::Line::LineList::Privilege>())
	,session_timeout(std::make_shared<Native::Line::LineList::SessionTimeout>())
	,telnet(std::make_shared<Native::Line::LineList::Telnet>())
	,timeout(std::make_shared<Native::Line::LineList::Timeout>())
	,transport(std::make_shared<Native::Line::LineList::Transport>())
	,usb_inactivity_timeout(std::make_shared<Native::Line::LineList::UsbInactivityTimeout>())
	,vacant_message(nullptr) // presence node
{
    access_class->parent = this;

    authorization->parent = this;

    autocommand->parent = this;

    databits->parent = this;

    escape_character->parent = this;

    exec->parent = this;

    exec_timeout->parent = this;

    flowcontrol->parent = this;

    ip->parent = this;

    ipv6->parent = this;

    logging->parent = this;

    media_type->parent = this;

    modem->parent = this;

    no_exec->parent = this;

    padding->parent = this;

    parity->parent = this;

    password->parent = this;

    prc->parent = this;

    privilege->parent = this;

    session_timeout->parent = this;

    telnet->parent = this;

    timeout->parent = this;

    transport->parent = this;

    usb_inactivity_timeout->parent = this;

    yang_name = "line-list"; yang_parent_name = "line";
}

Native::Line::LineList::~LineList()
{
}

bool Native::Line::LineList::has_data() const
{
    return first_number.is_set
	|| activation_character.is_set
	|| data_character_bits.is_set
	|| domain_lookup.is_set
	|| editing.is_set
	|| exec_banner.is_set
	|| exec_character_bits.is_set
	|| full_help.is_set
	|| international.is_set
	|| last_number.is_set
	|| length.is_set
	|| line.is_set
	|| location.is_set
	|| monitor.is_set
	|| motd_banner.is_set
	|| no_activation_character.is_set
	|| notify.is_set
	|| refuse_message.is_set
	|| rotary.is_set
	|| rxspeed.is_set
	|| special_character_bits.is_set
	|| speed.is_set
	|| start_character.is_set
	|| stop_character.is_set
	|| stopbits.is_set
	|| terminal_type.is_set
	|| txspeed.is_set
	|| width.is_set
	|| (access_class !=  nullptr && access_class->has_data())
	|| (authorization !=  nullptr && authorization->has_data())
	|| (autocommand !=  nullptr && autocommand->has_data())
	|| (autocommand_options !=  nullptr && autocommand_options->has_data())
	|| (databits !=  nullptr && databits->has_data())
	|| (escape_character !=  nullptr && escape_character->has_data())
	|| (exec !=  nullptr && exec->has_data())
	|| (exec_timeout !=  nullptr && exec_timeout->has_data())
	|| (flowcontrol !=  nullptr && flowcontrol->has_data())
	|| (history !=  nullptr && history->has_data())
	|| (ip !=  nullptr && ip->has_data())
	|| (ipv6 !=  nullptr && ipv6->has_data())
	|| (logging !=  nullptr && logging->has_data())
	|| (login !=  nullptr && login->has_data())
	|| (media_type !=  nullptr && media_type->has_data())
	|| (modem !=  nullptr && modem->has_data())
	|| (no_exec !=  nullptr && no_exec->has_data())
	|| (padding !=  nullptr && padding->has_data())
	|| (parity !=  nullptr && parity->has_data())
	|| (password !=  nullptr && password->has_data())
	|| (prc !=  nullptr && prc->has_data())
	|| (privilege !=  nullptr && privilege->has_data())
	|| (session_timeout !=  nullptr && session_timeout->has_data())
	|| (telnet !=  nullptr && telnet->has_data())
	|| (timeout !=  nullptr && timeout->has_data())
	|| (transport !=  nullptr && transport->has_data())
	|| (usb_inactivity_timeout !=  nullptr && usb_inactivity_timeout->has_data())
	|| (vacant_message !=  nullptr && vacant_message->has_data());
}

bool Native::Line::LineList::has_operation() const
{
    return is_set(operation)
	|| is_set(first_number.operation)
	|| is_set(activation_character.operation)
	|| is_set(data_character_bits.operation)
	|| is_set(domain_lookup.operation)
	|| is_set(editing.operation)
	|| is_set(exec_banner.operation)
	|| is_set(exec_character_bits.operation)
	|| is_set(full_help.operation)
	|| is_set(international.operation)
	|| is_set(last_number.operation)
	|| is_set(length.operation)
	|| is_set(line.operation)
	|| is_set(location.operation)
	|| is_set(monitor.operation)
	|| is_set(motd_banner.operation)
	|| is_set(no_activation_character.operation)
	|| is_set(notify.operation)
	|| is_set(refuse_message.operation)
	|| is_set(rotary.operation)
	|| is_set(rxspeed.operation)
	|| is_set(special_character_bits.operation)
	|| is_set(speed.operation)
	|| is_set(start_character.operation)
	|| is_set(stop_character.operation)
	|| is_set(stopbits.operation)
	|| is_set(terminal_type.operation)
	|| is_set(txspeed.operation)
	|| is_set(width.operation)
	|| (access_class !=  nullptr && access_class->has_operation())
	|| (authorization !=  nullptr && authorization->has_operation())
	|| (autocommand !=  nullptr && autocommand->has_operation())
	|| (autocommand_options !=  nullptr && autocommand_options->has_operation())
	|| (databits !=  nullptr && databits->has_operation())
	|| (escape_character !=  nullptr && escape_character->has_operation())
	|| (exec !=  nullptr && exec->has_operation())
	|| (exec_timeout !=  nullptr && exec_timeout->has_operation())
	|| (flowcontrol !=  nullptr && flowcontrol->has_operation())
	|| (history !=  nullptr && history->has_operation())
	|| (ip !=  nullptr && ip->has_operation())
	|| (ipv6 !=  nullptr && ipv6->has_operation())
	|| (logging !=  nullptr && logging->has_operation())
	|| (login !=  nullptr && login->has_operation())
	|| (media_type !=  nullptr && media_type->has_operation())
	|| (modem !=  nullptr && modem->has_operation())
	|| (no_exec !=  nullptr && no_exec->has_operation())
	|| (padding !=  nullptr && padding->has_operation())
	|| (parity !=  nullptr && parity->has_operation())
	|| (password !=  nullptr && password->has_operation())
	|| (prc !=  nullptr && prc->has_operation())
	|| (privilege !=  nullptr && privilege->has_operation())
	|| (session_timeout !=  nullptr && session_timeout->has_operation())
	|| (telnet !=  nullptr && telnet->has_operation())
	|| (timeout !=  nullptr && timeout->has_operation())
	|| (transport !=  nullptr && transport->has_operation())
	|| (usb_inactivity_timeout !=  nullptr && usb_inactivity_timeout->has_operation())
	|| (vacant_message !=  nullptr && vacant_message->has_operation());
}

std::string Native::Line::LineList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "line-list" <<"[first-number='" <<first_number <<"']";

    return path_buffer.str();

}

const EntityPath Native::Line::LineList::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/line/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (first_number.is_set || is_set(first_number.operation)) leaf_name_data.push_back(first_number.get_name_leafdata());
    if (activation_character.is_set || is_set(activation_character.operation)) leaf_name_data.push_back(activation_character.get_name_leafdata());
    if (data_character_bits.is_set || is_set(data_character_bits.operation)) leaf_name_data.push_back(data_character_bits.get_name_leafdata());
    if (domain_lookup.is_set || is_set(domain_lookup.operation)) leaf_name_data.push_back(domain_lookup.get_name_leafdata());
    if (editing.is_set || is_set(editing.operation)) leaf_name_data.push_back(editing.get_name_leafdata());
    if (exec_banner.is_set || is_set(exec_banner.operation)) leaf_name_data.push_back(exec_banner.get_name_leafdata());
    if (exec_character_bits.is_set || is_set(exec_character_bits.operation)) leaf_name_data.push_back(exec_character_bits.get_name_leafdata());
    if (full_help.is_set || is_set(full_help.operation)) leaf_name_data.push_back(full_help.get_name_leafdata());
    if (international.is_set || is_set(international.operation)) leaf_name_data.push_back(international.get_name_leafdata());
    if (last_number.is_set || is_set(last_number.operation)) leaf_name_data.push_back(last_number.get_name_leafdata());
    if (length.is_set || is_set(length.operation)) leaf_name_data.push_back(length.get_name_leafdata());
    if (line.is_set || is_set(line.operation)) leaf_name_data.push_back(line.get_name_leafdata());
    if (location.is_set || is_set(location.operation)) leaf_name_data.push_back(location.get_name_leafdata());
    if (monitor.is_set || is_set(monitor.operation)) leaf_name_data.push_back(monitor.get_name_leafdata());
    if (motd_banner.is_set || is_set(motd_banner.operation)) leaf_name_data.push_back(motd_banner.get_name_leafdata());
    if (no_activation_character.is_set || is_set(no_activation_character.operation)) leaf_name_data.push_back(no_activation_character.get_name_leafdata());
    if (notify.is_set || is_set(notify.operation)) leaf_name_data.push_back(notify.get_name_leafdata());
    if (refuse_message.is_set || is_set(refuse_message.operation)) leaf_name_data.push_back(refuse_message.get_name_leafdata());
    if (rotary.is_set || is_set(rotary.operation)) leaf_name_data.push_back(rotary.get_name_leafdata());
    if (rxspeed.is_set || is_set(rxspeed.operation)) leaf_name_data.push_back(rxspeed.get_name_leafdata());
    if (special_character_bits.is_set || is_set(special_character_bits.operation)) leaf_name_data.push_back(special_character_bits.get_name_leafdata());
    if (speed.is_set || is_set(speed.operation)) leaf_name_data.push_back(speed.get_name_leafdata());
    if (start_character.is_set || is_set(start_character.operation)) leaf_name_data.push_back(start_character.get_name_leafdata());
    if (stop_character.is_set || is_set(stop_character.operation)) leaf_name_data.push_back(stop_character.get_name_leafdata());
    if (stopbits.is_set || is_set(stopbits.operation)) leaf_name_data.push_back(stopbits.get_name_leafdata());
    if (terminal_type.is_set || is_set(terminal_type.operation)) leaf_name_data.push_back(terminal_type.get_name_leafdata());
    if (txspeed.is_set || is_set(txspeed.operation)) leaf_name_data.push_back(txspeed.get_name_leafdata());
    if (width.is_set || is_set(width.operation)) leaf_name_data.push_back(width.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Line::LineList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access-class")
    {
        if(access_class == nullptr)
        {
            access_class = std::make_shared<Native::Line::LineList::AccessClass>();
        }
        return access_class;
    }

    if(child_yang_name == "authorization")
    {
        if(authorization == nullptr)
        {
            authorization = std::make_shared<Native::Line::LineList::Authorization>();
        }
        return authorization;
    }

    if(child_yang_name == "autocommand")
    {
        if(autocommand == nullptr)
        {
            autocommand = std::make_shared<Native::Line::LineList::Autocommand>();
        }
        return autocommand;
    }

    if(child_yang_name == "autocommand-options")
    {
        if(autocommand_options == nullptr)
        {
            autocommand_options = std::make_shared<Native::Line::LineList::AutocommandOptions>();
        }
        return autocommand_options;
    }

    if(child_yang_name == "databits")
    {
        if(databits == nullptr)
        {
            databits = std::make_shared<Native::Line::LineList::Databits>();
        }
        return databits;
    }

    if(child_yang_name == "escape-character")
    {
        if(escape_character == nullptr)
        {
            escape_character = std::make_shared<Native::Line::LineList::EscapeCharacter>();
        }
        return escape_character;
    }

    if(child_yang_name == "exec")
    {
        if(exec == nullptr)
        {
            exec = std::make_shared<Native::Line::LineList::Exec>();
        }
        return exec;
    }

    if(child_yang_name == "exec-timeout")
    {
        if(exec_timeout == nullptr)
        {
            exec_timeout = std::make_shared<Native::Line::LineList::ExecTimeout>();
        }
        return exec_timeout;
    }

    if(child_yang_name == "flowcontrol")
    {
        if(flowcontrol == nullptr)
        {
            flowcontrol = std::make_shared<Native::Line::LineList::Flowcontrol>();
        }
        return flowcontrol;
    }

    if(child_yang_name == "history")
    {
        if(history == nullptr)
        {
            history = std::make_shared<Native::Line::LineList::History>();
        }
        return history;
    }

    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Line::LineList::Ip>();
        }
        return ip;
    }

    if(child_yang_name == "ipv6")
    {
        if(ipv6 == nullptr)
        {
            ipv6 = std::make_shared<Native::Line::LineList::Ipv6>();
        }
        return ipv6;
    }

    if(child_yang_name == "logging")
    {
        if(logging == nullptr)
        {
            logging = std::make_shared<Native::Line::LineList::Logging>();
        }
        return logging;
    }

    if(child_yang_name == "login")
    {
        if(login == nullptr)
        {
            login = std::make_shared<Native::Line::LineList::Login>();
        }
        return login;
    }

    if(child_yang_name == "media-type")
    {
        if(media_type == nullptr)
        {
            media_type = std::make_shared<Native::Line::LineList::MediaType>();
        }
        return media_type;
    }

    if(child_yang_name == "modem")
    {
        if(modem == nullptr)
        {
            modem = std::make_shared<Native::Line::LineList::Modem>();
        }
        return modem;
    }

    if(child_yang_name == "no-exec")
    {
        if(no_exec == nullptr)
        {
            no_exec = std::make_shared<Native::Line::LineList::NoExec>();
        }
        return no_exec;
    }

    if(child_yang_name == "padding")
    {
        if(padding == nullptr)
        {
            padding = std::make_shared<Native::Line::LineList::Padding>();
        }
        return padding;
    }

    if(child_yang_name == "parity")
    {
        if(parity == nullptr)
        {
            parity = std::make_shared<Native::Line::LineList::Parity>();
        }
        return parity;
    }

    if(child_yang_name == "password")
    {
        if(password == nullptr)
        {
            password = std::make_shared<Native::Line::LineList::Password>();
        }
        return password;
    }

    if(child_yang_name == "prc")
    {
        if(prc == nullptr)
        {
            prc = std::make_shared<Native::Line::LineList::Prc>();
        }
        return prc;
    }

    if(child_yang_name == "privilege")
    {
        if(privilege == nullptr)
        {
            privilege = std::make_shared<Native::Line::LineList::Privilege>();
        }
        return privilege;
    }

    if(child_yang_name == "session-timeout")
    {
        if(session_timeout == nullptr)
        {
            session_timeout = std::make_shared<Native::Line::LineList::SessionTimeout>();
        }
        return session_timeout;
    }

    if(child_yang_name == "telnet")
    {
        if(telnet == nullptr)
        {
            telnet = std::make_shared<Native::Line::LineList::Telnet>();
        }
        return telnet;
    }

    if(child_yang_name == "timeout")
    {
        if(timeout == nullptr)
        {
            timeout = std::make_shared<Native::Line::LineList::Timeout>();
        }
        return timeout;
    }

    if(child_yang_name == "transport")
    {
        if(transport == nullptr)
        {
            transport = std::make_shared<Native::Line::LineList::Transport>();
        }
        return transport;
    }

    if(child_yang_name == "usb-inactivity-timeout")
    {
        if(usb_inactivity_timeout == nullptr)
        {
            usb_inactivity_timeout = std::make_shared<Native::Line::LineList::UsbInactivityTimeout>();
        }
        return usb_inactivity_timeout;
    }

    if(child_yang_name == "vacant-message")
    {
        if(vacant_message == nullptr)
        {
            vacant_message = std::make_shared<Native::Line::LineList::VacantMessage>();
        }
        return vacant_message;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::LineList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(access_class != nullptr)
    {
        children["access-class"] = access_class;
    }

    if(authorization != nullptr)
    {
        children["authorization"] = authorization;
    }

    if(autocommand != nullptr)
    {
        children["autocommand"] = autocommand;
    }

    if(autocommand_options != nullptr)
    {
        children["autocommand-options"] = autocommand_options;
    }

    if(databits != nullptr)
    {
        children["databits"] = databits;
    }

    if(escape_character != nullptr)
    {
        children["escape-character"] = escape_character;
    }

    if(exec != nullptr)
    {
        children["exec"] = exec;
    }

    if(exec_timeout != nullptr)
    {
        children["exec-timeout"] = exec_timeout;
    }

    if(flowcontrol != nullptr)
    {
        children["flowcontrol"] = flowcontrol;
    }

    if(history != nullptr)
    {
        children["history"] = history;
    }

    if(ip != nullptr)
    {
        children["ip"] = ip;
    }

    if(ipv6 != nullptr)
    {
        children["ipv6"] = ipv6;
    }

    if(logging != nullptr)
    {
        children["logging"] = logging;
    }

    if(login != nullptr)
    {
        children["login"] = login;
    }

    if(media_type != nullptr)
    {
        children["media-type"] = media_type;
    }

    if(modem != nullptr)
    {
        children["modem"] = modem;
    }

    if(no_exec != nullptr)
    {
        children["no-exec"] = no_exec;
    }

    if(padding != nullptr)
    {
        children["padding"] = padding;
    }

    if(parity != nullptr)
    {
        children["parity"] = parity;
    }

    if(password != nullptr)
    {
        children["password"] = password;
    }

    if(prc != nullptr)
    {
        children["prc"] = prc;
    }

    if(privilege != nullptr)
    {
        children["privilege"] = privilege;
    }

    if(session_timeout != nullptr)
    {
        children["session-timeout"] = session_timeout;
    }

    if(telnet != nullptr)
    {
        children["telnet"] = telnet;
    }

    if(timeout != nullptr)
    {
        children["timeout"] = timeout;
    }

    if(transport != nullptr)
    {
        children["transport"] = transport;
    }

    if(usb_inactivity_timeout != nullptr)
    {
        children["usb-inactivity-timeout"] = usb_inactivity_timeout;
    }

    if(vacant_message != nullptr)
    {
        children["vacant-message"] = vacant_message;
    }

    return children;
}

void Native::Line::LineList::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "first-number")
    {
        first_number = value;
    }
    if(value_path == "activation-character")
    {
        activation_character = value;
    }
    if(value_path == "data-character-bits")
    {
        data_character_bits = value;
    }
    if(value_path == "domain-lookup")
    {
        domain_lookup = value;
    }
    if(value_path == "editing")
    {
        editing = value;
    }
    if(value_path == "exec-banner")
    {
        exec_banner = value;
    }
    if(value_path == "exec-character-bits")
    {
        exec_character_bits = value;
    }
    if(value_path == "full-help")
    {
        full_help = value;
    }
    if(value_path == "international")
    {
        international = value;
    }
    if(value_path == "last-number")
    {
        last_number = value;
    }
    if(value_path == "length")
    {
        length = value;
    }
    if(value_path == "line")
    {
        line = value;
    }
    if(value_path == "location")
    {
        location = value;
    }
    if(value_path == "monitor")
    {
        monitor = value;
    }
    if(value_path == "motd-banner")
    {
        motd_banner = value;
    }
    if(value_path == "no-activation-character")
    {
        no_activation_character = value;
    }
    if(value_path == "notify")
    {
        notify = value;
    }
    if(value_path == "refuse-message")
    {
        refuse_message = value;
    }
    if(value_path == "rotary")
    {
        rotary = value;
    }
    if(value_path == "rxspeed")
    {
        rxspeed = value;
    }
    if(value_path == "special-character-bits")
    {
        special_character_bits = value;
    }
    if(value_path == "speed")
    {
        speed = value;
    }
    if(value_path == "start-character")
    {
        start_character = value;
    }
    if(value_path == "stop-character")
    {
        stop_character = value;
    }
    if(value_path == "stopbits")
    {
        stopbits = value;
    }
    if(value_path == "terminal-type")
    {
        terminal_type = value;
    }
    if(value_path == "txspeed")
    {
        txspeed = value;
    }
    if(value_path == "width")
    {
        width = value;
    }
}

Native::Line::LineList::Authorization::Authorization()
    :
    command(std::make_shared<Native::Line::LineList::Authorization::Command>())
{
    command->parent = this;

    yang_name = "authorization"; yang_parent_name = "line-list";
}

Native::Line::LineList::Authorization::~Authorization()
{
}

bool Native::Line::LineList::Authorization::has_data() const
{
    return (command !=  nullptr && command->has_data());
}

bool Native::Line::LineList::Authorization::has_operation() const
{
    return is_set(operation)
	|| (command !=  nullptr && command->has_operation());
}

std::string Native::Line::LineList::Authorization::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authorization";

    return path_buffer.str();

}

const EntityPath Native::Line::LineList::Authorization::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Authorization' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Line::LineList::Authorization::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "command")
    {
        if(command == nullptr)
        {
            command = std::make_shared<Native::Line::LineList::Authorization::Command>();
        }
        return command;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::LineList::Authorization::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(command != nullptr)
    {
        children["command"] = command;
    }

    return children;
}

void Native::Line::LineList::Authorization::set_value(const std::string & value_path, std::string value)
{
}

Native::Line::LineList::Authorization::Command::Command()
    :
    auth_name{YType::str, "auth-name"},
    enable_level{YType::uint8, "enable-level"}
{
    yang_name = "command"; yang_parent_name = "authorization";
}

Native::Line::LineList::Authorization::Command::~Command()
{
}

bool Native::Line::LineList::Authorization::Command::has_data() const
{
    return auth_name.is_set
	|| enable_level.is_set;
}

bool Native::Line::LineList::Authorization::Command::has_operation() const
{
    return is_set(operation)
	|| is_set(auth_name.operation)
	|| is_set(enable_level.operation);
}

std::string Native::Line::LineList::Authorization::Command::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "command";

    return path_buffer.str();

}

const EntityPath Native::Line::LineList::Authorization::Command::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Command' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (auth_name.is_set || is_set(auth_name.operation)) leaf_name_data.push_back(auth_name.get_name_leafdata());
    if (enable_level.is_set || is_set(enable_level.operation)) leaf_name_data.push_back(enable_level.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Line::LineList::Authorization::Command::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::LineList::Authorization::Command::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Line::LineList::Authorization::Command::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "auth-name")
    {
        auth_name = value;
    }
    if(value_path == "enable-level")
    {
        enable_level = value;
    }
}

Native::Line::LineList::AccessClass::AccessClass()
{
    yang_name = "access-class"; yang_parent_name = "line-list";
}

Native::Line::LineList::AccessClass::~AccessClass()
{
}

bool Native::Line::LineList::AccessClass::has_data() const
{
    for (std::size_t index=0; index<acccess_list.size(); index++)
    {
        if(acccess_list[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Line::LineList::AccessClass::has_operation() const
{
    for (std::size_t index=0; index<acccess_list.size(); index++)
    {
        if(acccess_list[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Line::LineList::AccessClass::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access-class";

    return path_buffer.str();

}

const EntityPath Native::Line::LineList::AccessClass::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AccessClass' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Line::LineList::AccessClass::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "acccess-list")
    {
        for(auto const & c : acccess_list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Line::LineList::AccessClass::AcccessList>();
        c->parent = this;
        acccess_list.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::LineList::AccessClass::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : acccess_list)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Line::LineList::AccessClass::set_value(const std::string & value_path, std::string value)
{
}

Native::Line::LineList::AccessClass::AcccessList::AcccessList()
    :
    direction{YType::enumeration, "direction"},
    access_list{YType::str, "access-list"},
    vrf_also{YType::empty, "vrf-also"}
{
    yang_name = "acccess-list"; yang_parent_name = "access-class";
}

Native::Line::LineList::AccessClass::AcccessList::~AcccessList()
{
}

bool Native::Line::LineList::AccessClass::AcccessList::has_data() const
{
    return direction.is_set
	|| access_list.is_set
	|| vrf_also.is_set;
}

bool Native::Line::LineList::AccessClass::AcccessList::has_operation() const
{
    return is_set(operation)
	|| is_set(direction.operation)
	|| is_set(access_list.operation)
	|| is_set(vrf_also.operation);
}

std::string Native::Line::LineList::AccessClass::AcccessList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "acccess-list" <<"[direction='" <<direction <<"']";

    return path_buffer.str();

}

const EntityPath Native::Line::LineList::AccessClass::AcccessList::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AcccessList' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (direction.is_set || is_set(direction.operation)) leaf_name_data.push_back(direction.get_name_leafdata());
    if (access_list.is_set || is_set(access_list.operation)) leaf_name_data.push_back(access_list.get_name_leafdata());
    if (vrf_also.is_set || is_set(vrf_also.operation)) leaf_name_data.push_back(vrf_also.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Line::LineList::AccessClass::AcccessList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::LineList::AccessClass::AcccessList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Line::LineList::AccessClass::AcccessList::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "direction")
    {
        direction = value;
    }
    if(value_path == "access-list")
    {
        access_list = value;
    }
    if(value_path == "vrf-also")
    {
        vrf_also = value;
    }
}

Native::Line::LineList::Autocommand::Autocommand()
    :
    line{YType::str, "line"}
    	,
    no_suppress_linenumber(nullptr) // presence node
{
    yang_name = "autocommand"; yang_parent_name = "line-list";
}

Native::Line::LineList::Autocommand::~Autocommand()
{
}

bool Native::Line::LineList::Autocommand::has_data() const
{
    return line.is_set
	|| (no_suppress_linenumber !=  nullptr && no_suppress_linenumber->has_data());
}

bool Native::Line::LineList::Autocommand::has_operation() const
{
    return is_set(operation)
	|| is_set(line.operation)
	|| (no_suppress_linenumber !=  nullptr && no_suppress_linenumber->has_operation());
}

std::string Native::Line::LineList::Autocommand::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "autocommand";

    return path_buffer.str();

}

const EntityPath Native::Line::LineList::Autocommand::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Autocommand' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (line.is_set || is_set(line.operation)) leaf_name_data.push_back(line.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Line::LineList::Autocommand::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "no-suppress-linenumber")
    {
        if(no_suppress_linenumber == nullptr)
        {
            no_suppress_linenumber = std::make_shared<Native::Line::LineList::Autocommand::NoSuppressLinenumber>();
        }
        return no_suppress_linenumber;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::LineList::Autocommand::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(no_suppress_linenumber != nullptr)
    {
        children["no-suppress-linenumber"] = no_suppress_linenumber;
    }

    return children;
}

void Native::Line::LineList::Autocommand::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "line")
    {
        line = value;
    }
}

Native::Line::LineList::Autocommand::NoSuppressLinenumber::NoSuppressLinenumber()
    :
    line{YType::str, "line"}
{
    yang_name = "no-suppress-linenumber"; yang_parent_name = "autocommand";
}

Native::Line::LineList::Autocommand::NoSuppressLinenumber::~NoSuppressLinenumber()
{
}

bool Native::Line::LineList::Autocommand::NoSuppressLinenumber::has_data() const
{
    return line.is_set;
}

bool Native::Line::LineList::Autocommand::NoSuppressLinenumber::has_operation() const
{
    return is_set(operation)
	|| is_set(line.operation);
}

std::string Native::Line::LineList::Autocommand::NoSuppressLinenumber::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "no-suppress-linenumber";

    return path_buffer.str();

}

const EntityPath Native::Line::LineList::Autocommand::NoSuppressLinenumber::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NoSuppressLinenumber' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (line.is_set || is_set(line.operation)) leaf_name_data.push_back(line.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Line::LineList::Autocommand::NoSuppressLinenumber::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::LineList::Autocommand::NoSuppressLinenumber::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Line::LineList::Autocommand::NoSuppressLinenumber::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "line")
    {
        line = value;
    }
}

Native::Line::LineList::AutocommandOptions::AutocommandOptions()
    :
    abort_character(nullptr) // presence node
	,delay(nullptr) // presence node
	,nohangup(nullptr) // presence node
{
    yang_name = "autocommand-options"; yang_parent_name = "line-list";
}

Native::Line::LineList::AutocommandOptions::~AutocommandOptions()
{
}

bool Native::Line::LineList::AutocommandOptions::has_data() const
{
    return (abort_character !=  nullptr && abort_character->has_data())
	|| (delay !=  nullptr && delay->has_data())
	|| (nohangup !=  nullptr && nohangup->has_data());
}

bool Native::Line::LineList::AutocommandOptions::has_operation() const
{
    return is_set(operation)
	|| (abort_character !=  nullptr && abort_character->has_operation())
	|| (delay !=  nullptr && delay->has_operation())
	|| (nohangup !=  nullptr && nohangup->has_operation());
}

std::string Native::Line::LineList::AutocommandOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "autocommand-options";

    return path_buffer.str();

}

const EntityPath Native::Line::LineList::AutocommandOptions::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AutocommandOptions' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Line::LineList::AutocommandOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "abort-character")
    {
        if(abort_character == nullptr)
        {
            abort_character = std::make_shared<Native::Line::LineList::AutocommandOptions::AbortCharacter>();
        }
        return abort_character;
    }

    if(child_yang_name == "delay")
    {
        if(delay == nullptr)
        {
            delay = std::make_shared<Native::Line::LineList::AutocommandOptions::Delay>();
        }
        return delay;
    }

    if(child_yang_name == "nohangup")
    {
        if(nohangup == nullptr)
        {
            nohangup = std::make_shared<Native::Line::LineList::AutocommandOptions::Nohangup>();
        }
        return nohangup;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::LineList::AutocommandOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(abort_character != nullptr)
    {
        children["abort-character"] = abort_character;
    }

    if(delay != nullptr)
    {
        children["delay"] = delay;
    }

    if(nohangup != nullptr)
    {
        children["nohangup"] = nohangup;
    }

    return children;
}

void Native::Line::LineList::AutocommandOptions::set_value(const std::string & value_path, std::string value)
{
}

Native::Line::LineList::AutocommandOptions::AbortCharacter::AbortCharacter()
    :
    character{YType::str, "character"}
{
    yang_name = "abort-character"; yang_parent_name = "autocommand-options";
}

Native::Line::LineList::AutocommandOptions::AbortCharacter::~AbortCharacter()
{
}

bool Native::Line::LineList::AutocommandOptions::AbortCharacter::has_data() const
{
    return character.is_set;
}

bool Native::Line::LineList::AutocommandOptions::AbortCharacter::has_operation() const
{
    return is_set(operation)
	|| is_set(character.operation);
}

std::string Native::Line::LineList::AutocommandOptions::AbortCharacter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "abort-character";

    return path_buffer.str();

}

const EntityPath Native::Line::LineList::AutocommandOptions::AbortCharacter::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AbortCharacter' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (character.is_set || is_set(character.operation)) leaf_name_data.push_back(character.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Line::LineList::AutocommandOptions::AbortCharacter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::LineList::AutocommandOptions::AbortCharacter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Line::LineList::AutocommandOptions::AbortCharacter::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "character")
    {
        character = value;
    }
}

Native::Line::LineList::AutocommandOptions::Delay::Delay()
    :
    time{YType::uint8, "time"}
{
    yang_name = "delay"; yang_parent_name = "autocommand-options";
}

Native::Line::LineList::AutocommandOptions::Delay::~Delay()
{
}

bool Native::Line::LineList::AutocommandOptions::Delay::has_data() const
{
    return time.is_set;
}

bool Native::Line::LineList::AutocommandOptions::Delay::has_operation() const
{
    return is_set(operation)
	|| is_set(time.operation);
}

std::string Native::Line::LineList::AutocommandOptions::Delay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "delay";

    return path_buffer.str();

}

const EntityPath Native::Line::LineList::AutocommandOptions::Delay::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Delay' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time.is_set || is_set(time.operation)) leaf_name_data.push_back(time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Line::LineList::AutocommandOptions::Delay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::LineList::AutocommandOptions::Delay::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Line::LineList::AutocommandOptions::Delay::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "time")
    {
        time = value;
    }
}

Native::Line::LineList::AutocommandOptions::Nohangup::Nohangup()
    :
    abort_character{YType::empty, "abort-character"},
    delay{YType::empty, "delay"}
{
    yang_name = "nohangup"; yang_parent_name = "autocommand-options";
}

Native::Line::LineList::AutocommandOptions::Nohangup::~Nohangup()
{
}

bool Native::Line::LineList::AutocommandOptions::Nohangup::has_data() const
{
    return abort_character.is_set
	|| delay.is_set;
}

bool Native::Line::LineList::AutocommandOptions::Nohangup::has_operation() const
{
    return is_set(operation)
	|| is_set(abort_character.operation)
	|| is_set(delay.operation);
}

std::string Native::Line::LineList::AutocommandOptions::Nohangup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nohangup";

    return path_buffer.str();

}

const EntityPath Native::Line::LineList::AutocommandOptions::Nohangup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Nohangup' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (abort_character.is_set || is_set(abort_character.operation)) leaf_name_data.push_back(abort_character.get_name_leafdata());
    if (delay.is_set || is_set(delay.operation)) leaf_name_data.push_back(delay.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Line::LineList::AutocommandOptions::Nohangup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::LineList::AutocommandOptions::Nohangup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Line::LineList::AutocommandOptions::Nohangup::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "abort-character")
    {
        abort_character = value;
    }
    if(value_path == "delay")
    {
        delay = value;
    }
}

const Enum::YLeaf Native::SnmpServer::Group::V3::SecurityLevelEnum::auth {0, "auth"};
const Enum::YLeaf Native::SnmpServer::Group::V3::SecurityLevelEnum::noauth {1, "noauth"};
const Enum::YLeaf Native::SnmpServer::Group::V3::SecurityLevelEnum::priv {2, "priv"};

const Enum::YLeaf Native::SnmpServer::Group::V3::MatchEnum::exact {0, "exact"};
const Enum::YLeaf Native::SnmpServer::Group::V3::MatchEnum::prefix {1, "prefix"};

const Enum::YLeaf Native::SnmpServer::Host::VersionEnum::Y_1 {0, "1"};
const Enum::YLeaf Native::SnmpServer::Host::VersionEnum::Y_2c {1, "2c"};
const Enum::YLeaf Native::SnmpServer::Host::VersionEnum::Y_3 {2, "3"};

const Enum::YLeaf Native::SnmpServer::Host::SecurityLevelEnum::auth {0, "auth"};
const Enum::YLeaf Native::SnmpServer::Host::SecurityLevelEnum::noauth {1, "noauth"};
const Enum::YLeaf Native::SnmpServer::Host::SecurityLevelEnum::priv {2, "priv"};

const Enum::YLeaf Native::SnmpServer::View::IncExlEnum::excluded {0, "excluded"};
const Enum::YLeaf Native::SnmpServer::View::IncExlEnum::included {1, "included"};

const Enum::YLeaf Native::License::SmartEnum::enable {0, "enable"};

const Enum::YLeaf Native::License::Boot::BootModule::ModuleEnum::c2900 {0, "c2900"};

const Enum::YLeaf Native::ServiceInsertion::ServiceContext::Waas::Authentication::EncryptEnum::Y_0 {0, "0"};
const Enum::YLeaf Native::ServiceInsertion::ServiceContext::Waas::Authentication::EncryptEnum::Y_7 {1, "7"};

const Enum::YLeaf Native::ServiceInsertion::ServiceNodeGroup::NodeDiscoveryEnum::enable {0, "enable"};

const Enum::YLeaf Native::DeviceTracking::Policy::Tracking::TrackingOnOffEnum::enable {0, "enable"};
const Enum::YLeaf Native::DeviceTracking::Policy::Tracking::TrackingOnOffEnum::disable {1, "disable"};

const Enum::YLeaf Native::Fhrp::Version::VrrpEnum::v2 {0, "v2"};
const Enum::YLeaf Native::Fhrp::Version::VrrpEnum::v3 {1, "v3"};

const Enum::YLeaf Native::Line::LineList::StopbitsEnum::Y_1 {0, "1"};
const Enum::YLeaf Native::Line::LineList::StopbitsEnum::Y_1__DOT__5 {1, "1.5"};
const Enum::YLeaf Native::Line::LineList::StopbitsEnum::Y_2 {2, "2"};

const Enum::YLeaf Native::Line::LineList::AccessClass::AcccessList::DirectionEnum::in {0, "in"};
const Enum::YLeaf Native::Line::LineList::AccessClass::AcccessList::DirectionEnum::out {1, "out"};


}
}

