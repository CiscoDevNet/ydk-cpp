
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_native_78.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {

Native::Software::Software()
    :
    auto_upgrade(std::make_shared<Native::Software::AutoUpgrade>())
{
    auto_upgrade->parent = this;

    yang_name = "software"; yang_parent_name = "native";
}

Native::Software::~Software()
{
}

bool Native::Software::has_data() const
{
    return (auto_upgrade !=  nullptr && auto_upgrade->has_data());
}

bool Native::Software::has_operation() const
{
    return is_set(yfilter)
	|| (auto_upgrade !=  nullptr && auto_upgrade->has_operation());
}

std::string Native::Software::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "software";

    return path_buffer.str();

}

const EntityPath Native::Software::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Native::Software::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "auto-upgrade")
    {
        if(auto_upgrade == nullptr)
        {
            auto_upgrade = std::make_shared<Native::Software::AutoUpgrade>();
        }
        return auto_upgrade;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Software::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(auto_upgrade != nullptr)
    {
        children["auto-upgrade"] = auto_upgrade;
    }

    return children;
}

void Native::Software::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Software::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Software::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auto-upgrade")
        return true;
    return false;
}

Native::Software::AutoUpgrade::AutoUpgrade()
    :
    enable{YType::empty, "enable"}
{
    yang_name = "auto-upgrade"; yang_parent_name = "software";
}

Native::Software::AutoUpgrade::~AutoUpgrade()
{
}

bool Native::Software::AutoUpgrade::has_data() const
{
    return enable.is_set;
}

bool Native::Software::AutoUpgrade::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string Native::Software::AutoUpgrade::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto-upgrade";

    return path_buffer.str();

}

const EntityPath Native::Software::AutoUpgrade::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/software/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Software::AutoUpgrade::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Software::AutoUpgrade::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Software::AutoUpgrade::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Software::AutoUpgrade::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool Native::Software::AutoUpgrade::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable")
        return true;
    return false;
}

Native::Upgrade::Upgrade()
    :
    fpd(std::make_shared<Native::Upgrade::Fpd>())
{
    fpd->parent = this;

    yang_name = "upgrade"; yang_parent_name = "native";
}

Native::Upgrade::~Upgrade()
{
}

bool Native::Upgrade::has_data() const
{
    return (fpd !=  nullptr && fpd->has_data());
}

bool Native::Upgrade::has_operation() const
{
    return is_set(yfilter)
	|| (fpd !=  nullptr && fpd->has_operation());
}

std::string Native::Upgrade::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "upgrade";

    return path_buffer.str();

}

const EntityPath Native::Upgrade::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Native::Upgrade::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fpd")
    {
        if(fpd == nullptr)
        {
            fpd = std::make_shared<Native::Upgrade::Fpd>();
        }
        return fpd;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Upgrade::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(fpd != nullptr)
    {
        children["fpd"] = fpd;
    }

    return children;
}

void Native::Upgrade::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Upgrade::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Upgrade::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fpd")
        return true;
    return false;
}

Native::Upgrade::Fpd::Fpd()
    :
    auto_{YType::empty, "auto"},
    path{YType::str, "path"}
{
    yang_name = "fpd"; yang_parent_name = "upgrade";
}

Native::Upgrade::Fpd::~Fpd()
{
}

bool Native::Upgrade::Fpd::has_data() const
{
    return auto_.is_set
	|| path.is_set;
}

bool Native::Upgrade::Fpd::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(auto_.yfilter)
	|| ydk::is_set(path.yfilter);
}

std::string Native::Upgrade::Fpd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fpd";

    return path_buffer.str();

}

const EntityPath Native::Upgrade::Fpd::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/upgrade/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (auto_.is_set || is_set(auto_.yfilter)) leaf_name_data.push_back(auto_.get_name_leafdata());
    if (path.is_set || is_set(path.yfilter)) leaf_name_data.push_back(path.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Upgrade::Fpd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Upgrade::Fpd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Upgrade::Fpd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "auto")
    {
        auto_ = value;
        auto_.value_namespace = name_space;
        auto_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path")
    {
        path = value;
        path.value_namespace = name_space;
        path.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Upgrade::Fpd::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "auto")
    {
        auto_.yfilter = yfilter;
    }
    if(value_path == "path")
    {
        path.yfilter = yfilter;
    }
}

bool Native::Upgrade::Fpd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auto" || name == "path")
        return true;
    return false;
}

Native::Vtp::Vtp()
    :
    domain{YType::str, "Cisco-IOS-XE-vtp:domain"},
    file{YType::str, "Cisco-IOS-XE-vtp:file"},
    pruning{YType::empty, "Cisco-IOS-XE-vtp:pruning"},
    version{YType::uint8, "Cisco-IOS-XE-vtp:version"}
    	,
    interface(std::make_shared<Native::Vtp::Interface>())
	,mode(std::make_shared<Native::Vtp::Mode>())
	,password(std::make_shared<Native::Vtp::Password>())
{
    interface->parent = this;

    mode->parent = this;

    password->parent = this;

    yang_name = "vtp"; yang_parent_name = "native";
}

Native::Vtp::~Vtp()
{
}

bool Native::Vtp::has_data() const
{
    return domain.is_set
	|| file.is_set
	|| pruning.is_set
	|| version.is_set
	|| (interface !=  nullptr && interface->has_data())
	|| (mode !=  nullptr && mode->has_data())
	|| (password !=  nullptr && password->has_data());
}

bool Native::Vtp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(domain.yfilter)
	|| ydk::is_set(file.yfilter)
	|| ydk::is_set(pruning.yfilter)
	|| ydk::is_set(version.yfilter)
	|| (interface !=  nullptr && interface->has_operation())
	|| (mode !=  nullptr && mode->has_operation())
	|| (password !=  nullptr && password->has_operation());
}

std::string Native::Vtp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vtp";

    return path_buffer.str();

}

const EntityPath Native::Vtp::get_entity_path(Entity* ancestor) const
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

    if (domain.is_set || is_set(domain.yfilter)) leaf_name_data.push_back(domain.get_name_leafdata());
    if (file.is_set || is_set(file.yfilter)) leaf_name_data.push_back(file.get_name_leafdata());
    if (pruning.is_set || is_set(pruning.yfilter)) leaf_name_data.push_back(pruning.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Vtp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        if(interface == nullptr)
        {
            interface = std::make_shared<Native::Vtp::Interface>();
        }
        return interface;
    }

    if(child_yang_name == "mode")
    {
        if(mode == nullptr)
        {
            mode = std::make_shared<Native::Vtp::Mode>();
        }
        return mode;
    }

    if(child_yang_name == "password")
    {
        if(password == nullptr)
        {
            password = std::make_shared<Native::Vtp::Password>();
        }
        return password;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Vtp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(interface != nullptr)
    {
        children["interface"] = interface;
    }

    if(mode != nullptr)
    {
        children["mode"] = mode;
    }

    if(password != nullptr)
    {
        children["password"] = password;
    }

    return children;
}

void Native::Vtp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "domain")
    {
        domain = value;
        domain.value_namespace = name_space;
        domain.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "file")
    {
        file = value;
        file.value_namespace = name_space;
        file.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pruning")
    {
        pruning = value;
        pruning.value_namespace = name_space;
        pruning.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Vtp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "domain")
    {
        domain.yfilter = yfilter;
    }
    if(value_path == "file")
    {
        file.yfilter = yfilter;
    }
    if(value_path == "pruning")
    {
        pruning.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
}

bool Native::Vtp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface" || name == "mode" || name == "password" || name == "domain" || name == "file" || name == "pruning" || name == "version")
        return true;
    return false;
}

Native::Vtp::Interface::Interface()
    :
    interface_name{YType::str, "interface-name"},
    only{YType::empty, "only"}
{
    yang_name = "interface"; yang_parent_name = "vtp";
}

Native::Vtp::Interface::~Interface()
{
}

bool Native::Vtp::Interface::has_data() const
{
    return interface_name.is_set
	|| only.is_set;
}

bool Native::Vtp::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(only.yfilter);
}

std::string Native::Vtp::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-vtp:interface";

    return path_buffer.str();

}

const EntityPath Native::Vtp::Interface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/vtp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (only.is_set || is_set(only.yfilter)) leaf_name_data.push_back(only.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Vtp::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Vtp::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Vtp::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "only")
    {
        only = value;
        only.value_namespace = name_space;
        only.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Vtp::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "only")
    {
        only.yfilter = yfilter;
    }
}

bool Native::Vtp::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "only")
        return true;
    return false;
}

Native::Vtp::Password::Password()
    :
    hidden{YType::empty, "hidden"},
    password{YType::str, "password"},
    secret{YType::empty, "secret"}
{
    yang_name = "password"; yang_parent_name = "vtp";
}

Native::Vtp::Password::~Password()
{
}

bool Native::Vtp::Password::has_data() const
{
    return hidden.is_set
	|| password.is_set
	|| secret.is_set;
}

bool Native::Vtp::Password::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hidden.yfilter)
	|| ydk::is_set(password.yfilter)
	|| ydk::is_set(secret.yfilter);
}

std::string Native::Vtp::Password::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-vtp:password";

    return path_buffer.str();

}

const EntityPath Native::Vtp::Password::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/vtp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hidden.is_set || is_set(hidden.yfilter)) leaf_name_data.push_back(hidden.get_name_leafdata());
    if (password.is_set || is_set(password.yfilter)) leaf_name_data.push_back(password.get_name_leafdata());
    if (secret.is_set || is_set(secret.yfilter)) leaf_name_data.push_back(secret.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Vtp::Password::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Vtp::Password::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Vtp::Password::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hidden")
    {
        hidden = value;
        hidden.value_namespace = name_space;
        hidden.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "password")
    {
        password = value;
        password.value_namespace = name_space;
        password.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secret")
    {
        secret = value;
        secret.value_namespace = name_space;
        secret.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Vtp::Password::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hidden")
    {
        hidden.yfilter = yfilter;
    }
    if(value_path == "password")
    {
        password.yfilter = yfilter;
    }
    if(value_path == "secret")
    {
        secret.yfilter = yfilter;
    }
}

bool Native::Vtp::Password::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hidden" || name == "password" || name == "secret")
        return true;
    return false;
}

Native::Vtp::Mode::Mode()
    :
    client(nullptr) // presence node
	,off(nullptr) // presence node
	,server(nullptr) // presence node
	,transparent(nullptr) // presence node
{
    yang_name = "mode"; yang_parent_name = "vtp";
}

Native::Vtp::Mode::~Mode()
{
}

bool Native::Vtp::Mode::has_data() const
{
    return (client !=  nullptr && client->has_data())
	|| (off !=  nullptr && off->has_data())
	|| (server !=  nullptr && server->has_data())
	|| (transparent !=  nullptr && transparent->has_data());
}

bool Native::Vtp::Mode::has_operation() const
{
    return is_set(yfilter)
	|| (client !=  nullptr && client->has_operation())
	|| (off !=  nullptr && off->has_operation())
	|| (server !=  nullptr && server->has_operation())
	|| (transparent !=  nullptr && transparent->has_operation());
}

std::string Native::Vtp::Mode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-vtp:mode";

    return path_buffer.str();

}

const EntityPath Native::Vtp::Mode::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/vtp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Vtp::Mode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "client")
    {
        if(client == nullptr)
        {
            client = std::make_shared<Native::Vtp::Mode::Client>();
        }
        return client;
    }

    if(child_yang_name == "off")
    {
        if(off == nullptr)
        {
            off = std::make_shared<Native::Vtp::Mode::Off>();
        }
        return off;
    }

    if(child_yang_name == "server")
    {
        if(server == nullptr)
        {
            server = std::make_shared<Native::Vtp::Mode::Server>();
        }
        return server;
    }

    if(child_yang_name == "transparent")
    {
        if(transparent == nullptr)
        {
            transparent = std::make_shared<Native::Vtp::Mode::Transparent>();
        }
        return transparent;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Vtp::Mode::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(client != nullptr)
    {
        children["client"] = client;
    }

    if(off != nullptr)
    {
        children["off"] = off;
    }

    if(server != nullptr)
    {
        children["server"] = server;
    }

    if(transparent != nullptr)
    {
        children["transparent"] = transparent;
    }

    return children;
}

void Native::Vtp::Mode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Vtp::Mode::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Vtp::Mode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "client" || name == "off" || name == "server" || name == "transparent")
        return true;
    return false;
}

Native::Vtp::Mode::Client::Client()
    :
    mst{YType::empty, "mst"},
    unknown{YType::empty, "unknown"},
    vlan{YType::empty, "vlan"}
{
    yang_name = "client"; yang_parent_name = "mode";
}

Native::Vtp::Mode::Client::~Client()
{
}

bool Native::Vtp::Mode::Client::has_data() const
{
    return mst.is_set
	|| unknown.is_set
	|| vlan.is_set;
}

bool Native::Vtp::Mode::Client::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mst.yfilter)
	|| ydk::is_set(unknown.yfilter)
	|| ydk::is_set(vlan.yfilter);
}

std::string Native::Vtp::Mode::Client::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "client";

    return path_buffer.str();

}

const EntityPath Native::Vtp::Mode::Client::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/vtp/Cisco-IOS-XE-vtp:mode/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mst.is_set || is_set(mst.yfilter)) leaf_name_data.push_back(mst.get_name_leafdata());
    if (unknown.is_set || is_set(unknown.yfilter)) leaf_name_data.push_back(unknown.get_name_leafdata());
    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Vtp::Mode::Client::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Vtp::Mode::Client::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Vtp::Mode::Client::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mst")
    {
        mst = value;
        mst.value_namespace = name_space;
        mst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unknown")
    {
        unknown = value;
        unknown.value_namespace = name_space;
        unknown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Vtp::Mode::Client::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mst")
    {
        mst.yfilter = yfilter;
    }
    if(value_path == "unknown")
    {
        unknown.yfilter = yfilter;
    }
    if(value_path == "vlan")
    {
        vlan.yfilter = yfilter;
    }
}

bool Native::Vtp::Mode::Client::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mst" || name == "unknown" || name == "vlan")
        return true;
    return false;
}

Native::Vtp::Mode::Off::Off()
    :
    mst{YType::empty, "mst"},
    unknown{YType::empty, "unknown"},
    vlan{YType::empty, "vlan"}
{
    yang_name = "off"; yang_parent_name = "mode";
}

Native::Vtp::Mode::Off::~Off()
{
}

bool Native::Vtp::Mode::Off::has_data() const
{
    return mst.is_set
	|| unknown.is_set
	|| vlan.is_set;
}

bool Native::Vtp::Mode::Off::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mst.yfilter)
	|| ydk::is_set(unknown.yfilter)
	|| ydk::is_set(vlan.yfilter);
}

std::string Native::Vtp::Mode::Off::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "off";

    return path_buffer.str();

}

const EntityPath Native::Vtp::Mode::Off::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/vtp/Cisco-IOS-XE-vtp:mode/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mst.is_set || is_set(mst.yfilter)) leaf_name_data.push_back(mst.get_name_leafdata());
    if (unknown.is_set || is_set(unknown.yfilter)) leaf_name_data.push_back(unknown.get_name_leafdata());
    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Vtp::Mode::Off::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Vtp::Mode::Off::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Vtp::Mode::Off::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mst")
    {
        mst = value;
        mst.value_namespace = name_space;
        mst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unknown")
    {
        unknown = value;
        unknown.value_namespace = name_space;
        unknown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Vtp::Mode::Off::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mst")
    {
        mst.yfilter = yfilter;
    }
    if(value_path == "unknown")
    {
        unknown.yfilter = yfilter;
    }
    if(value_path == "vlan")
    {
        vlan.yfilter = yfilter;
    }
}

bool Native::Vtp::Mode::Off::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mst" || name == "unknown" || name == "vlan")
        return true;
    return false;
}

Native::Vtp::Mode::Server::Server()
    :
    mst{YType::empty, "mst"},
    unknown{YType::empty, "unknown"},
    vlan{YType::empty, "vlan"}
{
    yang_name = "server"; yang_parent_name = "mode";
}

Native::Vtp::Mode::Server::~Server()
{
}

bool Native::Vtp::Mode::Server::has_data() const
{
    return mst.is_set
	|| unknown.is_set
	|| vlan.is_set;
}

bool Native::Vtp::Mode::Server::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mst.yfilter)
	|| ydk::is_set(unknown.yfilter)
	|| ydk::is_set(vlan.yfilter);
}

std::string Native::Vtp::Mode::Server::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "server";

    return path_buffer.str();

}

const EntityPath Native::Vtp::Mode::Server::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/vtp/Cisco-IOS-XE-vtp:mode/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mst.is_set || is_set(mst.yfilter)) leaf_name_data.push_back(mst.get_name_leafdata());
    if (unknown.is_set || is_set(unknown.yfilter)) leaf_name_data.push_back(unknown.get_name_leafdata());
    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Vtp::Mode::Server::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Vtp::Mode::Server::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Vtp::Mode::Server::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mst")
    {
        mst = value;
        mst.value_namespace = name_space;
        mst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unknown")
    {
        unknown = value;
        unknown.value_namespace = name_space;
        unknown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Vtp::Mode::Server::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mst")
    {
        mst.yfilter = yfilter;
    }
    if(value_path == "unknown")
    {
        unknown.yfilter = yfilter;
    }
    if(value_path == "vlan")
    {
        vlan.yfilter = yfilter;
    }
}

bool Native::Vtp::Mode::Server::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mst" || name == "unknown" || name == "vlan")
        return true;
    return false;
}

Native::Vtp::Mode::Transparent::Transparent()
    :
    mst{YType::empty, "mst"},
    unknown{YType::empty, "unknown"},
    vlan{YType::empty, "vlan"}
{
    yang_name = "transparent"; yang_parent_name = "mode";
}

Native::Vtp::Mode::Transparent::~Transparent()
{
}

bool Native::Vtp::Mode::Transparent::has_data() const
{
    return mst.is_set
	|| unknown.is_set
	|| vlan.is_set;
}

bool Native::Vtp::Mode::Transparent::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mst.yfilter)
	|| ydk::is_set(unknown.yfilter)
	|| ydk::is_set(vlan.yfilter);
}

std::string Native::Vtp::Mode::Transparent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transparent";

    return path_buffer.str();

}

const EntityPath Native::Vtp::Mode::Transparent::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/vtp/Cisco-IOS-XE-vtp:mode/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mst.is_set || is_set(mst.yfilter)) leaf_name_data.push_back(mst.get_name_leafdata());
    if (unknown.is_set || is_set(unknown.yfilter)) leaf_name_data.push_back(unknown.get_name_leafdata());
    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Vtp::Mode::Transparent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Vtp::Mode::Transparent::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Vtp::Mode::Transparent::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mst")
    {
        mst = value;
        mst.value_namespace = name_space;
        mst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unknown")
    {
        unknown = value;
        unknown.value_namespace = name_space;
        unknown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Vtp::Mode::Transparent::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mst")
    {
        mst.yfilter = yfilter;
    }
    if(value_path == "unknown")
    {
        unknown.yfilter = yfilter;
    }
    if(value_path == "vlan")
    {
        vlan.yfilter = yfilter;
    }
}

bool Native::Vtp::Mode::Transparent::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mst" || name == "unknown" || name == "vlan")
        return true;
    return false;
}

Native::Xconnect::Xconnect()
    :
    logging(std::make_shared<Native::Xconnect::Logging>())
{
    logging->parent = this;

    yang_name = "xconnect"; yang_parent_name = "native";
}

Native::Xconnect::~Xconnect()
{
}

bool Native::Xconnect::has_data() const
{
    return (logging !=  nullptr && logging->has_data());
}

bool Native::Xconnect::has_operation() const
{
    return is_set(yfilter)
	|| (logging !=  nullptr && logging->has_operation());
}

std::string Native::Xconnect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "xconnect";

    return path_buffer.str();

}

const EntityPath Native::Xconnect::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Native::Xconnect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "logging")
    {
        if(logging == nullptr)
        {
            logging = std::make_shared<Native::Xconnect::Logging>();
        }
        return logging;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Xconnect::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(logging != nullptr)
    {
        children["logging"] = logging;
    }

    return children;
}

void Native::Xconnect::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Xconnect::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Xconnect::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "logging")
        return true;
    return false;
}

Native::Xconnect::Logging::Logging()
    :
    redundancy{YType::empty, "redundancy"}
    	,
    pseudowire(std::make_shared<Native::Xconnect::Logging::Pseudowire>())
{
    pseudowire->parent = this;

    yang_name = "logging"; yang_parent_name = "xconnect";
}

Native::Xconnect::Logging::~Logging()
{
}

bool Native::Xconnect::Logging::has_data() const
{
    return redundancy.is_set
	|| (pseudowire !=  nullptr && pseudowire->has_data());
}

bool Native::Xconnect::Logging::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(redundancy.yfilter)
	|| (pseudowire !=  nullptr && pseudowire->has_operation());
}

std::string Native::Xconnect::Logging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-l2vpn:logging";

    return path_buffer.str();

}

const EntityPath Native::Xconnect::Logging::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/xconnect/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (redundancy.is_set || is_set(redundancy.yfilter)) leaf_name_data.push_back(redundancy.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Xconnect::Logging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pseudowire")
    {
        if(pseudowire == nullptr)
        {
            pseudowire = std::make_shared<Native::Xconnect::Logging::Pseudowire>();
        }
        return pseudowire;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Xconnect::Logging::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(pseudowire != nullptr)
    {
        children["pseudowire"] = pseudowire;
    }

    return children;
}

void Native::Xconnect::Logging::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "redundancy")
    {
        redundancy = value;
        redundancy.value_namespace = name_space;
        redundancy.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Xconnect::Logging::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "redundancy")
    {
        redundancy.yfilter = yfilter;
    }
}

bool Native::Xconnect::Logging::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pseudowire" || name == "redundancy")
        return true;
    return false;
}

Native::Xconnect::Logging::Pseudowire::Pseudowire()
    :
    status{YType::empty, "status"}
{
    yang_name = "pseudowire"; yang_parent_name = "logging";
}

Native::Xconnect::Logging::Pseudowire::~Pseudowire()
{
}

bool Native::Xconnect::Logging::Pseudowire::has_data() const
{
    return status.is_set;
}

bool Native::Xconnect::Logging::Pseudowire::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(status.yfilter);
}

std::string Native::Xconnect::Logging::Pseudowire::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pseudowire";

    return path_buffer.str();

}

const EntityPath Native::Xconnect::Logging::Pseudowire::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/xconnect/Cisco-IOS-XE-l2vpn:logging/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (status.is_set || is_set(status.yfilter)) leaf_name_data.push_back(status.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Xconnect::Logging::Pseudowire::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Xconnect::Logging::Pseudowire::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Xconnect::Logging::Pseudowire::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "status")
    {
        status = value;
        status.value_namespace = name_space;
        status.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Xconnect::Logging::Pseudowire::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "status")
    {
        status.yfilter = yfilter;
    }
}

bool Native::Xconnect::Logging::Pseudowire::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "status")
        return true;
    return false;
}

Native::Fabric::Fabric()
    :
    switching_mode(std::make_shared<Native::Fabric::SwitchingMode>())
{
    switching_mode->parent = this;

    yang_name = "fabric"; yang_parent_name = "native";
}

Native::Fabric::~Fabric()
{
}

bool Native::Fabric::has_data() const
{
    return (switching_mode !=  nullptr && switching_mode->has_data());
}

bool Native::Fabric::has_operation() const
{
    return is_set(yfilter)
	|| (switching_mode !=  nullptr && switching_mode->has_operation());
}

std::string Native::Fabric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fabric";

    return path_buffer.str();

}

const EntityPath Native::Fabric::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Native::Fabric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "switching-mode")
    {
        if(switching_mode == nullptr)
        {
            switching_mode = std::make_shared<Native::Fabric::SwitchingMode>();
        }
        return switching_mode;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Fabric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(switching_mode != nullptr)
    {
        children["switching-mode"] = switching_mode;
    }

    return children;
}

void Native::Fabric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Fabric::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Fabric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "switching-mode")
        return true;
    return false;
}

Native::Fabric::SwitchingMode::SwitchingMode()
    :
    allow(std::make_shared<Native::Fabric::SwitchingMode::Allow>())
	,force(std::make_shared<Native::Fabric::SwitchingMode::Force>())
{
    allow->parent = this;

    force->parent = this;

    yang_name = "switching-mode"; yang_parent_name = "fabric";
}

Native::Fabric::SwitchingMode::~SwitchingMode()
{
}

bool Native::Fabric::SwitchingMode::has_data() const
{
    return (allow !=  nullptr && allow->has_data())
	|| (force !=  nullptr && force->has_data());
}

bool Native::Fabric::SwitchingMode::has_operation() const
{
    return is_set(yfilter)
	|| (allow !=  nullptr && allow->has_operation())
	|| (force !=  nullptr && force->has_operation());
}

std::string Native::Fabric::SwitchingMode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "switching-mode";

    return path_buffer.str();

}

const EntityPath Native::Fabric::SwitchingMode::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/fabric/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Fabric::SwitchingMode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "allow")
    {
        if(allow == nullptr)
        {
            allow = std::make_shared<Native::Fabric::SwitchingMode::Allow>();
        }
        return allow;
    }

    if(child_yang_name == "force")
    {
        if(force == nullptr)
        {
            force = std::make_shared<Native::Fabric::SwitchingMode::Force>();
        }
        return force;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Fabric::SwitchingMode::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(allow != nullptr)
    {
        children["allow"] = allow;
    }

    if(force != nullptr)
    {
        children["force"] = force;
    }

    return children;
}

void Native::Fabric::SwitchingMode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Fabric::SwitchingMode::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Fabric::SwitchingMode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "allow" || name == "force")
        return true;
    return false;
}

Native::Fabric::SwitchingMode::Allow::Allow()
    :
    bus_mode{YType::empty, "bus-mode"}
    	,
    truncated(nullptr) // presence node
{
    yang_name = "allow"; yang_parent_name = "switching-mode";
}

Native::Fabric::SwitchingMode::Allow::~Allow()
{
}

bool Native::Fabric::SwitchingMode::Allow::has_data() const
{
    return bus_mode.is_set
	|| (truncated !=  nullptr && truncated->has_data());
}

bool Native::Fabric::SwitchingMode::Allow::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bus_mode.yfilter)
	|| (truncated !=  nullptr && truncated->has_operation());
}

std::string Native::Fabric::SwitchingMode::Allow::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "allow";

    return path_buffer.str();

}

const EntityPath Native::Fabric::SwitchingMode::Allow::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/fabric/switching-mode/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bus_mode.is_set || is_set(bus_mode.yfilter)) leaf_name_data.push_back(bus_mode.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Fabric::SwitchingMode::Allow::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "truncated")
    {
        if(truncated == nullptr)
        {
            truncated = std::make_shared<Native::Fabric::SwitchingMode::Allow::Truncated>();
        }
        return truncated;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Fabric::SwitchingMode::Allow::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(truncated != nullptr)
    {
        children["truncated"] = truncated;
    }

    return children;
}

void Native::Fabric::SwitchingMode::Allow::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bus-mode")
    {
        bus_mode = value;
        bus_mode.value_namespace = name_space;
        bus_mode.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Fabric::SwitchingMode::Allow::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bus-mode")
    {
        bus_mode.yfilter = yfilter;
    }
}

bool Native::Fabric::SwitchingMode::Allow::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "truncated" || name == "bus-mode")
        return true;
    return false;
}

Native::Fabric::SwitchingMode::Allow::Truncated::Truncated()
    :
    threshold{YType::uint8, "threshold"}
{
    yang_name = "truncated"; yang_parent_name = "allow";
}

Native::Fabric::SwitchingMode::Allow::Truncated::~Truncated()
{
}

bool Native::Fabric::SwitchingMode::Allow::Truncated::has_data() const
{
    return threshold.is_set;
}

bool Native::Fabric::SwitchingMode::Allow::Truncated::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string Native::Fabric::SwitchingMode::Allow::Truncated::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "truncated";

    return path_buffer.str();

}

const EntityPath Native::Fabric::SwitchingMode::Allow::Truncated::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/fabric/switching-mode/allow/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Fabric::SwitchingMode::Allow::Truncated::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Fabric::SwitchingMode::Allow::Truncated::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Fabric::SwitchingMode::Allow::Truncated::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Fabric::SwitchingMode::Allow::Truncated::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool Native::Fabric::SwitchingMode::Allow::Truncated::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold")
        return true;
    return false;
}

Native::Fabric::SwitchingMode::Force::Force()
    :
    bus_mode{YType::empty, "bus-mode"}
{
    yang_name = "force"; yang_parent_name = "switching-mode";
}

Native::Fabric::SwitchingMode::Force::~Force()
{
}

bool Native::Fabric::SwitchingMode::Force::has_data() const
{
    return bus_mode.is_set;
}

bool Native::Fabric::SwitchingMode::Force::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bus_mode.yfilter);
}

std::string Native::Fabric::SwitchingMode::Force::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "force";

    return path_buffer.str();

}

const EntityPath Native::Fabric::SwitchingMode::Force::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/fabric/switching-mode/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bus_mode.is_set || is_set(bus_mode.yfilter)) leaf_name_data.push_back(bus_mode.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Fabric::SwitchingMode::Force::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Fabric::SwitchingMode::Force::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Fabric::SwitchingMode::Force::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bus-mode")
    {
        bus_mode = value;
        bus_mode.value_namespace = name_space;
        bus_mode.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Fabric::SwitchingMode::Force::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bus-mode")
    {
        bus_mode.yfilter = yfilter;
    }
}

bool Native::Fabric::SwitchingMode::Force::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bus-mode")
        return true;
    return false;
}

Native::PortChannel::PortChannel()
    :
    auto_{YType::empty, "Cisco-IOS-XE-ethernet:auto"}
    	,
    load_balance(std::make_shared<Native::PortChannel::LoadBalance>())
	,load_balancing(std::make_shared<Native::PortChannel::LoadBalancing>())
{
    load_balance->parent = this;

    load_balancing->parent = this;

    yang_name = "port-channel"; yang_parent_name = "native";
}

Native::PortChannel::~PortChannel()
{
}

bool Native::PortChannel::has_data() const
{
    return auto_.is_set
	|| (load_balance !=  nullptr && load_balance->has_data())
	|| (load_balancing !=  nullptr && load_balancing->has_data());
}

bool Native::PortChannel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(auto_.yfilter)
	|| (load_balance !=  nullptr && load_balance->has_operation())
	|| (load_balancing !=  nullptr && load_balancing->has_operation());
}

std::string Native::PortChannel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port-channel";

    return path_buffer.str();

}

const EntityPath Native::PortChannel::get_entity_path(Entity* ancestor) const
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

    if (auto_.is_set || is_set(auto_.yfilter)) leaf_name_data.push_back(auto_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::PortChannel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "load-balance")
    {
        if(load_balance == nullptr)
        {
            load_balance = std::make_shared<Native::PortChannel::LoadBalance>();
        }
        return load_balance;
    }

    if(child_yang_name == "load-balancing")
    {
        if(load_balancing == nullptr)
        {
            load_balancing = std::make_shared<Native::PortChannel::LoadBalancing>();
        }
        return load_balancing;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::PortChannel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(load_balance != nullptr)
    {
        children["load-balance"] = load_balance;
    }

    if(load_balancing != nullptr)
    {
        children["load-balancing"] = load_balancing;
    }

    return children;
}

void Native::PortChannel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "auto")
    {
        auto_ = value;
        auto_.value_namespace = name_space;
        auto_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::PortChannel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "auto")
    {
        auto_.yfilter = yfilter;
    }
}

bool Native::PortChannel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "load-balance" || name == "load-balancing" || name == "auto")
        return true;
    return false;
}

Native::PortChannel::LoadBalance::LoadBalance()
    :
    load_balance{YType::enumeration, "load-balance"}
    	,
    extended(nullptr) // presence node
{
    yang_name = "load-balance"; yang_parent_name = "port-channel";
}

Native::PortChannel::LoadBalance::~LoadBalance()
{
}

bool Native::PortChannel::LoadBalance::has_data() const
{
    return load_balance.is_set
	|| (extended !=  nullptr && extended->has_data());
}

bool Native::PortChannel::LoadBalance::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(load_balance.yfilter)
	|| (extended !=  nullptr && extended->has_operation());
}

std::string Native::PortChannel::LoadBalance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-ethernet:load-balance";

    return path_buffer.str();

}

const EntityPath Native::PortChannel::LoadBalance::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/port-channel/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (load_balance.is_set || is_set(load_balance.yfilter)) leaf_name_data.push_back(load_balance.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::PortChannel::LoadBalance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "extended")
    {
        if(extended == nullptr)
        {
            extended = std::make_shared<Native::PortChannel::LoadBalance::Extended>();
        }
        return extended;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::PortChannel::LoadBalance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(extended != nullptr)
    {
        children["extended"] = extended;
    }

    return children;
}

void Native::PortChannel::LoadBalance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "load-balance")
    {
        load_balance = value;
        load_balance.value_namespace = name_space;
        load_balance.value_namespace_prefix = name_space_prefix;
    }
}

void Native::PortChannel::LoadBalance::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "load-balance")
    {
        load_balance.yfilter = yfilter;
    }
}

bool Native::PortChannel::LoadBalance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "extended" || name == "load-balance")
        return true;
    return false;
}

Native::PortChannel::LoadBalance::Extended::Extended()
    :
    extended{YType::enumeration, "extended"}
{
    yang_name = "extended"; yang_parent_name = "load-balance";
}

Native::PortChannel::LoadBalance::Extended::~Extended()
{
}

