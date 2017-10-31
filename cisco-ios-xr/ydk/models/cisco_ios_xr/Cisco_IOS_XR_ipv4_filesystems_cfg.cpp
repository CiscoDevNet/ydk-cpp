
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ipv4_filesystems_cfg.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ipv4_filesystems_cfg {

Rcp::Rcp()
    :
    rcp_client(std::make_shared<Rcp::RcpClient>())
{
    rcp_client->parent = this;

    yang_name = "rcp"; yang_parent_name = "Cisco-IOS-XR-ipv4-filesystems-cfg"; is_top_level_class = true; has_list_ancestor = false;
}

Rcp::~Rcp()
{
}

bool Rcp::has_data() const
{
    return (rcp_client !=  nullptr && rcp_client->has_data());
}

bool Rcp::has_operation() const
{
    return is_set(yfilter)
	|| (rcp_client !=  nullptr && rcp_client->has_operation());
}

std::string Rcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-filesystems-cfg:rcp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Rcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rcp-client")
    {
        if(rcp_client == nullptr)
        {
            rcp_client = std::make_shared<Rcp::RcpClient>();
        }
        return rcp_client;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(rcp_client != nullptr)
    {
        children["rcp-client"] = rcp_client;
    }

    return children;
}

void Rcp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Rcp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> Rcp::clone_ptr() const
{
    return std::make_shared<Rcp>();
}

std::string Rcp::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Rcp::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Rcp::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Rcp::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool Rcp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rcp-client")
        return true;
    return false;
}

Rcp::RcpClient::RcpClient()
    :
    username{YType::str, "username"},
    source_interface{YType::str, "source-interface"}
{

    yang_name = "rcp-client"; yang_parent_name = "rcp"; is_top_level_class = false; has_list_ancestor = false;
}

Rcp::RcpClient::~RcpClient()
{
}

bool Rcp::RcpClient::has_data() const
{
    return username.is_set
	|| source_interface.is_set;
}

bool Rcp::RcpClient::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(username.yfilter)
	|| ydk::is_set(source_interface.yfilter);
}

std::string Rcp::RcpClient::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-filesystems-cfg:rcp/" << get_segment_path();
    return path_buffer.str();
}

std::string Rcp::RcpClient::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rcp-client";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcp::RcpClient::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (username.is_set || is_set(username.yfilter)) leaf_name_data.push_back(username.get_name_leafdata());
    if (source_interface.is_set || is_set(source_interface.yfilter)) leaf_name_data.push_back(source_interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rcp::RcpClient::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcp::RcpClient::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rcp::RcpClient::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "username")
    {
        username = value;
        username.value_namespace = name_space;
        username.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-interface")
    {
        source_interface = value;
        source_interface.value_namespace = name_space;
        source_interface.value_namespace_prefix = name_space_prefix;
    }
}

void Rcp::RcpClient::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "username")
    {
        username.yfilter = yfilter;
    }
    if(value_path == "source-interface")
    {
        source_interface.yfilter = yfilter;
    }
}

bool Rcp::RcpClient::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "username" || name == "source-interface")
        return true;
    return false;
}

Ftp::Ftp()
    :
    ftp_client(std::make_shared<Ftp::FtpClient>())
{
    ftp_client->parent = this;

    yang_name = "ftp"; yang_parent_name = "Cisco-IOS-XR-ipv4-filesystems-cfg"; is_top_level_class = true; has_list_ancestor = false;
}

Ftp::~Ftp()
{
}

bool Ftp::has_data() const
{
    return (ftp_client !=  nullptr && ftp_client->has_data());
}

bool Ftp::has_operation() const
{
    return is_set(yfilter)
	|| (ftp_client !=  nullptr && ftp_client->has_operation());
}

std::string Ftp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-filesystems-cfg:ftp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ftp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ftp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ftp-client")
    {
        if(ftp_client == nullptr)
        {
            ftp_client = std::make_shared<Ftp::FtpClient>();
        }
        return ftp_client;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ftp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ftp_client != nullptr)
    {
        children["ftp-client"] = ftp_client;
    }

    return children;
}

void Ftp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ftp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> Ftp::clone_ptr() const
{
    return std::make_shared<Ftp>();
}

std::string Ftp::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Ftp::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Ftp::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Ftp::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool Ftp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ftp-client")
        return true;
    return false;
}

Ftp::FtpClient::FtpClient()
    :
    passive{YType::empty, "passive"},
    password{YType::str, "password"},
    anonymous_password{YType::str, "anonymous-password"},
    username{YType::str, "username"},
    source_interface{YType::str, "source-interface"}
{

    yang_name = "ftp-client"; yang_parent_name = "ftp"; is_top_level_class = false; has_list_ancestor = false;
}

Ftp::FtpClient::~FtpClient()
{
}

bool Ftp::FtpClient::has_data() const
{
    return passive.is_set
	|| password.is_set
	|| anonymous_password.is_set
	|| username.is_set
	|| source_interface.is_set;
}

