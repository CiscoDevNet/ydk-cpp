#ifndef _CISCO_IOS_XR_IKEV2_OPER_
#define _CISCO_IOS_XR_IKEV2_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ikev2_oper {

class IkEv2 : public ydk::Entity
{
    public:
        IkEv2();
        ~IkEv2();

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

        class Nodes; //type: IkEv2::Nodes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ikev2_oper::IkEv2::Nodes> nodes;
        
}; // IkEv2


class IkEv2::Nodes : public ydk::Entity
{
    public:
        Nodes();
        ~Nodes();

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

        class Node; //type: IkEv2::Nodes::Node

        ydk::YList node;
        
}; // IkEv2::Nodes


class IkEv2::Nodes::Node : public ydk::Entity
{
    public:
        Node();
        ~Node();

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

        ydk::YLeaf node_name; //type: string
        class Session; //type: IkEv2::Nodes::Node::Session
        class Sa; //type: IkEv2::Nodes::Node::Sa
        class Policies; //type: IkEv2::Nodes::Node::Policies
        class Proposals; //type: IkEv2::Nodes::Node::Proposals
        class Profiles; //type: IkEv2::Nodes::Node::Profiles
        class Keyrings; //type: IkEv2::Nodes::Node::Keyrings

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ikev2_oper::IkEv2::Nodes::Node::Session> session;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ikev2_oper::IkEv2::Nodes::Node::Sa> sa;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ikev2_oper::IkEv2::Nodes::Node::Policies> policies;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ikev2_oper::IkEv2::Nodes::Node::Proposals> proposals;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ikev2_oper::IkEv2::Nodes::Node::Profiles> profiles;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ikev2_oper::IkEv2::Nodes::Node::Keyrings> keyrings;
        
}; // IkEv2::Nodes::Node


class IkEv2::Nodes::Node::Session : public ydk::Entity
{
    public:
        Session();
        ~Session();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Session_; //type: IkEv2::Nodes::Node::Session::Session_

        ydk::YList session;
        
}; // IkEv2::Nodes::Node::Session


class IkEv2::Nodes::Node::Session::Session_ : public ydk::Entity
{
    public:
        Session_();
        ~Session_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf session_id; //type: uint32
        ydk::YLeaf session_status; //type: string
        ydk::YLeaf ike_cnt; //type: uint32
        ydk::YLeaf child_cnt; //type: uint32
        class Sa; //type: IkEv2::Nodes::Node::Session::Session_::Sa
        class ChildSa; //type: IkEv2::Nodes::Node::Session::Session_::ChildSa

        ydk::YList sa;
        ydk::YList child_sa;
        
}; // IkEv2::Nodes::Node::Session::Session_


class IkEv2::Nodes::Node::Session::Session_::Sa : public ydk::Entity
{
    public:
        Sa();
        ~Sa();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tunnel_id; //type: uint32
        ydk::YLeaf local_addr_port; //type: string
        ydk::YLeaf remote_addr_port; //type: string
        ydk::YLeaf state; //type: string
        ydk::YLeaf encr; //type: string
        ydk::YLeaf keysize; //type: uint32
        ydk::YLeaf prf; //type: string
        ydk::YLeaf hash; //type: string
        ydk::YLeaf dh_group; //type: uint32
        ydk::YLeaf auth_sign; //type: string
        ydk::YLeaf auth_verify; //type: string
        ydk::YLeaf life_active; //type: string
        ydk::YLeaf session_id; //type: uint32
        ydk::YLeaf status_desc; //type: string
        ydk::YLeaf local_spi; //type: string
        ydk::YLeaf remote_spi; //type: string
        ydk::YLeaf local_id; //type: string
        ydk::YLeaf remote_id; //type: string
        ydk::YLeaf sa_initiator; //type: boolean

}; // IkEv2::Nodes::Node::Session::Session_::Sa


class IkEv2::Nodes::Node::Session::Session_::ChildSa : public ydk::Entity
{
    public:
        ChildSa();
        ~ChildSa();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf local_selector; //type: string
        ydk::YLeaf remote_selector; //type: string
        ydk::YLeaf esp_spi_in_out; //type: string
        ydk::YLeaf encr; //type: string
        ydk::YLeaf keysize; //type: uint32
        ydk::YLeaf hmac; //type: string

}; // IkEv2::Nodes::Node::Session::Session_::ChildSa