bool Native::PortChannel::LoadBalance::Extended::has_data() const
{
    for (auto const & leaf : extended.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::PortChannel::LoadBalance::Extended::has_operation() const
{
    for (auto const & leaf : extended.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(extended.yfilter);
}

std::string Native::PortChannel::LoadBalance::Extended::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extended";

    return path_buffer.str();

}

const EntityPath Native::PortChannel::LoadBalance::Extended::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/port-channel/Cisco-IOS-XE-ethernet:load-balance/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto extended_name_datas = extended.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), extended_name_datas.begin(), extended_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::PortChannel::LoadBalance::Extended::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::PortChannel::LoadBalance::Extended::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::PortChannel::LoadBalance::Extended::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "extended")
    {
        extended.append(value);
    }
}

void Native::PortChannel::LoadBalance::Extended::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "extended")
    {
        extended.yfilter = yfilter;
    }
}

bool Native::PortChannel::LoadBalance::Extended::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "extended")
        return true;
    return false;
}

Native::PortChannel::LoadBalancing::LoadBalancing()
    :
    vlan_manual{YType::empty, "vlan-manual"}
{
    yang_name = "load-balancing"; yang_parent_name = "port-channel";
}

Native::PortChannel::LoadBalancing::~LoadBalancing()
{
}

bool Native::PortChannel::LoadBalancing::has_data() const
{
    return vlan_manual.is_set;
}

bool Native::PortChannel::LoadBalancing::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vlan_manual.yfilter);
}

std::string Native::PortChannel::LoadBalancing::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-ethernet:load-balancing";

    return path_buffer.str();

}

const EntityPath Native::PortChannel::LoadBalancing::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/port-channel/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan_manual.is_set || is_set(vlan_manual.yfilter)) leaf_name_data.push_back(vlan_manual.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::PortChannel::LoadBalancing::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::PortChannel::LoadBalancing::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::PortChannel::LoadBalancing::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vlan-manual")
    {
        vlan_manual = value;
        vlan_manual.value_namespace = name_space;
        vlan_manual.value_namespace_prefix = name_space_prefix;
    }
}

void Native::PortChannel::LoadBalancing::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vlan-manual")
    {
        vlan_manual.yfilter = yfilter;
    }
}

bool Native::PortChannel::LoadBalancing::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan-manual")
        return true;
    return false;
}

Native::Key::Key()
{
    yang_name = "key"; yang_parent_name = "native";
}

Native::Key::~Key()
{
}

bool Native::Key::has_data() const
{
    for (std::size_t index=0; index<chain.size(); index++)
    {
        if(chain[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Key::has_operation() const
{
    for (std::size_t index=0; index<chain.size(); index++)
    {
        if(chain[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Key::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key";

    return path_buffer.str();

}

const EntityPath Native::Key::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Native::Key::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "chain")
    {
        for(auto const & c : chain)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Key::Chain>();
        c->parent = this;
        chain.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Key::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : chain)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Key::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Key::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Key::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "chain")
        return true;
    return false;
}

Native::Key::Chain::Chain()
    :
    name{YType::str, "name"},
    macsec{YType::empty, "macsec"}
{
    yang_name = "chain"; yang_parent_name = "key";
}

Native::Key::Chain::~Chain()
{
}

bool Native::Key::Chain::has_data() const
{
    for (std::size_t index=0; index<key.size(); index++)
    {
        if(key[index]->has_data())
            return true;
    }
    return name.is_set
	|| macsec.is_set;
}

bool Native::Key::Chain::has_operation() const
{
    for (std::size_t index=0; index<key.size(); index++)
    {
        if(key[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(macsec.yfilter);
}

std::string Native::Key::Chain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-crypto:chain" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Key::Chain::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/key/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (macsec.is_set || is_set(macsec.yfilter)) leaf_name_data.push_back(macsec.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Key::Chain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key")
    {
        for(auto const & c : key)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Key::Chain::Key_>();
        c->parent = this;
        key.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Key::Chain::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : key)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Key::Chain::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "macsec")
    {
        macsec = value;
        macsec.value_namespace = name_space;
        macsec.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Key::Chain::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "macsec")
    {
        macsec.yfilter = yfilter;
    }
}

bool Native::Key::Chain::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key" || name == "name" || name == "macsec")
        return true;
    return false;
}

Native::Key::Chain::Key_::Key_()
    :
    id{YType::str, "id"},
    cryptographic_algorithm{YType::enumeration, "cryptographic-algorithm"}
    	,
    key_string(std::make_shared<Native::Key::Chain::Key_::KeyString>())
{
    key_string->parent = this;

    yang_name = "key"; yang_parent_name = "chain";
}

Native::Key::Chain::Key_::~Key_()
{
}

bool Native::Key::Chain::Key_::has_data() const
{
    return id.is_set
	|| cryptographic_algorithm.is_set
	|| (key_string !=  nullptr && key_string->has_data());
}

bool Native::Key::Chain::Key_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(cryptographic_algorithm.yfilter)
	|| (key_string !=  nullptr && key_string->has_operation());
}

std::string Native::Key::Chain::Key_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key" <<"[id='" <<id <<"']";

    return path_buffer.str();

}

const EntityPath Native::Key::Chain::Key_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Key_' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (cryptographic_algorithm.is_set || is_set(cryptographic_algorithm.yfilter)) leaf_name_data.push_back(cryptographic_algorithm.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Key::Chain::Key_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key-string")
    {
        if(key_string == nullptr)
        {
            key_string = std::make_shared<Native::Key::Chain::Key_::KeyString>();
        }
        return key_string;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Key::Chain::Key_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(key_string != nullptr)
    {
        children["key-string"] = key_string;
    }

    return children;
}

void Native::Key::Chain::Key_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cryptographic-algorithm")
    {
        cryptographic_algorithm = value;
        cryptographic_algorithm.value_namespace = name_space;
        cryptographic_algorithm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Key::Chain::Key_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "cryptographic-algorithm")
    {
        cryptographic_algorithm.yfilter = yfilter;
    }
}

bool Native::Key::Chain::Key_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key-string" || name == "id" || name == "cryptographic-algorithm")
        return true;
    return false;
}

Native::Key::Chain::Key_::KeyString::KeyString()
    :
    encryption{YType::enumeration, "encryption"},
    key{YType::str, "key"}
{
    yang_name = "key-string"; yang_parent_name = "key";
}

Native::Key::Chain::Key_::KeyString::~KeyString()
{
}

bool Native::Key::Chain::Key_::KeyString::has_data() const
{
    return encryption.is_set
	|| key.is_set;
}

bool Native::Key::Chain::Key_::KeyString::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(encryption.yfilter)
	|| ydk::is_set(key.yfilter);
}

std::string Native::Key::Chain::Key_::KeyString::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-string";

    return path_buffer.str();

}

const EntityPath Native::Key::Chain::Key_::KeyString::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'KeyString' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encryption.is_set || is_set(encryption.yfilter)) leaf_name_data.push_back(encryption.get_name_leafdata());
    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Key::Chain::Key_::KeyString::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Key::Chain::Key_::KeyString::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Key::Chain::Key_::KeyString::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "encryption")
    {
        encryption = value;
        encryption.value_namespace = name_space;
        encryption.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key")
    {
        key = value;
        key.value_namespace = name_space;
        key.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Key::Chain::Key_::KeyString::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "encryption")
    {
        encryption.yfilter = yfilter;
    }
    if(value_path == "key")
    {
        key.yfilter = yfilter;
    }
}

bool Native::Key::Chain::Key_::KeyString::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "encryption" || name == "key")
        return true;
    return false;
}

Native::L2::L2()
    :
    router_id{YType::str, "router-id"}
{
    yang_name = "l2"; yang_parent_name = "native";
}

Native::L2::~L2()
{
}

bool Native::L2::has_data() const
{
    for (std::size_t index=0; index<vfi.size(); index++)
    {
        if(vfi[index]->has_data())
            return true;
    }
    return router_id.is_set;
}

bool Native::L2::has_operation() const
{
    for (std::size_t index=0; index<vfi.size(); index++)
    {
        if(vfi[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(router_id.yfilter);
}

std::string Native::L2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2";

    return path_buffer.str();

}

const EntityPath Native::L2::get_entity_path(Entity* ancestor) const
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

    if (router_id.is_set || is_set(router_id.yfilter)) leaf_name_data.push_back(router_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::L2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vfi")
    {
        for(auto const & c : vfi)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::L2::Vfi>();
        c->parent = this;
        vfi.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::L2::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : vfi)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::L2::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "router-id")
    {
        router_id = value;
        router_id.value_namespace = name_space;
        router_id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::L2::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "router-id")
    {
        router_id.yfilter = yfilter;
    }
}

bool Native::L2::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vfi" || name == "router-id")
        return true;
    return false;
}

Native::L2::Vfi::Vfi()
    :
    name{YType::str, "name"},
    bridge_domain{YType::uint16, "bridge-domain"},
    evc{YType::str, "evc"},
    mode{YType::enumeration, "mode"}
    	,
    vpn(std::make_shared<Native::L2::Vfi::Vpn>())
{
    vpn->parent = this;

    yang_name = "vfi"; yang_parent_name = "l2";
}

Native::L2::Vfi::~Vfi()
{
}

bool Native::L2::Vfi::has_data() const
{
    for (std::size_t index=0; index<neighbor.size(); index++)
    {
        if(neighbor[index]->has_data())
            return true;
    }
    return name.is_set
	|| bridge_domain.is_set
	|| evc.is_set
	|| mode.is_set
	|| (vpn !=  nullptr && vpn->has_data());
}

bool Native::L2::Vfi::has_operation() const
{
    for (std::size_t index=0; index<neighbor.size(); index++)
    {
        if(neighbor[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(bridge_domain.yfilter)
	|| ydk::is_set(evc.yfilter)
	|| ydk::is_set(mode.yfilter)
	|| (vpn !=  nullptr && vpn->has_operation());
}

std::string Native::L2::Vfi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-l2vpn:vfi" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Native::L2::Vfi::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/l2/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (bridge_domain.is_set || is_set(bridge_domain.yfilter)) leaf_name_data.push_back(bridge_domain.get_name_leafdata());
    if (evc.is_set || is_set(evc.yfilter)) leaf_name_data.push_back(evc.get_name_leafdata());
    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::L2::Vfi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbor")
    {
        for(auto const & c : neighbor)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::L2::Vfi::Neighbor>();
        c->parent = this;
        neighbor.push_back(c);
        return c;
    }

    if(child_yang_name == "vpn")
    {
        if(vpn == nullptr)
        {
            vpn = std::make_shared<Native::L2::Vfi::Vpn>();
        }
        return vpn;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::L2::Vfi::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : neighbor)
    {
        children[c->get_segment_path()] = c;
    }

    if(vpn != nullptr)
    {
        children["vpn"] = vpn;
    }

    return children;
}

void Native::L2::Vfi::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bridge-domain")
    {
        bridge_domain = value;
        bridge_domain.value_namespace = name_space;
        bridge_domain.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "evc")
    {
        evc = value;
        evc.value_namespace = name_space;
        evc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mode")
    {
        mode = value;
        mode.value_namespace = name_space;
        mode.value_namespace_prefix = name_space_prefix;
    }
}

void Native::L2::Vfi::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "bridge-domain")
    {
        bridge_domain.yfilter = yfilter;
    }
    if(value_path == "evc")
    {
        evc.yfilter = yfilter;
    }
    if(value_path == "mode")
    {
        mode.yfilter = yfilter;
    }
}

bool Native::L2::Vfi::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor" || name == "vpn" || name == "name" || name == "bridge-domain" || name == "evc" || name == "mode")
        return true;
    return false;
}

Native::L2::Vfi::Vpn::Vpn()
    :
    id{YType::uint64, "id"}
{
    yang_name = "vpn"; yang_parent_name = "vfi";
}

Native::L2::Vfi::Vpn::~Vpn()
{
}

bool Native::L2::Vfi::Vpn::has_data() const
{
    return id.is_set;
}

bool Native::L2::Vfi::Vpn::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter);
}

std::string Native::L2::Vfi::Vpn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vpn";

    return path_buffer.str();

}

const EntityPath Native::L2::Vfi::Vpn::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Vpn' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::L2::Vfi::Vpn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::L2::Vfi::Vpn::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::L2::Vfi::Vpn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::L2::Vfi::Vpn::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool Native::L2::Vfi::Vpn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id")
        return true;
    return false;
}

Native::L2::Vfi::Neighbor::Neighbor()
    :
    router_id{YType::str, "router-id"},
    encapsulation{YType::enumeration, "encapsulation"},
    pw_class{YType::str, "pw-class"},
    vc_id{YType::uint64, "vc-id"}
{
    yang_name = "neighbor"; yang_parent_name = "vfi";
}

Native::L2::Vfi::Neighbor::~Neighbor()
{
}

bool Native::L2::Vfi::Neighbor::has_data() const
{
    return router_id.is_set
	|| encapsulation.is_set
	|| pw_class.is_set
	|| vc_id.is_set;
}

bool Native::L2::Vfi::Neighbor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(router_id.yfilter)
	|| ydk::is_set(encapsulation.yfilter)
	|| ydk::is_set(pw_class.yfilter)
	|| ydk::is_set(vc_id.yfilter);
}

std::string Native::L2::Vfi::Neighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor" <<"[router-id='" <<router_id <<"']";

    return path_buffer.str();

}

const EntityPath Native::L2::Vfi::Neighbor::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Neighbor' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (router_id.is_set || is_set(router_id.yfilter)) leaf_name_data.push_back(router_id.get_name_leafdata());
    if (encapsulation.is_set || is_set(encapsulation.yfilter)) leaf_name_data.push_back(encapsulation.get_name_leafdata());
    if (pw_class.is_set || is_set(pw_class.yfilter)) leaf_name_data.push_back(pw_class.get_name_leafdata());
    if (vc_id.is_set || is_set(vc_id.yfilter)) leaf_name_data.push_back(vc_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::L2::Vfi::Neighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::L2::Vfi::Neighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::L2::Vfi::Neighbor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "router-id")
    {
        router_id = value;
        router_id.value_namespace = name_space;
        router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encapsulation")
    {
        encapsulation = value;
        encapsulation.value_namespace = name_space;
        encapsulation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pw-class")
    {
        pw_class = value;
        pw_class.value_namespace = name_space;
        pw_class.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vc-id")
    {
        vc_id = value;
        vc_id.value_namespace = name_space;
        vc_id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::L2::Vfi::Neighbor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "router-id")
    {
        router_id.yfilter = yfilter;
    }
    if(value_path == "encapsulation")
    {
        encapsulation.yfilter = yfilter;
    }
    if(value_path == "pw-class")
    {
        pw_class.yfilter = yfilter;
    }
    if(value_path == "vc-id")
    {
        vc_id.yfilter = yfilter;
    }
}

bool Native::L2::Vfi::Neighbor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "router-id" || name == "encapsulation" || name == "pw-class" || name == "vc-id")
        return true;
    return false;
}

Native::System::System()
    :
    debug(std::make_shared<Native::System::Debug>())
	,disable(std::make_shared<Native::System::Disable>())
	,environment(std::make_shared<Native::System::Environment>())
	,fnf(std::make_shared<Native::System::Fnf>())
	,ignore(std::make_shared<Native::System::Ignore>())
	,mode(std::make_shared<Native::System::Mode>())
	,mode_button(std::make_shared<Native::System::ModeButton>())
	,mtu(std::make_shared<Native::System::Mtu>())
{
    debug->parent = this;

    disable->parent = this;

    environment->parent = this;

    fnf->parent = this;

    ignore->parent = this;

    mode->parent = this;

    mode_button->parent = this;

    mtu->parent = this;

    yang_name = "system"; yang_parent_name = "native";
}

Native::System::~System()
{
}

bool Native::System::has_data() const
{
    return (debug !=  nullptr && debug->has_data())
	|| (disable !=  nullptr && disable->has_data())
	|| (environment !=  nullptr && environment->has_data())
	|| (fnf !=  nullptr && fnf->has_data())
	|| (ignore !=  nullptr && ignore->has_data())
	|| (mode !=  nullptr && mode->has_data())
	|| (mode_button !=  nullptr && mode_button->has_data())
	|| (mtu !=  nullptr && mtu->has_data());
}

bool Native::System::has_operation() const
{
    return is_set(yfilter)
	|| (debug !=  nullptr && debug->has_operation())
	|| (disable !=  nullptr && disable->has_operation())
	|| (environment !=  nullptr && environment->has_operation())
	|| (fnf !=  nullptr && fnf->has_operation())
	|| (ignore !=  nullptr && ignore->has_operation())
	|| (mode !=  nullptr && mode->has_operation())
	|| (mode_button !=  nullptr && mode_button->has_operation())
	|| (mtu !=  nullptr && mtu->has_operation());
}

std::string Native::System::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "system";

    return path_buffer.str();

}

const EntityPath Native::System::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Native::System::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "debug")
    {
        if(debug == nullptr)
        {
            debug = std::make_shared<Native::System::Debug>();
        }
        return debug;
    }

    if(child_yang_name == "disable")
    {
        if(disable == nullptr)
        {
            disable = std::make_shared<Native::System::Disable>();
        }
        return disable;
    }

    if(child_yang_name == "environment")
    {
        if(environment == nullptr)
        {
            environment = std::make_shared<Native::System::Environment>();
        }
        return environment;
    }

    if(child_yang_name == "fnf")
    {
        if(fnf == nullptr)
        {
            fnf = std::make_shared<Native::System::Fnf>();
        }
        return fnf;
    }

    if(child_yang_name == "ignore")
    {
        if(ignore == nullptr)
        {
            ignore = std::make_shared<Native::System::Ignore>();
        }
        return ignore;
    }

    if(child_yang_name == "mode")
    {
        if(mode == nullptr)
        {
            mode = std::make_shared<Native::System::Mode>();
        }
        return mode;
    }

    if(child_yang_name == "mode-button")
    {
        if(mode_button == nullptr)
        {
            mode_button = std::make_shared<Native::System::ModeButton>();
        }
        return mode_button;
    }

    if(child_yang_name == "mtu")
    {
        if(mtu == nullptr)
        {
            mtu = std::make_shared<Native::System::Mtu>();
        }
        return mtu;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::System::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(debug != nullptr)
    {
        children["debug"] = debug;
    }

    if(disable != nullptr)
    {
        children["disable"] = disable;
    }

    if(environment != nullptr)
    {
        children["environment"] = environment;
    }

    if(fnf != nullptr)
    {
        children["fnf"] = fnf;
    }

    if(ignore != nullptr)
    {
        children["ignore"] = ignore;
    }

    if(mode != nullptr)
    {
        children["mode"] = mode;
    }

    if(mode_button != nullptr)
    {
        children["mode-button"] = mode_button;
    }

    if(mtu != nullptr)
    {
        children["mtu"] = mtu;
    }

    return children;
}

void Native::System::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::System::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::System::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "debug" || name == "disable" || name == "environment" || name == "fnf" || name == "ignore" || name == "mode" || name == "mode-button" || name == "mtu")
        return true;
    return false;
}

Native::System::Mode::Mode()
    :
    maintenance(nullptr) // presence node
{
    yang_name = "mode"; yang_parent_name = "system";
}

Native::System::Mode::~Mode()
{
}

bool Native::System::Mode::has_data() const
{
    return (maintenance !=  nullptr && maintenance->has_data());
}

bool Native::System::Mode::has_operation() const
{
    return is_set(yfilter)
	|| (maintenance !=  nullptr && maintenance->has_operation());
}

std::string Native::System::Mode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-mmode:mode";

    return path_buffer.str();

}

const EntityPath Native::System::Mode::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/system/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::System::Mode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "maintenance")
    {
        if(maintenance == nullptr)
        {
            maintenance = std::make_shared<Native::System::Mode::Maintenance>();
        }
        return maintenance;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::System::Mode::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(maintenance != nullptr)
    {
        children["maintenance"] = maintenance;
    }

    return children;
}

void Native::System::Mode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::System::Mode::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::System::Mode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "maintenance")
        return true;
    return false;
}

Native::System::Mode::Maintenance::Maintenance()
    :
    config_maintenance(std::make_shared<Native::System::Mode::Maintenance::ConfigMaintenance>())
{
    config_maintenance->parent = this;

    yang_name = "maintenance"; yang_parent_name = "mode";
}

Native::System::Mode::Maintenance::~Maintenance()
{
}

bool Native::System::Mode::Maintenance::has_data() const
{
    return (config_maintenance !=  nullptr && config_maintenance->has_data());
}

bool Native::System::Mode::Maintenance::has_operation() const
{
    return is_set(yfilter)
	|| (config_maintenance !=  nullptr && config_maintenance->has_operation());
}

std::string Native::System::Mode::Maintenance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "maintenance";

    return path_buffer.str();

}

const EntityPath Native::System::Mode::Maintenance::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/system/Cisco-IOS-XE-mmode:mode/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::System::Mode::Maintenance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config-maintenance")
    {
        if(config_maintenance == nullptr)
        {
            config_maintenance = std::make_shared<Native::System::Mode::Maintenance::ConfigMaintenance>();
        }
        return config_maintenance;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::System::Mode::Maintenance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(config_maintenance != nullptr)
    {
        children["config-maintenance"] = config_maintenance;
    }

    return children;
}

void Native::System::Mode::Maintenance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::System::Mode::Maintenance::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::System::Mode::Maintenance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config-maintenance")
        return true;
    return false;
}

Native::System::Mode::Maintenance::ConfigMaintenance::ConfigMaintenance()
    :
    failsafe{YType::uint8, "failsafe"},
    template_{YType::str, "template"},
    timeout{YType::uint8, "timeout"}
    	,
    on_reload(std::make_shared<Native::System::Mode::Maintenance::ConfigMaintenance::OnReload>())
{
    on_reload->parent = this;

    yang_name = "config-maintenance"; yang_parent_name = "maintenance";
}

Native::System::Mode::Maintenance::ConfigMaintenance::~ConfigMaintenance()
{
}

bool Native::System::Mode::Maintenance::ConfigMaintenance::has_data() const
{
    return failsafe.is_set
	|| template_.is_set
	|| timeout.is_set
	|| (on_reload !=  nullptr && on_reload->has_data());
}

bool Native::System::Mode::Maintenance::ConfigMaintenance::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(failsafe.yfilter)
	|| ydk::is_set(template_.yfilter)
	|| ydk::is_set(timeout.yfilter)
	|| (on_reload !=  nullptr && on_reload->has_operation());
}

std::string Native::System::Mode::Maintenance::ConfigMaintenance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config-maintenance";

    return path_buffer.str();

}

const EntityPath Native::System::Mode::Maintenance::ConfigMaintenance::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/system/Cisco-IOS-XE-mmode:mode/maintenance/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (failsafe.is_set || is_set(failsafe.yfilter)) leaf_name_data.push_back(failsafe.get_name_leafdata());
    if (template_.is_set || is_set(template_.yfilter)) leaf_name_data.push_back(template_.get_name_leafdata());
    if (timeout.is_set || is_set(timeout.yfilter)) leaf_name_data.push_back(timeout.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::System::Mode::Maintenance::ConfigMaintenance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "on-reload")
    {
        if(on_reload == nullptr)
        {
            on_reload = std::make_shared<Native::System::Mode::Maintenance::ConfigMaintenance::OnReload>();
        }
        return on_reload;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::System::Mode::Maintenance::ConfigMaintenance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(on_reload != nullptr)
    {
        children["on-reload"] = on_reload;
    }

    return children;
}

void Native::System::Mode::Maintenance::ConfigMaintenance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "failsafe")
    {
        failsafe = value;
        failsafe.value_namespace = name_space;
        failsafe.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "template")
    {
        template_ = value;
        template_.value_namespace = name_space;
        template_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timeout")
    {
        timeout = value;
        timeout.value_namespace = name_space;
        timeout.value_namespace_prefix = name_space_prefix;
    }
}

void Native::System::Mode::Maintenance::ConfigMaintenance::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "failsafe")
    {
        failsafe.yfilter = yfilter;
    }
    if(value_path == "template")
    {
        template_.yfilter = yfilter;
    }
    if(value_path == "timeout")
    {
        timeout.yfilter = yfilter;
    }
}

bool Native::System::Mode::Maintenance::ConfigMaintenance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "on-reload" || name == "failsafe" || name == "template" || name == "timeout")
        return true;
    return false;
}

Native::System::Mode::Maintenance::ConfigMaintenance::OnReload::OnReload()
    :
    reset_reason(std::make_shared<Native::System::Mode::Maintenance::ConfigMaintenance::OnReload::ResetReason>())
{
    reset_reason->parent = this;

    yang_name = "on-reload"; yang_parent_name = "config-maintenance";
}

Native::System::Mode::Maintenance::ConfigMaintenance::OnReload::~OnReload()
{
}

bool Native::System::Mode::Maintenance::ConfigMaintenance::OnReload::has_data() const
{
    return (reset_reason !=  nullptr && reset_reason->has_data());
}

bool Native::System::Mode::Maintenance::ConfigMaintenance::OnReload::has_operation() const
{
    return is_set(yfilter)
	|| (reset_reason !=  nullptr && reset_reason->has_operation());
}

std::string Native::System::Mode::Maintenance::ConfigMaintenance::OnReload::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "on-reload";

    return path_buffer.str();

}

const EntityPath Native::System::Mode::Maintenance::ConfigMaintenance::OnReload::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/system/Cisco-IOS-XE-mmode:mode/maintenance/config-maintenance/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::System::Mode::Maintenance::ConfigMaintenance::OnReload::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "reset-reason")
    {
        if(reset_reason == nullptr)
        {
            reset_reason = std::make_shared<Native::System::Mode::Maintenance::ConfigMaintenance::OnReload::ResetReason>();
        }
        return reset_reason;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::System::Mode::Maintenance::ConfigMaintenance::OnReload::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(reset_reason != nullptr)
    {
        children["reset-reason"] = reset_reason;
    }

    return children;
}

void Native::System::Mode::Maintenance::ConfigMaintenance::OnReload::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::System::Mode::Maintenance::ConfigMaintenance::OnReload::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::System::Mode::Maintenance::ConfigMaintenance::OnReload::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reset-reason")
        return true;
    return false;
}

Native::System::Mode::Maintenance::ConfigMaintenance::OnReload::ResetReason::ResetReason()
    :
    maintenance{YType::empty, "maintenance"}
{
    yang_name = "reset-reason"; yang_parent_name = "on-reload";
}

Native::System::Mode::Maintenance::ConfigMaintenance::OnReload::ResetReason::~ResetReason()
{
}

bool Native::System::Mode::Maintenance::ConfigMaintenance::OnReload::ResetReason::has_data() const
{
    return maintenance.is_set;
}

bool Native::System::Mode::Maintenance::ConfigMaintenance::OnReload::ResetReason::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(maintenance.yfilter);
}

std::string Native::System::Mode::Maintenance::ConfigMaintenance::OnReload::ResetReason::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reset-reason";

    return path_buffer.str();

}

const EntityPath Native::System::Mode::Maintenance::ConfigMaintenance::OnReload::ResetReason::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/system/Cisco-IOS-XE-mmode:mode/maintenance/config-maintenance/on-reload/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (maintenance.is_set || is_set(maintenance.yfilter)) leaf_name_data.push_back(maintenance.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::System::Mode::Maintenance::ConfigMaintenance::OnReload::ResetReason::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::System::Mode::Maintenance::ConfigMaintenance::OnReload::ResetReason::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::System::Mode::Maintenance::ConfigMaintenance::OnReload::ResetReason::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "maintenance")
    {
        maintenance = value;
        maintenance.value_namespace = name_space;
        maintenance.value_namespace_prefix = name_space_prefix;
    }
}

void Native::System::Mode::Maintenance::ConfigMaintenance::OnReload::ResetReason::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "maintenance")
    {
        maintenance.yfilter = yfilter;
    }
}

bool Native::System::Mode::Maintenance::ConfigMaintenance::OnReload::ResetReason::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "maintenance")
        return true;
    return false;
}

Native::System::Debug::Debug()
    :
    shell(std::make_shared<Native::System::Debug::Shell>())
{
    shell->parent = this;

    yang_name = "debug"; yang_parent_name = "system";
}

Native::System::Debug::~Debug()
{
}

bool Native::System::Debug::has_data() const
{
    return (shell !=  nullptr && shell->has_data());
}

bool Native::System::Debug::has_operation() const
{
    return is_set(yfilter)
	|| (shell !=  nullptr && shell->has_operation());
}

std::string Native::System::Debug::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-switch:debug";

    return path_buffer.str();

}

const EntityPath Native::System::Debug::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/system/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::System::Debug::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "shell")
    {
        if(shell == nullptr)
        {
            shell = std::make_shared<Native::System::Debug::Shell>();
        }
        return shell;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::System::Debug::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(shell != nullptr)
    {
        children["shell"] = shell;
    }

    return children;
}

void Native::System::Debug::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::System::Debug::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::System::Debug::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "shell")
        return true;
    return false;
}

Native::System::Debug::Shell::Shell()
    :
    switch_(std::make_shared<Native::System::Debug::Shell::Switch_>())
{
    switch_->parent = this;

    yang_name = "shell"; yang_parent_name = "debug";
}

Native::System::Debug::Shell::~Shell()
{
}

bool Native::System::Debug::Shell::has_data() const
{
    return (switch_ !=  nullptr && switch_->has_data());
}

bool Native::System::Debug::Shell::has_operation() const
{
    return is_set(yfilter)
	|| (switch_ !=  nullptr && switch_->has_operation());
}

std::string Native::System::Debug::Shell::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "shell";

    return path_buffer.str();

}

const EntityPath Native::System::Debug::Shell::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/system/Cisco-IOS-XE-switch:debug/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::System::Debug::Shell::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "switch")
    {
        if(switch_ == nullptr)
        {
            switch_ = std::make_shared<Native::System::Debug::Shell::Switch_>();
        }
        return switch_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::System::Debug::Shell::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(switch_ != nullptr)
    {
        children["switch"] = switch_;
    }

    return children;
}

void Native::System::Debug::Shell::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::System::Debug::Shell::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::System::Debug::Shell::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "switch")
        return true;
    return false;
}

Native::System::Debug::Shell::Switch_::Switch_()
    :
    all{YType::empty, "all"},
    switch_number{YType::uint8, "switch-number"}
{
    yang_name = "switch"; yang_parent_name = "shell";
}

Native::System::Debug::Shell::Switch_::~Switch_()
{
}

bool Native::System::Debug::Shell::Switch_::has_data() const
{
    return all.is_set
	|| switch_number.is_set;
}

bool Native::System::Debug::Shell::Switch_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(all.yfilter)
	|| ydk::is_set(switch_number.yfilter);
}

std::string Native::System::Debug::Shell::Switch_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "switch";

    return path_buffer.str();

}

const EntityPath Native::System::Debug::Shell::Switch_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/system/Cisco-IOS-XE-switch:debug/shell/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all.is_set || is_set(all.yfilter)) leaf_name_data.push_back(all.get_name_leafdata());
    if (switch_number.is_set || is_set(switch_number.yfilter)) leaf_name_data.push_back(switch_number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::System::Debug::Shell::Switch_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::System::Debug::Shell::Switch_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::System::Debug::Shell::Switch_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "all")
    {
        all = value;
        all.value_namespace = name_space;
        all.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "switch-number")
    {
        switch_number = value;
        switch_number.value_namespace = name_space;
        switch_number.value_namespace_prefix = name_space_prefix;
    }
}

void Native::System::Debug::Shell::Switch_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "all")
    {
        all.yfilter = yfilter;
    }
    if(value_path == "switch-number")
    {
        switch_number.yfilter = yfilter;
    }
}

bool Native::System::Debug::Shell::Switch_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all" || name == "switch-number")
        return true;
    return false;
}

Native::System::Disable::Disable()
    :
    password(std::make_shared<Native::System::Disable::Password>())
{
    password->parent = this;

    yang_name = "disable"; yang_parent_name = "system";
}

Native::System::Disable::~Disable()
{
}

bool Native::System::Disable::has_data() const
{
    return (password !=  nullptr && password->has_data());
}

bool Native::System::Disable::has_operation() const
{
    return is_set(yfilter)
	|| (password !=  nullptr && password->has_operation());
}

std::string Native::System::Disable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-switch:disable";

    return path_buffer.str();

}

const EntityPath Native::System::Disable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/system/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::System::Disable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "password")
    {
        if(password == nullptr)
        {
            password = std::make_shared<Native::System::Disable::Password>();
        }
        return password;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::System::Disable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(password != nullptr)
    {
        children["password"] = password;
    }

    return children;
}

void Native::System::Disable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::System::Disable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::System::Disable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "password")
        return true;
    return false;
}

Native::System::Disable::Password::Password()
    :
    recovery(std::make_shared<Native::System::Disable::Password::Recovery>())
{
    recovery->parent = this;

    yang_name = "password"; yang_parent_name = "disable";
}

Native::System::Disable::Password::~Password()
{
}

bool Native::System::Disable::Password::has_data() const
{
    return (recovery !=  nullptr && recovery->has_data());
}

bool Native::System::Disable::Password::has_operation() const
{
    return is_set(yfilter)
	|| (recovery !=  nullptr && recovery->has_operation());
}

std::string Native::System::Disable::Password::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "password";

    return path_buffer.str();

}

const EntityPath Native::System::Disable::Password::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/system/Cisco-IOS-XE-switch:disable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::System::Disable::Password::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "recovery")
    {
        if(recovery == nullptr)
        {
            recovery = std::make_shared<Native::System::Disable::Password::Recovery>();
        }
        return recovery;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::System::Disable::Password::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(recovery != nullptr)
    {
        children["recovery"] = recovery;
    }

    return children;
}

void Native::System::Disable::Password::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::System::Disable::Password::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::System::Disable::Password::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "recovery")
        return true;
    return false;
}

