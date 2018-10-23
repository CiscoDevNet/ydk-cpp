
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_crypto_ssh_cfg.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_crypto_ssh_cfg {

Ssh::Ssh()
    :
    client(std::make_shared<Ssh::Client>())
    , server(std::make_shared<Ssh::Server>())
{
    client->parent = this;
    server->parent = this;

    yang_name = "ssh"; yang_parent_name = "Cisco-IOS-XR-crypto-ssh-cfg"; is_top_level_class = true; has_list_ancestor = false; 
}

Ssh::~Ssh()
{
}

bool Ssh::has_data() const
{
    if (is_presence_container) return true;
    return (client !=  nullptr && client->has_data())
	|| (server !=  nullptr && server->has_data());
}

bool Ssh::has_operation() const
{
    return is_set(yfilter)
	|| (client !=  nullptr && client->has_operation())
	|| (server !=  nullptr && server->has_operation());
}

std::string Ssh::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-crypto-ssh-cfg:ssh";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ssh::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ssh::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "client")
    {
        if(client == nullptr)
        {
            client = std::make_shared<Ssh::Client>();
        }
        return client;
    }

    if(child_yang_name == "server")
    {
        if(server == nullptr)
        {
            server = std::make_shared<Ssh::Server>();
        }
        return server;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ssh::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(client != nullptr)
    {
        _children["client"] = client;
    }

    if(server != nullptr)
    {
        _children["server"] = server;
    }

    return _children;
}

void Ssh::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ssh::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> Ssh::clone_ptr() const
{
    return std::make_shared<Ssh>();
}

std::string Ssh::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Ssh::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Ssh::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Ssh::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool Ssh::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "client" || name == "server")
        return true;
    return false;
}

Ssh::Client::Client()
    :
    rekey_volume{YType::uint32, "rekey-volume"},
    host_public_key{YType::str, "host-public-key"},
    client_vrf{YType::str, "client-vrf"},
    rekey_time{YType::uint32, "rekey-time"},
    source_interface{YType::str, "source-interface"},
    dscp{YType::uint32, "dscp"}
        ,
    client_algo(std::make_shared<Ssh::Client::ClientAlgo>())
    , client_enable(std::make_shared<Ssh::Client::ClientEnable>())
{
    client_algo->parent = this;
    client_enable->parent = this;

    yang_name = "client"; yang_parent_name = "ssh"; is_top_level_class = false; has_list_ancestor = false; 
}

Ssh::Client::~Client()
{
}

bool Ssh::Client::has_data() const
{
    if (is_presence_container) return true;
    return rekey_volume.is_set
	|| host_public_key.is_set
	|| client_vrf.is_set
	|| rekey_time.is_set
	|| source_interface.is_set
	|| dscp.is_set
	|| (client_algo !=  nullptr && client_algo->has_data())
	|| (client_enable !=  nullptr && client_enable->has_data());
}

bool Ssh::Client::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rekey_volume.yfilter)
	|| ydk::is_set(host_public_key.yfilter)
	|| ydk::is_set(client_vrf.yfilter)
	|| ydk::is_set(rekey_time.yfilter)
	|| ydk::is_set(source_interface.yfilter)
	|| ydk::is_set(dscp.yfilter)
	|| (client_algo !=  nullptr && client_algo->has_operation())
	|| (client_enable !=  nullptr && client_enable->has_operation());
}

std::string Ssh::Client::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-crypto-ssh-cfg:ssh/" << get_segment_path();
    return path_buffer.str();
}

std::string Ssh::Client::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "client";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ssh::Client::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rekey_volume.is_set || is_set(rekey_volume.yfilter)) leaf_name_data.push_back(rekey_volume.get_name_leafdata());
    if (host_public_key.is_set || is_set(host_public_key.yfilter)) leaf_name_data.push_back(host_public_key.get_name_leafdata());
    if (client_vrf.is_set || is_set(client_vrf.yfilter)) leaf_name_data.push_back(client_vrf.get_name_leafdata());
    if (rekey_time.is_set || is_set(rekey_time.yfilter)) leaf_name_data.push_back(rekey_time.get_name_leafdata());
    if (source_interface.is_set || is_set(source_interface.yfilter)) leaf_name_data.push_back(source_interface.get_name_leafdata());
    if (dscp.is_set || is_set(dscp.yfilter)) leaf_name_data.push_back(dscp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ssh::Client::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "client-algo")
    {
        if(client_algo == nullptr)
        {
            client_algo = std::make_shared<Ssh::Client::ClientAlgo>();
        }
        return client_algo;
    }

    if(child_yang_name == "client-enable")
    {
        if(client_enable == nullptr)
        {
            client_enable = std::make_shared<Ssh::Client::ClientEnable>();
        }
        return client_enable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ssh::Client::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(client_algo != nullptr)
    {
        _children["client-algo"] = client_algo;
    }

    if(client_enable != nullptr)
    {
        _children["client-enable"] = client_enable;
    }

    return _children;
}