class IkEv2::Nodes::Node::Sa : public ydk::Entity
{
    public:
        Sa();
        ~Sa();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class LocalV4; //type: IkEv2::Nodes::Node::Sa::LocalV4
        class RemoteV4; //type: IkEv2::Nodes::Node::Sa::RemoteV4
        class All; //type: IkEv2::Nodes::Node::Sa::All

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ikev2_oper::IkEv2::Nodes::Node::Sa::LocalV4> local_v4;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ikev2_oper::IkEv2::Nodes::Node::Sa::RemoteV4> remote_v4;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ikev2_oper::IkEv2::Nodes::Node::Sa::All> all;
        
}; // IkEv2::Nodes::Node::Sa


class IkEv2::Nodes::Node::Sa::LocalV4 : public ydk::Entity
{
    public:
        LocalV4();
        ~LocalV4();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ip; //type: IkEv2::Nodes::Node::Sa::LocalV4::Ip

        ydk::YList ip;
        
}; // IkEv2::Nodes::Node::Sa::LocalV4


class IkEv2::Nodes::Node::Sa::LocalV4::Ip : public ydk::Entity
{
    public:
        Ip();
        ~Ip();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address; //type: string
        class Sa_; //type: IkEv2::Nodes::Node::Sa::LocalV4::Ip::Sa_

        ydk::YList sa;
        
}; // IkEv2::Nodes::Node::Sa::LocalV4::Ip


class IkEv2::Nodes::Node::Sa::LocalV4::Ip::Sa_ : public ydk::Entity
{
    public:
        Sa_();
        ~Sa_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tunnel_id; //type: uint32
        ydk::YLeaf local_addr_port; //type: string
        ydk::YLeaf remote_addr_port; //type: string
        ydk::YLeaf state; //type: string
        ydk::YLeaf encr; //type: string
        ydk::YLeaf keysize; //type: uint32
        ydk::YLeaf prf; //type: string
        ydk::YLeaf hash; //type: string
        ydk::YLeaf dh_group; //type: uint32
        ydk::YLeaf auth_sign; //type: string
        ydk::YLeaf auth_verify; //type: string
        ydk::YLeaf life_active; //type: string
        ydk::YLeaf session_id; //type: uint32
        ydk::YLeaf status_desc; //type: string
        ydk::YLeaf local_spi; //type: string
        ydk::YLeaf remote_spi; //type: string
        ydk::YLeaf local_id; //type: string
        ydk::YLeaf remote_id; //type: string
        ydk::YLeaf sa_initiator; //type: boolean

}; // IkEv2::Nodes::Node::Sa::LocalV4::Ip::Sa_


class IkEv2::Nodes::Node::Sa::RemoteV4 : public ydk::Entity
{
    public:
        RemoteV4();
        ~RemoteV4();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ip; //type: IkEv2::Nodes::Node::Sa::RemoteV4::Ip

        ydk::YList ip;
        
}; // IkEv2::Nodes::Node::Sa::RemoteV4


class IkEv2::Nodes::Node::Sa::RemoteV4::Ip : public ydk::Entity
{
    public:
        Ip();
        ~Ip();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address; //type: string
        class Sa_; //type: IkEv2::Nodes::Node::Sa::RemoteV4::Ip::Sa_

        ydk::YList sa;
        
}; // IkEv2::Nodes::Node::Sa::RemoteV4::Ip


class IkEv2::Nodes::Node::Sa::RemoteV4::Ip::Sa_ : public ydk::Entity
{
    public:
        Sa_();
        ~Sa_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tunnel_id; //type: uint32
        ydk::YLeaf local_addr_port; //type: string
        ydk::YLeaf remote_addr_port; //type: string
        ydk::YLeaf state; //type: string
        ydk::YLeaf encr; //type: string
        ydk::YLeaf keysize; //type: uint32
        ydk::YLeaf prf; //type: string
        ydk::YLeaf hash; //type: string
        ydk::YLeaf dh_group; //type: uint32
        ydk::YLeaf auth_sign; //type: string
        ydk::YLeaf auth_verify; //type: string
        ydk::YLeaf life_active; //type: string
        ydk::YLeaf session_id; //type: uint32
        ydk::YLeaf status_desc; //type: string
        ydk::YLeaf local_spi; //type: string
        ydk::YLeaf remote_spi; //type: string
        ydk::YLeaf local_id; //type: string
        ydk::YLeaf remote_id; //type: string
        ydk::YLeaf sa_initiator; //type: boolean

}; // IkEv2::Nodes::Node::Sa::RemoteV4::Ip::Sa_


class IkEv2::Nodes::Node::Sa::All : public ydk::Entity
{
    public:
        All();
        ~All();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Sa_; //type: IkEv2::Nodes::Node::Sa::All::Sa_

        ydk::YList sa;
        
}; // IkEv2::Nodes::Node::Sa::All