bool Ftp::FtpClient::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(passive.yfilter)
	|| ydk::is_set(password.yfilter)
	|| ydk::is_set(anonymous_password.yfilter)
	|| ydk::is_set(username.yfilter)
	|| ydk::is_set(source_interface.yfilter);
}

std::string Ftp::FtpClient::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-filesystems-cfg:ftp/" << get_segment_path();
    return path_buffer.str();
}

std::string Ftp::FtpClient::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ftp-client";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ftp::FtpClient::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (passive.is_set || is_set(passive.yfilter)) leaf_name_data.push_back(passive.get_name_leafdata());
    if (password.is_set || is_set(password.yfilter)) leaf_name_data.push_back(password.get_name_leafdata());
    if (anonymous_password.is_set || is_set(anonymous_password.yfilter)) leaf_name_data.push_back(anonymous_password.get_name_leafdata());
    if (username.is_set || is_set(username.yfilter)) leaf_name_data.push_back(username.get_name_leafdata());
    if (source_interface.is_set || is_set(source_interface.yfilter)) leaf_name_data.push_back(source_interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ftp::FtpClient::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ftp::FtpClient::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ftp::FtpClient::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "passive")
    {
        passive = value;
        passive.value_namespace = name_space;
        passive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "password")
    {
        password = value;
        password.value_namespace = name_space;
        password.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "anonymous-password")
    {
        anonymous_password = value;
        anonymous_password.value_namespace = name_space;
        anonymous_password.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "username")
    {
        username = value;
        username.value_namespace = name_space;
        username.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-interface")
    {
        source_interface = value;
        source_interface.value_namespace = name_space;
        source_interface.value_namespace_prefix = name_space_prefix;
    }
}

void Ftp::FtpClient::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "passive")
    {
        passive.yfilter = yfilter;
    }
    if(value_path == "password")
    {
        password.yfilter = yfilter;
    }
    if(value_path == "anonymous-password")
    {
        anonymous_password.yfilter = yfilter;
    }
    if(value_path == "username")
    {
        username.yfilter = yfilter;
    }
    if(value_path == "source-interface")
    {
        source_interface.yfilter = yfilter;
    }
}

bool Ftp::FtpClient::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "passive" || name == "password" || name == "anonymous-password" || name == "username" || name == "source-interface")
        return true;
    return false;
}

Tftp::Tftp()
    :
    tftp_client(std::make_shared<Tftp::TftpClient>())
{
    tftp_client->parent = this;

    yang_name = "tftp"; yang_parent_name = "Cisco-IOS-XR-ipv4-filesystems-cfg"; is_top_level_class = true; has_list_ancestor = false;
}

Tftp::~Tftp()
{
}

bool Tftp::has_data() const
{
    return (tftp_client !=  nullptr && tftp_client->has_data());
}

bool Tftp::has_operation() const
{
    return is_set(yfilter)
	|| (tftp_client !=  nullptr && tftp_client->has_operation());
}

std::string Tftp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-filesystems-cfg:tftp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Tftp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Tftp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tftp-client")
    {
        if(tftp_client == nullptr)
        {
            tftp_client = std::make_shared<Tftp::TftpClient>();
        }
        return tftp_client;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Tftp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(tftp_client != nullptr)
    {
        children["tftp-client"] = tftp_client;
    }

    return children;
}

void Tftp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Tftp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> Tftp::clone_ptr() const
{
    return std::make_shared<Tftp>();
}

std::string Tftp::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Tftp::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Tftp::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Tftp::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool Tftp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tftp-client")
        return true;
    return false;
}

Tftp::TftpClient::TftpClient()
    :
    retry{YType::uint32, "retry"},
    timeout{YType::uint32, "timeout"},
    source_interface{YType::str, "source-interface"}
    	,
    vrfs(std::make_shared<Tftp::TftpClient::Vrfs>())
{
    vrfs->parent = this;

    yang_name = "tftp-client"; yang_parent_name = "tftp"; is_top_level_class = false; has_list_ancestor = false;
}

Tftp::TftpClient::~TftpClient()
{
}

bool Tftp::TftpClient::has_data() const
{
    return retry.is_set
	|| timeout.is_set
	|| source_interface.is_set
	|| (vrfs !=  nullptr && vrfs->has_data());
}

bool Tftp::TftpClient::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(retry.yfilter)
	|| ydk::is_set(timeout.yfilter)
	|| ydk::is_set(source_interface.yfilter)
	|| (vrfs !=  nullptr && vrfs->has_operation());
}

std::string Tftp::TftpClient::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-filesystems-cfg:tftp/" << get_segment_path();
    return path_buffer.str();
}