void Ssh::Client::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rekey-volume")
    {
        rekey_volume = value;
        rekey_volume.value_namespace = name_space;
        rekey_volume.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "host-public-key")
    {
        host_public_key = value;
        host_public_key.value_namespace = name_space;
        host_public_key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "client-vrf")
    {
        client_vrf = value;
        client_vrf.value_namespace = name_space;
        client_vrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rekey-time")
    {
        rekey_time = value;
        rekey_time.value_namespace = name_space;
        rekey_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-interface")
    {
        source_interface = value;
        source_interface.value_namespace = name_space;
        source_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dscp")
    {
        dscp = value;
        dscp.value_namespace = name_space;
        dscp.value_namespace_prefix = name_space_prefix;
    }
}

void Ssh::Client::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rekey-volume")
    {
        rekey_volume.yfilter = yfilter;
    }
    if(value_path == "host-public-key")
    {
        host_public_key.yfilter = yfilter;
    }
    if(value_path == "client-vrf")
    {
        client_vrf.yfilter = yfilter;
    }
    if(value_path == "rekey-time")
    {
        rekey_time.yfilter = yfilter;
    }
    if(value_path == "source-interface")
    {
        source_interface.yfilter = yfilter;
    }
    if(value_path == "dscp")
    {
        dscp.yfilter = yfilter;
    }
}

bool Ssh::Client::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "client-algo" || name == "client-enable" || name == "rekey-volume" || name == "host-public-key" || name == "client-vrf" || name == "rekey-time" || name == "source-interface" || name == "dscp")
        return true;
    return false;
}

Ssh::Client::ClientAlgo::ClientAlgo()
    :
    key_exchanges(std::make_shared<Ssh::Client::ClientAlgo::KeyExchanges>())
{
    key_exchanges->parent = this;

    yang_name = "client-algo"; yang_parent_name = "client"; is_top_level_class = false; has_list_ancestor = false; 
}

Ssh::Client::ClientAlgo::~ClientAlgo()
{
}

bool Ssh::Client::ClientAlgo::has_data() const
{
    if (is_presence_container) return true;
    return (key_exchanges !=  nullptr && key_exchanges->has_data());
}

bool Ssh::Client::ClientAlgo::has_operation() const
{
    return is_set(yfilter)
	|| (key_exchanges !=  nullptr && key_exchanges->has_operation());
}

std::string Ssh::Client::ClientAlgo::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-crypto-ssh-cfg:ssh/client/" << get_segment_path();
    return path_buffer.str();
}

std::string Ssh::Client::ClientAlgo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "client-algo";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ssh::Client::ClientAlgo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ssh::Client::ClientAlgo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key-exchanges")
    {
        if(key_exchanges == nullptr)
        {
            key_exchanges = std::make_shared<Ssh::Client::ClientAlgo::KeyExchanges>();
        }
        return key_exchanges;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ssh::Client::ClientAlgo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(key_exchanges != nullptr)
    {
        _children["key-exchanges"] = key_exchanges;
    }

    return _children;
}

void Ssh::Client::ClientAlgo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ssh::Client::ClientAlgo::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ssh::Client::ClientAlgo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key-exchanges")
        return true;
    return false;
}

Ssh::Client::ClientAlgo::KeyExchanges::KeyExchanges()
    :
    key_exchange{YType::str, "key-exchange"}
{

    yang_name = "key-exchanges"; yang_parent_name = "client-algo"; is_top_level_class = false; has_list_ancestor = false; 
}

Ssh::Client::ClientAlgo::KeyExchanges::~KeyExchanges()
{
}

bool Ssh::Client::ClientAlgo::KeyExchanges::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : key_exchange.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Ssh::Client::ClientAlgo::KeyExchanges::has_operation() const
{
    for (auto const & leaf : key_exchange.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(key_exchange.yfilter);
}

std::string Ssh::Client::ClientAlgo::KeyExchanges::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-crypto-ssh-cfg:ssh/client/client-algo/" << get_segment_path();
    return path_buffer.str();
}

std::string Ssh::Client::ClientAlgo::KeyExchanges::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-exchanges";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ssh::Client::ClientAlgo::KeyExchanges::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto key_exchange_name_datas = key_exchange.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), key_exchange_name_datas.begin(), key_exchange_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ssh::Client::ClientAlgo::KeyExchanges::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ssh::Client::ClientAlgo::KeyExchanges::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ssh::Client::ClientAlgo::KeyExchanges::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "key-exchange")
    {
        key_exchange.append(value);
    }
}

void Ssh::Client::ClientAlgo::KeyExchanges::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "key-exchange")
    {
        key_exchange.yfilter = yfilter;
    }
}

bool Ssh::Client::ClientAlgo::KeyExchanges::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key-exchange")
        return true;
    return false;
}

Ssh::Client::ClientEnable::ClientEnable()
    :
    client_cipher(std::make_shared<Ssh::Client::ClientEnable::ClientCipher>())
{
    client_cipher->parent = this;

    yang_name = "client-enable"; yang_parent_name = "client"; is_top_level_class = false; has_list_ancestor = false; 
}