Native::System::Disable::Password::Recovery::Recovery()
    :
    switch_(std::make_shared<Native::System::Disable::Password::Recovery::Switch_>())
{
    switch_->parent = this;

    yang_name = "recovery"; yang_parent_name = "password";
}

Native::System::Disable::Password::Recovery::~Recovery()
{
}

bool Native::System::Disable::Password::Recovery::has_data() const
{
    return (switch_ !=  nullptr && switch_->has_data());
}

bool Native::System::Disable::Password::Recovery::has_operation() const
{
    return is_set(yfilter)
	|| (switch_ !=  nullptr && switch_->has_operation());
}

std::string Native::System::Disable::Password::Recovery::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "recovery";

    return path_buffer.str();

}

const EntityPath Native::System::Disable::Password::Recovery::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/system/Cisco-IOS-XE-switch:disable/password/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::System::Disable::Password::Recovery::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "switch")
    {
        if(switch_ == nullptr)
        {
            switch_ = std::make_shared<Native::System::Disable::Password::Recovery::Switch_>();
        }
        return switch_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::System::Disable::Password::Recovery::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(switch_ != nullptr)
    {
        children["switch"] = switch_;
    }

    return children;
}

void Native::System::Disable::Password::Recovery::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::System::Disable::Password::Recovery::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::System::Disable::Password::Recovery::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "switch")
        return true;
    return false;
}

Native::System::Disable::Password::Recovery::Switch_::Switch_()
    :
    all{YType::empty, "all"},
    number{YType::uint8, "number"}
{
    yang_name = "switch"; yang_parent_name = "recovery";
}

Native::System::Disable::Password::Recovery::Switch_::~Switch_()
{
}

bool Native::System::Disable::Password::Recovery::Switch_::has_data() const
{
    return all.is_set
	|| number.is_set;
}

bool Native::System::Disable::Password::Recovery::Switch_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(all.yfilter)
	|| ydk::is_set(number.yfilter);
}

std::string Native::System::Disable::Password::Recovery::Switch_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "switch";

    return path_buffer.str();

}

const EntityPath Native::System::Disable::Password::Recovery::Switch_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/system/Cisco-IOS-XE-switch:disable/password/recovery/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all.is_set || is_set(all.yfilter)) leaf_name_data.push_back(all.get_name_leafdata());
    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::System::Disable::Password::Recovery::Switch_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::System::Disable::Password::Recovery::Switch_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::System::Disable::Password::Recovery::Switch_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "all")
    {
        all = value;
        all.value_namespace = name_space;
        all.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
}

void Native::System::Disable::Password::Recovery::Switch_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "all")
    {
        all.yfilter = yfilter;
    }
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
}

bool Native::System::Disable::Password::Recovery::Switch_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all" || name == "number")
        return true;
    return false;
}

Native::System::Environment::Environment()
    :
    fan_fail_action(std::make_shared<Native::System::Environment::FanFailAction>())
	,temperature(std::make_shared<Native::System::Environment::Temperature>())
{
    fan_fail_action->parent = this;

    temperature->parent = this;

    yang_name = "environment"; yang_parent_name = "system";
}

Native::System::Environment::~Environment()
{
}

bool Native::System::Environment::has_data() const
{
    return (fan_fail_action !=  nullptr && fan_fail_action->has_data())
	|| (temperature !=  nullptr && temperature->has_data());
}

bool Native::System::Environment::has_operation() const
{
    return is_set(yfilter)
	|| (fan_fail_action !=  nullptr && fan_fail_action->has_operation())
	|| (temperature !=  nullptr && temperature->has_operation());
}

std::string Native::System::Environment::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-switch:environment";

    return path_buffer.str();

}

const EntityPath Native::System::Environment::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/system/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::System::Environment::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fan-fail-action")
    {
        if(fan_fail_action == nullptr)
        {
            fan_fail_action = std::make_shared<Native::System::Environment::FanFailAction>();
        }
        return fan_fail_action;
    }

    if(child_yang_name == "temperature")
    {
        if(temperature == nullptr)
        {
            temperature = std::make_shared<Native::System::Environment::Temperature>();
        }
        return temperature;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::System::Environment::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(fan_fail_action != nullptr)
    {
        children["fan-fail-action"] = fan_fail_action;
    }

    if(temperature != nullptr)
    {
        children["temperature"] = temperature;
    }

    return children;
}

void Native::System::Environment::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::System::Environment::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::System::Environment::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fan-fail-action" || name == "temperature")
        return true;
    return false;
}

Native::System::Environment::FanFailAction::FanFailAction()
    :
    shut{YType::empty, "shut"}
{
    yang_name = "fan-fail-action"; yang_parent_name = "environment";
}

Native::System::Environment::FanFailAction::~FanFailAction()
{
}

bool Native::System::Environment::FanFailAction::has_data() const
{
    return shut.is_set;
}

bool Native::System::Environment::FanFailAction::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(shut.yfilter);
}

std::string Native::System::Environment::FanFailAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fan-fail-action";

    return path_buffer.str();

}

const EntityPath Native::System::Environment::FanFailAction::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/system/Cisco-IOS-XE-switch:environment/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (shut.is_set || is_set(shut.yfilter)) leaf_name_data.push_back(shut.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::System::Environment::FanFailAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::System::Environment::FanFailAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::System::Environment::FanFailAction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "shut")
    {
        shut = value;
        shut.value_namespace = name_space;
        shut.value_namespace_prefix = name_space_prefix;
    }
}

void Native::System::Environment::FanFailAction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "shut")
    {
        shut.yfilter = yfilter;
    }
}

bool Native::System::Environment::FanFailAction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "shut")
        return true;
    return false;
}

Native::System::Environment::Temperature::Temperature()
    :
    threshold(std::make_shared<Native::System::Environment::Temperature::Threshold>())
{
    threshold->parent = this;

    yang_name = "temperature"; yang_parent_name = "environment";
}

Native::System::Environment::Temperature::~Temperature()
{
}

bool Native::System::Environment::Temperature::has_data() const
{
    return (threshold !=  nullptr && threshold->has_data());
}

bool Native::System::Environment::Temperature::has_operation() const
{
    return is_set(yfilter)
	|| (threshold !=  nullptr && threshold->has_operation());
}

std::string Native::System::Environment::Temperature::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "temperature";

    return path_buffer.str();

}

const EntityPath Native::System::Environment::Temperature::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/system/Cisco-IOS-XE-switch:environment/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::System::Environment::Temperature::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "threshold")
    {
        if(threshold == nullptr)
        {
            threshold = std::make_shared<Native::System::Environment::Temperature::Threshold>();
        }
        return threshold;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::System::Environment::Temperature::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(threshold != nullptr)
    {
        children["threshold"] = threshold;
    }

    return children;
}

void Native::System::Environment::Temperature::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::System::Environment::Temperature::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::System::Environment::Temperature::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold")
        return true;
    return false;
}

Native::System::Environment::Temperature::Threshold::Threshold()
    :
    yellow(std::make_shared<Native::System::Environment::Temperature::Threshold::Yellow>())
{
    yellow->parent = this;

    yang_name = "threshold"; yang_parent_name = "temperature";
}

Native::System::Environment::Temperature::Threshold::~Threshold()
{
}

bool Native::System::Environment::Temperature::Threshold::has_data() const
{
    return (yellow !=  nullptr && yellow->has_data());
}

bool Native::System::Environment::Temperature::Threshold::has_operation() const
{
    return is_set(yfilter)
	|| (yellow !=  nullptr && yellow->has_operation());
}

std::string Native::System::Environment::Temperature::Threshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "threshold";

    return path_buffer.str();

}

const EntityPath Native::System::Environment::Temperature::Threshold::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/system/Cisco-IOS-XE-switch:environment/temperature/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::System::Environment::Temperature::Threshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "yellow")
    {
        if(yellow == nullptr)
        {
            yellow = std::make_shared<Native::System::Environment::Temperature::Threshold::Yellow>();
        }
        return yellow;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::System::Environment::Temperature::Threshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(yellow != nullptr)
    {
        children["yellow"] = yellow;
    }

    return children;
}

void Native::System::Environment::Temperature::Threshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::System::Environment::Temperature::Threshold::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::System::Environment::Temperature::Threshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "yellow")
        return true;
    return false;
}

Native::System::Environment::Temperature::Threshold::Yellow::Yellow()
    :
    delta_value{YType::uint8, "delta-value"},
    detail{YType::empty, "detail"}
{
    yang_name = "yellow"; yang_parent_name = "threshold";
}

Native::System::Environment::Temperature::Threshold::Yellow::~Yellow()
{
}

bool Native::System::Environment::Temperature::Threshold::Yellow::has_data() const
{
    return delta_value.is_set
	|| detail.is_set;
}

bool Native::System::Environment::Temperature::Threshold::Yellow::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(delta_value.yfilter)
	|| ydk::is_set(detail.yfilter);
}

std::string Native::System::Environment::Temperature::Threshold::Yellow::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "yellow";

    return path_buffer.str();

}

const EntityPath Native::System::Environment::Temperature::Threshold::Yellow::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/system/Cisco-IOS-XE-switch:environment/temperature/threshold/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (delta_value.is_set || is_set(delta_value.yfilter)) leaf_name_data.push_back(delta_value.get_name_leafdata());
    if (detail.is_set || is_set(detail.yfilter)) leaf_name_data.push_back(detail.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::System::Environment::Temperature::Threshold::Yellow::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::System::Environment::Temperature::Threshold::Yellow::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::System::Environment::Temperature::Threshold::Yellow::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "delta-value")
    {
        delta_value = value;
        delta_value.value_namespace = name_space;
        delta_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "detail")
    {
        detail = value;
        detail.value_namespace = name_space;
        detail.value_namespace_prefix = name_space_prefix;
    }
}

void Native::System::Environment::Temperature::Threshold::Yellow::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "delta-value")
    {
        delta_value.yfilter = yfilter;
    }
    if(value_path == "detail")
    {
        detail.yfilter = yfilter;
    }
}

bool Native::System::Environment::Temperature::Threshold::Yellow::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "delta-value" || name == "detail")
        return true;
    return false;
}

Native::System::Fnf::Fnf()
    :
    bytes_count(std::make_shared<Native::System::Fnf::BytesCount>())
{
    bytes_count->parent = this;

    yang_name = "fnf"; yang_parent_name = "system";
}

Native::System::Fnf::~Fnf()
{
}

bool Native::System::Fnf::has_data() const
{
    return (bytes_count !=  nullptr && bytes_count->has_data());
}

bool Native::System::Fnf::has_operation() const
{
    return is_set(yfilter)
	|| (bytes_count !=  nullptr && bytes_count->has_operation());
}

std::string Native::System::Fnf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-switch:fnf";

    return path_buffer.str();

}

const EntityPath Native::System::Fnf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/system/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::System::Fnf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bytes-count")
    {
        if(bytes_count == nullptr)
        {
            bytes_count = std::make_shared<Native::System::Fnf::BytesCount>();
        }
        return bytes_count;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::System::Fnf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bytes_count != nullptr)
    {
        children["bytes-count"] = bytes_count;
    }

    return children;
}

void Native::System::Fnf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::System::Fnf::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::System::Fnf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bytes-count")
        return true;
    return false;
}

Native::System::Fnf::BytesCount::BytesCount()
    :
    layer2{YType::empty, "layer2"}
{
    yang_name = "bytes-count"; yang_parent_name = "fnf";
}

Native::System::Fnf::BytesCount::~BytesCount()
{
}

bool Native::System::Fnf::BytesCount::has_data() const
{
    return layer2.is_set;
}

bool Native::System::Fnf::BytesCount::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(layer2.yfilter);
}

std::string Native::System::Fnf::BytesCount::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bytes-count";

    return path_buffer.str();

}

const EntityPath Native::System::Fnf::BytesCount::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/system/Cisco-IOS-XE-switch:fnf/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (layer2.is_set || is_set(layer2.yfilter)) leaf_name_data.push_back(layer2.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::System::Fnf::BytesCount::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::System::Fnf::BytesCount::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::System::Fnf::BytesCount::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "layer2")
    {
        layer2 = value;
        layer2.value_namespace = name_space;
        layer2.value_namespace_prefix = name_space_prefix;
    }
}

void Native::System::Fnf::BytesCount::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "layer2")
    {
        layer2.yfilter = yfilter;
    }
}

bool Native::System::Fnf::BytesCount::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "layer2")
        return true;
    return false;
}

Native::System::Ignore::Ignore()
    :
    startupconfig(std::make_shared<Native::System::Ignore::Startupconfig>())
{
    startupconfig->parent = this;

    yang_name = "ignore"; yang_parent_name = "system";
}

Native::System::Ignore::~Ignore()
{
}

bool Native::System::Ignore::has_data() const
{
    return (startupconfig !=  nullptr && startupconfig->has_data());
}

bool Native::System::Ignore::has_operation() const
{
    return is_set(yfilter)
	|| (startupconfig !=  nullptr && startupconfig->has_operation());
}

std::string Native::System::Ignore::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-switch:ignore";

    return path_buffer.str();

}

const EntityPath Native::System::Ignore::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/system/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::System::Ignore::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "startupconfig")
    {
        if(startupconfig == nullptr)
        {
            startupconfig = std::make_shared<Native::System::Ignore::Startupconfig>();
        }
        return startupconfig;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::System::Ignore::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(startupconfig != nullptr)
    {
        children["startupconfig"] = startupconfig;
    }

    return children;
}

void Native::System::Ignore::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::System::Ignore::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::System::Ignore::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "startupconfig")
        return true;
    return false;
}

Native::System::Ignore::Startupconfig::Startupconfig()
    :
    switch_(std::make_shared<Native::System::Ignore::Startupconfig::Switch_>())
{
    switch_->parent = this;

    yang_name = "startupconfig"; yang_parent_name = "ignore";
}

Native::System::Ignore::Startupconfig::~Startupconfig()
{
}

bool Native::System::Ignore::Startupconfig::has_data() const
{
    return (switch_ !=  nullptr && switch_->has_data());
}

bool Native::System::Ignore::Startupconfig::has_operation() const
{
    return is_set(yfilter)
	|| (switch_ !=  nullptr && switch_->has_operation());
}

std::string Native::System::Ignore::Startupconfig::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "startupconfig";

    return path_buffer.str();

}

const EntityPath Native::System::Ignore::Startupconfig::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/system/Cisco-IOS-XE-switch:ignore/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::System::Ignore::Startupconfig::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "switch")
    {
        if(switch_ == nullptr)
        {
            switch_ = std::make_shared<Native::System::Ignore::Startupconfig::Switch_>();
        }
        return switch_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::System::Ignore::Startupconfig::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(switch_ != nullptr)
    {
        children["switch"] = switch_;
    }

    return children;
}

void Native::System::Ignore::Startupconfig::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::System::Ignore::Startupconfig::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::System::Ignore::Startupconfig::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "switch")
        return true;
    return false;
}

Native::System::Ignore::Startupconfig::Switch_::Switch_()
    :
    all{YType::empty, "all"},
    number{YType::uint8, "number"}
{
    yang_name = "switch"; yang_parent_name = "startupconfig";
}

Native::System::Ignore::Startupconfig::Switch_::~Switch_()
{
}

bool Native::System::Ignore::Startupconfig::Switch_::has_data() const
{
    return all.is_set
	|| number.is_set;
}

bool Native::System::Ignore::Startupconfig::Switch_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(all.yfilter)
	|| ydk::is_set(number.yfilter);
}

std::string Native::System::Ignore::Startupconfig::Switch_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "switch";

    return path_buffer.str();

}

const EntityPath Native::System::Ignore::Startupconfig::Switch_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/system/Cisco-IOS-XE-switch:ignore/startupconfig/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all.is_set || is_set(all.yfilter)) leaf_name_data.push_back(all.get_name_leafdata());
    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::System::Ignore::Startupconfig::Switch_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::System::Ignore::Startupconfig::Switch_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::System::Ignore::Startupconfig::Switch_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "all")
    {
        all = value;
        all.value_namespace = name_space;
        all.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
}

void Native::System::Ignore::Startupconfig::Switch_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "all")
    {
        all.yfilter = yfilter;
    }
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
}

bool Native::System::Ignore::Startupconfig::Switch_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all" || name == "number")
        return true;
    return false;
}

Native::System::ModeButton::ModeButton()
    :
    reset{YType::empty, "reset"}
{
    yang_name = "mode-button"; yang_parent_name = "system";
}

Native::System::ModeButton::~ModeButton()
{
}

bool Native::System::ModeButton::has_data() const
{
    return reset.is_set;
}

bool Native::System::ModeButton::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reset.yfilter);
}

std::string Native::System::ModeButton::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-switch:mode-button";

    return path_buffer.str();

}

const EntityPath Native::System::ModeButton::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/system/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reset.is_set || is_set(reset.yfilter)) leaf_name_data.push_back(reset.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::System::ModeButton::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::System::ModeButton::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::System::ModeButton::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reset")
    {
        reset = value;
        reset.value_namespace = name_space;
        reset.value_namespace_prefix = name_space_prefix;
    }
}

void Native::System::ModeButton::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reset")
    {
        reset.yfilter = yfilter;
    }
}

bool Native::System::ModeButton::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reset")
        return true;
    return false;
}

Native::System::Mtu::Mtu()
    :
    jumbo{YType::uint16, "jumbo"},
    routing{YType::uint16, "routing"},
    size{YType::uint16, "size"}
{
    yang_name = "mtu"; yang_parent_name = "system";
}

Native::System::Mtu::~Mtu()
{
}

bool Native::System::Mtu::has_data() const
{
    return jumbo.is_set
	|| routing.is_set
	|| size.is_set;
}

bool Native::System::Mtu::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(jumbo.yfilter)
	|| ydk::is_set(routing.yfilter)
	|| ydk::is_set(size.yfilter);
}

std::string Native::System::Mtu::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-switch:mtu";

    return path_buffer.str();

}

const EntityPath Native::System::Mtu::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/system/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (jumbo.is_set || is_set(jumbo.yfilter)) leaf_name_data.push_back(jumbo.get_name_leafdata());
    if (routing.is_set || is_set(routing.yfilter)) leaf_name_data.push_back(routing.get_name_leafdata());
    if (size.is_set || is_set(size.yfilter)) leaf_name_data.push_back(size.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::System::Mtu::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::System::Mtu::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::System::Mtu::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "jumbo")
    {
        jumbo = value;
        jumbo.value_namespace = name_space;
        jumbo.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "routing")
    {
        routing = value;
        routing.value_namespace = name_space;
        routing.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "size")
    {
        size = value;
        size.value_namespace = name_space;
        size.value_namespace_prefix = name_space_prefix;
    }
}

void Native::System::Mtu::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "jumbo")
    {
        jumbo.yfilter = yfilter;
    }
    if(value_path == "routing")
    {
        routing.yfilter = yfilter;
    }
    if(value_path == "size")
    {
        size.yfilter = yfilter;
    }
}

bool Native::System::Mtu::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "jumbo" || name == "routing" || name == "size")
        return true;
    return false;
}

Native::Errdisable::Errdisable()
    :
    detect(std::make_shared<Native::Errdisable::Detect>())
	,flap_setting(std::make_shared<Native::Errdisable::FlapSetting>())
	,recovery(std::make_shared<Native::Errdisable::Recovery>())
{
    detect->parent = this;

    flap_setting->parent = this;

    recovery->parent = this;

    yang_name = "errdisable"; yang_parent_name = "native";
}

Native::Errdisable::~Errdisable()
{
}

bool Native::Errdisable::has_data() const
{
    return (detect !=  nullptr && detect->has_data())
	|| (flap_setting !=  nullptr && flap_setting->has_data())
	|| (recovery !=  nullptr && recovery->has_data());
}

bool Native::Errdisable::has_operation() const
{
    return is_set(yfilter)
	|| (detect !=  nullptr && detect->has_operation())
	|| (flap_setting !=  nullptr && flap_setting->has_operation())
	|| (recovery !=  nullptr && recovery->has_operation());
}

std::string Native::Errdisable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "errdisable";

    return path_buffer.str();

}

const EntityPath Native::Errdisable::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Native::Errdisable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "detect")
    {
        if(detect == nullptr)
        {
            detect = std::make_shared<Native::Errdisable::Detect>();
        }
        return detect;
    }

    if(child_yang_name == "flap-setting")
    {
        if(flap_setting == nullptr)
        {
            flap_setting = std::make_shared<Native::Errdisable::FlapSetting>();
        }
        return flap_setting;
    }

    if(child_yang_name == "recovery")
    {
        if(recovery == nullptr)
        {
            recovery = std::make_shared<Native::Errdisable::Recovery>();
        }
        return recovery;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Errdisable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(detect != nullptr)
    {
        children["detect"] = detect;
    }

    if(flap_setting != nullptr)
    {
        children["flap-setting"] = flap_setting;
    }

    if(recovery != nullptr)
    {
        children["recovery"] = recovery;
    }

    return children;
}

void Native::Errdisable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Errdisable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Errdisable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "detect" || name == "flap-setting" || name == "recovery")
        return true;
    return false;
}

Native::Errdisable::Detect::Detect()
    :
    cause(std::make_shared<Native::Errdisable::Detect::Cause>())
{
    cause->parent = this;

    yang_name = "detect"; yang_parent_name = "errdisable";
}

Native::Errdisable::Detect::~Detect()
{
}

bool Native::Errdisable::Detect::has_data() const
{
    return (cause !=  nullptr && cause->has_data());
}

bool Native::Errdisable::Detect::has_operation() const
{
    return is_set(yfilter)
	|| (cause !=  nullptr && cause->has_operation());
}

std::string Native::Errdisable::Detect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "detect";

    return path_buffer.str();

}

const EntityPath Native::Errdisable::Detect::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/errdisable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Errdisable::Detect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cause")
    {
        if(cause == nullptr)
        {
            cause = std::make_shared<Native::Errdisable::Detect::Cause>();
        }
        return cause;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Errdisable::Detect::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(cause != nullptr)
    {
        children["cause"] = cause;
    }

    return children;
}

void Native::Errdisable::Detect::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Errdisable::Detect::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Errdisable::Detect::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cause")
        return true;
    return false;
}

Native::Errdisable::Detect::Cause::Cause()
    :
    all{YType::empty, "all"},
    arp_inspection{YType::empty, "arp-inspection"},
    bpduguard{YType::empty, "bpduguard"},
    dhcp_rate_limit{YType::empty, "dhcp-rate-limit"},
    dtp_flap{YType::empty, "dtp-flap"},
    gbic_invalid{YType::empty, "gbic-invalid"},
    inline_power{YType::empty, "inline-power"},
    l2ptguard{YType::empty, "l2ptguard"},
    link_flap{YType::empty, "link-flap"},
    loopback{YType::empty, "loopback"},
    mlacp_minlink{YType::empty, "mlacp-minlink"},
    pagp_flap{YType::empty, "pagp-flap"},
    pppoe_ia_rate_limit{YType::empty, "pppoe-ia-rate-limit"},
    sfp_config_mismatch{YType::empty, "sfp-config-mismatch"},
    small_frame{YType::empty, "small-frame"}
    	,
    security_violation(std::make_shared<Native::Errdisable::Detect::Cause::SecurityViolation>())
{
    security_violation->parent = this;

    yang_name = "cause"; yang_parent_name = "detect";
}

Native::Errdisable::Detect::Cause::~Cause()
{
}

bool Native::Errdisable::Detect::Cause::has_data() const
{
    return all.is_set
	|| arp_inspection.is_set
	|| bpduguard.is_set
	|| dhcp_rate_limit.is_set
	|| dtp_flap.is_set
	|| gbic_invalid.is_set
	|| inline_power.is_set
	|| l2ptguard.is_set
	|| link_flap.is_set
	|| loopback.is_set
	|| mlacp_minlink.is_set
	|| pagp_flap.is_set
	|| pppoe_ia_rate_limit.is_set
	|| sfp_config_mismatch.is_set
	|| small_frame.is_set
	|| (security_violation !=  nullptr && security_violation->has_data());
}

bool Native::Errdisable::Detect::Cause::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(all.yfilter)
	|| ydk::is_set(arp_inspection.yfilter)
	|| ydk::is_set(bpduguard.yfilter)
	|| ydk::is_set(dhcp_rate_limit.yfilter)
	|| ydk::is_set(dtp_flap.yfilter)
	|| ydk::is_set(gbic_invalid.yfilter)
	|| ydk::is_set(inline_power.yfilter)
	|| ydk::is_set(l2ptguard.yfilter)
	|| ydk::is_set(link_flap.yfilter)
	|| ydk::is_set(loopback.yfilter)
	|| ydk::is_set(mlacp_minlink.yfilter)
	|| ydk::is_set(pagp_flap.yfilter)
	|| ydk::is_set(pppoe_ia_rate_limit.yfilter)
	|| ydk::is_set(sfp_config_mismatch.yfilter)
	|| ydk::is_set(small_frame.yfilter)
	|| (security_violation !=  nullptr && security_violation->has_operation());
}

std::string Native::Errdisable::Detect::Cause::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cause";

    return path_buffer.str();

}

const EntityPath Native::Errdisable::Detect::Cause::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/errdisable/detect/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all.is_set || is_set(all.yfilter)) leaf_name_data.push_back(all.get_name_leafdata());
    if (arp_inspection.is_set || is_set(arp_inspection.yfilter)) leaf_name_data.push_back(arp_inspection.get_name_leafdata());
    if (bpduguard.is_set || is_set(bpduguard.yfilter)) leaf_name_data.push_back(bpduguard.get_name_leafdata());
    if (dhcp_rate_limit.is_set || is_set(dhcp_rate_limit.yfilter)) leaf_name_data.push_back(dhcp_rate_limit.get_name_leafdata());
    if (dtp_flap.is_set || is_set(dtp_flap.yfilter)) leaf_name_data.push_back(dtp_flap.get_name_leafdata());
    if (gbic_invalid.is_set || is_set(gbic_invalid.yfilter)) leaf_name_data.push_back(gbic_invalid.get_name_leafdata());
    if (inline_power.is_set || is_set(inline_power.yfilter)) leaf_name_data.push_back(inline_power.get_name_leafdata());
    if (l2ptguard.is_set || is_set(l2ptguard.yfilter)) leaf_name_data.push_back(l2ptguard.get_name_leafdata());
    if (link_flap.is_set || is_set(link_flap.yfilter)) leaf_name_data.push_back(link_flap.get_name_leafdata());
    if (loopback.is_set || is_set(loopback.yfilter)) leaf_name_data.push_back(loopback.get_name_leafdata());
    if (mlacp_minlink.is_set || is_set(mlacp_minlink.yfilter)) leaf_name_data.push_back(mlacp_minlink.get_name_leafdata());
    if (pagp_flap.is_set || is_set(pagp_flap.yfilter)) leaf_name_data.push_back(pagp_flap.get_name_leafdata());
    if (pppoe_ia_rate_limit.is_set || is_set(pppoe_ia_rate_limit.yfilter)) leaf_name_data.push_back(pppoe_ia_rate_limit.get_name_leafdata());
    if (sfp_config_mismatch.is_set || is_set(sfp_config_mismatch.yfilter)) leaf_name_data.push_back(sfp_config_mismatch.get_name_leafdata());
    if (small_frame.is_set || is_set(small_frame.yfilter)) leaf_name_data.push_back(small_frame.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Errdisable::Detect::Cause::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "security-violation")
    {
        if(security_violation == nullptr)
        {
            security_violation = std::make_shared<Native::Errdisable::Detect::Cause::SecurityViolation>();
        }
        return security_violation;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Errdisable::Detect::Cause::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(security_violation != nullptr)
    {
        children["security-violation"] = security_violation;
    }

    return children;
}

void Native::Errdisable::Detect::Cause::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "all")
    {
        all = value;
        all.value_namespace = name_space;
        all.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "arp-inspection")
    {
        arp_inspection = value;
        arp_inspection.value_namespace = name_space;
        arp_inspection.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bpduguard")
    {
        bpduguard = value;
        bpduguard.value_namespace = name_space;
        bpduguard.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dhcp-rate-limit")
    {
        dhcp_rate_limit = value;
        dhcp_rate_limit.value_namespace = name_space;
        dhcp_rate_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dtp-flap")
    {
        dtp_flap = value;
        dtp_flap.value_namespace = name_space;
        dtp_flap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "gbic-invalid")
    {
        gbic_invalid = value;
        gbic_invalid.value_namespace = name_space;
        gbic_invalid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inline-power")
    {
        inline_power = value;
        inline_power.value_namespace = name_space;
        inline_power.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l2ptguard")
    {
        l2ptguard = value;
        l2ptguard.value_namespace = name_space;
        l2ptguard.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-flap")
    {
        link_flap = value;
        link_flap.value_namespace = name_space;
        link_flap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "loopback")
    {
        loopback = value;
        loopback.value_namespace = name_space;
        loopback.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mlacp-minlink")
    {
        mlacp_minlink = value;
        mlacp_minlink.value_namespace = name_space;
        mlacp_minlink.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pagp-flap")
    {
        pagp_flap = value;
        pagp_flap.value_namespace = name_space;
        pagp_flap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pppoe-ia-rate-limit")
    {
        pppoe_ia_rate_limit = value;
        pppoe_ia_rate_limit.value_namespace = name_space;
        pppoe_ia_rate_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sfp-config-mismatch")
    {
        sfp_config_mismatch = value;
        sfp_config_mismatch.value_namespace = name_space;
        sfp_config_mismatch.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "small-frame")
    {
        small_frame = value;
        small_frame.value_namespace = name_space;
        small_frame.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Errdisable::Detect::Cause::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "all")
    {
        all.yfilter = yfilter;
    }
    if(value_path == "arp-inspection")
    {
        arp_inspection.yfilter = yfilter;
    }
    if(value_path == "bpduguard")
    {
        bpduguard.yfilter = yfilter;
    }
    if(value_path == "dhcp-rate-limit")
    {
        dhcp_rate_limit.yfilter = yfilter;
    }
    if(value_path == "dtp-flap")
    {
        dtp_flap.yfilter = yfilter;
    }
    if(value_path == "gbic-invalid")
    {
        gbic_invalid.yfilter = yfilter;
    }
    if(value_path == "inline-power")
    {
        inline_power.yfilter = yfilter;
    }
    if(value_path == "l2ptguard")
    {
        l2ptguard.yfilter = yfilter;
    }
    if(value_path == "link-flap")
    {
        link_flap.yfilter = yfilter;
    }
    if(value_path == "loopback")
    {
        loopback.yfilter = yfilter;
    }
    if(value_path == "mlacp-minlink")
    {
        mlacp_minlink.yfilter = yfilter;
    }
    if(value_path == "pagp-flap")
    {
        pagp_flap.yfilter = yfilter;
    }
    if(value_path == "pppoe-ia-rate-limit")
    {
        pppoe_ia_rate_limit.yfilter = yfilter;
    }
    if(value_path == "sfp-config-mismatch")
    {
        sfp_config_mismatch.yfilter = yfilter;
    }
    if(value_path == "small-frame")
    {
        small_frame.yfilter = yfilter;
    }
}

bool Native::Errdisable::Detect::Cause::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "security-violation" || name == "all" || name == "arp-inspection" || name == "bpduguard" || name == "dhcp-rate-limit" || name == "dtp-flap" || name == "gbic-invalid" || name == "inline-power" || name == "l2ptguard" || name == "link-flap" || name == "loopback" || name == "mlacp-minlink" || name == "pagp-flap" || name == "pppoe-ia-rate-limit" || name == "sfp-config-mismatch" || name == "small-frame")
        return true;
    return false;
}

Native::Errdisable::Detect::Cause::SecurityViolation::SecurityViolation()
    :
    shutdown(std::make_shared<Native::Errdisable::Detect::Cause::SecurityViolation::Shutdown>())
{
    shutdown->parent = this;

    yang_name = "security-violation"; yang_parent_name = "cause";
}

Native::Errdisable::Detect::Cause::SecurityViolation::~SecurityViolation()
{
}

bool Native::Errdisable::Detect::Cause::SecurityViolation::has_data() const
{
    return (shutdown !=  nullptr && shutdown->has_data());
}

bool Native::Errdisable::Detect::Cause::SecurityViolation::has_operation() const
{
    return is_set(yfilter)
	|| (shutdown !=  nullptr && shutdown->has_operation());
}

std::string Native::Errdisable::Detect::Cause::SecurityViolation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "security-violation";

    return path_buffer.str();

}

const EntityPath Native::Errdisable::Detect::Cause::SecurityViolation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/errdisable/detect/cause/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Errdisable::Detect::Cause::SecurityViolation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "shutdown")
    {
        if(shutdown == nullptr)
        {
            shutdown = std::make_shared<Native::Errdisable::Detect::Cause::SecurityViolation::Shutdown>();
        }
        return shutdown;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Errdisable::Detect::Cause::SecurityViolation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(shutdown != nullptr)
    {
        children["shutdown"] = shutdown;
    }

    return children;
}

void Native::Errdisable::Detect::Cause::SecurityViolation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Errdisable::Detect::Cause::SecurityViolation::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Errdisable::Detect::Cause::SecurityViolation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "shutdown")
        return true;
    return false;
}

Native::Errdisable::Detect::Cause::SecurityViolation::Shutdown::Shutdown()
    :
    vlan{YType::empty, "vlan"}
{
    yang_name = "shutdown"; yang_parent_name = "security-violation";
}

Native::Errdisable::Detect::Cause::SecurityViolation::Shutdown::~Shutdown()
{
}

bool Native::Errdisable::Detect::Cause::SecurityViolation::Shutdown::has_data() const
{
    return vlan.is_set;
}

bool Native::Errdisable::Detect::Cause::SecurityViolation::Shutdown::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vlan.yfilter);
}

std::string Native::Errdisable::Detect::Cause::SecurityViolation::Shutdown::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "shutdown";

    return path_buffer.str();

}

