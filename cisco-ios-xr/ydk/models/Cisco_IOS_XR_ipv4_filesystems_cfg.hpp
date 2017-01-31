#ifndef _CISCO_IOS_XR_IPV4_FILESYSTEMS_CFG_
#define _CISCO_IOS_XR_IPV4_FILESYSTEMS_CFG_

#include <memory>
#include <vector>
#include <string>
#include "ydk/types.hpp"
#include "ydk/errors.hpp"

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
        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, Entity*> & get_children() override;
        std::unique_ptr<Entity> clone_ptr() override;



    class RcpClient : public Entity
    {
        public:
            RcpClient();
            ~RcpClient();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


            YLeaf source_interface; //type: string



    }; // Rcp::RcpClient


        std::unique_ptr<Cisco_IOS_XR_ipv4_filesystems_cfg::Rcp::RcpClient> rcp_client;


}; // Rcp

class Ftp : public Entity
{
    public:
        Ftp();
        ~Ftp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, Entity*> & get_children() override;
        std::unique_ptr<Entity> clone_ptr() override;



    class FtpClient : public Entity
    {
        public:
            FtpClient();
            ~FtpClient();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


            YLeaf passive; //type: empty
            YLeaf password; //type: string
            YLeaf anonymous_password; //type: string
            YLeaf source_interface; //type: string



    }; // Ftp::FtpClient


        std::unique_ptr<Cisco_IOS_XR_ipv4_filesystems_cfg::Ftp::FtpClient> ftp_client;


}; // Ftp

class Tftp : public Entity
{
    public:
        Tftp();
        ~Tftp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, Entity*> & get_children() override;
        std::unique_ptr<Entity> clone_ptr() override;



    class TftpClient : public Entity
    {
        public:
            TftpClient();
            ~TftpClient();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


            YLeaf source_interface; //type: string



    }; // Tftp::TftpClient


        std::unique_ptr<Cisco_IOS_XR_ipv4_filesystems_cfg::Tftp::TftpClient> tftp_client;


}; // Tftp



}
}

#endif /* _CISCO_IOS_XR_IPV4_FILESYSTEMS_CFG_ */