Ssh::Client::ClientEnable::~ClientEnable()
{
}

bool Ssh::Client::ClientEnable::has_data() const
{
    if (is_presence_container) return true;
    return (client_cipher !=  nullptr && client_cipher->has_data());
}

bool Ssh::Client::ClientEnable::has_operation() const
{
    return is_set(yfilter)
	|| (client_cipher !=  nullptr && client_cipher->has_operation());
}

std::string Ssh::Client::ClientEnable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-crypto-ssh-cfg:ssh/client/" << get_segment_path();
    return path_buffer.str();
}

std::string Ssh::Client::ClientEnable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "client-enable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ssh::Client::ClientEnable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ssh::Client::ClientEnable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "client-cipher")
    {
        if(client_cipher == nullptr)
        {
            client_cipher = std::make_shared<Ssh::Client::ClientEnable::ClientCipher>();
        }
        return client_cipher;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ssh::Client::ClientEnable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(client_cipher != nullptr)
    {
        _children["client-cipher"] = client_cipher;
    }

    return _children;
}

void Ssh::Client::ClientEnable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ssh::Client::ClientEnable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ssh::Client::ClientEnable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "client-cipher")
        return true;
    return false;
}

Ssh::Client::ClientEnable::ClientCipher::ClientCipher()
    :
    aes_cbc{YType::boolean, "aes-cbc"},
    tripledes_cbc{YType::boolean, "tripledes-cbc"}
{

    yang_name = "client-cipher"; yang_parent_name = "client-enable"; is_top_level_class = false; has_list_ancestor = false; 
}

Ssh::Client::ClientEnable::ClientCipher::~ClientCipher()
{
}

bool Ssh::Client::ClientEnable::ClientCipher::has_data() const
{
    if (is_presence_container) return true;
    return aes_cbc.is_set
	|| tripledes_cbc.is_set;
}

bool Ssh::Client::ClientEnable::ClientCipher::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(aes_cbc.yfilter)
	|| ydk::is_set(tripledes_cbc.yfilter);
}

std::string Ssh::Client::ClientEnable::ClientCipher::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-crypto-ssh-cfg:ssh/client/client-enable/" << get_segment_path();
    return path_buffer.str();
}

std::string Ssh::Client::ClientEnable::ClientCipher::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "client-cipher";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ssh::Client::ClientEnable::ClientCipher::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aes_cbc.is_set || is_set(aes_cbc.yfilter)) leaf_name_data.push_back(aes_cbc.get_name_leafdata());
    if (tripledes_cbc.is_set || is_set(tripledes_cbc.yfilter)) leaf_name_data.push_back(tripledes_cbc.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ssh::Client::ClientEnable::ClientCipher::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ssh::Client::ClientEnable::ClientCipher::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ssh::Client::ClientEnable::ClientCipher::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "aes-cbc")
    {
        aes_cbc = value;
        aes_cbc.value_namespace = name_space;
        aes_cbc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tripledes-cbc")
    {
        tripledes_cbc = value;
        tripledes_cbc.value_namespace = name_space;
        tripledes_cbc.value_namespace_prefix = name_space_prefix;
    }
}

void Ssh::Client::ClientEnable::ClientCipher::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "aes-cbc")
    {
        aes_cbc.yfilter = yfilter;
    }
    if(value_path == "tripledes-cbc")
    {
        tripledes_cbc.yfilter = yfilter;
    }
}

bool Ssh::Client::ClientEnable::ClientCipher::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aes-cbc" || name == "tripledes-cbc")
        return true;
    return false;
}

Ssh::Server::Server()
    :
    rekey_volume{YType::uint32, "rekey-volume"},
    session_limit{YType::uint32, "session-limit"},
    netconf{YType::uint32, "netconf"},
    v2{YType::empty, "v2"},
    rekey_time{YType::uint32, "rekey-time"},
    logging{YType::empty, "logging"},
    rate_limit{YType::uint32, "rate-limit"},
    timeout{YType::uint32, "timeout"},
    dscp{YType::uint32, "dscp"}
        ,
    disable(std::make_shared<Ssh::Server::Disable>())
    , enable(std::make_shared<Ssh::Server::Enable>())
    , vrf_table(std::make_shared<Ssh::Server::VrfTable>())
    , server_algo(std::make_shared<Ssh::Server::ServerAlgo>())
    , capability(std::make_shared<Ssh::Server::Capability>())
    , netconf_vrf_table(std::make_shared<Ssh::Server::NetconfVrfTable>())
{
    disable->parent = this;
    enable->parent = this;
    vrf_table->parent = this;
    server_algo->parent = this;
    capability->parent = this;
    netconf_vrf_table->parent = this;

    yang_name = "server"; yang_parent_name = "ssh"; is_top_level_class = false; has_list_ancestor = false; 
}

Ssh::Server::~Server()
{
}