const EntityPath Native::Errdisable::Detect::Cause::SecurityViolation::Shutdown::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/errdisable/detect/cause/security-violation/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Errdisable::Detect::Cause::SecurityViolation::Shutdown::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Errdisable::Detect::Cause::SecurityViolation::Shutdown::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Errdisable::Detect::Cause::SecurityViolation::Shutdown::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Errdisable::Detect::Cause::SecurityViolation::Shutdown::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vlan")
    {
        vlan.yfilter = yfilter;
    }
}

bool Native::Errdisable::Detect::Cause::SecurityViolation::Shutdown::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan")
        return true;
    return false;
}

Native::Errdisable::FlapSetting::FlapSetting()
    :
    cause(std::make_shared<Native::Errdisable::FlapSetting::Cause>())
{
    cause->parent = this;

    yang_name = "flap-setting"; yang_parent_name = "errdisable";
}

Native::Errdisable::FlapSetting::~FlapSetting()
{
}

bool Native::Errdisable::FlapSetting::has_data() const
{
    return (cause !=  nullptr && cause->has_data());
}

bool Native::Errdisable::FlapSetting::has_operation() const
{
    return is_set(yfilter)
	|| (cause !=  nullptr && cause->has_operation());
}

std::string Native::Errdisable::FlapSetting::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flap-setting";

    return path_buffer.str();

}

const EntityPath Native::Errdisable::FlapSetting::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/errdisable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Errdisable::FlapSetting::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cause")
    {
        if(cause == nullptr)
        {
            cause = std::make_shared<Native::Errdisable::FlapSetting::Cause>();
        }
        return cause;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Errdisable::FlapSetting::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(cause != nullptr)
    {
        children["cause"] = cause;
    }

    return children;
}

void Native::Errdisable::FlapSetting::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Errdisable::FlapSetting::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Errdisable::FlapSetting::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cause")
        return true;
    return false;
}

Native::Errdisable::FlapSetting::Cause::Cause()
    :
    dtp_flap(std::make_shared<Native::Errdisable::FlapSetting::Cause::DtpFlap>())
	,link_flap(std::make_shared<Native::Errdisable::FlapSetting::Cause::LinkFlap>())
	,pagp_flap(std::make_shared<Native::Errdisable::FlapSetting::Cause::PagpFlap>())
{
    dtp_flap->parent = this;

    link_flap->parent = this;

    pagp_flap->parent = this;

    yang_name = "cause"; yang_parent_name = "flap-setting";
}

Native::Errdisable::FlapSetting::Cause::~Cause()
{
}

bool Native::Errdisable::FlapSetting::Cause::has_data() const
{
    return (dtp_flap !=  nullptr && dtp_flap->has_data())
	|| (link_flap !=  nullptr && link_flap->has_data())
	|| (pagp_flap !=  nullptr && pagp_flap->has_data());
}

bool Native::Errdisable::FlapSetting::Cause::has_operation() const
{
    return is_set(yfilter)
	|| (dtp_flap !=  nullptr && dtp_flap->has_operation())
	|| (link_flap !=  nullptr && link_flap->has_operation())
	|| (pagp_flap !=  nullptr && pagp_flap->has_operation());
}

std::string Native::Errdisable::FlapSetting::Cause::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cause";

    return path_buffer.str();

}

const EntityPath Native::Errdisable::FlapSetting::Cause::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/errdisable/flap-setting/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Errdisable::FlapSetting::Cause::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dtp-flap")
    {
        if(dtp_flap == nullptr)
        {
            dtp_flap = std::make_shared<Native::Errdisable::FlapSetting::Cause::DtpFlap>();
        }
        return dtp_flap;
    }

    if(child_yang_name == "link-flap")
    {
        if(link_flap == nullptr)
        {
            link_flap = std::make_shared<Native::Errdisable::FlapSetting::Cause::LinkFlap>();
        }
        return link_flap;
    }

    if(child_yang_name == "pagp-flap")
    {
        if(pagp_flap == nullptr)
        {
            pagp_flap = std::make_shared<Native::Errdisable::FlapSetting::Cause::PagpFlap>();
        }
        return pagp_flap;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Errdisable::FlapSetting::Cause::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(dtp_flap != nullptr)
    {
        children["dtp-flap"] = dtp_flap;
    }

    if(link_flap != nullptr)
    {
        children["link-flap"] = link_flap;
    }

    if(pagp_flap != nullptr)
    {
        children["pagp-flap"] = pagp_flap;
    }

    return children;
}

void Native::Errdisable::FlapSetting::Cause::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Errdisable::FlapSetting::Cause::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Errdisable::FlapSetting::Cause::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dtp-flap" || name == "link-flap" || name == "pagp-flap")
        return true;
    return false;
}

Native::Errdisable::FlapSetting::Cause::DtpFlap::DtpFlap()
    :
    max_flaps{YType::uint8, "max-flaps"},
    time{YType::uint8, "time"}
{
    yang_name = "dtp-flap"; yang_parent_name = "cause";
}

Native::Errdisable::FlapSetting::Cause::DtpFlap::~DtpFlap()
{
}

bool Native::Errdisable::FlapSetting::Cause::DtpFlap::has_data() const
{
    return max_flaps.is_set
	|| time.is_set;
}

bool Native::Errdisable::FlapSetting::Cause::DtpFlap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_flaps.yfilter)
	|| ydk::is_set(time.yfilter);
}

std::string Native::Errdisable::FlapSetting::Cause::DtpFlap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dtp-flap";

    return path_buffer.str();

}

const EntityPath Native::Errdisable::FlapSetting::Cause::DtpFlap::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/errdisable/flap-setting/cause/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_flaps.is_set || is_set(max_flaps.yfilter)) leaf_name_data.push_back(max_flaps.get_name_leafdata());
    if (time.is_set || is_set(time.yfilter)) leaf_name_data.push_back(time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Errdisable::FlapSetting::Cause::DtpFlap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Errdisable::FlapSetting::Cause::DtpFlap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Errdisable::FlapSetting::Cause::DtpFlap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-flaps")
    {
        max_flaps = value;
        max_flaps.value_namespace = name_space;
        max_flaps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time")
    {
        time = value;
        time.value_namespace = name_space;
        time.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Errdisable::FlapSetting::Cause::DtpFlap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-flaps")
    {
        max_flaps.yfilter = yfilter;
    }
    if(value_path == "time")
    {
        time.yfilter = yfilter;
    }
}

bool Native::Errdisable::FlapSetting::Cause::DtpFlap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-flaps" || name == "time")
        return true;
    return false;
}

Native::Errdisable::FlapSetting::Cause::LinkFlap::LinkFlap()
    :
    max_flaps{YType::uint8, "max-flaps"},
    time{YType::uint8, "time"}
{
    yang_name = "link-flap"; yang_parent_name = "cause";
}

Native::Errdisable::FlapSetting::Cause::LinkFlap::~LinkFlap()
{
}

bool Native::Errdisable::FlapSetting::Cause::LinkFlap::has_data() const
{
    return max_flaps.is_set
	|| time.is_set;
}

bool Native::Errdisable::FlapSetting::Cause::LinkFlap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_flaps.yfilter)
	|| ydk::is_set(time.yfilter);
}

std::string Native::Errdisable::FlapSetting::Cause::LinkFlap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-flap";

    return path_buffer.str();

}

const EntityPath Native::Errdisable::FlapSetting::Cause::LinkFlap::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/errdisable/flap-setting/cause/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_flaps.is_set || is_set(max_flaps.yfilter)) leaf_name_data.push_back(max_flaps.get_name_leafdata());
    if (time.is_set || is_set(time.yfilter)) leaf_name_data.push_back(time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Errdisable::FlapSetting::Cause::LinkFlap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Errdisable::FlapSetting::Cause::LinkFlap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Errdisable::FlapSetting::Cause::LinkFlap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-flaps")
    {
        max_flaps = value;
        max_flaps.value_namespace = name_space;
        max_flaps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time")
    {
        time = value;
        time.value_namespace = name_space;
        time.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Errdisable::FlapSetting::Cause::LinkFlap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-flaps")
    {
        max_flaps.yfilter = yfilter;
    }
    if(value_path == "time")
    {
        time.yfilter = yfilter;
    }
}

bool Native::Errdisable::FlapSetting::Cause::LinkFlap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-flaps" || name == "time")
        return true;
    return false;
}

Native::Errdisable::FlapSetting::Cause::PagpFlap::PagpFlap()
    :
    max_flaps{YType::uint8, "max-flaps"},
    time{YType::uint8, "time"}
{
    yang_name = "pagp-flap"; yang_parent_name = "cause";
}

Native::Errdisable::FlapSetting::Cause::PagpFlap::~PagpFlap()
{
}

bool Native::Errdisable::FlapSetting::Cause::PagpFlap::has_data() const
{
    return max_flaps.is_set
	|| time.is_set;
}

bool Native::Errdisable::FlapSetting::Cause::PagpFlap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_flaps.yfilter)
	|| ydk::is_set(time.yfilter);
}

std::string Native::Errdisable::FlapSetting::Cause::PagpFlap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pagp-flap";

    return path_buffer.str();

}

const EntityPath Native::Errdisable::FlapSetting::Cause::PagpFlap::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/errdisable/flap-setting/cause/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_flaps.is_set || is_set(max_flaps.yfilter)) leaf_name_data.push_back(max_flaps.get_name_leafdata());
    if (time.is_set || is_set(time.yfilter)) leaf_name_data.push_back(time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Errdisable::FlapSetting::Cause::PagpFlap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Errdisable::FlapSetting::Cause::PagpFlap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Errdisable::FlapSetting::Cause::PagpFlap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-flaps")
    {
        max_flaps = value;
        max_flaps.value_namespace = name_space;
        max_flaps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time")
    {
        time = value;
        time.value_namespace = name_space;
        time.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Errdisable::FlapSetting::Cause::PagpFlap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-flaps")
    {
        max_flaps.yfilter = yfilter;
    }
    if(value_path == "time")
    {
        time.yfilter = yfilter;
    }
}

bool Native::Errdisable::FlapSetting::Cause::PagpFlap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-flaps" || name == "time")
        return true;
    return false;
}

Native::Errdisable::Recovery::Recovery()
    :
    interval{YType::uint32, "interval"}
    	,
    cause(std::make_shared<Native::Errdisable::Recovery::Cause>())
{
    cause->parent = this;

    yang_name = "recovery"; yang_parent_name = "errdisable";
}

Native::Errdisable::Recovery::~Recovery()
{
}

bool Native::Errdisable::Recovery::has_data() const
{
    return interval.is_set
	|| (cause !=  nullptr && cause->has_data());
}

bool Native::Errdisable::Recovery::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interval.yfilter)
	|| (cause !=  nullptr && cause->has_operation());
}

std::string Native::Errdisable::Recovery::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "recovery";

    return path_buffer.str();

}

const EntityPath Native::Errdisable::Recovery::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/errdisable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Errdisable::Recovery::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cause")
    {
        if(cause == nullptr)
        {
            cause = std::make_shared<Native::Errdisable::Recovery::Cause>();
        }
        return cause;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Errdisable::Recovery::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(cause != nullptr)
    {
        children["cause"] = cause;
    }

    return children;
}

void Native::Errdisable::Recovery::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Errdisable::Recovery::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
}

bool Native::Errdisable::Recovery::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cause" || name == "interval")
        return true;
    return false;
}

Native::Errdisable::Recovery::Cause::Cause()
    :
    all{YType::empty, "all"},
    arp_inspection{YType::empty, "arp-inspection"},
    bpduguard{YType::empty, "bpduguard"},
    channel_misconfig{YType::empty, "channel-misconfig"},
    dhcp_rate_limit{YType::empty, "dhcp-rate-limit"},
    dtp_flap{YType::empty, "dtp-flap"},
    gbic_invalid{YType::empty, "gbic-invalid"},
    inline_power{YType::empty, "inline-power"},
    l2ptguard{YType::empty, "l2ptguard"},
    link_flap{YType::empty, "link-flap"},
    link_monitor_failure{YType::empty, "link-monitor-failure"},
    loopback{YType::empty, "loopback"},
    mac_limit{YType::empty, "mac-limit"},
    mlacp_minlink{YType::empty, "mlacp-minlink"},
    pagp_flap{YType::empty, "pagp-flap"},
    port_mode_failure{YType::empty, "port-mode-failure"},
    pppoe_ia_rate_limit{YType::empty, "pppoe-ia-rate-limit"},
    psecure_violation{YType::empty, "psecure-violation"},
    psp{YType::empty, "psp"},
    security_violation{YType::empty, "security-violation"},
    sfp_config_mismatch{YType::empty, "sfp-config-mismatch"},
    small_frame{YType::empty, "small-frame"},
    storm_control{YType::empty, "storm-control"},
    udld{YType::empty, "udld"},
    unicast_flood{YType::empty, "unicast-flood"},
    vmps{YType::empty, "vmps"}
    	,
    oam_remote_failure(nullptr) // presence node
{
    yang_name = "cause"; yang_parent_name = "recovery";
}

Native::Errdisable::Recovery::Cause::~Cause()
{
}

bool Native::Errdisable::Recovery::Cause::has_data() const
{
    return all.is_set
	|| arp_inspection.is_set
	|| bpduguard.is_set
	|| channel_misconfig.is_set
	|| dhcp_rate_limit.is_set
	|| dtp_flap.is_set
	|| gbic_invalid.is_set
	|| inline_power.is_set
	|| l2ptguard.is_set
	|| link_flap.is_set
	|| link_monitor_failure.is_set
	|| loopback.is_set
	|| mac_limit.is_set
	|| mlacp_minlink.is_set
	|| pagp_flap.is_set
	|| port_mode_failure.is_set
	|| pppoe_ia_rate_limit.is_set
	|| psecure_violation.is_set
	|| psp.is_set
	|| security_violation.is_set
	|| sfp_config_mismatch.is_set
	|| small_frame.is_set
	|| storm_control.is_set
	|| udld.is_set
	|| unicast_flood.is_set
	|| vmps.is_set
	|| (oam_remote_failure !=  nullptr && oam_remote_failure->has_data());
}

bool Native::Errdisable::Recovery::Cause::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(all.yfilter)
	|| ydk::is_set(arp_inspection.yfilter)
	|| ydk::is_set(bpduguard.yfilter)
	|| ydk::is_set(channel_misconfig.yfilter)
	|| ydk::is_set(dhcp_rate_limit.yfilter)
	|| ydk::is_set(dtp_flap.yfilter)
	|| ydk::is_set(gbic_invalid.yfilter)
	|| ydk::is_set(inline_power.yfilter)
	|| ydk::is_set(l2ptguard.yfilter)
	|| ydk::is_set(link_flap.yfilter)
	|| ydk::is_set(link_monitor_failure.yfilter)
	|| ydk::is_set(loopback.yfilter)
	|| ydk::is_set(mac_limit.yfilter)
	|| ydk::is_set(mlacp_minlink.yfilter)
	|| ydk::is_set(pagp_flap.yfilter)
	|| ydk::is_set(port_mode_failure.yfilter)
	|| ydk::is_set(pppoe_ia_rate_limit.yfilter)
	|| ydk::is_set(psecure_violation.yfilter)
	|| ydk::is_set(psp.yfilter)
	|| ydk::is_set(security_violation.yfilter)
	|| ydk::is_set(sfp_config_mismatch.yfilter)
	|| ydk::is_set(small_frame.yfilter)
	|| ydk::is_set(storm_control.yfilter)
	|| ydk::is_set(udld.yfilter)
	|| ydk::is_set(unicast_flood.yfilter)
	|| ydk::is_set(vmps.yfilter)
	|| (oam_remote_failure !=  nullptr && oam_remote_failure->has_operation());
}

std::string Native::Errdisable::Recovery::Cause::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cause";

    return path_buffer.str();

}

const EntityPath Native::Errdisable::Recovery::Cause::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/errdisable/recovery/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all.is_set || is_set(all.yfilter)) leaf_name_data.push_back(all.get_name_leafdata());
    if (arp_inspection.is_set || is_set(arp_inspection.yfilter)) leaf_name_data.push_back(arp_inspection.get_name_leafdata());
    if (bpduguard.is_set || is_set(bpduguard.yfilter)) leaf_name_data.push_back(bpduguard.get_name_leafdata());
    if (channel_misconfig.is_set || is_set(channel_misconfig.yfilter)) leaf_name_data.push_back(channel_misconfig.get_name_leafdata());
    if (dhcp_rate_limit.is_set || is_set(dhcp_rate_limit.yfilter)) leaf_name_data.push_back(dhcp_rate_limit.get_name_leafdata());
    if (dtp_flap.is_set || is_set(dtp_flap.yfilter)) leaf_name_data.push_back(dtp_flap.get_name_leafdata());
    if (gbic_invalid.is_set || is_set(gbic_invalid.yfilter)) leaf_name_data.push_back(gbic_invalid.get_name_leafdata());
    if (inline_power.is_set || is_set(inline_power.yfilter)) leaf_name_data.push_back(inline_power.get_name_leafdata());
    if (l2ptguard.is_set || is_set(l2ptguard.yfilter)) leaf_name_data.push_back(l2ptguard.get_name_leafdata());
    if (link_flap.is_set || is_set(link_flap.yfilter)) leaf_name_data.push_back(link_flap.get_name_leafdata());
    if (link_monitor_failure.is_set || is_set(link_monitor_failure.yfilter)) leaf_name_data.push_back(link_monitor_failure.get_name_leafdata());
    if (loopback.is_set || is_set(loopback.yfilter)) leaf_name_data.push_back(loopback.get_name_leafdata());
    if (mac_limit.is_set || is_set(mac_limit.yfilter)) leaf_name_data.push_back(mac_limit.get_name_leafdata());
    if (mlacp_minlink.is_set || is_set(mlacp_minlink.yfilter)) leaf_name_data.push_back(mlacp_minlink.get_name_leafdata());
    if (pagp_flap.is_set || is_set(pagp_flap.yfilter)) leaf_name_data.push_back(pagp_flap.get_name_leafdata());
    if (port_mode_failure.is_set || is_set(port_mode_failure.yfilter)) leaf_name_data.push_back(port_mode_failure.get_name_leafdata());
    if (pppoe_ia_rate_limit.is_set || is_set(pppoe_ia_rate_limit.yfilter)) leaf_name_data.push_back(pppoe_ia_rate_limit.get_name_leafdata());
    if (psecure_violation.is_set || is_set(psecure_violation.yfilter)) leaf_name_data.push_back(psecure_violation.get_name_leafdata());
    if (psp.is_set || is_set(psp.yfilter)) leaf_name_data.push_back(psp.get_name_leafdata());
    if (security_violation.is_set || is_set(security_violation.yfilter)) leaf_name_data.push_back(security_violation.get_name_leafdata());
    if (sfp_config_mismatch.is_set || is_set(sfp_config_mismatch.yfilter)) leaf_name_data.push_back(sfp_config_mismatch.get_name_leafdata());
    if (small_frame.is_set || is_set(small_frame.yfilter)) leaf_name_data.push_back(small_frame.get_name_leafdata());
    if (storm_control.is_set || is_set(storm_control.yfilter)) leaf_name_data.push_back(storm_control.get_name_leafdata());
    if (udld.is_set || is_set(udld.yfilter)) leaf_name_data.push_back(udld.get_name_leafdata());
    if (unicast_flood.is_set || is_set(unicast_flood.yfilter)) leaf_name_data.push_back(unicast_flood.get_name_leafdata());
    if (vmps.is_set || is_set(vmps.yfilter)) leaf_name_data.push_back(vmps.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Errdisable::Recovery::Cause::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "oam-remote-failure")
    {
        if(oam_remote_failure == nullptr)
        {
            oam_remote_failure = std::make_shared<Native::Errdisable::Recovery::Cause::OamRemoteFailure>();
        }
        return oam_remote_failure;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Errdisable::Recovery::Cause::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(oam_remote_failure != nullptr)
    {
        children["oam-remote-failure"] = oam_remote_failure;
    }

    return children;
}

void Native::Errdisable::Recovery::Cause::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "all")
    {
        all = value;
        all.value_namespace = name_space;
        all.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "arp-inspection")
    {
        arp_inspection = value;
        arp_inspection.value_namespace = name_space;
        arp_inspection.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bpduguard")
    {
        bpduguard = value;
        bpduguard.value_namespace = name_space;
        bpduguard.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "channel-misconfig")
    {
        channel_misconfig = value;
        channel_misconfig.value_namespace = name_space;
        channel_misconfig.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dhcp-rate-limit")
    {
        dhcp_rate_limit = value;
        dhcp_rate_limit.value_namespace = name_space;
        dhcp_rate_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dtp-flap")
    {
        dtp_flap = value;
        dtp_flap.value_namespace = name_space;
        dtp_flap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "gbic-invalid")
    {
        gbic_invalid = value;
        gbic_invalid.value_namespace = name_space;
        gbic_invalid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inline-power")
    {
        inline_power = value;
        inline_power.value_namespace = name_space;
        inline_power.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l2ptguard")
    {
        l2ptguard = value;
        l2ptguard.value_namespace = name_space;
        l2ptguard.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-flap")
    {
        link_flap = value;
        link_flap.value_namespace = name_space;
        link_flap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-monitor-failure")
    {
        link_monitor_failure = value;
        link_monitor_failure.value_namespace = name_space;
        link_monitor_failure.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "loopback")
    {
        loopback = value;
        loopback.value_namespace = name_space;
        loopback.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-limit")
    {
        mac_limit = value;
        mac_limit.value_namespace = name_space;
        mac_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mlacp-minlink")
    {
        mlacp_minlink = value;
        mlacp_minlink.value_namespace = name_space;
        mlacp_minlink.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pagp-flap")
    {
        pagp_flap = value;
        pagp_flap.value_namespace = name_space;
        pagp_flap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-mode-failure")
    {
        port_mode_failure = value;
        port_mode_failure.value_namespace = name_space;
        port_mode_failure.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pppoe-ia-rate-limit")
    {
        pppoe_ia_rate_limit = value;
        pppoe_ia_rate_limit.value_namespace = name_space;
        pppoe_ia_rate_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "psecure-violation")
    {
        psecure_violation = value;
        psecure_violation.value_namespace = name_space;
        psecure_violation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "psp")
    {
        psp = value;
        psp.value_namespace = name_space;
        psp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "security-violation")
    {
        security_violation = value;
        security_violation.value_namespace = name_space;
        security_violation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sfp-config-mismatch")
    {
        sfp_config_mismatch = value;
        sfp_config_mismatch.value_namespace = name_space;
        sfp_config_mismatch.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "small-frame")
    {
        small_frame = value;
        small_frame.value_namespace = name_space;
        small_frame.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "storm-control")
    {
        storm_control = value;
        storm_control.value_namespace = name_space;
        storm_control.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "udld")
    {
        udld = value;
        udld.value_namespace = name_space;
        udld.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unicast-flood")
    {
        unicast_flood = value;
        unicast_flood.value_namespace = name_space;
        unicast_flood.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vmps")
    {
        vmps = value;
        vmps.value_namespace = name_space;
        vmps.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Errdisable::Recovery::Cause::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "all")
    {
        all.yfilter = yfilter;
    }
    if(value_path == "arp-inspection")
    {
        arp_inspection.yfilter = yfilter;
    }
    if(value_path == "bpduguard")
    {
        bpduguard.yfilter = yfilter;
    }
    if(value_path == "channel-misconfig")
    {
        channel_misconfig.yfilter = yfilter;
    }
    if(value_path == "dhcp-rate-limit")
    {
        dhcp_rate_limit.yfilter = yfilter;
    }
    if(value_path == "dtp-flap")
    {
        dtp_flap.yfilter = yfilter;
    }
    if(value_path == "gbic-invalid")
    {
        gbic_invalid.yfilter = yfilter;
    }
    if(value_path == "inline-power")
    {
        inline_power.yfilter = yfilter;
    }
    if(value_path == "l2ptguard")
    {
        l2ptguard.yfilter = yfilter;
    }
    if(value_path == "link-flap")
    {
        link_flap.yfilter = yfilter;
    }
    if(value_path == "link-monitor-failure")
    {
        link_monitor_failure.yfilter = yfilter;
    }
    if(value_path == "loopback")
    {
        loopback.yfilter = yfilter;
    }
    if(value_path == "mac-limit")
    {
        mac_limit.yfilter = yfilter;
    }
    if(value_path == "mlacp-minlink")
    {
        mlacp_minlink.yfilter = yfilter;
    }
    if(value_path == "pagp-flap")
    {
        pagp_flap.yfilter = yfilter;
    }
    if(value_path == "port-mode-failure")
    {
        port_mode_failure.yfilter = yfilter;
    }
    if(value_path == "pppoe-ia-rate-limit")
    {
        pppoe_ia_rate_limit.yfilter = yfilter;
    }
    if(value_path == "psecure-violation")
    {
        psecure_violation.yfilter = yfilter;
    }
    if(value_path == "psp")
    {
        psp.yfilter = yfilter;
    }
    if(value_path == "security-violation")
    {
        security_violation.yfilter = yfilter;
    }
    if(value_path == "sfp-config-mismatch")
    {
        sfp_config_mismatch.yfilter = yfilter;
    }
    if(value_path == "small-frame")
    {
        small_frame.yfilter = yfilter;
    }
    if(value_path == "storm-control")
    {
        storm_control.yfilter = yfilter;
    }
    if(value_path == "udld")
    {
        udld.yfilter = yfilter;
    }
    if(value_path == "unicast-flood")
    {
        unicast_flood.yfilter = yfilter;
    }
    if(value_path == "vmps")
    {
        vmps.yfilter = yfilter;
    }
}

bool Native::Errdisable::Recovery::Cause::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "oam-remote-failure" || name == "all" || name == "arp-inspection" || name == "bpduguard" || name == "channel-misconfig" || name == "dhcp-rate-limit" || name == "dtp-flap" || name == "gbic-invalid" || name == "inline-power" || name == "l2ptguard" || name == "link-flap" || name == "link-monitor-failure" || name == "loopback" || name == "mac-limit" || name == "mlacp-minlink" || name == "pagp-flap" || name == "port-mode-failure" || name == "pppoe-ia-rate-limit" || name == "psecure-violation" || name == "psp" || name == "security-violation" || name == "sfp-config-mismatch" || name == "small-frame" || name == "storm-control" || name == "udld" || name == "unicast-flood" || name == "vmps")
        return true;
    return false;
}

Native::Errdisable::Recovery::Cause::OamRemoteFailure::OamRemoteFailure()
    :
    critical_event{YType::empty, "critical-event"},
    dying_gasp{YType::empty, "dying-gasp"},
    link_fault{YType::empty, "link-fault"}
{
    yang_name = "oam-remote-failure"; yang_parent_name = "cause";
}

Native::Errdisable::Recovery::Cause::OamRemoteFailure::~OamRemoteFailure()
{
}

bool Native::Errdisable::Recovery::Cause::OamRemoteFailure::has_data() const
{
    return critical_event.is_set
	|| dying_gasp.is_set
	|| link_fault.is_set;
}

bool Native::Errdisable::Recovery::Cause::OamRemoteFailure::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(critical_event.yfilter)
	|| ydk::is_set(dying_gasp.yfilter)
	|| ydk::is_set(link_fault.yfilter);
}

std::string Native::Errdisable::Recovery::Cause::OamRemoteFailure::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oam-remote-failure";

    return path_buffer.str();

}

const EntityPath Native::Errdisable::Recovery::Cause::OamRemoteFailure::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/errdisable/recovery/cause/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (critical_event.is_set || is_set(critical_event.yfilter)) leaf_name_data.push_back(critical_event.get_name_leafdata());
    if (dying_gasp.is_set || is_set(dying_gasp.yfilter)) leaf_name_data.push_back(dying_gasp.get_name_leafdata());
    if (link_fault.is_set || is_set(link_fault.yfilter)) leaf_name_data.push_back(link_fault.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Errdisable::Recovery::Cause::OamRemoteFailure::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Errdisable::Recovery::Cause::OamRemoteFailure::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Errdisable::Recovery::Cause::OamRemoteFailure::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "critical-event")
    {
        critical_event = value;
        critical_event.value_namespace = name_space;
        critical_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dying-gasp")
    {
        dying_gasp = value;
        dying_gasp.value_namespace = name_space;
        dying_gasp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-fault")
    {
        link_fault = value;
        link_fault.value_namespace = name_space;
        link_fault.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Errdisable::Recovery::Cause::OamRemoteFailure::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "critical-event")
    {
        critical_event.yfilter = yfilter;
    }
    if(value_path == "dying-gasp")
    {
        dying_gasp.yfilter = yfilter;
    }
    if(value_path == "link-fault")
    {
        link_fault.yfilter = yfilter;
    }
}

bool Native::Errdisable::Recovery::Cause::OamRemoteFailure::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "critical-event" || name == "dying-gasp" || name == "link-fault")
        return true;
    return false;
}

Native::Identity::Identity()
    :
    profile(std::make_shared<Native::Identity::Profile>())
{
    profile->parent = this;

    yang_name = "identity"; yang_parent_name = "native";
}

Native::Identity::~Identity()
{
}

bool Native::Identity::has_data() const
{
    return (profile !=  nullptr && profile->has_data());
}

bool Native::Identity::has_operation() const
{
    return is_set(yfilter)
	|| (profile !=  nullptr && profile->has_operation());
}

std::string Native::Identity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "identity";

    return path_buffer.str();

}

const EntityPath Native::Identity::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Native::Identity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "profile")
    {
        if(profile == nullptr)
        {
            profile = std::make_shared<Native::Identity::Profile>();
        }
        return profile;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Identity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(profile != nullptr)
    {
        children["profile"] = profile;
    }

    return children;
}

void Native::Identity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Identity::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Identity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "profile")
        return true;
    return false;
}

Native::Identity::Profile::Profile()
    :
    default_{YType::empty, "default"},
    dot1x{YType::empty, "dot1x"}
{
    yang_name = "profile"; yang_parent_name = "identity";
}

Native::Identity::Profile::~Profile()
{
}

bool Native::Identity::Profile::has_data() const
{
    return default_.is_set
	|| dot1x.is_set;
}

bool Native::Identity::Profile::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(default_.yfilter)
	|| ydk::is_set(dot1x.yfilter);
}

std::string Native::Identity::Profile::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "profile";

    return path_buffer.str();

}

const EntityPath Native::Identity::Profile::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/identity/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_.is_set || is_set(default_.yfilter)) leaf_name_data.push_back(default_.get_name_leafdata());
    if (dot1x.is_set || is_set(dot1x.yfilter)) leaf_name_data.push_back(dot1x.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Identity::Profile::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Identity::Profile::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Identity::Profile::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "default")
    {
        default_ = value;
        default_.value_namespace = name_space;
        default_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot1x")
    {
        dot1x = value;
        dot1x.value_namespace = name_space;
        dot1x.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Identity::Profile::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "default")
    {
        default_.yfilter = yfilter;
    }
    if(value_path == "dot1x")
    {
        dot1x.yfilter = yfilter;
    }
}

bool Native::Identity::Profile::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default" || name == "dot1x")
        return true;
    return false;
}

Native::Monitor::Monitor()
    :
    event_trace(std::make_shared<Native::Monitor::EventTrace>())
{
    event_trace->parent = this;

    yang_name = "monitor"; yang_parent_name = "native";
}

Native::Monitor::~Monitor()
{
}

bool Native::Monitor::has_data() const
{
    for (std::size_t index=0; index<session.size(); index++)
    {
        if(session[index]->has_data())
            return true;
    }
    return (event_trace !=  nullptr && event_trace->has_data());
}

bool Native::Monitor::has_operation() const
{
    for (std::size_t index=0; index<session.size(); index++)
    {
        if(session[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (event_trace !=  nullptr && event_trace->has_operation());
}

std::string Native::Monitor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "monitor";

    return path_buffer.str();

}

const EntityPath Native::Monitor::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Native::Monitor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "event-trace")
    {
        if(event_trace == nullptr)
        {
            event_trace = std::make_shared<Native::Monitor::EventTrace>();
        }
        return event_trace;
    }

    if(child_yang_name == "session")
    {
        for(auto const & c : session)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Monitor::Session>();
        c->parent = this;
        session.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Monitor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(event_trace != nullptr)
    {
        children["event-trace"] = event_trace;
    }

    for (auto const & c : session)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Monitor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Monitor::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Monitor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "event-trace" || name == "session")
        return true;
    return false;
}

Native::Monitor::EventTrace::EventTrace()
{
    yang_name = "event-trace"; yang_parent_name = "monitor";
}

Native::Monitor::EventTrace::~EventTrace()
{
}

bool Native::Monitor::EventTrace::has_data() const
{
    return false;
}

bool Native::Monitor::EventTrace::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Monitor::EventTrace::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "event-trace";

    return path_buffer.str();

}

const EntityPath Native::Monitor::EventTrace::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/monitor/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Monitor::EventTrace::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Monitor::EventTrace::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Monitor::EventTrace::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Monitor::EventTrace::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Monitor::EventTrace::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Monitor::Session::Session()
    :
    id{YType::uint8, "id"}
    	,
    destination(std::make_shared<Native::Monitor::Session::Destination>())
	,filter(std::make_shared<Native::Monitor::Session::Filter>())
	,source(std::make_shared<Native::Monitor::Session::Source>())
{
    destination->parent = this;

    filter->parent = this;

    source->parent = this;

    yang_name = "session"; yang_parent_name = "monitor";
}

Native::Monitor::Session::~Session()
{
}

bool Native::Monitor::Session::has_data() const
{
    return id.is_set
	|| (destination !=  nullptr && destination->has_data())
	|| (filter !=  nullptr && filter->has_data())
	|| (source !=  nullptr && source->has_data());
}