class IkEv2::Nodes::Node::Sa::All::Sa_ : public ydk::Entity
{
    public:
        Sa_();
        ~Sa_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tunnel_id; //type: uint32
        ydk::YLeaf local_addr_port; //type: string
        ydk::YLeaf remote_addr_port; //type: string
        ydk::YLeaf state; //type: string
        ydk::YLeaf encr; //type: string
        ydk::YLeaf keysize; //type: uint32
        ydk::YLeaf prf; //type: string
        ydk::YLeaf hash; //type: string
        ydk::YLeaf dh_group; //type: uint32
        ydk::YLeaf auth_sign; //type: string
        ydk::YLeaf auth_verify; //type: string
        ydk::YLeaf life_active; //type: string
        ydk::YLeaf session_id; //type: uint32
        ydk::YLeaf status_desc; //type: string
        ydk::YLeaf local_spi; //type: string
        ydk::YLeaf remote_spi; //type: string
        ydk::YLeaf local_id; //type: string
        ydk::YLeaf remote_id; //type: string
        ydk::YLeaf sa_initiator; //type: boolean

}; // IkEv2::Nodes::Node::Sa::All::Sa_


class IkEv2::Nodes::Node::Policies : public ydk::Entity
{
    public:
        Policies();
        ~Policies();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Policy; //type: IkEv2::Nodes::Node::Policies::Policy

        ydk::YList policy;
        
}; // IkEv2::Nodes::Node::Policies


class IkEv2::Nodes::Node::Policies::Policy : public ydk::Entity
{
    public:
        Policy();
        ~Policy();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf policy_name; //type: string
        ydk::YLeafList addr; //type: list of  string
        ydk::YLeafList proposal; //type: list of  string

}; // IkEv2::Nodes::Node::Policies::Policy


class IkEv2::Nodes::Node::Proposals : public ydk::Entity
{
    public:
        Proposals();
        ~Proposals();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Proposal; //type: IkEv2::Nodes::Node::Proposals::Proposal

        ydk::YList proposal;
        
}; // IkEv2::Nodes::Node::Proposals


class IkEv2::Nodes::Node::Proposals::Proposal : public ydk::Entity
{
    public:
        Proposal();
        ~Proposal();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf proposal_name; //type: string
        ydk::YLeafList encryption_alg; //type: list of  string
        ydk::YLeafList hash_alg; //type: list of  string
        ydk::YLeafList prf_alg; //type: list of  string
        ydk::YLeafList group_alg; //type: list of  string

}; // IkEv2::Nodes::Node::Proposals::Proposal


class IkEv2::Nodes::Node::Profiles : public ydk::Entity
{
    public:
        Profiles();
        ~Profiles();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Profile; //type: IkEv2::Nodes::Node::Profiles::Profile

        ydk::YList profile;
        
}; // IkEv2::Nodes::Node::Profiles


class IkEv2::Nodes::Node::Profiles::Profile : public ydk::Entity
{
    public:
        Profile();
        ~Profile();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf profile_name; //type: string
        ydk::YLeaf keyring_name; //type: string
        ydk::YLeaf match_any; //type: boolean
        ydk::YLeaf lifetime; //type: uint32
        ydk::YLeaf dpd_interval; //type: uint32
        ydk::YLeaf dpd_retry; //type: uint32
        ydk::YLeafList addr; //type: list of  string
        ydk::YLeafList mask; //type: list of  string

}; // IkEv2::Nodes::Node::Profiles::Profile


class IkEv2::Nodes::Node::Keyrings : public ydk::Entity
{
    public:
        Keyrings();
        ~Keyrings();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Keyring; //type: IkEv2::Nodes::Node::Keyrings::Keyring

        ydk::YList keyring;
        
}; // IkEv2::Nodes::Node::Keyrings


class IkEv2::Nodes::Node::Keyrings::Keyring : public ydk::Entity
{
    public:
        Keyring();
        ~Keyring();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf keyring_name; //type: string
        class Peer; //type: IkEv2::Nodes::Node::Keyrings::Keyring::Peer

        ydk::YList peer;
        
}; // IkEv2::Nodes::Node::Keyrings::Keyring


class IkEv2::Nodes::Node::Keyrings::Keyring::Peer : public ydk::Entity
{
    public:
        Peer();
        ~Peer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf peer_name; //type: string
        ydk::YLeaf ip_address; //type: string
        ydk::YLeaf subnet; //type: string
        ydk::YLeaf local_psk; //type: string
        ydk::YLeaf remote_psk; //type: string

}; // IkEv2::Nodes::Node::Keyrings::Keyring::Peer


}
}

#endif /* _CISCO_IOS_XR_IKEV2_OPER_ */