bool Ssh::Server::has_data() const
{
    if (is_presence_container) return true;
    return rekey_volume.is_set
	|| session_limit.is_set
	|| netconf.is_set
	|| v2.is_set
	|| rekey_time.is_set
	|| logging.is_set
	|| rate_limit.is_set
	|| timeout.is_set
	|| dscp.is_set
	|| (disable !=  nullptr && disable->has_data())
	|| (enable !=  nullptr && enable->has_data())
	|| (vrf_table !=  nullptr && vrf_table->has_data())
	|| (server_algo !=  nullptr && server_algo->has_data())
	|| (capability !=  nullptr && capability->has_data())
	|| (netconf_vrf_table !=  nullptr && netconf_vrf_table->has_data());
}

bool Ssh::Server::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rekey_volume.yfilter)
	|| ydk::is_set(session_limit.yfilter)
	|| ydk::is_set(netconf.yfilter)
	|| ydk::is_set(v2.yfilter)
	|| ydk::is_set(rekey_time.yfilter)
	|| ydk::is_set(logging.yfilter)
	|| ydk::is_set(rate_limit.yfilter)
	|| ydk::is_set(timeout.yfilter)
	|| ydk::is_set(dscp.yfilter)
	|| (disable !=  nullptr && disable->has_operation())
	|| (enable !=  nullptr && enable->has_operation())
	|| (vrf_table !=  nullptr && vrf_table->has_operation())
	|| (server_algo !=  nullptr && server_algo->has_operation())
	|| (capability !=  nullptr && capability->has_operation())
	|| (netconf_vrf_table !=  nullptr && netconf_vrf_table->has_operation());
}

std::string Ssh::Server::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-crypto-ssh-cfg:ssh/" << get_segment_path();
    return path_buffer.str();
}

std::string Ssh::Server::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "server";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ssh::Server::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rekey_volume.is_set || is_set(rekey_volume.yfilter)) leaf_name_data.push_back(rekey_volume.get_name_leafdata());
    if (session_limit.is_set || is_set(session_limit.yfilter)) leaf_name_data.push_back(session_limit.get_name_leafdata());
    if (netconf.is_set || is_set(netconf.yfilter)) leaf_name_data.push_back(netconf.get_name_leafdata());
    if (v2.is_set || is_set(v2.yfilter)) leaf_name_data.push_back(v2.get_name_leafdata());
    if (rekey_time.is_set || is_set(rekey_time.yfilter)) leaf_name_data.push_back(rekey_time.get_name_leafdata());
    if (logging.is_set || is_set(logging.yfilter)) leaf_name_data.push_back(logging.get_name_leafdata());
    if (rate_limit.is_set || is_set(rate_limit.yfilter)) leaf_name_data.push_back(rate_limit.get_name_leafdata());
    if (timeout.is_set || is_set(timeout.yfilter)) leaf_name_data.push_back(timeout.get_name_leafdata());
    if (dscp.is_set || is_set(dscp.yfilter)) leaf_name_data.push_back(dscp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ssh::Server::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "disable")
    {
        if(disable == nullptr)
        {
            disable = std::make_shared<Ssh::Server::Disable>();
        }
        return disable;
    }

    if(child_yang_name == "enable")
    {
        if(enable == nullptr)
        {
            enable = std::make_shared<Ssh::Server::Enable>();
        }
        return enable;
    }

    if(child_yang_name == "vrf-table")
    {
        if(vrf_table == nullptr)
        {
            vrf_table = std::make_shared<Ssh::Server::VrfTable>();
        }
        return vrf_table;
    }

    if(child_yang_name == "server-algo")
    {
        if(server_algo == nullptr)
        {
            server_algo = std::make_shared<Ssh::Server::ServerAlgo>();
        }
        return server_algo;
    }

    if(child_yang_name == "capability")
    {
        if(capability == nullptr)
        {
            capability = std::make_shared<Ssh::Server::Capability>();
        }
        return capability;
    }

    if(child_yang_name == "netconf-vrf-table")
    {
        if(netconf_vrf_table == nullptr)
        {
            netconf_vrf_table = std::make_shared<Ssh::Server::NetconfVrfTable>();
        }
        return netconf_vrf_table;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ssh::Server::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(disable != nullptr)
    {
        _children["disable"] = disable;
    }

    if(enable != nullptr)
    {
        _children["enable"] = enable;
    }

    if(vrf_table != nullptr)
    {
        _children["vrf-table"] = vrf_table;
    }

    if(server_algo != nullptr)
    {
        _children["server-algo"] = server_algo;
    }

    if(capability != nullptr)
    {
        _children["capability"] = capability;
    }

    if(netconf_vrf_table != nullptr)
    {
        _children["netconf-vrf-table"] = netconf_vrf_table;
    }

    return _children;
}