bool Native::Monitor::Session::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| (destination !=  nullptr && destination->has_operation())
	|| (filter !=  nullptr && filter->has_operation())
	|| (source !=  nullptr && source->has_operation());
}

std::string Native::Monitor::Session::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session" <<"[id='" <<id <<"']";

    return path_buffer.str();

}

const EntityPath Native::Monitor::Session::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/monitor/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Monitor::Session::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "destination")
    {
        if(destination == nullptr)
        {
            destination = std::make_shared<Native::Monitor::Session::Destination>();
        }
        return destination;
    }

    if(child_yang_name == "filter")
    {
        if(filter == nullptr)
        {
            filter = std::make_shared<Native::Monitor::Session::Filter>();
        }
        return filter;
    }

    if(child_yang_name == "source")
    {
        if(source == nullptr)
        {
            source = std::make_shared<Native::Monitor::Session::Source>();
        }
        return source;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Monitor::Session::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(destination != nullptr)
    {
        children["destination"] = destination;
    }

    if(filter != nullptr)
    {
        children["filter"] = filter;
    }

    if(source != nullptr)
    {
        children["source"] = source;
    }

    return children;
}

void Native::Monitor::Session::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Monitor::Session::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool Native::Monitor::Session::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination" || name == "filter" || name == "source" || name == "id")
        return true;
    return false;
}

Native::Monitor::Session::Destination::Destination()
    :
    remote(std::make_shared<Native::Monitor::Session::Destination::Remote>())
{
    remote->parent = this;

    yang_name = "destination"; yang_parent_name = "session";
}

Native::Monitor::Session::Destination::~Destination()
{
}

bool Native::Monitor::Session::Destination::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return (remote !=  nullptr && remote->has_data());
}

bool Native::Monitor::Session::Destination::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (remote !=  nullptr && remote->has_operation());
}

std::string Native::Monitor::Session::Destination::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination";

    return path_buffer.str();

}

const EntityPath Native::Monitor::Session::Destination::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Destination' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Monitor::Session::Destination::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        for(auto const & c : interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Monitor::Session::Destination::Interface>();
        c->parent = this;
        interface.push_back(c);
        return c;
    }

    if(child_yang_name == "remote")
    {
        if(remote == nullptr)
        {
            remote = std::make_shared<Native::Monitor::Session::Destination::Remote>();
        }
        return remote;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Monitor::Session::Destination::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface)
    {
        children[c->get_segment_path()] = c;
    }

    if(remote != nullptr)
    {
        children["remote"] = remote;
    }

    return children;
}

void Native::Monitor::Session::Destination::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Monitor::Session::Destination::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Monitor::Session::Destination::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface" || name == "remote")
        return true;
    return false;
}

Native::Monitor::Session::Destination::Interface::Interface()
    :
    name{YType::str, "name"},
    encapsulation{YType::enumeration, "encapsulation"},
    ingress{YType::empty, "ingress"},
    ingress_encap{YType::enumeration, "ingress-encap"},
    vlan{YType::uint16, "vlan"}
{
    yang_name = "interface"; yang_parent_name = "destination";
}

Native::Monitor::Session::Destination::Interface::~Interface()
{
}

bool Native::Monitor::Session::Destination::Interface::has_data() const
{
    return name.is_set
	|| encapsulation.is_set
	|| ingress.is_set
	|| ingress_encap.is_set
	|| vlan.is_set;
}

bool Native::Monitor::Session::Destination::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(encapsulation.yfilter)
	|| ydk::is_set(ingress.yfilter)
	|| ydk::is_set(ingress_encap.yfilter)
	|| ydk::is_set(vlan.yfilter);
}

std::string Native::Monitor::Session::Destination::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Monitor::Session::Destination::Interface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Interface' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (encapsulation.is_set || is_set(encapsulation.yfilter)) leaf_name_data.push_back(encapsulation.get_name_leafdata());
    if (ingress.is_set || is_set(ingress.yfilter)) leaf_name_data.push_back(ingress.get_name_leafdata());
    if (ingress_encap.is_set || is_set(ingress_encap.yfilter)) leaf_name_data.push_back(ingress_encap.get_name_leafdata());
    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Monitor::Session::Destination::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Monitor::Session::Destination::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Monitor::Session::Destination::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encapsulation")
    {
        encapsulation = value;
        encapsulation.value_namespace = name_space;
        encapsulation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ingress")
    {
        ingress = value;
        ingress.value_namespace = name_space;
        ingress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ingress-encap")
    {
        ingress_encap = value;
        ingress_encap.value_namespace = name_space;
        ingress_encap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Monitor::Session::Destination::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "encapsulation")
    {
        encapsulation.yfilter = yfilter;
    }
    if(value_path == "ingress")
    {
        ingress.yfilter = yfilter;
    }
    if(value_path == "ingress-encap")
    {
        ingress_encap.yfilter = yfilter;
    }
    if(value_path == "vlan")
    {
        vlan.yfilter = yfilter;
    }
}

bool Native::Monitor::Session::Destination::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "encapsulation" || name == "ingress" || name == "ingress-encap" || name == "vlan")
        return true;
    return false;
}

Native::Monitor::Session::Destination::Remote::Remote()
    :
    vlan{YType::uint16, "vlan"}
{
    yang_name = "remote"; yang_parent_name = "destination";
}

Native::Monitor::Session::Destination::Remote::~Remote()
{
}

bool Native::Monitor::Session::Destination::Remote::has_data() const
{
    return vlan.is_set;
}

bool Native::Monitor::Session::Destination::Remote::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vlan.yfilter);
}

std::string Native::Monitor::Session::Destination::Remote::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote";

    return path_buffer.str();

}

const EntityPath Native::Monitor::Session::Destination::Remote::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Remote' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Monitor::Session::Destination::Remote::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Monitor::Session::Destination::Remote::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Monitor::Session::Destination::Remote::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Monitor::Session::Destination::Remote::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vlan")
    {
        vlan.yfilter = yfilter;
    }
}

bool Native::Monitor::Session::Destination::Remote::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan")
        return true;
    return false;
}

Native::Monitor::Session::Filter::Filter()
    :
    ip(std::make_shared<Native::Monitor::Session::Filter::Ip>())
	,packet_type(std::make_shared<Native::Monitor::Session::Filter::PacketType>())
{
    ip->parent = this;

    packet_type->parent = this;

    yang_name = "filter"; yang_parent_name = "session";
}

Native::Monitor::Session::Filter::~Filter()
{
}

bool Native::Monitor::Session::Filter::has_data() const
{
    return (ip !=  nullptr && ip->has_data())
	|| (packet_type !=  nullptr && packet_type->has_data());
}

bool Native::Monitor::Session::Filter::has_operation() const
{
    return is_set(yfilter)
	|| (ip !=  nullptr && ip->has_operation())
	|| (packet_type !=  nullptr && packet_type->has_operation());
}

std::string Native::Monitor::Session::Filter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "filter";

    return path_buffer.str();

}

const EntityPath Native::Monitor::Session::Filter::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Filter' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Monitor::Session::Filter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Monitor::Session::Filter::Ip>();
        }
        return ip;
    }

    if(child_yang_name == "packet-type")
    {
        if(packet_type == nullptr)
        {
            packet_type = std::make_shared<Native::Monitor::Session::Filter::PacketType>();
        }
        return packet_type;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Monitor::Session::Filter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ip != nullptr)
    {
        children["ip"] = ip;
    }

    if(packet_type != nullptr)
    {
        children["packet-type"] = packet_type;
    }

    return children;
}

void Native::Monitor::Session::Filter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Monitor::Session::Filter::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Monitor::Session::Filter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip" || name == "packet-type")
        return true;
    return false;
}

Native::Monitor::Session::Filter::PacketType::PacketType()
    :
    direction{YType::enumeration, "direction"},
    status{YType::enumeration, "status"}
{
    yang_name = "packet-type"; yang_parent_name = "filter";
}

Native::Monitor::Session::Filter::PacketType::~PacketType()
{
}

bool Native::Monitor::Session::Filter::PacketType::has_data() const
{
    return direction.is_set
	|| status.is_set;
}

bool Native::Monitor::Session::Filter::PacketType::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(direction.yfilter)
	|| ydk::is_set(status.yfilter);
}

std::string Native::Monitor::Session::Filter::PacketType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "packet-type";

    return path_buffer.str();

}

const EntityPath Native::Monitor::Session::Filter::PacketType::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PacketType' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (direction.is_set || is_set(direction.yfilter)) leaf_name_data.push_back(direction.get_name_leafdata());
    if (status.is_set || is_set(status.yfilter)) leaf_name_data.push_back(status.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Monitor::Session::Filter::PacketType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Monitor::Session::Filter::PacketType::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Monitor::Session::Filter::PacketType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "direction")
    {
        direction = value;
        direction.value_namespace = name_space;
        direction.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "status")
    {
        status = value;
        status.value_namespace = name_space;
        status.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Monitor::Session::Filter::PacketType::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "direction")
    {
        direction.yfilter = yfilter;
    }
    if(value_path == "status")
    {
        status.yfilter = yfilter;
    }
}

bool Native::Monitor::Session::Filter::PacketType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "direction" || name == "status")
        return true;
    return false;
}

Native::Monitor::Session::Filter::Ip::Ip()
    :
    access_group(std::make_shared<Native::Monitor::Session::Filter::Ip::AccessGroup>())
{
    access_group->parent = this;

    yang_name = "ip"; yang_parent_name = "filter";
}

Native::Monitor::Session::Filter::Ip::~Ip()
{
}

bool Native::Monitor::Session::Filter::Ip::has_data() const
{
    return (access_group !=  nullptr && access_group->has_data());
}

bool Native::Monitor::Session::Filter::Ip::has_operation() const
{
    return is_set(yfilter)
	|| (access_group !=  nullptr && access_group->has_operation());
}

std::string Native::Monitor::Session::Filter::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";

    return path_buffer.str();

}

const EntityPath Native::Monitor::Session::Filter::Ip::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ip' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Monitor::Session::Filter::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access-group")
    {
        if(access_group == nullptr)
        {
            access_group = std::make_shared<Native::Monitor::Session::Filter::Ip::AccessGroup>();
        }
        return access_group;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Monitor::Session::Filter::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(access_group != nullptr)
    {
        children["access-group"] = access_group;
    }

    return children;
}

void Native::Monitor::Session::Filter::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Monitor::Session::Filter::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Monitor::Session::Filter::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-group")
        return true;
    return false;
}

Native::Monitor::Session::Filter::Ip::AccessGroup::AccessGroup()
    :
    acl_name{YType::str, "acl-name"}
{
    yang_name = "access-group"; yang_parent_name = "ip";
}

Native::Monitor::Session::Filter::Ip::AccessGroup::~AccessGroup()
{
}

bool Native::Monitor::Session::Filter::Ip::AccessGroup::has_data() const
{
    return acl_name.is_set;
}

bool Native::Monitor::Session::Filter::Ip::AccessGroup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(acl_name.yfilter);
}

std::string Native::Monitor::Session::Filter::Ip::AccessGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access-group";

    return path_buffer.str();

}

const EntityPath Native::Monitor::Session::Filter::Ip::AccessGroup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AccessGroup' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acl_name.is_set || is_set(acl_name.yfilter)) leaf_name_data.push_back(acl_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Monitor::Session::Filter::Ip::AccessGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Monitor::Session::Filter::Ip::AccessGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Monitor::Session::Filter::Ip::AccessGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "acl-name")
    {
        acl_name = value;
        acl_name.value_namespace = name_space;
        acl_name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Monitor::Session::Filter::Ip::AccessGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "acl-name")
    {
        acl_name.yfilter = yfilter;
    }
}

bool Native::Monitor::Session::Filter::Ip::AccessGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acl-name")
        return true;
    return false;
}

Native::Monitor::Session::Source::Source()
    :
    remote(std::make_shared<Native::Monitor::Session::Source::Remote>())
	,vlan(std::make_shared<Native::Monitor::Session::Source::Vlan>())
{
    remote->parent = this;

    vlan->parent = this;

    yang_name = "source"; yang_parent_name = "session";
}

Native::Monitor::Session::Source::~Source()
{
}

bool Native::Monitor::Session::Source::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return (remote !=  nullptr && remote->has_data())
	|| (vlan !=  nullptr && vlan->has_data());
}

bool Native::Monitor::Session::Source::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (remote !=  nullptr && remote->has_operation())
	|| (vlan !=  nullptr && vlan->has_operation());
}

std::string Native::Monitor::Session::Source::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source";

    return path_buffer.str();

}

const EntityPath Native::Monitor::Session::Source::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Source' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Monitor::Session::Source::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        for(auto const & c : interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Monitor::Session::Source::Interface>();
        c->parent = this;
        interface.push_back(c);
        return c;
    }

    if(child_yang_name == "remote")
    {
        if(remote == nullptr)
        {
            remote = std::make_shared<Native::Monitor::Session::Source::Remote>();
        }
        return remote;
    }

    if(child_yang_name == "vlan")
    {
        if(vlan == nullptr)
        {
            vlan = std::make_shared<Native::Monitor::Session::Source::Vlan>();
        }
        return vlan;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Monitor::Session::Source::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface)
    {
        children[c->get_segment_path()] = c;
    }

    if(remote != nullptr)
    {
        children["remote"] = remote;
    }

    if(vlan != nullptr)
    {
        children["vlan"] = vlan;
    }

    return children;
}

void Native::Monitor::Session::Source::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Monitor::Session::Source::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Monitor::Session::Source::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface" || name == "remote" || name == "vlan")
        return true;
    return false;
}

Native::Monitor::Session::Source::Interface::Interface()
    :
    name{YType::str, "name"},
    direction{YType::enumeration, "direction"}
{
    yang_name = "interface"; yang_parent_name = "source";
}

Native::Monitor::Session::Source::Interface::~Interface()
{
}

bool Native::Monitor::Session::Source::Interface::has_data() const
{
    return name.is_set
	|| direction.is_set;
}

bool Native::Monitor::Session::Source::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(direction.yfilter);
}

std::string Native::Monitor::Session::Source::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Monitor::Session::Source::Interface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Interface' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (direction.is_set || is_set(direction.yfilter)) leaf_name_data.push_back(direction.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Monitor::Session::Source::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Monitor::Session::Source::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Monitor::Session::Source::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "direction")
    {
        direction = value;
        direction.value_namespace = name_space;
        direction.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Monitor::Session::Source::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "direction")
    {
        direction.yfilter = yfilter;
    }
}

bool Native::Monitor::Session::Source::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "direction")
        return true;
    return false;
}

Native::Monitor::Session::Source::Vlan::Vlan()
    :
    direction{YType::enumeration, "direction"},
    vlan{YType::uint16, "vlan"}
{
    yang_name = "vlan"; yang_parent_name = "source";
}

Native::Monitor::Session::Source::Vlan::~Vlan()
{
}

bool Native::Monitor::Session::Source::Vlan::has_data() const
{
    return direction.is_set
	|| vlan.is_set;
}

bool Native::Monitor::Session::Source::Vlan::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(direction.yfilter)
	|| ydk::is_set(vlan.yfilter);
}

std::string Native::Monitor::Session::Source::Vlan::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan";

    return path_buffer.str();

}

const EntityPath Native::Monitor::Session::Source::Vlan::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Vlan' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (direction.is_set || is_set(direction.yfilter)) leaf_name_data.push_back(direction.get_name_leafdata());
    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Monitor::Session::Source::Vlan::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Monitor::Session::Source::Vlan::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Monitor::Session::Source::Vlan::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "direction")
    {
        direction = value;
        direction.value_namespace = name_space;
        direction.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Monitor::Session::Source::Vlan::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "direction")
    {
        direction.yfilter = yfilter;
    }
    if(value_path == "vlan")
    {
        vlan.yfilter = yfilter;
    }
}

bool Native::Monitor::Session::Source::Vlan::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "direction" || name == "vlan")
        return true;
    return false;
}

Native::Monitor::Session::Source::Remote::Remote()
    :
    vlan{YType::uint16, "vlan"}
{
    yang_name = "remote"; yang_parent_name = "source";
}

Native::Monitor::Session::Source::Remote::~Remote()
{
}

bool Native::Monitor::Session::Source::Remote::has_data() const
{
    return vlan.is_set;
}

bool Native::Monitor::Session::Source::Remote::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vlan.yfilter);
}

std::string Native::Monitor::Session::Source::Remote::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote";

    return path_buffer.str();

}

const EntityPath Native::Monitor::Session::Source::Remote::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Remote' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Monitor::Session::Source::Remote::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Monitor::Session::Source::Remote::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Monitor::Session::Source::Remote::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Monitor::Session::Source::Remote::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vlan")
    {
        vlan.yfilter = yfilter;
    }
}

bool Native::Monitor::Session::Source::Remote::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan")
        return true;
    return false;
}

Native::TftpServer::TftpServer()
    :
    name{YType::str, "name"}
{
    yang_name = "tftp-server"; yang_parent_name = "native";
}

Native::TftpServer::~TftpServer()
{
}

bool Native::TftpServer::has_data() const
{
    return name.is_set;
}

bool Native::TftpServer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::TftpServer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tftp-server" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Native::TftpServer::get_entity_path(Entity* ancestor) const
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

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::TftpServer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::TftpServer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::TftpServer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::TftpServer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::TftpServer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

Native::RadiusServer::RadiusServer()
    :
    deadtime{YType::uint32, "Cisco-IOS-XE-aaa:deadtime"},
    retransmit{YType::uint8, "Cisco-IOS-XE-aaa:retransmit"},
    timeout{YType::uint16, "Cisco-IOS-XE-aaa:timeout"}
    	,
    dead_criteria(std::make_shared<Native::RadiusServer::DeadCriteria>())
	,key(std::make_shared<Native::RadiusServer::Key>())
	,source_ports(std::make_shared<Native::RadiusServer::SourcePorts>())
	,vsa(std::make_shared<Native::RadiusServer::Vsa>())
{
    dead_criteria->parent = this;

    key->parent = this;

    source_ports->parent = this;

    vsa->parent = this;

    yang_name = "radius-server"; yang_parent_name = "native";
}

Native::RadiusServer::~RadiusServer()
{
}

bool Native::RadiusServer::has_data() const
{
    for (std::size_t index=0; index<attribute.size(); index++)
    {
        if(attribute[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<host.size(); index++)
    {
        if(host[index]->has_data())
            return true;
    }
    return deadtime.is_set
	|| retransmit.is_set
	|| timeout.is_set
	|| (dead_criteria !=  nullptr && dead_criteria->has_data())
	|| (key !=  nullptr && key->has_data())
	|| (source_ports !=  nullptr && source_ports->has_data())
	|| (vsa !=  nullptr && vsa->has_data());
}

bool Native::RadiusServer::has_operation() const
{
    for (std::size_t index=0; index<attribute.size(); index++)
    {
        if(attribute[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<host.size(); index++)
    {
        if(host[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(deadtime.yfilter)
	|| ydk::is_set(retransmit.yfilter)
	|| ydk::is_set(timeout.yfilter)
	|| (dead_criteria !=  nullptr && dead_criteria->has_operation())
	|| (key !=  nullptr && key->has_operation())
	|| (source_ports !=  nullptr && source_ports->has_operation())
	|| (vsa !=  nullptr && vsa->has_operation());
}

std::string Native::RadiusServer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "radius-server";

    return path_buffer.str();

}

const EntityPath Native::RadiusServer::get_entity_path(Entity* ancestor) const
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

    if (deadtime.is_set || is_set(deadtime.yfilter)) leaf_name_data.push_back(deadtime.get_name_leafdata());
    if (retransmit.is_set || is_set(retransmit.yfilter)) leaf_name_data.push_back(retransmit.get_name_leafdata());
    if (timeout.is_set || is_set(timeout.yfilter)) leaf_name_data.push_back(timeout.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::RadiusServer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "attribute")
    {
        for(auto const & c : attribute)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::RadiusServer::Attribute>();
        c->parent = this;
        attribute.push_back(c);
        return c;
    }

    if(child_yang_name == "dead-criteria")
    {
        if(dead_criteria == nullptr)
        {
            dead_criteria = std::make_shared<Native::RadiusServer::DeadCriteria>();
        }
        return dead_criteria;
    }

    if(child_yang_name == "host")
    {
        for(auto const & c : host)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::RadiusServer::Host>();
        c->parent = this;
        host.push_back(c);
        return c;
    }

    if(child_yang_name == "key")
    {
        if(key == nullptr)
        {
            key = std::make_shared<Native::RadiusServer::Key>();
        }
        return key;
    }

    if(child_yang_name == "source-ports")
    {
        if(source_ports == nullptr)
        {
            source_ports = std::make_shared<Native::RadiusServer::SourcePorts>();
        }
        return source_ports;
    }

    if(child_yang_name == "vsa")
    {
        if(vsa == nullptr)
        {
            vsa = std::make_shared<Native::RadiusServer::Vsa>();
        }
        return vsa;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RadiusServer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : attribute)
    {
        children[c->get_segment_path()] = c;
    }

    if(dead_criteria != nullptr)
    {
        children["dead-criteria"] = dead_criteria;
    }

    for (auto const & c : host)
    {
        children[c->get_segment_path()] = c;
    }

    if(key != nullptr)
    {
        children["key"] = key;
    }

    if(source_ports != nullptr)
    {
        children["source-ports"] = source_ports;
    }

    if(vsa != nullptr)
    {
        children["vsa"] = vsa;
    }

    return children;
}

void Native::RadiusServer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "deadtime")
    {
        deadtime = value;
        deadtime.value_namespace = name_space;
        deadtime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retransmit")
    {
        retransmit = value;
        retransmit.value_namespace = name_space;
        retransmit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timeout")
    {
        timeout = value;
        timeout.value_namespace = name_space;
        timeout.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RadiusServer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "deadtime")
    {
        deadtime.yfilter = yfilter;
    }
    if(value_path == "retransmit")
    {
        retransmit.yfilter = yfilter;
    }
    if(value_path == "timeout")
    {
        timeout.yfilter = yfilter;
    }
}

bool Native::RadiusServer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attribute" || name == "dead-criteria" || name == "host" || name == "key" || name == "source-ports" || name == "vsa" || name == "deadtime" || name == "retransmit" || name == "timeout")
        return true;
    return false;
}

Native::RadiusServer::Attribute::Attribute()
    :
    number{YType::uint32, "number"},
    send_attribute{YType::enumeration, "send-attribute"}
    	,
    access_request(std::make_shared<Native::RadiusServer::Attribute::AccessRequest>())
	,attri31(std::make_shared<Native::RadiusServer::Attribute::Attri31>())
{
    access_request->parent = this;

    attri31->parent = this;

    yang_name = "attribute"; yang_parent_name = "radius-server";
}

Native::RadiusServer::Attribute::~Attribute()
{
}

bool Native::RadiusServer::Attribute::has_data() const
{
    for (auto const & leaf : send_attribute.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return number.is_set
	|| (access_request !=  nullptr && access_request->has_data())
	|| (attri31 !=  nullptr && attri31->has_data());
}

bool Native::RadiusServer::Attribute::has_operation() const
{
    for (auto const & leaf : send_attribute.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(send_attribute.yfilter)
	|| (access_request !=  nullptr && access_request->has_operation())
	|| (attri31 !=  nullptr && attri31->has_operation());
}

std::string Native::RadiusServer::Attribute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-aaa:attribute" <<"[number='" <<number <<"']";

    return path_buffer.str();

}

const EntityPath Native::RadiusServer::Attribute::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/radius-server/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());

    auto send_attribute_name_datas = send_attribute.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), send_attribute_name_datas.begin(), send_attribute_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::RadiusServer::Attribute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access-request")
    {
        if(access_request == nullptr)
        {
            access_request = std::make_shared<Native::RadiusServer::Attribute::AccessRequest>();
        }
        return access_request;
    }

    if(child_yang_name == "attri31")
    {
        if(attri31 == nullptr)
        {
            attri31 = std::make_shared<Native::RadiusServer::Attribute::Attri31>();
        }
        return attri31;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RadiusServer::Attribute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(access_request != nullptr)
    {
        children["access-request"] = access_request;
    }

    if(attri31 != nullptr)
    {
        children["attri31"] = attri31;
    }

    return children;
}

void Native::RadiusServer::Attribute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "send-attribute")
    {
        send_attribute.append(value);
    }
}

void Native::RadiusServer::Attribute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
    if(value_path == "send-attribute")
    {
        send_attribute.yfilter = yfilter;
    }
}

bool Native::RadiusServer::Attribute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-request" || name == "attri31" || name == "number" || name == "send-attribute")
        return true;
    return false;
}

Native::RadiusServer::Attribute::AccessRequest::AccessRequest()
    :
    include{YType::empty, "include"}
{
    yang_name = "access-request"; yang_parent_name = "attribute";
}

Native::RadiusServer::Attribute::AccessRequest::~AccessRequest()
{
}

bool Native::RadiusServer::Attribute::AccessRequest::has_data() const
{
    return include.is_set;
}

bool Native::RadiusServer::Attribute::AccessRequest::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(include.yfilter);
}

std::string Native::RadiusServer::Attribute::AccessRequest::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access-request";

    return path_buffer.str();

}

const EntityPath Native::RadiusServer::Attribute::AccessRequest::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AccessRequest' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (include.is_set || is_set(include.yfilter)) leaf_name_data.push_back(include.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::RadiusServer::Attribute::AccessRequest::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RadiusServer::Attribute::AccessRequest::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::RadiusServer::Attribute::AccessRequest::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "include")
    {
        include = value;
        include.value_namespace = name_space;
        include.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RadiusServer::Attribute::AccessRequest::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "include")
    {
        include.yfilter = yfilter;
    }
}

bool Native::RadiusServer::Attribute::AccessRequest::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "include")
        return true;
    return false;
}

Native::RadiusServer::Attribute::Attri31::Attri31()
{
    yang_name = "attri31"; yang_parent_name = "attribute";
}

Native::RadiusServer::Attribute::Attri31::~Attri31()
{
}

bool Native::RadiusServer::Attribute::Attri31::has_data() const
{
    for (std::size_t index=0; index<attri31_list.size(); index++)
    {
        if(attri31_list[index]->has_data())
            return true;
    }
    return false;
}

bool Native::RadiusServer::Attribute::Attri31::has_operation() const
{
    for (std::size_t index=0; index<attri31_list.size(); index++)
    {
        if(attri31_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::RadiusServer::Attribute::Attri31::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attri31";

    return path_buffer.str();

}

const EntityPath Native::RadiusServer::Attribute::Attri31::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Attri31' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::RadiusServer::Attribute::Attri31::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "attri31-list")
    {
        for(auto const & c : attri31_list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::RadiusServer::Attribute::Attri31::Attri31List>();
        c->parent = this;
        attri31_list.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RadiusServer::Attribute::Attri31::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : attri31_list)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::RadiusServer::Attribute::Attri31::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::RadiusServer::Attribute::Attri31::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::RadiusServer::Attribute::Attri31::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attri31-list")
        return true;
    return false;
}

Native::RadiusServer::Attribute::Attri31::Attri31List::Attri31List()
    :
    calling_station_id{YType::enumeration, "calling-station-id"}
    	,
    id_mac(std::make_shared<Native::RadiusServer::Attribute::Attri31::Attri31List::IdMac>())
	,id_send(std::make_shared<Native::RadiusServer::Attribute::Attri31::Attri31List::IdSend>())
{
    id_mac->parent = this;

    id_send->parent = this;

    yang_name = "attri31-list"; yang_parent_name = "attri31";
}

Native::RadiusServer::Attribute::Attri31::Attri31List::~Attri31List()
{
}

bool Native::RadiusServer::Attribute::Attri31::Attri31List::has_data() const
{
    return calling_station_id.is_set
	|| (id_mac !=  nullptr && id_mac->has_data())
	|| (id_send !=  nullptr && id_send->has_data());
}

bool Native::RadiusServer::Attribute::Attri31::Attri31List::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(calling_station_id.yfilter)
	|| (id_mac !=  nullptr && id_mac->has_operation())
	|| (id_send !=  nullptr && id_send->has_operation());
}

std::string Native::RadiusServer::Attribute::Attri31::Attri31List::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attri31-list" <<"[calling-station-id='" <<calling_station_id <<"']";

    return path_buffer.str();

}

const EntityPath Native::RadiusServer::Attribute::Attri31::Attri31List::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Attri31List' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (calling_station_id.is_set || is_set(calling_station_id.yfilter)) leaf_name_data.push_back(calling_station_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::RadiusServer::Attribute::Attri31::Attri31List::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "id-mac")
    {
        if(id_mac == nullptr)
        {
            id_mac = std::make_shared<Native::RadiusServer::Attribute::Attri31::Attri31List::IdMac>();
        }
        return id_mac;
    }

    if(child_yang_name == "id-send")
    {
        if(id_send == nullptr)
        {
            id_send = std::make_shared<Native::RadiusServer::Attribute::Attri31::Attri31List::IdSend>();
        }
        return id_send;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RadiusServer::Attribute::Attri31::Attri31List::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(id_mac != nullptr)
    {
        children["id-mac"] = id_mac;
    }

    if(id_send != nullptr)
    {
        children["id-send"] = id_send;
    }

    return children;
}

void Native::RadiusServer::Attribute::Attri31::Attri31List::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "calling-station-id")
    {
        calling_station_id = value;
        calling_station_id.value_namespace = name_space;
        calling_station_id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RadiusServer::Attribute::Attri31::Attri31List::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "calling-station-id")
    {
        calling_station_id.yfilter = yfilter;
    }
}

bool Native::RadiusServer::Attribute::Attri31::Attri31List::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id-mac" || name == "id-send" || name == "calling-station-id")
        return true;
    return false;
}

Native::RadiusServer::Attribute::Attri31::Attri31List::IdMac::IdMac()
    :
    format{YType::enumeration, "format"},
    lu_case{YType::enumeration, "lu-case"}
{
    yang_name = "id-mac"; yang_parent_name = "attri31-list";
}

Native::RadiusServer::Attribute::Attri31::Attri31List::IdMac::~IdMac()
{
}

bool Native::RadiusServer::Attribute::Attri31::Attri31List::IdMac::has_data() const
{
    return format.is_set
	|| lu_case.is_set;
}

bool Native::RadiusServer::Attribute::Attri31::Attri31List::IdMac::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(format.yfilter)
	|| ydk::is_set(lu_case.yfilter);
}

std::string Native::RadiusServer::Attribute::Attri31::Attri31List::IdMac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "id-mac";

    return path_buffer.str();

}

const EntityPath Native::RadiusServer::Attribute::Attri31::Attri31List::IdMac::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IdMac' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (format.is_set || is_set(format.yfilter)) leaf_name_data.push_back(format.get_name_leafdata());
    if (lu_case.is_set || is_set(lu_case.yfilter)) leaf_name_data.push_back(lu_case.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::RadiusServer::Attribute::Attri31::Attri31List::IdMac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RadiusServer::Attribute::Attri31::Attri31List::IdMac::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::RadiusServer::Attribute::Attri31::Attri31List::IdMac::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "format")
    {
        format = value;
        format.value_namespace = name_space;
        format.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lu-case")
    {
        lu_case = value;
        lu_case.value_namespace = name_space;
        lu_case.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RadiusServer::Attribute::Attri31::Attri31List::IdMac::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "format")
    {
        format.yfilter = yfilter;
    }
    if(value_path == "lu-case")
    {
        lu_case.yfilter = yfilter;
    }
}

bool Native::RadiusServer::Attribute::Attri31::Attri31List::IdMac::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "format" || name == "lu-case")
        return true;
    return false;
}

Native::RadiusServer::Attribute::Attri31::Attri31List::IdSend::IdSend()
    :
    mac_only{YType::empty, "mac-only"},
    nas_port_detail{YType::empty, "nas-port-detail"}
{
    yang_name = "id-send"; yang_parent_name = "attri31-list";
}

Native::RadiusServer::Attribute::Attri31::Attri31List::IdSend::~IdSend()
{
}

bool Native::RadiusServer::Attribute::Attri31::Attri31List::IdSend::has_data() const
{
    return mac_only.is_set
	|| nas_port_detail.is_set;
}

bool Native::RadiusServer::Attribute::Attri31::Attri31List::IdSend::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mac_only.yfilter)
	|| ydk::is_set(nas_port_detail.yfilter);
}

std::string Native::RadiusServer::Attribute::Attri31::Attri31List::IdSend::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "id-send";

    return path_buffer.str();

}

const EntityPath Native::RadiusServer::Attribute::Attri31::Attri31List::IdSend::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IdSend' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac_only.is_set || is_set(mac_only.yfilter)) leaf_name_data.push_back(mac_only.get_name_leafdata());
    if (nas_port_detail.is_set || is_set(nas_port_detail.yfilter)) leaf_name_data.push_back(nas_port_detail.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::RadiusServer::Attribute::Attri31::Attri31List::IdSend::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RadiusServer::Attribute::Attri31::Attri31List::IdSend::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::RadiusServer::Attribute::Attri31::Attri31List::IdSend::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mac-only")
    {
        mac_only = value;
        mac_only.value_namespace = name_space;
        mac_only.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nas-port-detail")
    {
        nas_port_detail = value;
        nas_port_detail.value_namespace = name_space;
        nas_port_detail.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RadiusServer::Attribute::Attri31::Attri31List::IdSend::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mac-only")
    {
        mac_only.yfilter = yfilter;
    }
    if(value_path == "nas-port-detail")
    {
        nas_port_detail.yfilter = yfilter;
    }
}

bool Native::RadiusServer::Attribute::Attri31::Attri31List::IdSend::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-only" || name == "nas-port-detail")
        return true;
    return false;
}

Native::RadiusServer::DeadCriteria::DeadCriteria()
    :
    time{YType::uint8, "time"},
    tries{YType::uint8, "tries"}
{
    yang_name = "dead-criteria"; yang_parent_name = "radius-server";
}

Native::RadiusServer::DeadCriteria::~DeadCriteria()
{
}

bool Native::RadiusServer::DeadCriteria::has_data() const
{
    return time.is_set
	|| tries.is_set;
}

bool Native::RadiusServer::DeadCriteria::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(time.yfilter)
	|| ydk::is_set(tries.yfilter);
}