std::string Tftp::TftpClient::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tftp-client";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Tftp::TftpClient::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (retry.is_set || is_set(retry.yfilter)) leaf_name_data.push_back(retry.get_name_leafdata());
    if (timeout.is_set || is_set(timeout.yfilter)) leaf_name_data.push_back(timeout.get_name_leafdata());
    if (source_interface.is_set || is_set(source_interface.yfilter)) leaf_name_data.push_back(source_interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Tftp::TftpClient::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrfs")
    {
        if(vrfs == nullptr)
        {
            vrfs = std::make_shared<Tftp::TftpClient::Vrfs>();
        }
        return vrfs;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Tftp::TftpClient::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(vrfs != nullptr)
    {
        children["vrfs"] = vrfs;
    }

    return children;
}

void Tftp::TftpClient::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "retry")
    {
        retry = value;
        retry.value_namespace = name_space;
        retry.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timeout")
    {
        timeout = value;
        timeout.value_namespace = name_space;
        timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-interface")
    {
        source_interface = value;
        source_interface.value_namespace = name_space;
        source_interface.value_namespace_prefix = name_space_prefix;
    }
}

void Tftp::TftpClient::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "retry")
    {
        retry.yfilter = yfilter;
    }
    if(value_path == "timeout")
    {
        timeout.yfilter = yfilter;
    }
    if(value_path == "source-interface")
    {
        source_interface.yfilter = yfilter;
    }
}

bool Tftp::TftpClient::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrfs" || name == "retry" || name == "timeout" || name == "source-interface")
        return true;
    return false;
}

Tftp::TftpClient::Vrfs::Vrfs()
{

    yang_name = "vrfs"; yang_parent_name = "tftp-client"; is_top_level_class = false; has_list_ancestor = false;
}

Tftp::TftpClient::Vrfs::~Vrfs()
{
}

bool Tftp::TftpClient::Vrfs::has_data() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_data())
            return true;
    }
    return false;
}

bool Tftp::TftpClient::Vrfs::has_operation() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Tftp::TftpClient::Vrfs::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-filesystems-cfg:tftp/tftp-client/" << get_segment_path();
    return path_buffer.str();
}

std::string Tftp::TftpClient::Vrfs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrfs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Tftp::TftpClient::Vrfs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Tftp::TftpClient::Vrfs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrf")
    {
        for(auto const & c : vrf)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Tftp::TftpClient::Vrfs::Vrf>();
        c->parent = this;
        vrf.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Tftp::TftpClient::Vrfs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : vrf)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Tftp::TftpClient::Vrfs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Tftp::TftpClient::Vrfs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Tftp::TftpClient::Vrfs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf")
        return true;
    return false;
}

Tftp::TftpClient::Vrfs::Vrf::Vrf()
    :
    vrf_name{YType::str, "vrf-name"},
    source_interface{YType::str, "source-interface"},
    retry{YType::uint32, "retry"},
    timeout{YType::uint32, "timeout"}
{

    yang_name = "vrf"; yang_parent_name = "vrfs"; is_top_level_class = false; has_list_ancestor = false;
}

Tftp::TftpClient::Vrfs::Vrf::~Vrf()
{
}

bool Tftp::TftpClient::Vrfs::Vrf::has_data() const
{
    return vrf_name.is_set
	|| source_interface.is_set
	|| retry.is_set
	|| timeout.is_set;
}

bool Tftp::TftpClient::Vrfs::Vrf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| ydk::is_set(source_interface.yfilter)
	|| ydk::is_set(retry.yfilter)
	|| ydk::is_set(timeout.yfilter);
}

std::string Tftp::TftpClient::Vrfs::Vrf::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-filesystems-cfg:tftp/tftp-client/vrfs/" << get_segment_path();
    return path_buffer.str();
}

std::string Tftp::TftpClient::Vrfs::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf" <<"[vrf-name='" <<vrf_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Tftp::TftpClient::Vrfs::Vrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (source_interface.is_set || is_set(source_interface.yfilter)) leaf_name_data.push_back(source_interface.get_name_leafdata());
    if (retry.is_set || is_set(retry.yfilter)) leaf_name_data.push_back(retry.get_name_leafdata());
    if (timeout.is_set || is_set(timeout.yfilter)) leaf_name_data.push_back(timeout.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Tftp::TftpClient::Vrfs::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Tftp::TftpClient::Vrfs::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Tftp::TftpClient::Vrfs::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-interface")
    {
        source_interface = value;
        source_interface.value_namespace = name_space;
        source_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retry")
    {
        retry = value;
        retry.value_namespace = name_space;
        retry.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timeout")
    {
        timeout = value;
        timeout.value_namespace = name_space;
        timeout.value_namespace_prefix = name_space_prefix;
    }
}

void Tftp::TftpClient::Vrfs::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
    if(value_path == "source-interface")
    {
        source_interface.yfilter = yfilter;
    }
    if(value_path == "retry")
    {
        retry.yfilter = yfilter;
    }
    if(value_path == "timeout")
    {
        timeout.yfilter = yfilter;
    }
}

bool Tftp::TftpClient::Vrfs::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf-name" || name == "source-interface" || name == "retry" || name == "timeout")
        return true;
    return false;
}


}
}