void Ssh::Server::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rekey-volume")
    {
        rekey_volume = value;
        rekey_volume.value_namespace = name_space;
        rekey_volume.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-limit")
    {
        session_limit = value;
        session_limit.value_namespace = name_space;
        session_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "netconf")
    {
        netconf = value;
        netconf.value_namespace = name_space;
        netconf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "v2")
    {
        v2 = value;
        v2.value_namespace = name_space;
        v2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rekey-time")
    {
        rekey_time = value;
        rekey_time.value_namespace = name_space;
        rekey_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "logging")
    {
        logging = value;
        logging.value_namespace = name_space;
        logging.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rate-limit")
    {
        rate_limit = value;
        rate_limit.value_namespace = name_space;
        rate_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timeout")
    {
        timeout = value;
        timeout.value_namespace = name_space;
        timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dscp")
    {
        dscp = value;
        dscp.value_namespace = name_space;
        dscp.value_namespace_prefix = name_space_prefix;
    }
}

void Ssh::Server::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rekey-volume")
    {
        rekey_volume.yfilter = yfilter;
    }
    if(value_path == "session-limit")
    {
        session_limit.yfilter = yfilter;
    }
    if(value_path == "netconf")
    {
        netconf.yfilter = yfilter;
    }
    if(value_path == "v2")
    {
        v2.yfilter = yfilter;
    }
    if(value_path == "rekey-time")
    {
        rekey_time.yfilter = yfilter;
    }
    if(value_path == "logging")
    {
        logging.yfilter = yfilter;
    }
    if(value_path == "rate-limit")
    {
        rate_limit.yfilter = yfilter;
    }
    if(value_path == "timeout")
    {
        timeout.yfilter = yfilter;
    }
    if(value_path == "dscp")
    {
        dscp.yfilter = yfilter;
    }
}

bool Ssh::Server::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable" || name == "enable" || name == "vrf-table" || name == "server-algo" || name == "capability" || name == "netconf-vrf-table" || name == "rekey-volume" || name == "session-limit" || name == "netconf" || name == "v2" || name == "rekey-time" || name == "logging" || name == "rate-limit" || name == "timeout" || name == "dscp")
        return true;
    return false;
}

Ssh::Server::Disable::Disable()
    :
    hmac(std::make_shared<Ssh::Server::Disable::Hmac>())
{
    hmac->parent = this;

    yang_name = "disable"; yang_parent_name = "server"; is_top_level_class = false; has_list_ancestor = false; 
}

Ssh::Server::Disable::~Disable()
{
}

bool Ssh::Server::Disable::has_data() const
{
    if (is_presence_container) return true;
    return (hmac !=  nullptr && hmac->has_data());
}

bool Ssh::Server::Disable::has_operation() const
{
    return is_set(yfilter)
	|| (hmac !=  nullptr && hmac->has_operation());
}

std::string Ssh::Server::Disable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-crypto-ssh-cfg:ssh/server/" << get_segment_path();
    return path_buffer.str();
}

std::string Ssh::Server::Disable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "disable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ssh::Server::Disable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ssh::Server::Disable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hmac")
    {
        if(hmac == nullptr)
        {
            hmac = std::make_shared<Ssh::Server::Disable::Hmac>();
        }
        return hmac;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ssh::Server::Disable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(hmac != nullptr)
    {
        _children["hmac"] = hmac;
    }

    return _children;
}

void Ssh::Server::Disable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ssh::Server::Disable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ssh::Server::Disable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hmac")
        return true;
    return false;
}

Ssh::Server::Disable::Hmac::Hmac()
    :
    hmac_sha512{YType::boolean, "hmac-sha512"}
{

    yang_name = "hmac"; yang_parent_name = "disable"; is_top_level_class = false; has_list_ancestor = false; 
}

Ssh::Server::Disable::Hmac::~Hmac()
{
}

bool Ssh::Server::Disable::Hmac::has_data() const
{
    if (is_presence_container) return true;
    return hmac_sha512.is_set;
}

bool Ssh::Server::Disable::Hmac::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hmac_sha512.yfilter);
}

std::string Ssh::Server::Disable::Hmac::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-crypto-ssh-cfg:ssh/server/disable/" << get_segment_path();
    return path_buffer.str();
}

std::string Ssh::Server::Disable::Hmac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hmac";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ssh::Server::Disable::Hmac::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hmac_sha512.is_set || is_set(hmac_sha512.yfilter)) leaf_name_data.push_back(hmac_sha512.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ssh::Server::Disable::Hmac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ssh::Server::Disable::Hmac::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ssh::Server::Disable::Hmac::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hmac-sha512")
    {
        hmac_sha512 = value;
        hmac_sha512.value_namespace = name_space;
        hmac_sha512.value_namespace_prefix = name_space_prefix;
    }
}

void Ssh::Server::Disable::Hmac::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hmac-sha512")
    {
        hmac_sha512.yfilter = yfilter;
    }
}

bool Ssh::Server::Disable::Hmac::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hmac-sha512")
        return true;
    return false;
}

Ssh::Server::Enable::Enable()
    :
    cipher(std::make_shared<Ssh::Server::Enable::Cipher>())
{
    cipher->parent = this;

    yang_name = "enable"; yang_parent_name = "server"; is_top_level_class = false; has_list_ancestor = false; 
}

Ssh::Server::Enable::~Enable()
{
}

bool Ssh::Server::Enable::has_data() const
{
    if (is_presence_container) return true;
    return (cipher !=  nullptr && cipher->has_data());
}