std::string Native::RadiusServer::DeadCriteria::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-aaa:dead-criteria";

    return path_buffer.str();

}

const EntityPath Native::RadiusServer::DeadCriteria::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/radius-server/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time.is_set || is_set(time.yfilter)) leaf_name_data.push_back(time.get_name_leafdata());
    if (tries.is_set || is_set(tries.yfilter)) leaf_name_data.push_back(tries.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::RadiusServer::DeadCriteria::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RadiusServer::DeadCriteria::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::RadiusServer::DeadCriteria::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "time")
    {
        time = value;
        time.value_namespace = name_space;
        time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tries")
    {
        tries = value;
        tries.value_namespace = name_space;
        tries.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RadiusServer::DeadCriteria::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "time")
    {
        time.yfilter = yfilter;
    }
    if(value_path == "tries")
    {
        tries.yfilter = yfilter;
    }
}

bool Native::RadiusServer::DeadCriteria::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "time" || name == "tries")
        return true;
    return false;
}

Native::RadiusServer::Host::Host()
    :
    id{YType::str, "id"},
    acct_port{YType::uint16, "acct-port"},
    auth_port{YType::uint16, "auth-port"},
    clear_key{YType::str, "clear-key"},
    key{YType::str, "key"},
    retransmit{YType::uint8, "retransmit"},
    timeout{YType::uint16, "timeout"}
    	,
    test(std::make_shared<Native::RadiusServer::Host::Test>())
{
    test->parent = this;

    yang_name = "host"; yang_parent_name = "radius-server";
}

Native::RadiusServer::Host::~Host()
{
}

bool Native::RadiusServer::Host::has_data() const
{
    return id.is_set
	|| acct_port.is_set
	|| auth_port.is_set
	|| clear_key.is_set
	|| key.is_set
	|| retransmit.is_set
	|| timeout.is_set
	|| (test !=  nullptr && test->has_data());
}

bool Native::RadiusServer::Host::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(acct_port.yfilter)
	|| ydk::is_set(auth_port.yfilter)
	|| ydk::is_set(clear_key.yfilter)
	|| ydk::is_set(key.yfilter)
	|| ydk::is_set(retransmit.yfilter)
	|| ydk::is_set(timeout.yfilter)
	|| (test !=  nullptr && test->has_operation());
}

std::string Native::RadiusServer::Host::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-aaa:host" <<"[id='" <<id <<"']";

    return path_buffer.str();

}

const EntityPath Native::RadiusServer::Host::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/radius-server/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (acct_port.is_set || is_set(acct_port.yfilter)) leaf_name_data.push_back(acct_port.get_name_leafdata());
    if (auth_port.is_set || is_set(auth_port.yfilter)) leaf_name_data.push_back(auth_port.get_name_leafdata());
    if (clear_key.is_set || is_set(clear_key.yfilter)) leaf_name_data.push_back(clear_key.get_name_leafdata());
    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());
    if (retransmit.is_set || is_set(retransmit.yfilter)) leaf_name_data.push_back(retransmit.get_name_leafdata());
    if (timeout.is_set || is_set(timeout.yfilter)) leaf_name_data.push_back(timeout.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::RadiusServer::Host::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "test")
    {
        if(test == nullptr)
        {
            test = std::make_shared<Native::RadiusServer::Host::Test>();
        }
        return test;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RadiusServer::Host::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(test != nullptr)
    {
        children["test"] = test;
    }

    return children;
}

void Native::RadiusServer::Host::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "acct-port")
    {
        acct_port = value;
        acct_port.value_namespace = name_space;
        acct_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "auth-port")
    {
        auth_port = value;
        auth_port.value_namespace = name_space;
        auth_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clear-key")
    {
        clear_key = value;
        clear_key.value_namespace = name_space;
        clear_key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key")
    {
        key = value;
        key.value_namespace = name_space;
        key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retransmit")
    {
        retransmit = value;
        retransmit.value_namespace = name_space;
        retransmit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timeout")
    {
        timeout = value;
        timeout.value_namespace = name_space;
        timeout.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RadiusServer::Host::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "acct-port")
    {
        acct_port.yfilter = yfilter;
    }
    if(value_path == "auth-port")
    {
        auth_port.yfilter = yfilter;
    }
    if(value_path == "clear-key")
    {
        clear_key.yfilter = yfilter;
    }
    if(value_path == "key")
    {
        key.yfilter = yfilter;
    }
    if(value_path == "retransmit")
    {
        retransmit.yfilter = yfilter;
    }
    if(value_path == "timeout")
    {
        timeout.yfilter = yfilter;
    }
}

bool Native::RadiusServer::Host::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "test" || name == "id" || name == "acct-port" || name == "auth-port" || name == "clear-key" || name == "key" || name == "retransmit" || name == "timeout")
        return true;
    return false;
}

Native::RadiusServer::Host::Test::Test()
{
    yang_name = "test"; yang_parent_name = "host";
}

Native::RadiusServer::Host::Test::~Test()
{
}

bool Native::RadiusServer::Host::Test::has_data() const
{
    for (std::size_t index=0; index<username.size(); index++)
    {
        if(username[index]->has_data())
            return true;
    }
    return false;
}

bool Native::RadiusServer::Host::Test::has_operation() const
{
    for (std::size_t index=0; index<username.size(); index++)
    {
        if(username[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::RadiusServer::Host::Test::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "test";

    return path_buffer.str();

}

const EntityPath Native::RadiusServer::Host::Test::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Test' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::RadiusServer::Host::Test::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "username")
    {
        for(auto const & c : username)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::RadiusServer::Host::Test::Username>();
        c->parent = this;
        username.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RadiusServer::Host::Test::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : username)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::RadiusServer::Host::Test::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::RadiusServer::Host::Test::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::RadiusServer::Host::Test::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "username")
        return true;
    return false;
}

Native::RadiusServer::Host::Test::Username::Username()
    :
    name{YType::str, "name"}
    	,
    key(std::make_shared<Native::RadiusServer::Host::Test::Username::Key>())
{
    key->parent = this;

    yang_name = "username"; yang_parent_name = "test";
}

Native::RadiusServer::Host::Test::Username::~Username()
{
}

bool Native::RadiusServer::Host::Test::Username::has_data() const
{
    return name.is_set
	|| (key !=  nullptr && key->has_data());
}

bool Native::RadiusServer::Host::Test::Username::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (key !=  nullptr && key->has_operation());
}

std::string Native::RadiusServer::Host::Test::Username::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "username" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Native::RadiusServer::Host::Test::Username::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Username' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::RadiusServer::Host::Test::Username::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key")
    {
        if(key == nullptr)
        {
            key = std::make_shared<Native::RadiusServer::Host::Test::Username::Key>();
        }
        return key;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RadiusServer::Host::Test::Username::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(key != nullptr)
    {
        children["key"] = key;
    }

    return children;
}

void Native::RadiusServer::Host::Test::Username::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RadiusServer::Host::Test::Username::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::RadiusServer::Host::Test::Username::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key" || name == "name")
        return true;
    return false;
}

Native::RadiusServer::Host::Test::Username::Key::Key()
    :
    clear_key{YType::str, "clear-key"},
    encryption{YType::enumeration, "encryption"}
{
    yang_name = "key"; yang_parent_name = "username";
}

Native::RadiusServer::Host::Test::Username::Key::~Key()
{
}

bool Native::RadiusServer::Host::Test::Username::Key::has_data() const
{
    return clear_key.is_set
	|| encryption.is_set;
}

bool Native::RadiusServer::Host::Test::Username::Key::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(clear_key.yfilter)
	|| ydk::is_set(encryption.yfilter);
}

std::string Native::RadiusServer::Host::Test::Username::Key::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key";

    return path_buffer.str();

}

const EntityPath Native::RadiusServer::Host::Test::Username::Key::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Key' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (clear_key.is_set || is_set(clear_key.yfilter)) leaf_name_data.push_back(clear_key.get_name_leafdata());
    if (encryption.is_set || is_set(encryption.yfilter)) leaf_name_data.push_back(encryption.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::RadiusServer::Host::Test::Username::Key::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RadiusServer::Host::Test::Username::Key::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::RadiusServer::Host::Test::Username::Key::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "clear-key")
    {
        clear_key = value;
        clear_key.value_namespace = name_space;
        clear_key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encryption")
    {
        encryption = value;
        encryption.value_namespace = name_space;
        encryption.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RadiusServer::Host::Test::Username::Key::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "clear-key")
    {
        clear_key.yfilter = yfilter;
    }
    if(value_path == "encryption")
    {
        encryption.yfilter = yfilter;
    }
}

bool Native::RadiusServer::Host::Test::Username::Key::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "clear-key" || name == "encryption")
        return true;
    return false;
}

Native::RadiusServer::Key::Key()
    :
    clear_key{YType::str, "clear-key"},
    encryption{YType::enumeration, "encryption"}
{
    yang_name = "key"; yang_parent_name = "radius-server";
}

Native::RadiusServer::Key::~Key()
{
}

bool Native::RadiusServer::Key::has_data() const
{
    return clear_key.is_set
	|| encryption.is_set;
}

bool Native::RadiusServer::Key::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(clear_key.yfilter)
	|| ydk::is_set(encryption.yfilter);
}

std::string Native::RadiusServer::Key::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-aaa:key";

    return path_buffer.str();

}

const EntityPath Native::RadiusServer::Key::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/radius-server/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (clear_key.is_set || is_set(clear_key.yfilter)) leaf_name_data.push_back(clear_key.get_name_leafdata());
    if (encryption.is_set || is_set(encryption.yfilter)) leaf_name_data.push_back(encryption.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::RadiusServer::Key::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RadiusServer::Key::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::RadiusServer::Key::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "clear-key")
    {
        clear_key = value;
        clear_key.value_namespace = name_space;
        clear_key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encryption")
    {
        encryption = value;
        encryption.value_namespace = name_space;
        encryption.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RadiusServer::Key::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "clear-key")
    {
        clear_key.yfilter = yfilter;
    }
    if(value_path == "encryption")
    {
        encryption.yfilter = yfilter;
    }
}

bool Native::RadiusServer::Key::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "clear-key" || name == "encryption")
        return true;
    return false;
}

Native::RadiusServer::SourcePorts::SourcePorts()
    :
    extended{YType::empty, "extended"}
{
    yang_name = "source-ports"; yang_parent_name = "radius-server";
}

Native::RadiusServer::SourcePorts::~SourcePorts()
{
}

bool Native::RadiusServer::SourcePorts::has_data() const
{
    return extended.is_set;
}

bool Native::RadiusServer::SourcePorts::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(extended.yfilter);
}

std::string Native::RadiusServer::SourcePorts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-aaa:source-ports";

    return path_buffer.str();

}

const EntityPath Native::RadiusServer::SourcePorts::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/radius-server/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (extended.is_set || is_set(extended.yfilter)) leaf_name_data.push_back(extended.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::RadiusServer::SourcePorts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RadiusServer::SourcePorts::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::RadiusServer::SourcePorts::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "extended")
    {
        extended = value;
        extended.value_namespace = name_space;
        extended.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RadiusServer::SourcePorts::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "extended")
    {
        extended.yfilter = yfilter;
    }
}

bool Native::RadiusServer::SourcePorts::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "extended")
        return true;
    return false;
}

Native::RadiusServer::Vsa::Vsa()
    :
    disallow(std::make_shared<Native::RadiusServer::Vsa::Disallow>())
	,send(nullptr) // presence node
{
    disallow->parent = this;

    yang_name = "vsa"; yang_parent_name = "radius-server";
}

Native::RadiusServer::Vsa::~Vsa()
{
}

bool Native::RadiusServer::Vsa::has_data() const
{
    return (disallow !=  nullptr && disallow->has_data())
	|| (send !=  nullptr && send->has_data());
}

bool Native::RadiusServer::Vsa::has_operation() const
{
    return is_set(yfilter)
	|| (disallow !=  nullptr && disallow->has_operation())
	|| (send !=  nullptr && send->has_operation());
}

std::string Native::RadiusServer::Vsa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-aaa:vsa";

    return path_buffer.str();

}

const EntityPath Native::RadiusServer::Vsa::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/radius-server/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::RadiusServer::Vsa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "disallow")
    {
        if(disallow == nullptr)
        {
            disallow = std::make_shared<Native::RadiusServer::Vsa::Disallow>();
        }
        return disallow;
    }

    if(child_yang_name == "send")
    {
        if(send == nullptr)
        {
            send = std::make_shared<Native::RadiusServer::Vsa::Send>();
        }
        return send;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RadiusServer::Vsa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(disallow != nullptr)
    {
        children["disallow"] = disallow;
    }

    if(send != nullptr)
    {
        children["send"] = send;
    }

    return children;
}

void Native::RadiusServer::Vsa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::RadiusServer::Vsa::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::RadiusServer::Vsa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disallow" || name == "send")
        return true;
    return false;
}

Native::RadiusServer::Vsa::Disallow::Disallow()
    :
    unknown{YType::empty, "unknown"}
{
    yang_name = "disallow"; yang_parent_name = "vsa";
}

Native::RadiusServer::Vsa::Disallow::~Disallow()
{
}

bool Native::RadiusServer::Vsa::Disallow::has_data() const
{
    return unknown.is_set;
}

bool Native::RadiusServer::Vsa::Disallow::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(unknown.yfilter);
}

std::string Native::RadiusServer::Vsa::Disallow::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "disallow";

    return path_buffer.str();

}

const EntityPath Native::RadiusServer::Vsa::Disallow::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/radius-server/Cisco-IOS-XE-aaa:vsa/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unknown.is_set || is_set(unknown.yfilter)) leaf_name_data.push_back(unknown.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::RadiusServer::Vsa::Disallow::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RadiusServer::Vsa::Disallow::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::RadiusServer::Vsa::Disallow::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "unknown")
    {
        unknown = value;
        unknown.value_namespace = name_space;
        unknown.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RadiusServer::Vsa::Disallow::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "unknown")
    {
        unknown.yfilter = yfilter;
    }
}

bool Native::RadiusServer::Vsa::Disallow::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unknown")
        return true;
    return false;
}

Native::RadiusServer::Vsa::Send::Send()
    :
    accounting(nullptr) // presence node
	,authentication(nullptr) // presence node
	,cisco_nas_port(nullptr) // presence node
{
    yang_name = "send"; yang_parent_name = "vsa";
}

Native::RadiusServer::Vsa::Send::~Send()
{
}

bool Native::RadiusServer::Vsa::Send::has_data() const
{
    return (accounting !=  nullptr && accounting->has_data())
	|| (authentication !=  nullptr && authentication->has_data())
	|| (cisco_nas_port !=  nullptr && cisco_nas_port->has_data());
}

bool Native::RadiusServer::Vsa::Send::has_operation() const
{
    return is_set(yfilter)
	|| (accounting !=  nullptr && accounting->has_operation())
	|| (authentication !=  nullptr && authentication->has_operation())
	|| (cisco_nas_port !=  nullptr && cisco_nas_port->has_operation());
}

std::string Native::RadiusServer::Vsa::Send::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "send";

    return path_buffer.str();

}

const EntityPath Native::RadiusServer::Vsa::Send::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/radius-server/Cisco-IOS-XE-aaa:vsa/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::RadiusServer::Vsa::Send::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "accounting")
    {
        if(accounting == nullptr)
        {
            accounting = std::make_shared<Native::RadiusServer::Vsa::Send::Accounting>();
        }
        return accounting;
    }

    if(child_yang_name == "authentication")
    {
        if(authentication == nullptr)
        {
            authentication = std::make_shared<Native::RadiusServer::Vsa::Send::Authentication>();
        }
        return authentication;
    }

    if(child_yang_name == "cisco-nas-port")
    {
        if(cisco_nas_port == nullptr)
        {
            cisco_nas_port = std::make_shared<Native::RadiusServer::Vsa::Send::CiscoNasPort>();
        }
        return cisco_nas_port;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RadiusServer::Vsa::Send::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(accounting != nullptr)
    {
        children["accounting"] = accounting;
    }

    if(authentication != nullptr)
    {
        children["authentication"] = authentication;
    }

    if(cisco_nas_port != nullptr)
    {
        children["cisco-nas-port"] = cisco_nas_port;
    }

    return children;
}

void Native::RadiusServer::Vsa::Send::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::RadiusServer::Vsa::Send::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::RadiusServer::Vsa::Send::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "accounting" || name == "authentication" || name == "cisco-nas-port")
        return true;
    return false;
}

Native::RadiusServer::Vsa::Send::Accounting::Accounting()
    :
    threegpp2{YType::empty, "threegpp2"}
{
    yang_name = "accounting"; yang_parent_name = "send";
}

Native::RadiusServer::Vsa::Send::Accounting::~Accounting()
{
}

bool Native::RadiusServer::Vsa::Send::Accounting::has_data() const
{
    return threegpp2.is_set;
}

bool Native::RadiusServer::Vsa::Send::Accounting::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(threegpp2.yfilter);
}

std::string Native::RadiusServer::Vsa::Send::Accounting::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "accounting";

    return path_buffer.str();

}

const EntityPath Native::RadiusServer::Vsa::Send::Accounting::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/radius-server/Cisco-IOS-XE-aaa:vsa/send/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threegpp2.is_set || is_set(threegpp2.yfilter)) leaf_name_data.push_back(threegpp2.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::RadiusServer::Vsa::Send::Accounting::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RadiusServer::Vsa::Send::Accounting::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::RadiusServer::Vsa::Send::Accounting::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "threegpp2")
    {
        threegpp2 = value;
        threegpp2.value_namespace = name_space;
        threegpp2.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RadiusServer::Vsa::Send::Accounting::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "threegpp2")
    {
        threegpp2.yfilter = yfilter;
    }
}

bool Native::RadiusServer::Vsa::Send::Accounting::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threegpp2")
        return true;
    return false;
}

Native::RadiusServer::Vsa::Send::Authentication::Authentication()
    :
    threegpp2{YType::empty, "threegpp2"}
{
    yang_name = "authentication"; yang_parent_name = "send";
}

Native::RadiusServer::Vsa::Send::Authentication::~Authentication()
{
}

bool Native::RadiusServer::Vsa::Send::Authentication::has_data() const
{
    return threegpp2.is_set;
}

bool Native::RadiusServer::Vsa::Send::Authentication::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(threegpp2.yfilter);
}

std::string Native::RadiusServer::Vsa::Send::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";

    return path_buffer.str();

}

const EntityPath Native::RadiusServer::Vsa::Send::Authentication::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/radius-server/Cisco-IOS-XE-aaa:vsa/send/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threegpp2.is_set || is_set(threegpp2.yfilter)) leaf_name_data.push_back(threegpp2.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::RadiusServer::Vsa::Send::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RadiusServer::Vsa::Send::Authentication::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::RadiusServer::Vsa::Send::Authentication::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "threegpp2")
    {
        threegpp2 = value;
        threegpp2.value_namespace = name_space;
        threegpp2.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RadiusServer::Vsa::Send::Authentication::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "threegpp2")
    {
        threegpp2.yfilter = yfilter;
    }
}

bool Native::RadiusServer::Vsa::Send::Authentication::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threegpp2")
        return true;
    return false;
}

Native::RadiusServer::Vsa::Send::CiscoNasPort::CiscoNasPort()
    :
    threegpp2{YType::empty, "threegpp2"}
{
    yang_name = "cisco-nas-port"; yang_parent_name = "send";
}

Native::RadiusServer::Vsa::Send::CiscoNasPort::~CiscoNasPort()
{
}

bool Native::RadiusServer::Vsa::Send::CiscoNasPort::has_data() const
{
    return threegpp2.is_set;
}

bool Native::RadiusServer::Vsa::Send::CiscoNasPort::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(threegpp2.yfilter);
}

std::string Native::RadiusServer::Vsa::Send::CiscoNasPort::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cisco-nas-port";

    return path_buffer.str();

}

const EntityPath Native::RadiusServer::Vsa::Send::CiscoNasPort::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/radius-server/Cisco-IOS-XE-aaa:vsa/send/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threegpp2.is_set || is_set(threegpp2.yfilter)) leaf_name_data.push_back(threegpp2.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::RadiusServer::Vsa::Send::CiscoNasPort::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RadiusServer::Vsa::Send::CiscoNasPort::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::RadiusServer::Vsa::Send::CiscoNasPort::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "threegpp2")
    {
        threegpp2 = value;
        threegpp2.value_namespace = name_space;
        threegpp2.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RadiusServer::Vsa::Send::CiscoNasPort::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "threegpp2")
    {
        threegpp2.yfilter = yfilter;
    }
}

bool Native::RadiusServer::Vsa::Send::CiscoNasPort::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threegpp2")
        return true;
    return false;
}

Native::Radius::Radius()
{
    yang_name = "radius"; yang_parent_name = "native";
}

Native::Radius::~Radius()
{
}

bool Native::Radius::has_data() const
{
    for (std::size_t index=0; index<filter.size(); index++)
    {
        if(filter[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<server.size(); index++)
    {
        if(server[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Radius::has_operation() const
{
    for (std::size_t index=0; index<filter.size(); index++)
    {
        if(filter[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<server.size(); index++)
    {
        if(server[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Radius::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "radius";

    return path_buffer.str();

}

const EntityPath Native::Radius::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Native::Radius::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "filter")
    {
        for(auto const & c : filter)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Radius::Filter>();
        c->parent = this;
        filter.push_back(c);
        return c;
    }

    if(child_yang_name == "server")
    {
        for(auto const & c : server)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Radius::Server>();
        c->parent = this;
        server.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Radius::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : filter)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : server)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Radius::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Radius::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Radius::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "filter" || name == "server")
        return true;
    return false;
}

Native::Radius::Filter::Filter()
    :
    id{YType::str, "id"},
    match{YType::enumeration, "match"}
{
    yang_name = "filter"; yang_parent_name = "radius";
}

Native::Radius::Filter::~Filter()
{
}

bool Native::Radius::Filter::has_data() const
{
    return id.is_set
	|| match.is_set;
}

bool Native::Radius::Filter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(match.yfilter);
}

std::string Native::Radius::Filter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-aaa:filter" <<"[id='" <<id <<"']";

    return path_buffer.str();

}

const EntityPath Native::Radius::Filter::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/radius/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (match.is_set || is_set(match.yfilter)) leaf_name_data.push_back(match.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Radius::Filter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Radius::Filter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Radius::Filter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "match")
    {
        match = value;
        match.value_namespace = name_space;
        match.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Radius::Filter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "match")
    {
        match.yfilter = yfilter;
    }
}

bool Native::Radius::Filter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "match")
        return true;
    return false;
}

Native::Radius::Server::Server()
    :
    id{YType::str, "id"},
    retransmit{YType::uint8, "retransmit"}
    	,
    address(std::make_shared<Native::Radius::Server::Address>())
	,automate_tester(std::make_shared<Native::Radius::Server::AutomateTester>())
	,backoff(std::make_shared<Native::Radius::Server::Backoff>())
	,key(std::make_shared<Native::Radius::Server::Key>())
	,pac(std::make_shared<Native::Radius::Server::Pac>())
{
    address->parent = this;

    automate_tester->parent = this;

    backoff->parent = this;

    key->parent = this;

    pac->parent = this;

    yang_name = "server"; yang_parent_name = "radius";
}

Native::Radius::Server::~Server()
{
}

bool Native::Radius::Server::has_data() const
{
    return id.is_set
	|| retransmit.is_set
	|| (address !=  nullptr && address->has_data())
	|| (automate_tester !=  nullptr && automate_tester->has_data())
	|| (backoff !=  nullptr && backoff->has_data())
	|| (key !=  nullptr && key->has_data())
	|| (pac !=  nullptr && pac->has_data());
}

bool Native::Radius::Server::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(retransmit.yfilter)
	|| (address !=  nullptr && address->has_operation())
	|| (automate_tester !=  nullptr && automate_tester->has_operation())
	|| (backoff !=  nullptr && backoff->has_operation())
	|| (key !=  nullptr && key->has_operation())
	|| (pac !=  nullptr && pac->has_operation());
}

std::string Native::Radius::Server::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-aaa:server" <<"[id='" <<id <<"']";

    return path_buffer.str();

}

const EntityPath Native::Radius::Server::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/radius/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (retransmit.is_set || is_set(retransmit.yfilter)) leaf_name_data.push_back(retransmit.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Radius::Server::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Native::Radius::Server::Address>();
        }
        return address;
    }

    if(child_yang_name == "automate-tester")
    {
        if(automate_tester == nullptr)
        {
            automate_tester = std::make_shared<Native::Radius::Server::AutomateTester>();
        }
        return automate_tester;
    }

    if(child_yang_name == "backoff")
    {
        if(backoff == nullptr)
        {
            backoff = std::make_shared<Native::Radius::Server::Backoff>();
        }
        return backoff;
    }

    if(child_yang_name == "key")
    {
        if(key == nullptr)
        {
            key = std::make_shared<Native::Radius::Server::Key>();
        }
        return key;
    }

    if(child_yang_name == "pac")
    {
        if(pac == nullptr)
        {
            pac = std::make_shared<Native::Radius::Server::Pac>();
        }
        return pac;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Radius::Server::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(address != nullptr)
    {
        children["address"] = address;
    }

    if(automate_tester != nullptr)
    {
        children["automate-tester"] = automate_tester;
    }

    if(backoff != nullptr)
    {
        children["backoff"] = backoff;
    }

    if(key != nullptr)
    {
        children["key"] = key;
    }

    if(pac != nullptr)
    {
        children["pac"] = pac;
    }

    return children;
}

void Native::Radius::Server::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retransmit")
    {
        retransmit = value;
        retransmit.value_namespace = name_space;
        retransmit.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Radius::Server::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "retransmit")
    {
        retransmit.yfilter = yfilter;
    }
}

bool Native::Radius::Server::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "automate-tester" || name == "backoff" || name == "key" || name == "pac" || name == "id" || name == "retransmit")
        return true;
    return false;
}

Native::Radius::Server::Address::Address()
    :
    ipv4(std::make_shared<Native::Radius::Server::Address::Ipv4>())
{
    ipv4->parent = this;

    yang_name = "address"; yang_parent_name = "server";
}

Native::Radius::Server::Address::~Address()
{
}

bool Native::Radius::Server::Address::has_data() const
{
    return (ipv4 !=  nullptr && ipv4->has_data());
}

bool Native::Radius::Server::Address::has_operation() const
{
    return is_set(yfilter)
	|| (ipv4 !=  nullptr && ipv4->has_operation());
}

std::string Native::Radius::Server::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";

    return path_buffer.str();

}

const EntityPath Native::Radius::Server::Address::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Address' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Radius::Server::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4")
    {
        if(ipv4 == nullptr)
        {
            ipv4 = std::make_shared<Native::Radius::Server::Address::Ipv4>();
        }
        return ipv4;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Radius::Server::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ipv4 != nullptr)
    {
        children["ipv4"] = ipv4;
    }

    return children;
}

void Native::Radius::Server::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Radius::Server::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Radius::Server::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4")
        return true;
    return false;
}

Native::Radius::Server::Address::Ipv4::Ipv4()
    :
    acct_port{YType::uint16, "acct-port"},
    auth_port{YType::uint16, "auth-port"},
    host{YType::str, "host"}
{
    yang_name = "ipv4"; yang_parent_name = "address";
}

Native::Radius::Server::Address::Ipv4::~Ipv4()
{
}

bool Native::Radius::Server::Address::Ipv4::has_data() const
{
    return acct_port.is_set
	|| auth_port.is_set
	|| host.is_set;
}

bool Native::Radius::Server::Address::Ipv4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(acct_port.yfilter)
	|| ydk::is_set(auth_port.yfilter)
	|| ydk::is_set(host.yfilter);
}

std::string Native::Radius::Server::Address::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";

    return path_buffer.str();

}

const EntityPath Native::Radius::Server::Address::Ipv4::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv4' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acct_port.is_set || is_set(acct_port.yfilter)) leaf_name_data.push_back(acct_port.get_name_leafdata());
    if (auth_port.is_set || is_set(auth_port.yfilter)) leaf_name_data.push_back(auth_port.get_name_leafdata());
    if (host.is_set || is_set(host.yfilter)) leaf_name_data.push_back(host.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Radius::Server::Address::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Radius::Server::Address::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Radius::Server::Address::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "acct-port")
    {
        acct_port = value;
        acct_port.value_namespace = name_space;
        acct_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "auth-port")
    {
        auth_port = value;
        auth_port.value_namespace = name_space;
        auth_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "host")
    {
        host = value;
        host.value_namespace = name_space;
        host.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Radius::Server::Address::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "acct-port")
    {
        acct_port.yfilter = yfilter;
    }
    if(value_path == "auth-port")
    {
        auth_port.yfilter = yfilter;
    }
    if(value_path == "host")
    {
        host.yfilter = yfilter;
    }
}

bool Native::Radius::Server::Address::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acct-port" || name == "auth-port" || name == "host")
        return true;
    return false;
}

Native::Radius::Server::AutomateTester::AutomateTester()
    :
    at_option{YType::enumeration, "at-option"},
    username{YType::str, "username"}
{
    yang_name = "automate-tester"; yang_parent_name = "server";
}

Native::Radius::Server::AutomateTester::~AutomateTester()
{
}

bool Native::Radius::Server::AutomateTester::has_data() const
{
    return at_option.is_set
	|| username.is_set;
}

bool Native::Radius::Server::AutomateTester::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(at_option.yfilter)
	|| ydk::is_set(username.yfilter);
}

std::string Native::Radius::Server::AutomateTester::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "automate-tester";

    return path_buffer.str();

}

const EntityPath Native::Radius::Server::AutomateTester::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AutomateTester' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (at_option.is_set || is_set(at_option.yfilter)) leaf_name_data.push_back(at_option.get_name_leafdata());
    if (username.is_set || is_set(username.yfilter)) leaf_name_data.push_back(username.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Radius::Server::AutomateTester::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Radius::Server::AutomateTester::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Radius::Server::AutomateTester::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "at-option")
    {
        at_option = value;
        at_option.value_namespace = name_space;
        at_option.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "username")
    {
        username = value;
        username.value_namespace = name_space;
        username.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Radius::Server::AutomateTester::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "at-option")
    {
        at_option.yfilter = yfilter;
    }
    if(value_path == "username")
    {
        username.yfilter = yfilter;
    }
}

bool Native::Radius::Server::AutomateTester::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "at-option" || name == "username")
        return true;
    return false;
}

Native::Radius::Server::Backoff::Backoff()
    :
    exponential(nullptr) // presence node
{
    yang_name = "backoff"; yang_parent_name = "server";
}

Native::Radius::Server::Backoff::~Backoff()
{
}

bool Native::Radius::Server::Backoff::has_data() const
{
    return (exponential !=  nullptr && exponential->has_data());
}

bool Native::Radius::Server::Backoff::has_operation() const
{
    return is_set(yfilter)
	|| (exponential !=  nullptr && exponential->has_operation());
}

std::string Native::Radius::Server::Backoff::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backoff";

    return path_buffer.str();

}

const EntityPath Native::Radius::Server::Backoff::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Backoff' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Radius::Server::Backoff::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "exponential")
    {
        if(exponential == nullptr)
        {
            exponential = std::make_shared<Native::Radius::Server::Backoff::Exponential>();
        }
        return exponential;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Radius::Server::Backoff::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(exponential != nullptr)
    {
        children["exponential"] = exponential;
    }

    return children;
}

void Native::Radius::Server::Backoff::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Radius::Server::Backoff::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Radius::Server::Backoff::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "exponential")
        return true;
    return false;
}

Native::Radius::Server::Backoff::Exponential::Exponential()
    :
    backoff_retry{YType::uint8, "backoff-retry"},
    max_delay{YType::uint8, "max-delay"}
{
    yang_name = "exponential"; yang_parent_name = "backoff";
}

Native::Radius::Server::Backoff::Exponential::~Exponential()
{
}

bool Native::Radius::Server::Backoff::Exponential::has_data() const
{
    return backoff_retry.is_set
	|| max_delay.is_set;
}

bool Native::Radius::Server::Backoff::Exponential::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(backoff_retry.yfilter)
	|| ydk::is_set(max_delay.yfilter);
}

std::string Native::Radius::Server::Backoff::Exponential::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exponential";

    return path_buffer.str();

}

const EntityPath Native::Radius::Server::Backoff::Exponential::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Exponential' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (backoff_retry.is_set || is_set(backoff_retry.yfilter)) leaf_name_data.push_back(backoff_retry.get_name_leafdata());
    if (max_delay.is_set || is_set(max_delay.yfilter)) leaf_name_data.push_back(max_delay.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Radius::Server::Backoff::Exponential::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Radius::Server::Backoff::Exponential::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Radius::Server::Backoff::Exponential::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "backoff-retry")
    {
        backoff_retry = value;
        backoff_retry.value_namespace = name_space;
        backoff_retry.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-delay")
    {
        max_delay = value;
        max_delay.value_namespace = name_space;
        max_delay.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Radius::Server::Backoff::Exponential::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "backoff-retry")
    {
        backoff_retry.yfilter = yfilter;
    }
    if(value_path == "max-delay")
    {
        max_delay.yfilter = yfilter;
    }
}

bool Native::Radius::Server::Backoff::Exponential::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "backoff-retry" || name == "max-delay")
        return true;
    return false;
}

