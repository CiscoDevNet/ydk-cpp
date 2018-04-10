#ifndef _CISCO_IOS_XR_SYSADMIN_TACACS_TACACS_SERVER_
#define _CISCO_IOS_XR_SYSADMIN_TACACS_TACACS_SERVER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_sysadmin_tacacs_tacacs_server {

class TacacsServer : public ydk::Entity
{
    public:
        TacacsServer();
        ~TacacsServer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::shared_ptr<ydk::Entity> clone_ptr() const override;
        ydk::augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;
        std::map<std::pair<std::string, std::string>, std::string> get_namespace_identity_lookup() const override;

        ydk::YLeaf timeout; //type: uint32
        ydk::YLeaf key; //type: string
        class Host; //type: TacacsServer::Host
        class Requests; //type: TacacsServer::Requests
        class TestAuthentication; //type: TacacsServer::TestAuthentication
        class TestAuthorization; //type: TacacsServer::TestAuthorization
        class TestAccounting; //type: TacacsServer::TestAccounting

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_tacacs_tacacs_server::TacacsServer::Host> > host;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_tacacs_tacacs_server::TacacsServer::Requests> requests;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_tacacs_tacacs_server::TacacsServer::TestAuthentication> test_authentication; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_tacacs_tacacs_server::TacacsServer::TestAuthorization> test_authorization; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_tacacs_tacacs_server::TacacsServer::TestAccounting> test_accounting; // presence node
        
}; // TacacsServer


class TacacsServer::Host : public ydk::Entity
{
    public:
        Host();
        ~Host();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf ip; //type: string
        ydk::YLeaf port; //type: uint16
        ydk::YLeaf timeout; //type: uint32
        ydk::YLeaf key; //type: string

}; // TacacsServer::Host


class TacacsServer::Requests : public ydk::Entity
{
    public:
        Requests();
        ~Requests();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Ipv4; //type: TacacsServer::Requests::Ipv4

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_tacacs_tacacs_server::TacacsServer::Requests::Ipv4> > ipv4;
        
}; // TacacsServer::Requests


class TacacsServer::Requests::Ipv4 : public ydk::Entity
{
    public:
        Ipv4();
        ~Ipv4();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf addr; //type: string
        ydk::YLeaf port; //type: uint16
        ydk::YLeaf opens; //type: uint32
        ydk::YLeaf closes; //type: uint32
        ydk::YLeaf aborts; //type: uint32
        ydk::YLeaf errors; //type: uint32
        ydk::YLeaf packets_in; //type: uint32
        ydk::YLeaf packets_out; //type: uint32

}; // TacacsServer::Requests::Ipv4


class TacacsServer::TestAuthentication : public ydk::Entity
{
    public:
        TestAuthentication();
        ~TestAuthentication();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf authentication; //type: string

}; // TacacsServer::TestAuthentication


class TacacsServer::TestAuthorization : public ydk::Entity
{
    public:
        TestAuthorization();
        ~TestAuthorization();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf authorization; //type: string

}; // TacacsServer::TestAuthorization


class TacacsServer::TestAccounting : public ydk::Entity
{
    public:
        TestAccounting();
        ~TestAccounting();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf accounting; //type: string

}; // TacacsServer::TestAccounting


}
}

#endif /* _CISCO_IOS_XR_SYSADMIN_TACACS_TACACS_SERVER_ */