bool Ssh::Server::Enable::has_operation() const
{
    return is_set(yfilter)
	|| (cipher !=  nullptr && cipher->has_operation());
}

std::string Ssh::Server::Enable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-crypto-ssh-cfg:ssh/server/" << get_segment_path();
    return path_buffer.str();
}

std::string Ssh::Server::Enable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "enable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ssh::Server::Enable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ssh::Server::Enable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cipher")
    {
        if(cipher == nullptr)
        {
            cipher = std::make_shared<Ssh::Server::Enable::Cipher>();
        }
        return cipher;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ssh::Server::Enable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(cipher != nullptr)
    {
        _children["cipher"] = cipher;
    }

    return _children;
}

void Ssh::Server::Enable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ssh::Server::Enable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ssh::Server::Enable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cipher")
        return true;
    return false;
}

Ssh::Server::Enable::Cipher::Cipher()
    :
    aes_cbc{YType::boolean, "aes-cbc"},
    tripledes_cbc{YType::boolean, "tripledes-cbc"}
{

    yang_name = "cipher"; yang_parent_name = "enable"; is_top_level_class = false; has_list_ancestor = false; 
}

Ssh::Server::Enable::Cipher::~Cipher()
{
}

bool Ssh::Server::Enable::Cipher::has_data() const
{
    if (is_presence_container) return true;
    return aes_cbc.is_set
	|| tripledes_cbc.is_set;
}

bool Ssh::Server::Enable::Cipher::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(aes_cbc.yfilter)
	|| ydk::is_set(tripledes_cbc.yfilter);
}

std::string Ssh::Server::Enable::Cipher::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-crypto-ssh-cfg:ssh/server/enable/" << get_segment_path();
    return path_buffer.str();
}

std::string Ssh::Server::Enable::Cipher::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cipher";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ssh::Server::Enable::Cipher::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aes_cbc.is_set || is_set(aes_cbc.yfilter)) leaf_name_data.push_back(aes_cbc.get_name_leafdata());
    if (tripledes_cbc.is_set || is_set(tripledes_cbc.yfilter)) leaf_name_data.push_back(tripledes_cbc.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ssh::Server::Enable::Cipher::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ssh::Server::Enable::Cipher::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ssh::Server::Enable::Cipher::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "aes-cbc")
    {
        aes_cbc = value;
        aes_cbc.value_namespace = name_space;
        aes_cbc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tripledes-cbc")
    {
        tripledes_cbc = value;
        tripledes_cbc.value_namespace = name_space;
        tripledes_cbc.value_namespace_prefix = name_space_prefix;
    }
}

void Ssh::Server::Enable::Cipher::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "aes-cbc")
    {
        aes_cbc.yfilter = yfilter;
    }
    if(value_path == "tripledes-cbc")
    {
        tripledes_cbc.yfilter = yfilter;
    }
}

bool Ssh::Server::Enable::Cipher::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aes-cbc" || name == "tripledes-cbc")
        return true;
    return false;
}

Ssh::Server::VrfTable::VrfTable()
    :
    vrf(this, {"vrf_name"})
{

    yang_name = "vrf-table"; yang_parent_name = "server"; is_top_level_class = false; has_list_ancestor = false; 
}

Ssh::Server::VrfTable::~VrfTable()
{
}

bool Ssh::Server::VrfTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vrf.len(); index++)
    {
        if(vrf[index]->has_data())
            return true;
    }
    return false;
}

bool Ssh::Server::VrfTable::has_operation() const
{
    for (std::size_t index=0; index<vrf.len(); index++)
    {
        if(vrf[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ssh::Server::VrfTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-crypto-ssh-cfg:ssh/server/" << get_segment_path();
    return path_buffer.str();
}

std::string Ssh::Server::VrfTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-table";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ssh::Server::VrfTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ssh::Server::VrfTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrf")
    {
        auto ent_ = std::make_shared<Ssh::Server::VrfTable::Vrf>();
        ent_->parent = this;
        vrf.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ssh::Server::VrfTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : vrf.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Ssh::Server::VrfTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ssh::Server::VrfTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ssh::Server::VrfTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf")
        return true;
    return false;
}

Ssh::Server::VrfTable::Vrf::Vrf()
    :
    vrf_name{YType::str, "vrf-name"},
    enable{YType::empty, "enable"},
    ipv4_access_list{YType::str, "ipv4-access-list"},
    ipv6_access_list{YType::str, "ipv6-access-list"}
{

    yang_name = "vrf"; yang_parent_name = "vrf-table"; is_top_level_class = false; has_list_ancestor = false; 
}

Ssh::Server::VrfTable::Vrf::~Vrf()
{
}

bool Ssh::Server::VrfTable::Vrf::has_data() const
{
    if (is_presence_container) return true;
    return vrf_name.is_set
	|| enable.is_set
	|| ipv4_access_list.is_set
	|| ipv6_access_list.is_set;
}

bool Ssh::Server::VrfTable::Vrf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(ipv4_access_list.yfilter)
	|| ydk::is_set(ipv6_access_list.yfilter);
}

std::string Ssh::Server::VrfTable::Vrf::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-crypto-ssh-cfg:ssh/server/vrf-table/" << get_segment_path();
    return path_buffer.str();
}