Native::Radius::Server::Key::Key()
    :
    encryption{YType::enumeration, "encryption"},
    key{YType::str, "key"}
{
    yang_name = "key"; yang_parent_name = "server";
}

Native::Radius::Server::Key::~Key()
{
}

bool Native::Radius::Server::Key::has_data() const
{
    return encryption.is_set
	|| key.is_set;
}

bool Native::Radius::Server::Key::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(encryption.yfilter)
	|| ydk::is_set(key.yfilter);
}

std::string Native::Radius::Server::Key::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key";

    return path_buffer.str();

}

const EntityPath Native::Radius::Server::Key::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Key' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encryption.is_set || is_set(encryption.yfilter)) leaf_name_data.push_back(encryption.get_name_leafdata());
    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Radius::Server::Key::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Radius::Server::Key::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Radius::Server::Key::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "encryption")
    {
        encryption = value;
        encryption.value_namespace = name_space;
        encryption.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key")
    {
        key = value;
        key.value_namespace = name_space;
        key.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Radius::Server::Key::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "encryption")
    {
        encryption.yfilter = yfilter;
    }
    if(value_path == "key")
    {
        key.yfilter = yfilter;
    }
}

bool Native::Radius::Server::Key::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "encryption" || name == "key")
        return true;
    return false;
}

Native::Radius::Server::Pac::Pac()
    :
    key(std::make_shared<Native::Radius::Server::Pac::Key>())
{
    key->parent = this;

    yang_name = "pac"; yang_parent_name = "server";
}

Native::Radius::Server::Pac::~Pac()
{
}

bool Native::Radius::Server::Pac::has_data() const
{
    return (key !=  nullptr && key->has_data());
}

bool Native::Radius::Server::Pac::has_operation() const
{
    return is_set(yfilter)
	|| (key !=  nullptr && key->has_operation());
}

std::string Native::Radius::Server::Pac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pac";

    return path_buffer.str();

}

const EntityPath Native::Radius::Server::Pac::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Pac' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Radius::Server::Pac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key")
    {
        if(key == nullptr)
        {
            key = std::make_shared<Native::Radius::Server::Pac::Key>();
        }
        return key;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Radius::Server::Pac::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(key != nullptr)
    {
        children["key"] = key;
    }

    return children;
}

void Native::Radius::Server::Pac::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Radius::Server::Pac::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Radius::Server::Pac::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key")
        return true;
    return false;
}

Native::Radius::Server::Pac::Key::Key()
    :
    encryption{YType::enumeration, "encryption"},
    key{YType::str, "key"}
{
    yang_name = "key"; yang_parent_name = "pac";
}

Native::Radius::Server::Pac::Key::~Key()
{
}

bool Native::Radius::Server::Pac::Key::has_data() const
{
    return encryption.is_set
	|| key.is_set;
}

bool Native::Radius::Server::Pac::Key::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(encryption.yfilter)
	|| ydk::is_set(key.yfilter);
}

std::string Native::Radius::Server::Pac::Key::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key";

    return path_buffer.str();

}

const EntityPath Native::Radius::Server::Pac::Key::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Key' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encryption.is_set || is_set(encryption.yfilter)) leaf_name_data.push_back(encryption.get_name_leafdata());
    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Radius::Server::Pac::Key::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Radius::Server::Pac::Key::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Radius::Server::Pac::Key::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "encryption")
    {
        encryption = value;
        encryption.value_namespace = name_space;
        encryption.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key")
    {
        key = value;
        key.value_namespace = name_space;
        key.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Radius::Server::Pac::Key::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "encryption")
    {
        encryption.yfilter = yfilter;
    }
    if(value_path == "key")
    {
        key.yfilter = yfilter;
    }
}

bool Native::Radius::Server::Pac::Key::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "encryption" || name == "key")
        return true;
    return false;
}

Native::Zone::Zone()
{
    yang_name = "zone"; yang_parent_name = "native";
}

Native::Zone::~Zone()
{
}

bool Native::Zone::has_data() const
{
    for (std::size_t index=0; index<security.size(); index++)
    {
        if(security[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Zone::has_operation() const
{
    for (std::size_t index=0; index<security.size(); index++)
    {
        if(security[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Zone::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "zone";

    return path_buffer.str();

}

const EntityPath Native::Zone::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Native::Zone::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "security")
    {
        for(auto const & c : security)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Zone::Security>();
        c->parent = this;
        security.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Zone::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : security)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Zone::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Zone::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Zone::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "security")
        return true;
    return false;
}

Native::Zone::Security::Security()
    :
    id{YType::str, "id"},
    description{YType::str, "description"},
    protection{YType::str, "protection"}
{
    yang_name = "security"; yang_parent_name = "zone";
}

Native::Zone::Security::~Security()
{
}

bool Native::Zone::Security::has_data() const
{
    return id.is_set
	|| description.is_set
	|| protection.is_set;
}

bool Native::Zone::Security::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(protection.yfilter);
}

std::string Native::Zone::Security::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-zone:security" <<"[id='" <<id <<"']";

    return path_buffer.str();

}

const EntityPath Native::Zone::Security::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/zone/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (protection.is_set || is_set(protection.yfilter)) leaf_name_data.push_back(protection.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Zone::Security::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Zone::Security::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Zone::Security::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protection")
    {
        protection = value;
        protection.value_namespace = name_space;
        protection.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Zone::Security::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "protection")
    {
        protection.yfilter = yfilter;
    }
}

bool Native::Zone::Security::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "description" || name == "protection")
        return true;
    return false;
}

Native::ZonePair::ZonePair()
{
    yang_name = "zone-pair"; yang_parent_name = "native";
}

Native::ZonePair::~ZonePair()
{
}

bool Native::ZonePair::has_data() const
{
    for (std::size_t index=0; index<security.size(); index++)
    {
        if(security[index]->has_data())
            return true;
    }
    return false;
}

bool Native::ZonePair::has_operation() const
{
    for (std::size_t index=0; index<security.size(); index++)
    {
        if(security[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::ZonePair::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "zone-pair";

    return path_buffer.str();

}

const EntityPath Native::ZonePair::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Native::ZonePair::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "security")
    {
        for(auto const & c : security)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::ZonePair::Security>();
        c->parent = this;
        security.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ZonePair::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : security)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::ZonePair::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::ZonePair::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::ZonePair::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "security")
        return true;
    return false;
}

Native::ZonePair::Security::Security()
    :
    id{YType::str, "id"},
    description{YType::str, "description"},
    destination{YType::str, "destination"},
    source{YType::str, "source"}
    	,
    service_policy(std::make_shared<Native::ZonePair::Security::ServicePolicy>())
{
    service_policy->parent = this;

    yang_name = "security"; yang_parent_name = "zone-pair";
}

Native::ZonePair::Security::~Security()
{
}

bool Native::ZonePair::Security::has_data() const
{
    return id.is_set
	|| description.is_set
	|| destination.is_set
	|| source.is_set
	|| (service_policy !=  nullptr && service_policy->has_data());
}

bool Native::ZonePair::Security::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(destination.yfilter)
	|| ydk::is_set(source.yfilter)
	|| (service_policy !=  nullptr && service_policy->has_operation());
}

std::string Native::ZonePair::Security::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-zone:security" <<"[id='" <<id <<"']";

    return path_buffer.str();

}

const EntityPath Native::ZonePair::Security::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/zone-pair/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (destination.is_set || is_set(destination.yfilter)) leaf_name_data.push_back(destination.get_name_leafdata());
    if (source.is_set || is_set(source.yfilter)) leaf_name_data.push_back(source.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::ZonePair::Security::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "service-policy")
    {
        if(service_policy == nullptr)
        {
            service_policy = std::make_shared<Native::ZonePair::Security::ServicePolicy>();
        }
        return service_policy;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ZonePair::Security::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(service_policy != nullptr)
    {
        children["service-policy"] = service_policy;
    }

    return children;
}

void Native::ZonePair::Security::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination")
    {
        destination = value;
        destination.value_namespace = name_space;
        destination.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source")
    {
        source = value;
        source.value_namespace = name_space;
        source.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ZonePair::Security::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "destination")
    {
        destination.yfilter = yfilter;
    }
    if(value_path == "source")
    {
        source.yfilter = yfilter;
    }
}

bool Native::ZonePair::Security::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-policy" || name == "id" || name == "description" || name == "destination" || name == "source")
        return true;
    return false;
}

Native::ZonePair::Security::ServicePolicy::ServicePolicy()
    :
    type(std::make_shared<Native::ZonePair::Security::ServicePolicy::Type>())
{
    type->parent = this;

    yang_name = "service-policy"; yang_parent_name = "security";
}

Native::ZonePair::Security::ServicePolicy::~ServicePolicy()
{
}

bool Native::ZonePair::Security::ServicePolicy::has_data() const
{
    return (type !=  nullptr && type->has_data());
}

bool Native::ZonePair::Security::ServicePolicy::has_operation() const
{
    return is_set(yfilter)
	|| (type !=  nullptr && type->has_operation());
}

std::string Native::ZonePair::Security::ServicePolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-policy";

    return path_buffer.str();

}

const EntityPath Native::ZonePair::Security::ServicePolicy::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ServicePolicy' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::ZonePair::Security::ServicePolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "type")
    {
        if(type == nullptr)
        {
            type = std::make_shared<Native::ZonePair::Security::ServicePolicy::Type>();
        }
        return type;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ZonePair::Security::ServicePolicy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(type != nullptr)
    {
        children["type"] = type;
    }

    return children;
}

void Native::ZonePair::Security::ServicePolicy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::ZonePair::Security::ServicePolicy::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::ZonePair::Security::ServicePolicy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type")
        return true;
    return false;
}

Native::ZonePair::Security::ServicePolicy::Type::Type()
    :
    inspect{YType::str, "inspect"}
{
    yang_name = "type"; yang_parent_name = "service-policy";
}

Native::ZonePair::Security::ServicePolicy::Type::~Type()
{
}

bool Native::ZonePair::Security::ServicePolicy::Type::has_data() const
{
    return inspect.is_set;
}

bool Native::ZonePair::Security::ServicePolicy::Type::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(inspect.yfilter);
}

std::string Native::ZonePair::Security::ServicePolicy::Type::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "type";

    return path_buffer.str();

}

const EntityPath Native::ZonePair::Security::ServicePolicy::Type::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Type' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (inspect.is_set || is_set(inspect.yfilter)) leaf_name_data.push_back(inspect.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::ZonePair::Security::ServicePolicy::Type::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ZonePair::Security::ServicePolicy::Type::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::ZonePair::Security::ServicePolicy::Type::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "inspect")
    {
        inspect = value;
        inspect.value_namespace = name_space;
        inspect.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ZonePair::Security::ServicePolicy::Type::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "inspect")
    {
        inspect.yfilter = yfilter;
    }
}

bool Native::ZonePair::Security::ServicePolicy::Type::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inspect")
        return true;
    return false;
}

Native::AlarmContact::AlarmContact()
    :
    name{YType::uint8, "name"},
    description{YType::str, "description"},
    severity{YType::enumeration, "severity"},
    trigger{YType::enumeration, "trigger"}
{
    yang_name = "alarm-contact"; yang_parent_name = "native";
}

Native::AlarmContact::~AlarmContact()
{
}

bool Native::AlarmContact::has_data() const
{
    return name.is_set
	|| description.is_set
	|| severity.is_set
	|| trigger.is_set;
}

bool Native::AlarmContact::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(severity.yfilter)
	|| ydk::is_set(trigger.yfilter);
}

std::string Native::AlarmContact::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "alarm-contact" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Native::AlarmContact::get_entity_path(Entity* ancestor) const
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

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (severity.is_set || is_set(severity.yfilter)) leaf_name_data.push_back(severity.get_name_leafdata());
    if (trigger.is_set || is_set(trigger.yfilter)) leaf_name_data.push_back(trigger.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::AlarmContact::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::AlarmContact::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::AlarmContact::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "severity")
    {
        severity = value;
        severity.value_namespace = name_space;
        severity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trigger")
    {
        trigger = value;
        trigger.value_namespace = name_space;
        trigger.value_namespace_prefix = name_space_prefix;
    }
}

void Native::AlarmContact::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "severity")
    {
        severity.yfilter = yfilter;
    }
    if(value_path == "trigger")
    {
        trigger.yfilter = yfilter;
    }
}

bool Native::AlarmContact::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "description" || name == "severity" || name == "trigger")
        return true;
    return false;
}

Native::Ethernet::Ethernet()
    :
    cfm(std::make_shared<Native::Ethernet::Cfm>())
	,lmi(std::make_shared<Native::Ethernet::Lmi>())
{
    cfm->parent = this;

    lmi->parent = this;

    yang_name = "ethernet"; yang_parent_name = "native";
}

Native::Ethernet::~Ethernet()
{
}

bool Native::Ethernet::has_data() const
{
    for (std::size_t index=0; index<evc.size(); index++)
    {
        if(evc[index]->has_data())
            return true;
    }
    return (cfm !=  nullptr && cfm->has_data())
	|| (lmi !=  nullptr && lmi->has_data());
}

bool Native::Ethernet::has_operation() const
{
    for (std::size_t index=0; index<evc.size(); index++)
    {
        if(evc[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (cfm !=  nullptr && cfm->has_operation())
	|| (lmi !=  nullptr && lmi->has_operation());
}

std::string Native::Ethernet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ethernet";

    return path_buffer.str();

}

const EntityPath Native::Ethernet::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Native::Ethernet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cfm")
    {
        if(cfm == nullptr)
        {
            cfm = std::make_shared<Native::Ethernet::Cfm>();
        }
        return cfm;
    }

    if(child_yang_name == "evc")
    {
        for(auto const & c : evc)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ethernet::Evc>();
        c->parent = this;
        evc.push_back(c);
        return c;
    }

    if(child_yang_name == "lmi")
    {
        if(lmi == nullptr)
        {
            lmi = std::make_shared<Native::Ethernet::Lmi>();
        }
        return lmi;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ethernet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(cfm != nullptr)
    {
        children["cfm"] = cfm;
    }

    for (auto const & c : evc)
    {
        children[c->get_segment_path()] = c;
    }

    if(lmi != nullptr)
    {
        children["lmi"] = lmi;
    }

    return children;
}

void Native::Ethernet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ethernet::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ethernet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cfm" || name == "evc" || name == "lmi")
        return true;
    return false;
}

Native::Ethernet::Evc::Evc()
    :
    name{YType::str, "name"}
{
    yang_name = "evc"; yang_parent_name = "ethernet";
}

Native::Ethernet::Evc::~Evc()
{
}

bool Native::Ethernet::Evc::has_data() const
{
    return name.is_set;
}

bool Native::Ethernet::Evc::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Ethernet::Evc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-ethernet:evc" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Ethernet::Evc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ethernet/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ethernet::Evc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ethernet::Evc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ethernet::Evc::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ethernet::Evc::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Ethernet::Evc::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

Native::Ethernet::Lmi::Lmi()
    :
    ce{YType::empty, "ce"},
    global{YType::empty, "global"}
{
    yang_name = "lmi"; yang_parent_name = "ethernet";
}

Native::Ethernet::Lmi::~Lmi()
{
}

bool Native::Ethernet::Lmi::has_data() const
{
    return ce.is_set
	|| global.is_set;
}

bool Native::Ethernet::Lmi::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ce.yfilter)
	|| ydk::is_set(global.yfilter);
}

std::string Native::Ethernet::Lmi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-ethernet:lmi";

    return path_buffer.str();

}

const EntityPath Native::Ethernet::Lmi::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ethernet/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ce.is_set || is_set(ce.yfilter)) leaf_name_data.push_back(ce.get_name_leafdata());
    if (global.is_set || is_set(global.yfilter)) leaf_name_data.push_back(global.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ethernet::Lmi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ethernet::Lmi::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ethernet::Lmi::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ce")
    {
        ce = value;
        ce.value_namespace = name_space;
        ce.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "global")
    {
        global = value;
        global.value_namespace = name_space;
        global.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ethernet::Lmi::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ce")
    {
        ce.yfilter = yfilter;
    }
    if(value_path == "global")
    {
        global.yfilter = yfilter;
    }
}

bool Native::Ethernet::Lmi::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ce" || name == "global")
        return true;
    return false;
}

Native::Ethernet::Cfm::Cfm()
    :
    global{YType::empty, "global"},
    ieee{YType::empty, "ieee"}
    	,
    ais(std::make_shared<Native::Ethernet::Cfm::Ais>())
	,alarm(std::make_shared<Native::Ethernet::Cfm::Alarm>())
	,logging(nullptr) // presence node
	,mep(std::make_shared<Native::Ethernet::Cfm::Mep>())
	,mip(std::make_shared<Native::Ethernet::Cfm::Mip>())
	,traceroute(std::make_shared<Native::Ethernet::Cfm::Traceroute>())
{
    ais->parent = this;

    alarm->parent = this;

    mep->parent = this;

    mip->parent = this;

    traceroute->parent = this;

    yang_name = "cfm"; yang_parent_name = "ethernet";
}

Native::Ethernet::Cfm::~Cfm()
{
}

bool Native::Ethernet::Cfm::has_data() const
{
    for (std::size_t index=0; index<domain.size(); index++)
    {
        if(domain[index]->has_data())
            return true;
    }
    return global.is_set
	|| ieee.is_set
	|| (ais !=  nullptr && ais->has_data())
	|| (alarm !=  nullptr && alarm->has_data())
	|| (logging !=  nullptr && logging->has_data())
	|| (mep !=  nullptr && mep->has_data())
	|| (mip !=  nullptr && mip->has_data())
	|| (traceroute !=  nullptr && traceroute->has_data());
}

bool Native::Ethernet::Cfm::has_operation() const
{
    for (std::size_t index=0; index<domain.size(); index++)
    {
        if(domain[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(global.yfilter)
	|| ydk::is_set(ieee.yfilter)
	|| (ais !=  nullptr && ais->has_operation())
	|| (alarm !=  nullptr && alarm->has_operation())
	|| (logging !=  nullptr && logging->has_operation())
	|| (mep !=  nullptr && mep->has_operation())
	|| (mip !=  nullptr && mip->has_operation())
	|| (traceroute !=  nullptr && traceroute->has_operation());
}

std::string Native::Ethernet::Cfm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-ethernet:cfm";

    return path_buffer.str();

}

const EntityPath Native::Ethernet::Cfm::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ethernet/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (global.is_set || is_set(global.yfilter)) leaf_name_data.push_back(global.get_name_leafdata());
    if (ieee.is_set || is_set(ieee.yfilter)) leaf_name_data.push_back(ieee.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ethernet::Cfm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ais")
    {
        if(ais == nullptr)
        {
            ais = std::make_shared<Native::Ethernet::Cfm::Ais>();
        }
        return ais;
    }

    if(child_yang_name == "alarm")
    {
        if(alarm == nullptr)
        {
            alarm = std::make_shared<Native::Ethernet::Cfm::Alarm>();
        }
        return alarm;
    }

    if(child_yang_name == "domain")
    {
        for(auto const & c : domain)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ethernet::Cfm::Domain>();
        c->parent = this;
        domain.push_back(c);
        return c;
    }

    if(child_yang_name == "logging")
    {
        if(logging == nullptr)
        {
            logging = std::make_shared<Native::Ethernet::Cfm::Logging>();
        }
        return logging;
    }

    if(child_yang_name == "mep")
    {
        if(mep == nullptr)
        {
            mep = std::make_shared<Native::Ethernet::Cfm::Mep>();
        }
        return mep;
    }

    if(child_yang_name == "mip")
    {
        if(mip == nullptr)
        {
            mip = std::make_shared<Native::Ethernet::Cfm::Mip>();
        }
        return mip;
    }

    if(child_yang_name == "traceroute")
    {
        if(traceroute == nullptr)
        {
            traceroute = std::make_shared<Native::Ethernet::Cfm::Traceroute>();
        }
        return traceroute;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ethernet::Cfm::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ais != nullptr)
    {
        children["ais"] = ais;
    }

    if(alarm != nullptr)
    {
        children["alarm"] = alarm;
    }

    for (auto const & c : domain)
    {
        children[c->get_segment_path()] = c;
    }

    if(logging != nullptr)
    {
        children["logging"] = logging;
    }

    if(mep != nullptr)
    {
        children["mep"] = mep;
    }

    if(mip != nullptr)
    {
        children["mip"] = mip;
    }

    if(traceroute != nullptr)
    {
        children["traceroute"] = traceroute;
    }

    return children;
}

void Native::Ethernet::Cfm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "global")
    {
        global = value;
        global.value_namespace = name_space;
        global.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ieee")
    {
        ieee = value;
        ieee.value_namespace = name_space;
        ieee.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ethernet::Cfm::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "global")
    {
        global.yfilter = yfilter;
    }
    if(value_path == "ieee")
    {
        ieee.yfilter = yfilter;
    }
}

bool Native::Ethernet::Cfm::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ais" || name == "alarm" || name == "domain" || name == "logging" || name == "mep" || name == "mip" || name == "traceroute" || name == "global" || name == "ieee")
        return true;
    return false;
}

Native::Ethernet::Cfm::Ais::Ais()
    :
    link_status(std::make_shared<Native::Ethernet::Cfm::Ais::LinkStatus>())
{
    link_status->parent = this;

    yang_name = "ais"; yang_parent_name = "cfm";
}

Native::Ethernet::Cfm::Ais::~Ais()
{
}

bool Native::Ethernet::Cfm::Ais::has_data() const
{
    return (link_status !=  nullptr && link_status->has_data());
}

bool Native::Ethernet::Cfm::Ais::has_operation() const
{
    return is_set(yfilter)
	|| (link_status !=  nullptr && link_status->has_operation());
}

std::string Native::Ethernet::Cfm::Ais::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ais";

    return path_buffer.str();

}

const EntityPath Native::Ethernet::Cfm::Ais::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ethernet/Cisco-IOS-XE-ethernet:cfm/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ethernet::Cfm::Ais::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "link-status")
    {
        if(link_status == nullptr)
        {
            link_status = std::make_shared<Native::Ethernet::Cfm::Ais::LinkStatus>();
        }
        return link_status;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ethernet::Cfm::Ais::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(link_status != nullptr)
    {
        children["link-status"] = link_status;
    }

    return children;
}

void Native::Ethernet::Cfm::Ais::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ethernet::Cfm::Ais::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ethernet::Cfm::Ais::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "link-status")
        return true;
    return false;
}

Native::Ethernet::Cfm::Ais::LinkStatus::LinkStatus()
    :
    global(nullptr) // presence node
{
    yang_name = "link-status"; yang_parent_name = "ais";
}

Native::Ethernet::Cfm::Ais::LinkStatus::~LinkStatus()
{
}

bool Native::Ethernet::Cfm::Ais::LinkStatus::has_data() const
{
    return (global !=  nullptr && global->has_data());
}

bool Native::Ethernet::Cfm::Ais::LinkStatus::has_operation() const
{
    return is_set(yfilter)
	|| (global !=  nullptr && global->has_operation());
}

std::string Native::Ethernet::Cfm::Ais::LinkStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-status";

    return path_buffer.str();

}

const EntityPath Native::Ethernet::Cfm::Ais::LinkStatus::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ethernet/Cisco-IOS-XE-ethernet:cfm/ais/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ethernet::Cfm::Ais::LinkStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "global")
    {
        if(global == nullptr)
        {
            global = std::make_shared<Native::Ethernet::Cfm::Ais::LinkStatus::Global>();
        }
        return global;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ethernet::Cfm::Ais::LinkStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(global != nullptr)
    {
        children["global"] = global;
    }

    return children;
}

void Native::Ethernet::Cfm::Ais::LinkStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ethernet::Cfm::Ais::LinkStatus::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ethernet::Cfm::Ais::LinkStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "global")
        return true;
    return false;
}

Native::Ethernet::Cfm::Ais::LinkStatus::Global::Global()
    :
    cfm_mode__config_ais_link_cfm(std::make_shared<Native::Ethernet::Cfm::Ais::LinkStatus::Global::CfmMode__ConfigAisLinkCfm>())
{
    cfm_mode__config_ais_link_cfm->parent = this;

    yang_name = "global"; yang_parent_name = "link-status";
}

Native::Ethernet::Cfm::Ais::LinkStatus::Global::~Global()
{
}

bool Native::Ethernet::Cfm::Ais::LinkStatus::Global::has_data() const
{
    return (cfm_mode__config_ais_link_cfm !=  nullptr && cfm_mode__config_ais_link_cfm->has_data());
}

bool Native::Ethernet::Cfm::Ais::LinkStatus::Global::has_operation() const
{
    return is_set(yfilter)
	|| (cfm_mode__config_ais_link_cfm !=  nullptr && cfm_mode__config_ais_link_cfm->has_operation());
}

std::string Native::Ethernet::Cfm::Ais::LinkStatus::Global::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global";

    return path_buffer.str();

}

const EntityPath Native::Ethernet::Cfm::Ais::LinkStatus::Global::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ethernet/Cisco-IOS-XE-ethernet:cfm/ais/link-status/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ethernet::Cfm::Ais::LinkStatus::Global::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cfm-Mode__config-ais-link-cfm")
    {
        if(cfm_mode__config_ais_link_cfm == nullptr)
        {
            cfm_mode__config_ais_link_cfm = std::make_shared<Native::Ethernet::Cfm::Ais::LinkStatus::Global::CfmMode__ConfigAisLinkCfm>();
        }
        return cfm_mode__config_ais_link_cfm;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ethernet::Cfm::Ais::LinkStatus::Global::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(cfm_mode__config_ais_link_cfm != nullptr)
    {
        children["cfm-Mode__config-ais-link-cfm"] = cfm_mode__config_ais_link_cfm;
    }

    return children;
}

void Native::Ethernet::Cfm::Ais::LinkStatus::Global::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ethernet::Cfm::Ais::LinkStatus::Global::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ethernet::Cfm::Ais::LinkStatus::Global::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cfm-Mode__config-ais-link-cfm")
        return true;
    return false;
}

Native::Ethernet::Cfm::Ais::LinkStatus::Global::CfmMode__ConfigAisLinkCfm::CfmMode__ConfigAisLinkCfm()
    :
    disable{YType::empty, "disable"},
    level{YType::uint8, "level"}
    	,
    period(std::make_shared<Native::Ethernet::Cfm::Ais::LinkStatus::Global::CfmMode__ConfigAisLinkCfm::Period>())
{
    period->parent = this;

    yang_name = "cfm-Mode__config-ais-link-cfm"; yang_parent_name = "global";
}

Native::Ethernet::Cfm::Ais::LinkStatus::Global::CfmMode__ConfigAisLinkCfm::~CfmMode__ConfigAisLinkCfm()
{
}

bool Native::Ethernet::Cfm::Ais::LinkStatus::Global::CfmMode__ConfigAisLinkCfm::has_data() const
{
    return disable.is_set
	|| level.is_set
	|| (period !=  nullptr && period->has_data());
}

bool Native::Ethernet::Cfm::Ais::LinkStatus::Global::CfmMode__ConfigAisLinkCfm::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter)
	|| ydk::is_set(level.yfilter)
	|| (period !=  nullptr && period->has_operation());
}

std::string Native::Ethernet::Cfm::Ais::LinkStatus::Global::CfmMode__ConfigAisLinkCfm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cfm-Mode__config-ais-link-cfm";

    return path_buffer.str();

}

const EntityPath Native::Ethernet::Cfm::Ais::LinkStatus::Global::CfmMode__ConfigAisLinkCfm::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ethernet/Cisco-IOS-XE-ethernet:cfm/ais/link-status/global/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());
    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ethernet::Cfm::Ais::LinkStatus::Global::CfmMode__ConfigAisLinkCfm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "period")
    {
        if(period == nullptr)
        {
            period = std::make_shared<Native::Ethernet::Cfm::Ais::LinkStatus::Global::CfmMode__ConfigAisLinkCfm::Period>();
        }
        return period;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ethernet::Cfm::Ais::LinkStatus::Global::CfmMode__ConfigAisLinkCfm::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(period != nullptr)
    {
        children["period"] = period;
    }

    return children;
}

void Native::Ethernet::Cfm::Ais::LinkStatus::Global::CfmMode__ConfigAisLinkCfm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ethernet::Cfm::Ais::LinkStatus::Global::CfmMode__ConfigAisLinkCfm::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
}

bool Native::Ethernet::Cfm::Ais::LinkStatus::Global::CfmMode__ConfigAisLinkCfm::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "period" || name == "disable" || name == "level")
        return true;
    return false;
}

Native::Ethernet::Cfm::Ais::LinkStatus::Global::CfmMode__ConfigAisLinkCfm::Period::Period()
    :
    tp_1{YType::empty, "tp-1"},
    tp_60{YType::empty, "tp-60"}
{
    yang_name = "period"; yang_parent_name = "cfm-Mode__config-ais-link-cfm";
}

Native::Ethernet::Cfm::Ais::LinkStatus::Global::CfmMode__ConfigAisLinkCfm::Period::~Period()
{
}

bool Native::Ethernet::Cfm::Ais::LinkStatus::Global::CfmMode__ConfigAisLinkCfm::Period::has_data() const
{
    return tp_1.is_set
	|| tp_60.is_set;
}

bool Native::Ethernet::Cfm::Ais::LinkStatus::Global::CfmMode__ConfigAisLinkCfm::Period::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tp_1.yfilter)
	|| ydk::is_set(tp_60.yfilter);
}

std::string Native::Ethernet::Cfm::Ais::LinkStatus::Global::CfmMode__ConfigAisLinkCfm::Period::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "period";

    return path_buffer.str();

}

const EntityPath Native::Ethernet::Cfm::Ais::LinkStatus::Global::CfmMode__ConfigAisLinkCfm::Period::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ethernet/Cisco-IOS-XE-ethernet:cfm/ais/link-status/global/cfm-Mode__config-ais-link-cfm/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tp_1.is_set || is_set(tp_1.yfilter)) leaf_name_data.push_back(tp_1.get_name_leafdata());
    if (tp_60.is_set || is_set(tp_60.yfilter)) leaf_name_data.push_back(tp_60.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ethernet::Cfm::Ais::LinkStatus::Global::CfmMode__ConfigAisLinkCfm::Period::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ethernet::Cfm::Ais::LinkStatus::Global::CfmMode__ConfigAisLinkCfm::Period::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ethernet::Cfm::Ais::LinkStatus::Global::CfmMode__ConfigAisLinkCfm::Period::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tp-1")
    {
        tp_1 = value;
        tp_1.value_namespace = name_space;
        tp_1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tp-60")
    {
        tp_60 = value;
        tp_60.value_namespace = name_space;
        tp_60.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ethernet::Cfm::Ais::LinkStatus::Global::CfmMode__ConfigAisLinkCfm::Period::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tp-1")
    {
        tp_1.yfilter = yfilter;
    }
    if(value_path == "tp-60")
    {
        tp_60.yfilter = yfilter;
    }
}

bool Native::Ethernet::Cfm::Ais::LinkStatus::Global::CfmMode__ConfigAisLinkCfm::Period::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tp-1" || name == "tp-60")
        return true;
    return false;
}

Native::Ethernet::Cfm::Alarm::Alarm()
    :
    delay{YType::uint16, "delay"},
    packet{YType::uint16, "packet"},
    reset{YType::uint16, "reset"}
    	,
    notification(std::make_shared<Native::Ethernet::Cfm::Alarm::Notification>())
{
    notification->parent = this;

    yang_name = "alarm"; yang_parent_name = "cfm";
}

Native::Ethernet::Cfm::Alarm::~Alarm()
{
}

bool Native::Ethernet::Cfm::Alarm::has_data() const
{
    return delay.is_set
	|| packet.is_set
	|| reset.is_set
	|| (notification !=  nullptr && notification->has_data());
}

bool Native::Ethernet::Cfm::Alarm::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(delay.yfilter)
	|| ydk::is_set(packet.yfilter)
	|| ydk::is_set(reset.yfilter)
	|| (notification !=  nullptr && notification->has_operation());
}

std::string Native::Ethernet::Cfm::Alarm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "alarm";

    return path_buffer.str();

}

const EntityPath Native::Ethernet::Cfm::Alarm::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ethernet/Cisco-IOS-XE-ethernet:cfm/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (delay.is_set || is_set(delay.yfilter)) leaf_name_data.push_back(delay.get_name_leafdata());
    if (packet.is_set || is_set(packet.yfilter)) leaf_name_data.push_back(packet.get_name_leafdata());
    if (reset.is_set || is_set(reset.yfilter)) leaf_name_data.push_back(reset.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ethernet::Cfm::Alarm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "notification")
    {
        if(notification == nullptr)
        {
            notification = std::make_shared<Native::Ethernet::Cfm::Alarm::Notification>();
        }
        return notification;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ethernet::Cfm::Alarm::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(notification != nullptr)
    {
        children["notification"] = notification;
    }

    return children;
}

void Native::Ethernet::Cfm::Alarm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "delay")
    {
        delay = value;
        delay.value_namespace = name_space;
        delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet")
    {
        packet = value;
        packet.value_namespace = name_space;
        packet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reset")
    {
        reset = value;
        reset.value_namespace = name_space;
        reset.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ethernet::Cfm::Alarm::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "delay")
    {
        delay.yfilter = yfilter;
    }
    if(value_path == "packet")
    {
        packet.yfilter = yfilter;
    }
    if(value_path == "reset")
    {
        reset.yfilter = yfilter;
    }
}

bool Native::Ethernet::Cfm::Alarm::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "notification" || name == "delay" || name == "packet" || name == "reset")
        return true;
    return false;
}

