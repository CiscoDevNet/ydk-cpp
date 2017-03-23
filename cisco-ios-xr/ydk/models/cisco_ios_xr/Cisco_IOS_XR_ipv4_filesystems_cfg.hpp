#ifndef _CISCO_IOS_XR_IPV4_FILESYSTEMS_CFG_
#define _CISCO_IOS_XR_IPV4_FILESYSTEMS_CFG_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace Cisco_IOS_XR_ipv4_filesystems_cfg {

class Rcp : public Entity
{
    public:
        Rcp();
        ~Rcp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;



        class RcpClient; //type: Rcp::RcpClient

        std::shared_ptr<Cisco_IOS_XR_ipv4_filesystems_cfg::Rcp::RcpClient> rcp_client;


}; // Rcp


class Rcp::RcpClient : public Entity
{
    public:
        RcpClient();
        ~RcpClient();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf source_interface; //type: string



}; // Rcp::RcpClient

class Ftp : public Entity
{
    public:
        Ftp();
        ~Ftp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;



        class FtpClient; //type: Ftp::FtpClient

        std::shared_ptr<Cisco_IOS_XR_ipv4_filesystems_cfg::Ftp::FtpClient> ftp_client;


}; // Ftp


class Ftp::FtpClient : public Entity
{
    public:
        FtpClient();
        ~FtpClient();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf passive; //type: empty
        YLeaf password; //type: string
        YLeaf anonymous_password; //type: string
        YLeaf source_interface; //type: string



}; // Ftp::FtpClient

class Tftp : public Entity
{
    public:
        Tftp();
        ~Tftp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;



        class TftpClient; //type: Tftp::TftpClient

        std::shared_ptr<Cisco_IOS_XR_ipv4_filesystems_cfg::Tftp::TftpClient> tftp_client;


}; // Tftp


class Tftp::TftpClient : public Entity
{
    public:
        TftpClient();
        ~TftpClient();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf source_interface; //type: string



}; // Tftp::TftpClient


}
}

#endif /* _CISCO_IOS_XR_IPV4_FILESYSTEMS_CFG_ */