std::string Ssh::Server::VrfTable::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";
    ADD_KEY_TOKEN(vrf_name, "vrf-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ssh::Server::VrfTable::Vrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (ipv4_access_list.is_set || is_set(ipv4_access_list.yfilter)) leaf_name_data.push_back(ipv4_access_list.get_name_leafdata());
    if (ipv6_access_list.is_set || is_set(ipv6_access_list.yfilter)) leaf_name_data.push_back(ipv6_access_list.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ssh::Server::VrfTable::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ssh::Server::VrfTable::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ssh::Server::VrfTable::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-access-list")
    {
        ipv4_access_list = value;
        ipv4_access_list.value_namespace = name_space;
        ipv4_access_list.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-access-list")
    {
        ipv6_access_list = value;
        ipv6_access_list.value_namespace = name_space;
        ipv6_access_list.value_namespace_prefix = name_space_prefix;
    }
}

void Ssh::Server::VrfTable::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "ipv4-access-list")
    {
        ipv4_access_list.yfilter = yfilter;
    }
    if(value_path == "ipv6-access-list")
    {
        ipv6_access_list.yfilter = yfilter;
    }
}

bool Ssh::Server::VrfTable::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf-name" || name == "enable" || name == "ipv4-access-list" || name == "ipv6-access-list")
        return true;
    return false;
}

Ssh::Server::ServerAlgo::ServerAlgo()
    :
    key_exchanges(std::make_shared<Ssh::Server::ServerAlgo::KeyExchanges>())
{
    key_exchanges->parent = this;

    yang_name = "server-algo"; yang_parent_name = "server"; is_top_level_class = false; has_list_ancestor = false; 
}

Ssh::Server::ServerAlgo::~ServerAlgo()
{
}

bool Ssh::Server::ServerAlgo::has_data() const
{
    if (is_presence_container) return true;
    return (key_exchanges !=  nullptr && key_exchanges->has_data());
}

bool Ssh::Server::ServerAlgo::has_operation() const
{
    return is_set(yfilter)
	|| (key_exchanges !=  nullptr && key_exchanges->has_operation());
}

std::string Ssh::Server::ServerAlgo::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-crypto-ssh-cfg:ssh/server/" << get_segment_path();
    return path_buffer.str();
}

std::string Ssh::Server::ServerAlgo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "server-algo";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ssh::Server::ServerAlgo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ssh::Server::ServerAlgo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key-exchanges")
    {
        if(key_exchanges == nullptr)
        {
            key_exchanges = std::make_shared<Ssh::Server::ServerAlgo::KeyExchanges>();
        }
        return key_exchanges;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ssh::Server::ServerAlgo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(key_exchanges != nullptr)
    {
        _children["key-exchanges"] = key_exchanges;
    }

    return _children;
}

void Ssh::Server::ServerAlgo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ssh::Server::ServerAlgo::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ssh::Server::ServerAlgo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key-exchanges")
        return true;
    return false;
}

Ssh::Server::ServerAlgo::KeyExchanges::KeyExchanges()
    :
    key_exchange{YType::str, "key-exchange"}
{

    yang_name = "key-exchanges"; yang_parent_name = "server-algo"; is_top_level_class = false; has_list_ancestor = false; 
}

Ssh::Server::ServerAlgo::KeyExchanges::~KeyExchanges()
{
}

bool Ssh::Server::ServerAlgo::KeyExchanges::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : key_exchange.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Ssh::Server::ServerAlgo::KeyExchanges::has_operation() const
{
    for (auto const & leaf : key_exchange.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(key_exchange.yfilter);
}

std::string Ssh::Server::ServerAlgo::KeyExchanges::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-crypto-ssh-cfg:ssh/server/server-algo/" << get_segment_path();
    return path_buffer.str();
}

std::string Ssh::Server::ServerAlgo::KeyExchanges::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-exchanges";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ssh::Server::ServerAlgo::KeyExchanges::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto key_exchange_name_datas = key_exchange.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), key_exchange_name_datas.begin(), key_exchange_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ssh::Server::ServerAlgo::KeyExchanges::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ssh::Server::ServerAlgo::KeyExchanges::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ssh::Server::ServerAlgo::KeyExchanges::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "key-exchange")
    {
        key_exchange.append(value);
    }
}

void Ssh::Server::ServerAlgo::KeyExchanges::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "key-exchange")
    {
        key_exchange.yfilter = yfilter;
    }
}

bool Ssh::Server::ServerAlgo::KeyExchanges::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key-exchange")
        return true;
    return false;
}

Ssh::Server::Capability::Capability()
    :
    netconf_xml{YType::boolean, "netconf-xml"}
{

    yang_name = "capability"; yang_parent_name = "server"; is_top_level_class = false; has_list_ancestor = false; 
}