Native::Ethernet::Cfm::Alarm::Notification::Notification()
    :
    all{YType::empty, "all"},
    error_xcon{YType::empty, "error-xcon"},
    mac_remote_error_xcon{YType::empty, "mac-remote-error-xcon"},
    none{YType::empty, "none"},
    remote_error_xcon{YType::empty, "remote-error-xcon"},
    xcon{YType::empty, "xcon"}
{
    yang_name = "notification"; yang_parent_name = "alarm";
}

Native::Ethernet::Cfm::Alarm::Notification::~Notification()
{
}

bool Native::Ethernet::Cfm::Alarm::Notification::has_data() const
{
    return all.is_set
	|| error_xcon.is_set
	|| mac_remote_error_xcon.is_set
	|| none.is_set
	|| remote_error_xcon.is_set
	|| xcon.is_set;
}

bool Native::Ethernet::Cfm::Alarm::Notification::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(all.yfilter)
	|| ydk::is_set(error_xcon.yfilter)
	|| ydk::is_set(mac_remote_error_xcon.yfilter)
	|| ydk::is_set(none.yfilter)
	|| ydk::is_set(remote_error_xcon.yfilter)
	|| ydk::is_set(xcon.yfilter);
}

std::string Native::Ethernet::Cfm::Alarm::Notification::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "notification";

    return path_buffer.str();

}

const EntityPath Native::Ethernet::Cfm::Alarm::Notification::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ethernet/Cisco-IOS-XE-ethernet:cfm/alarm/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all.is_set || is_set(all.yfilter)) leaf_name_data.push_back(all.get_name_leafdata());
    if (error_xcon.is_set || is_set(error_xcon.yfilter)) leaf_name_data.push_back(error_xcon.get_name_leafdata());
    if (mac_remote_error_xcon.is_set || is_set(mac_remote_error_xcon.yfilter)) leaf_name_data.push_back(mac_remote_error_xcon.get_name_leafdata());
    if (none.is_set || is_set(none.yfilter)) leaf_name_data.push_back(none.get_name_leafdata());
    if (remote_error_xcon.is_set || is_set(remote_error_xcon.yfilter)) leaf_name_data.push_back(remote_error_xcon.get_name_leafdata());
    if (xcon.is_set || is_set(xcon.yfilter)) leaf_name_data.push_back(xcon.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ethernet::Cfm::Alarm::Notification::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ethernet::Cfm::Alarm::Notification::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ethernet::Cfm::Alarm::Notification::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "all")
    {
        all = value;
        all.value_namespace = name_space;
        all.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error-xcon")
    {
        error_xcon = value;
        error_xcon.value_namespace = name_space;
        error_xcon.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-remote-error-xcon")
    {
        mac_remote_error_xcon = value;
        mac_remote_error_xcon.value_namespace = name_space;
        mac_remote_error_xcon.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "none")
    {
        none = value;
        none.value_namespace = name_space;
        none.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-error-xcon")
    {
        remote_error_xcon = value;
        remote_error_xcon.value_namespace = name_space;
        remote_error_xcon.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "xcon")
    {
        xcon = value;
        xcon.value_namespace = name_space;
        xcon.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ethernet::Cfm::Alarm::Notification::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "all")
    {
        all.yfilter = yfilter;
    }
    if(value_path == "error-xcon")
    {
        error_xcon.yfilter = yfilter;
    }
    if(value_path == "mac-remote-error-xcon")
    {
        mac_remote_error_xcon.yfilter = yfilter;
    }
    if(value_path == "none")
    {
        none.yfilter = yfilter;
    }
    if(value_path == "remote-error-xcon")
    {
        remote_error_xcon.yfilter = yfilter;
    }
    if(value_path == "xcon")
    {
        xcon.yfilter = yfilter;
    }
}

bool Native::Ethernet::Cfm::Alarm::Notification::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all" || name == "error-xcon" || name == "mac-remote-error-xcon" || name == "none" || name == "remote-error-xcon" || name == "xcon")
        return true;
    return false;
}

Native::Ethernet::Cfm::Domain::Domain()
    :
    name{YType::str, "name"},
    level{YType::uint8, "level"}
{
    yang_name = "domain"; yang_parent_name = "cfm";
}

Native::Ethernet::Cfm::Domain::~Domain()
{
}

bool Native::Ethernet::Cfm::Domain::has_data() const
{
    for (std::size_t index=0; index<service.size(); index++)
    {
        if(service[index]->has_data())
            return true;
    }
    return name.is_set
	|| level.is_set;
}

bool Native::Ethernet::Cfm::Domain::has_operation() const
{
    for (std::size_t index=0; index<service.size(); index++)
    {
        if(service[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(level.yfilter);
}

std::string Native::Ethernet::Cfm::Domain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "domain" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Ethernet::Cfm::Domain::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ethernet/Cisco-IOS-XE-ethernet:cfm/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ethernet::Cfm::Domain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "service")
    {
        for(auto const & c : service)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ethernet::Cfm::Domain::Service>();
        c->parent = this;
        service.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ethernet::Cfm::Domain::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : service)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Ethernet::Cfm::Domain::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ethernet::Cfm::Domain::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
}

bool Native::Ethernet::Cfm::Domain::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service" || name == "name" || name == "level")
        return true;
    return false;
}

Native::Ethernet::Cfm::Domain::Service::Service()
    :
    name{YType::str, "name"},
    evc{YType::str, "evc"},
    vlan{YType::uint16, "vlan"}
    	,
    continuity_check(nullptr) // presence node
{
    yang_name = "service"; yang_parent_name = "domain";
}

Native::Ethernet::Cfm::Domain::Service::~Service()
{
}

bool Native::Ethernet::Cfm::Domain::Service::has_data() const
{
    return name.is_set
	|| evc.is_set
	|| vlan.is_set
	|| (continuity_check !=  nullptr && continuity_check->has_data());
}

bool Native::Ethernet::Cfm::Domain::Service::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(evc.yfilter)
	|| ydk::is_set(vlan.yfilter)
	|| (continuity_check !=  nullptr && continuity_check->has_operation());
}

std::string Native::Ethernet::Cfm::Domain::Service::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Ethernet::Cfm::Domain::Service::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Service' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (evc.is_set || is_set(evc.yfilter)) leaf_name_data.push_back(evc.get_name_leafdata());
    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ethernet::Cfm::Domain::Service::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "continuity-check")
    {
        if(continuity_check == nullptr)
        {
            continuity_check = std::make_shared<Native::Ethernet::Cfm::Domain::Service::ContinuityCheck>();
        }
        return continuity_check;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ethernet::Cfm::Domain::Service::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(continuity_check != nullptr)
    {
        children["continuity-check"] = continuity_check;
    }

    return children;
}

void Native::Ethernet::Cfm::Domain::Service::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "evc")
    {
        evc = value;
        evc.value_namespace = name_space;
        evc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ethernet::Cfm::Domain::Service::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "evc")
    {
        evc.yfilter = yfilter;
    }
    if(value_path == "vlan")
    {
        vlan.yfilter = yfilter;
    }
}

bool Native::Ethernet::Cfm::Domain::Service::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "continuity-check" || name == "name" || name == "evc" || name == "vlan")
        return true;
    return false;
}

Native::Ethernet::Cfm::Domain::Service::ContinuityCheck::ContinuityCheck()
{
    yang_name = "continuity-check"; yang_parent_name = "service";
}

Native::Ethernet::Cfm::Domain::Service::ContinuityCheck::~ContinuityCheck()
{
}

bool Native::Ethernet::Cfm::Domain::Service::ContinuityCheck::has_data() const
{
    return false;
}

bool Native::Ethernet::Cfm::Domain::Service::ContinuityCheck::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Ethernet::Cfm::Domain::Service::ContinuityCheck::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "continuity-check";

    return path_buffer.str();

}

const EntityPath Native::Ethernet::Cfm::Domain::Service::ContinuityCheck::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ContinuityCheck' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ethernet::Cfm::Domain::Service::ContinuityCheck::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ethernet::Cfm::Domain::Service::ContinuityCheck::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ethernet::Cfm::Domain::Service::ContinuityCheck::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ethernet::Cfm::Domain::Service::ContinuityCheck::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ethernet::Cfm::Domain::Service::ContinuityCheck::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Ethernet::Cfm::Logging::Logging()
    :
    ais{YType::empty, "ais"}
    	,
    alarm(std::make_shared<Native::Ethernet::Cfm::Logging::Alarm>())
{
    alarm->parent = this;

    yang_name = "logging"; yang_parent_name = "cfm";
}

Native::Ethernet::Cfm::Logging::~Logging()
{
}

bool Native::Ethernet::Cfm::Logging::has_data() const
{
    return ais.is_set
	|| (alarm !=  nullptr && alarm->has_data());
}

bool Native::Ethernet::Cfm::Logging::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ais.yfilter)
	|| (alarm !=  nullptr && alarm->has_operation());
}

std::string Native::Ethernet::Cfm::Logging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "logging";

    return path_buffer.str();

}

const EntityPath Native::Ethernet::Cfm::Logging::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ethernet/Cisco-IOS-XE-ethernet:cfm/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ais.is_set || is_set(ais.yfilter)) leaf_name_data.push_back(ais.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ethernet::Cfm::Logging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "alarm")
    {
        if(alarm == nullptr)
        {
            alarm = std::make_shared<Native::Ethernet::Cfm::Logging::Alarm>();
        }
        return alarm;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ethernet::Cfm::Logging::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(alarm != nullptr)
    {
        children["alarm"] = alarm;
    }

    return children;
}

void Native::Ethernet::Cfm::Logging::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ais")
    {
        ais = value;
        ais.value_namespace = name_space;
        ais.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ethernet::Cfm::Logging::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ais")
    {
        ais.yfilter = yfilter;
    }
}

bool Native::Ethernet::Cfm::Logging::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "alarm" || name == "ais")
        return true;
    return false;
}

Native::Ethernet::Cfm::Logging::Alarm::Alarm()
    :
    cisco{YType::empty, "cisco"},
    ieee{YType::empty, "ieee"}
{
    yang_name = "alarm"; yang_parent_name = "logging";
}

Native::Ethernet::Cfm::Logging::Alarm::~Alarm()
{
}

bool Native::Ethernet::Cfm::Logging::Alarm::has_data() const
{
    return cisco.is_set
	|| ieee.is_set;
}

bool Native::Ethernet::Cfm::Logging::Alarm::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cisco.yfilter)
	|| ydk::is_set(ieee.yfilter);
}

std::string Native::Ethernet::Cfm::Logging::Alarm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "alarm";

    return path_buffer.str();

}

const EntityPath Native::Ethernet::Cfm::Logging::Alarm::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ethernet/Cisco-IOS-XE-ethernet:cfm/logging/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cisco.is_set || is_set(cisco.yfilter)) leaf_name_data.push_back(cisco.get_name_leafdata());
    if (ieee.is_set || is_set(ieee.yfilter)) leaf_name_data.push_back(ieee.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ethernet::Cfm::Logging::Alarm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ethernet::Cfm::Logging::Alarm::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ethernet::Cfm::Logging::Alarm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cisco")
    {
        cisco = value;
        cisco.value_namespace = name_space;
        cisco.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ieee")
    {
        ieee = value;
        ieee.value_namespace = name_space;
        ieee.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ethernet::Cfm::Logging::Alarm::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cisco")
    {
        cisco.yfilter = yfilter;
    }
    if(value_path == "ieee")
    {
        ieee.yfilter = yfilter;
    }
}

bool Native::Ethernet::Cfm::Logging::Alarm::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cisco" || name == "ieee")
        return true;
    return false;
}

Native::Ethernet::Cfm::Mep::Mep()
    :
    crosscheck(std::make_shared<Native::Ethernet::Cfm::Mep::Crosscheck>())
{
    crosscheck->parent = this;

    yang_name = "mep"; yang_parent_name = "cfm";
}

Native::Ethernet::Cfm::Mep::~Mep()
{
}

bool Native::Ethernet::Cfm::Mep::has_data() const
{
    return (crosscheck !=  nullptr && crosscheck->has_data());
}

bool Native::Ethernet::Cfm::Mep::has_operation() const
{
    return is_set(yfilter)
	|| (crosscheck !=  nullptr && crosscheck->has_operation());
}

std::string Native::Ethernet::Cfm::Mep::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mep";

    return path_buffer.str();

}

const EntityPath Native::Ethernet::Cfm::Mep::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ethernet/Cisco-IOS-XE-ethernet:cfm/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ethernet::Cfm::Mep::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "crosscheck")
    {
        if(crosscheck == nullptr)
        {
            crosscheck = std::make_shared<Native::Ethernet::Cfm::Mep::Crosscheck>();
        }
        return crosscheck;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ethernet::Cfm::Mep::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(crosscheck != nullptr)
    {
        children["crosscheck"] = crosscheck;
    }

    return children;
}

void Native::Ethernet::Cfm::Mep::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ethernet::Cfm::Mep::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ethernet::Cfm::Mep::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "crosscheck")
        return true;
    return false;
}

Native::Ethernet::Cfm::Mep::Crosscheck::Crosscheck()
    :
    start_delay{YType::uint16, "start-delay"}
{
    yang_name = "crosscheck"; yang_parent_name = "mep";
}

Native::Ethernet::Cfm::Mep::Crosscheck::~Crosscheck()
{
}

bool Native::Ethernet::Cfm::Mep::Crosscheck::has_data() const
{
    return start_delay.is_set;
}

bool Native::Ethernet::Cfm::Mep::Crosscheck::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(start_delay.yfilter);
}

std::string Native::Ethernet::Cfm::Mep::Crosscheck::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "crosscheck";

    return path_buffer.str();

}

const EntityPath Native::Ethernet::Cfm::Mep::Crosscheck::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ethernet/Cisco-IOS-XE-ethernet:cfm/mep/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (start_delay.is_set || is_set(start_delay.yfilter)) leaf_name_data.push_back(start_delay.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ethernet::Cfm::Mep::Crosscheck::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ethernet::Cfm::Mep::Crosscheck::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ethernet::Cfm::Mep::Crosscheck::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "start-delay")
    {
        start_delay = value;
        start_delay.value_namespace = name_space;
        start_delay.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ethernet::Cfm::Mep::Crosscheck::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "start-delay")
    {
        start_delay.yfilter = yfilter;
    }
}

bool Native::Ethernet::Cfm::Mep::Crosscheck::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "start-delay")
        return true;
    return false;
}

Native::Ethernet::Cfm::Mip::Mip()
    :
    filter{YType::empty, "filter"}
    	,
    auto_create(std::make_shared<Native::Ethernet::Cfm::Mip::AutoCreate>())
{
    auto_create->parent = this;

    yang_name = "mip"; yang_parent_name = "cfm";
}

Native::Ethernet::Cfm::Mip::~Mip()
{
}

bool Native::Ethernet::Cfm::Mip::has_data() const
{
    return filter.is_set
	|| (auto_create !=  nullptr && auto_create->has_data());
}

bool Native::Ethernet::Cfm::Mip::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(filter.yfilter)
	|| (auto_create !=  nullptr && auto_create->has_operation());
}

std::string Native::Ethernet::Cfm::Mip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mip";

    return path_buffer.str();

}

const EntityPath Native::Ethernet::Cfm::Mip::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ethernet/Cisco-IOS-XE-ethernet:cfm/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (filter.is_set || is_set(filter.yfilter)) leaf_name_data.push_back(filter.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ethernet::Cfm::Mip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "auto-create")
    {
        if(auto_create == nullptr)
        {
            auto_create = std::make_shared<Native::Ethernet::Cfm::Mip::AutoCreate>();
        }
        return auto_create;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ethernet::Cfm::Mip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(auto_create != nullptr)
    {
        children["auto-create"] = auto_create;
    }

    return children;
}

void Native::Ethernet::Cfm::Mip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "filter")
    {
        filter = value;
        filter.value_namespace = name_space;
        filter.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ethernet::Cfm::Mip::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "filter")
    {
        filter.yfilter = yfilter;
    }
}

bool Native::Ethernet::Cfm::Mip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auto-create" || name == "filter")
        return true;
    return false;
}

Native::Ethernet::Cfm::Mip::AutoCreate::AutoCreate()
    :
    level(std::make_shared<Native::Ethernet::Cfm::Mip::AutoCreate::Level>())
{
    level->parent = this;

    yang_name = "auto-create"; yang_parent_name = "mip";
}

Native::Ethernet::Cfm::Mip::AutoCreate::~AutoCreate()
{
}

bool Native::Ethernet::Cfm::Mip::AutoCreate::has_data() const
{
    return (level !=  nullptr && level->has_data());
}

bool Native::Ethernet::Cfm::Mip::AutoCreate::has_operation() const
{
    return is_set(yfilter)
	|| (level !=  nullptr && level->has_operation());
}

std::string Native::Ethernet::Cfm::Mip::AutoCreate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto-create";

    return path_buffer.str();

}

const EntityPath Native::Ethernet::Cfm::Mip::AutoCreate::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ethernet/Cisco-IOS-XE-ethernet:cfm/mip/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ethernet::Cfm::Mip::AutoCreate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "level")
    {
        if(level == nullptr)
        {
            level = std::make_shared<Native::Ethernet::Cfm::Mip::AutoCreate::Level>();
        }
        return level;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ethernet::Cfm::Mip::AutoCreate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(level != nullptr)
    {
        children["level"] = level;
    }

    return children;
}

void Native::Ethernet::Cfm::Mip::AutoCreate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ethernet::Cfm::Mip::AutoCreate::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ethernet::Cfm::Mip::AutoCreate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level")
        return true;
    return false;
}

Native::Ethernet::Cfm::Mip::AutoCreate::Level::Level()
{
    yang_name = "level"; yang_parent_name = "auto-create";
}

Native::Ethernet::Cfm::Mip::AutoCreate::Level::~Level()
{
}

bool Native::Ethernet::Cfm::Mip::AutoCreate::Level::has_data() const
{
    for (std::size_t index=0; index<mef_num.size(); index++)
    {
        if(mef_num[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Ethernet::Cfm::Mip::AutoCreate::Level::has_operation() const
{
    for (std::size_t index=0; index<mef_num.size(); index++)
    {
        if(mef_num[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Ethernet::Cfm::Mip::AutoCreate::Level::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "level";

    return path_buffer.str();

}

const EntityPath Native::Ethernet::Cfm::Mip::AutoCreate::Level::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ethernet/Cisco-IOS-XE-ethernet:cfm/mip/auto-create/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ethernet::Cfm::Mip::AutoCreate::Level::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mef-num")
    {
        for(auto const & c : mef_num)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ethernet::Cfm::Mip::AutoCreate::Level::MefNum>();
        c->parent = this;
        mef_num.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ethernet::Cfm::Mip::AutoCreate::Level::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : mef_num)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Ethernet::Cfm::Mip::AutoCreate::Level::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ethernet::Cfm::Mip::AutoCreate::Level::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ethernet::Cfm::Mip::AutoCreate::Level::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mef-num")
        return true;
    return false;
}

Native::Ethernet::Cfm::Mip::AutoCreate::Level::MefNum::MefNum()
    :
    mef_num{YType::uint8, "mef-num"},
    evc{YType::str, "evc"},
    vlan{YType::uint16, "vlan"}
{
    yang_name = "mef-num"; yang_parent_name = "level";
}

Native::Ethernet::Cfm::Mip::AutoCreate::Level::MefNum::~MefNum()
{
}

bool Native::Ethernet::Cfm::Mip::AutoCreate::Level::MefNum::has_data() const
{
    return mef_num.is_set
	|| evc.is_set
	|| vlan.is_set;
}

bool Native::Ethernet::Cfm::Mip::AutoCreate::Level::MefNum::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mef_num.yfilter)
	|| ydk::is_set(evc.yfilter)
	|| ydk::is_set(vlan.yfilter);
}

std::string Native::Ethernet::Cfm::Mip::AutoCreate::Level::MefNum::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mef-num" <<"[mef-num='" <<mef_num <<"']";

    return path_buffer.str();

}

const EntityPath Native::Ethernet::Cfm::Mip::AutoCreate::Level::MefNum::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ethernet/Cisco-IOS-XE-ethernet:cfm/mip/auto-create/level/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mef_num.is_set || is_set(mef_num.yfilter)) leaf_name_data.push_back(mef_num.get_name_leafdata());
    if (evc.is_set || is_set(evc.yfilter)) leaf_name_data.push_back(evc.get_name_leafdata());
    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ethernet::Cfm::Mip::AutoCreate::Level::MefNum::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ethernet::Cfm::Mip::AutoCreate::Level::MefNum::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ethernet::Cfm::Mip::AutoCreate::Level::MefNum::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mef-num")
    {
        mef_num = value;
        mef_num.value_namespace = name_space;
        mef_num.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "evc")
    {
        evc = value;
        evc.value_namespace = name_space;
        evc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ethernet::Cfm::Mip::AutoCreate::Level::MefNum::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mef-num")
    {
        mef_num.yfilter = yfilter;
    }
    if(value_path == "evc")
    {
        evc.yfilter = yfilter;
    }
    if(value_path == "vlan")
    {
        vlan.yfilter = yfilter;
    }
}

bool Native::Ethernet::Cfm::Mip::AutoCreate::Level::MefNum::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mef-num" || name == "evc" || name == "vlan")
        return true;
    return false;
}

Native::Ethernet::Cfm::Traceroute::Traceroute()
    :
    cache(nullptr) // presence node
{
    yang_name = "traceroute"; yang_parent_name = "cfm";
}

Native::Ethernet::Cfm::Traceroute::~Traceroute()
{
}

bool Native::Ethernet::Cfm::Traceroute::has_data() const
{
    return (cache !=  nullptr && cache->has_data());
}

bool Native::Ethernet::Cfm::Traceroute::has_operation() const
{
    return is_set(yfilter)
	|| (cache !=  nullptr && cache->has_operation());
}

std::string Native::Ethernet::Cfm::Traceroute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "traceroute";

    return path_buffer.str();

}

const EntityPath Native::Ethernet::Cfm::Traceroute::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ethernet/Cisco-IOS-XE-ethernet:cfm/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ethernet::Cfm::Traceroute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cache")
    {
        if(cache == nullptr)
        {
            cache = std::make_shared<Native::Ethernet::Cfm::Traceroute::Cache>();
        }
        return cache;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ethernet::Cfm::Traceroute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(cache != nullptr)
    {
        children["cache"] = cache;
    }

    return children;
}

void Native::Ethernet::Cfm::Traceroute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ethernet::Cfm::Traceroute::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ethernet::Cfm::Traceroute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cache")
        return true;
    return false;
}

Native::Ethernet::Cfm::Traceroute::Cache::Cache()
    :
    hold_time{YType::uint16, "hold-time"},
    size{YType::uint16, "size"}
{
    yang_name = "cache"; yang_parent_name = "traceroute";
}

Native::Ethernet::Cfm::Traceroute::Cache::~Cache()
{
}

bool Native::Ethernet::Cfm::Traceroute::Cache::has_data() const
{
    return hold_time.is_set
	|| size.is_set;
}

bool Native::Ethernet::Cfm::Traceroute::Cache::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hold_time.yfilter)
	|| ydk::is_set(size.yfilter);
}

std::string Native::Ethernet::Cfm::Traceroute::Cache::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cache";

    return path_buffer.str();

}

const EntityPath Native::Ethernet::Cfm::Traceroute::Cache::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ethernet/Cisco-IOS-XE-ethernet:cfm/traceroute/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hold_time.is_set || is_set(hold_time.yfilter)) leaf_name_data.push_back(hold_time.get_name_leafdata());
    if (size.is_set || is_set(size.yfilter)) leaf_name_data.push_back(size.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ethernet::Cfm::Traceroute::Cache::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ethernet::Cfm::Traceroute::Cache::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ethernet::Cfm::Traceroute::Cache::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hold-time")
    {
        hold_time = value;
        hold_time.value_namespace = name_space;
        hold_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "size")
    {
        size = value;
        size.value_namespace = name_space;
        size.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ethernet::Cfm::Traceroute::Cache::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hold-time")
    {
        hold_time.yfilter = yfilter;
    }
    if(value_path == "size")
    {
        size.yfilter = yfilter;
    }
}

bool Native::Ethernet::Cfm::Traceroute::Cache::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hold-time" || name == "size")
        return true;
    return false;
}

Native::AccessList::AccessList()
{
    yang_name = "access-list"; yang_parent_name = "native";
}

Native::AccessList::~AccessList()
{
}

bool Native::AccessList::has_data() const
{
    return false;
}

bool Native::AccessList::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::AccessList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access-list";

    return path_buffer.str();

}

const EntityPath Native::AccessList::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Native::AccessList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::AccessList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::AccessList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::AccessList::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::AccessList::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

const Enum::YLeaf Native::PortChannel::LoadBalance::LoadBalance_::dst_ip {0, "dst-ip"};
const Enum::YLeaf Native::PortChannel::LoadBalance::LoadBalance_::dst_mac {1, "dst-mac"};
const Enum::YLeaf Native::PortChannel::LoadBalance::LoadBalance_::dst_mixed_ip_port {2, "dst-mixed-ip-port"};
const Enum::YLeaf Native::PortChannel::LoadBalance::LoadBalance_::dst_port {3, "dst-port"};
const Enum::YLeaf Native::PortChannel::LoadBalance::LoadBalance_::mpls {4, "mpls"};
const Enum::YLeaf Native::PortChannel::LoadBalance::LoadBalance_::src_dst_ip {5, "src-dst-ip"};
const Enum::YLeaf Native::PortChannel::LoadBalance::LoadBalance_::src_dst_mac {6, "src-dst-mac"};
const Enum::YLeaf Native::PortChannel::LoadBalance::LoadBalance_::src_dst_mixed_ip_port {7, "src-dst-mixed-ip-port"};
const Enum::YLeaf Native::PortChannel::LoadBalance::LoadBalance_::src_dst_port {8, "src-dst-port"};
const Enum::YLeaf Native::PortChannel::LoadBalance::LoadBalance_::src_ip {9, "src-ip"};
const Enum::YLeaf Native::PortChannel::LoadBalance::LoadBalance_::src_mac {10, "src-mac"};
const Enum::YLeaf Native::PortChannel::LoadBalance::LoadBalance_::src_mixed_ip_port {11, "src-mixed-ip-port"};
const Enum::YLeaf Native::PortChannel::LoadBalance::LoadBalance_::src_port {12, "src-port"};

const Enum::YLeaf Native::PortChannel::LoadBalance::Extended::Extended_::dst_ip {0, "dst-ip"};
const Enum::YLeaf Native::PortChannel::LoadBalance::Extended::Extended_::dst_mac {1, "dst-mac"};
const Enum::YLeaf Native::PortChannel::LoadBalance::Extended::Extended_::dst_port {2, "dst-port"};
const Enum::YLeaf Native::PortChannel::LoadBalance::Extended::Extended_::ipv6_label {3, "ipv6-label"};
const Enum::YLeaf Native::PortChannel::LoadBalance::Extended::Extended_::l3_proto {4, "l3-proto"};
const Enum::YLeaf Native::PortChannel::LoadBalance::Extended::Extended_::src_ip {5, "src-ip"};
const Enum::YLeaf Native::PortChannel::LoadBalance::Extended::Extended_::src_mac {6, "src-mac"};
const Enum::YLeaf Native::PortChannel::LoadBalance::Extended::Extended_::src_port {7, "src-port"};

const Enum::YLeaf Native::Key::Chain::Key_::CryptographicAlgorithm::aes_128_cmac {0, "aes-128-cmac"};
const Enum::YLeaf Native::Key::Chain::Key_::CryptographicAlgorithm::aes_256_cmac {1, "aes-256-cmac"};
const Enum::YLeaf Native::Key::Chain::Key_::CryptographicAlgorithm::hmac_sha_1 {2, "hmac-sha-1"};
const Enum::YLeaf Native::Key::Chain::Key_::CryptographicAlgorithm::hmac_sha_256 {3, "hmac-sha-256"};
const Enum::YLeaf Native::Key::Chain::Key_::CryptographicAlgorithm::hmac_sha_384 {4, "hmac-sha-384"};
const Enum::YLeaf Native::Key::Chain::Key_::CryptographicAlgorithm::hmac_sha_512 {5, "hmac-sha-512"};
const Enum::YLeaf Native::Key::Chain::Key_::CryptographicAlgorithm::md5 {6, "md5"};

const Enum::YLeaf Native::Key::Chain::Key_::KeyString::Encryption::Y_0 {0, "0"};
const Enum::YLeaf Native::Key::Chain::Key_::KeyString::Encryption::Y_6 {1, "6"};
const Enum::YLeaf Native::Key::Chain::Key_::KeyString::Encryption::Y_7 {2, "7"};

const Enum::YLeaf Native::L2::Vfi::Mode::autodiscovery {0, "autodiscovery"};
const Enum::YLeaf Native::L2::Vfi::Mode::manual {1, "manual"};
const Enum::YLeaf Native::L2::Vfi::Mode::point_to_point {2, "point-to-point"};

const Enum::YLeaf Native::L2::Vfi::Neighbor::Encapsulation::l2tpv3 {0, "l2tpv3"};
const Enum::YLeaf Native::L2::Vfi::Neighbor::Encapsulation::mpls {1, "mpls"};

const Enum::YLeaf Native::Monitor::Session::Destination::Interface::Encapsulation::dot1q {0, "dot1q"};
const Enum::YLeaf Native::Monitor::Session::Destination::Interface::Encapsulation::isl {1, "isl"};
const Enum::YLeaf Native::Monitor::Session::Destination::Interface::Encapsulation::replicate {2, "replicate"};

const Enum::YLeaf Native::Monitor::Session::Destination::Interface::IngressEncap::dot1q {0, "dot1q"};
const Enum::YLeaf Native::Monitor::Session::Destination::Interface::IngressEncap::isl {1, "isl"};
const Enum::YLeaf Native::Monitor::Session::Destination::Interface::IngressEncap::untagged {2, "untagged"};

const Enum::YLeaf Native::Monitor::Session::Filter::PacketType::Status::good {0, "good"};
const Enum::YLeaf Native::Monitor::Session::Filter::PacketType::Status::bad {1, "bad"};

const Enum::YLeaf Native::Monitor::Session::Filter::PacketType::Direction::rx {0, "rx"};
const Enum::YLeaf Native::Monitor::Session::Filter::PacketType::Direction::tx {1, "tx"};

const Enum::YLeaf Native::Monitor::Session::Source::Interface::Direction::both {0, "both"};
const Enum::YLeaf Native::Monitor::Session::Source::Interface::Direction::rx {1, "rx"};
const Enum::YLeaf Native::Monitor::Session::Source::Interface::Direction::tx {2, "tx"};

const Enum::YLeaf Native::Monitor::Session::Source::Vlan::Direction::both {0, "both"};
const Enum::YLeaf Native::Monitor::Session::Source::Vlan::Direction::rx {1, "rx"};
const Enum::YLeaf Native::Monitor::Session::Source::Vlan::Direction::tx {2, "tx"};

const Enum::YLeaf Native::RadiusServer::Attribute::SendAttribute::on_for_login_auth {0, "on-for-login-auth"};
const Enum::YLeaf Native::RadiusServer::Attribute::SendAttribute::include_in_access_req {1, "include-in-access-req"};
const Enum::YLeaf Native::RadiusServer::Attribute::SendAttribute::support_multiple {2, "support-multiple"};

const Enum::YLeaf Native::RadiusServer::Attribute::Attri31::Attri31List::CallingStationId::mac {0, "mac"};
const Enum::YLeaf Native::RadiusServer::Attribute::Attri31::Attri31List::CallingStationId::send {1, "send"};

const Enum::YLeaf Native::RadiusServer::Attribute::Attri31::Attri31List::IdMac::Format::ietf {0, "ietf"};

const Enum::YLeaf Native::RadiusServer::Attribute::Attri31::Attri31List::IdMac::LuCase::lower_case {0, "lower-case"};
const Enum::YLeaf Native::RadiusServer::Attribute::Attri31::Attri31List::IdMac::LuCase::upper_case {1, "upper-case"};

const Enum::YLeaf Native::RadiusServer::Host::Key::Y_0 {0, "0"};
const Enum::YLeaf Native::RadiusServer::Host::Key::Y_7 {1, "7"};

const Enum::YLeaf Native::RadiusServer::Host::Test::Username::Key::Encryption::Y_0 {0, "0"};
const Enum::YLeaf Native::RadiusServer::Host::Test::Username::Key::Encryption::Y_7 {1, "7"};

const Enum::YLeaf Native::RadiusServer::Key::Encryption::Y_0 {0, "0"};
const Enum::YLeaf Native::RadiusServer::Key::Encryption::Y_7 {1, "7"};

const Enum::YLeaf Native::Radius::Filter::Match::match_all {0, "match-all"};
const Enum::YLeaf Native::Radius::Filter::Match::match_any {1, "match-any"};

const Enum::YLeaf Native::Radius::Server::AutomateTester::AtOption::probe_on {0, "probe-on"};

const Enum::YLeaf Native::Radius::Server::Key::Encryption::Y_0 {0, "0"};
const Enum::YLeaf Native::Radius::Server::Key::Encryption::Y_5 {1, "5"};

const Enum::YLeaf Native::Radius::Server::Pac::Key::Encryption::Y_0 {0, "0"};
const Enum::YLeaf Native::Radius::Server::Pac::Key::Encryption::Y_6 {1, "6"};
const Enum::YLeaf Native::Radius::Server::Pac::Key::Encryption::Y_7 {2, "7"};

const Enum::YLeaf Native::AlarmContact::Severity::critical {0, "critical"};
const Enum::YLeaf Native::AlarmContact::Severity::major {1, "major"};
const Enum::YLeaf Native::AlarmContact::Severity::minor {2, "minor"};

const Enum::YLeaf Native::AlarmContact::Trigger::open {0, "open"};
const Enum::YLeaf Native::AlarmContact::Trigger::closed {1, "closed"};


}
}