Ssh::Server::Capability::~Capability()
{
}

bool Ssh::Server::Capability::has_data() const
{
    if (is_presence_container) return true;
    return netconf_xml.is_set;
}

bool Ssh::Server::Capability::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(netconf_xml.yfilter);
}

std::string Ssh::Server::Capability::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-crypto-ssh-cfg:ssh/server/" << get_segment_path();
    return path_buffer.str();
}

std::string Ssh::Server::Capability::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "capability";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ssh::Server::Capability::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (netconf_xml.is_set || is_set(netconf_xml.yfilter)) leaf_name_data.push_back(netconf_xml.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ssh::Server::Capability::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ssh::Server::Capability::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ssh::Server::Capability::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "netconf-xml")
    {
        netconf_xml = value;
        netconf_xml.value_namespace = name_space;
        netconf_xml.value_namespace_prefix = name_space_prefix;
    }
}

void Ssh::Server::Capability::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "netconf-xml")
    {
        netconf_xml.yfilter = yfilter;
    }
}

bool Ssh::Server::Capability::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "netconf-xml")
        return true;
    return false;
}

Ssh::Server::NetconfVrfTable::NetconfVrfTable()
    :
    vrf(this, {"vrf_name"})
{

    yang_name = "netconf-vrf-table"; yang_parent_name = "server"; is_top_level_class = false; has_list_ancestor = false; 
}

Ssh::Server::NetconfVrfTable::~NetconfVrfTable()
{
}

bool Ssh::Server::NetconfVrfTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vrf.len(); index++)
    {
        if(vrf[index]->has_data())
            return true;
    }
    return false;
}

bool Ssh::Server::NetconfVrfTable::has_operation() const
{
    for (std::size_t index=0; index<vrf.len(); index++)
    {
        if(vrf[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ssh::Server::NetconfVrfTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-crypto-ssh-cfg:ssh/server/" << get_segment_path();
    return path_buffer.str();
}

std::string Ssh::Server::NetconfVrfTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "netconf-vrf-table";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ssh::Server::NetconfVrfTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ssh::Server::NetconfVrfTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrf")
    {
        auto ent_ = std::make_shared<Ssh::Server::NetconfVrfTable::Vrf>();
        ent_->parent = this;
        vrf.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ssh::Server::NetconfVrfTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : vrf.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Ssh::Server::NetconfVrfTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ssh::Server::NetconfVrfTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ssh::Server::NetconfVrfTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf")
        return true;
    return false;
}

Ssh::Server::NetconfVrfTable::Vrf::Vrf()
    :
    vrf_name{YType::str, "vrf-name"},
    enable{YType::empty, "enable"},
    ipv4_access_list{YType::str, "ipv4-access-list"},
    ipv6_access_list{YType::str, "ipv6-access-list"}
{

    yang_name = "vrf"; yang_parent_name = "netconf-vrf-table"; is_top_level_class = false; has_list_ancestor = false; 
}

Ssh::Server::NetconfVrfTable::Vrf::~Vrf()
{
}

bool Ssh::Server::NetconfVrfTable::Vrf::has_data() const
{
    if (is_presence_container) return true;
    return vrf_name.is_set
	|| enable.is_set
	|| ipv4_access_list.is_set
	|| ipv6_access_list.is_set;
}

bool Ssh::Server::NetconfVrfTable::Vrf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(ipv4_access_list.yfilter)
	|| ydk::is_set(ipv6_access_list.yfilter);
}

std::string Ssh::Server::NetconfVrfTable::Vrf::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-crypto-ssh-cfg:ssh/server/netconf-vrf-table/" << get_segment_path();
    return path_buffer.str();
}

std::string Ssh::Server::NetconfVrfTable::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";
    ADD_KEY_TOKEN(vrf_name, "vrf-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ssh::Server::NetconfVrfTable::Vrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (ipv4_access_list.is_set || is_set(ipv4_access_list.yfilter)) leaf_name_data.push_back(ipv4_access_list.get_name_leafdata());
    if (ipv6_access_list.is_set || is_set(ipv6_access_list.yfilter)) leaf_name_data.push_back(ipv6_access_list.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ssh::Server::NetconfVrfTable::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ssh::Server::NetconfVrfTable::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ssh::Server::NetconfVrfTable::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-access-list")
    {
        ipv4_access_list = value;
        ipv4_access_list.value_namespace = name_space;
        ipv4_access_list.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-access-list")
    {
        ipv6_access_list = value;
        ipv6_access_list.value_namespace = name_space;
        ipv6_access_list.value_namespace_prefix = name_space_prefix;
    }
}

void Ssh::Server::NetconfVrfTable::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "ipv4-access-list")
    {
        ipv4_access_list.yfilter = yfilter;
    }
    if(value_path == "ipv6-access-list")
    {
        ipv6_access_list.yfilter = yfilter;
    }
}

bool Ssh::Server::NetconfVrfTable::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf-name" || name == "enable" || name == "ipv4-access-list" || name == "ipv6-access-list")
        return true;
    return false;
}


}
}

