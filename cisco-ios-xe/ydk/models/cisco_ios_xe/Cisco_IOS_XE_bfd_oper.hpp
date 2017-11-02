#ifndef _CISCO_IOS_XE_BFD_OPER_
#define _CISCO_IOS_XE_BFD_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_bfd_oper {

class BfdState : public ydk::Entity
{
    public:
        BfdState();
        ~BfdState();

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

        class Sessions; //type: BfdState::Sessions

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_bfd_oper::BfdState::Sessions> sessions;
        
}; // BfdState


class BfdState::Sessions : public ydk::Entity
{
    public:
        Sessions();
        ~Sessions();

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

        class Session; //type: BfdState::Sessions::Session

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_bfd_oper::BfdState::Sessions::Session> > session;
        
}; // BfdState::Sessions


class BfdState::Sessions::Session : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf type; //type: BfdOperSessionType
        class BfdTunnelPaths; //type: BfdState::Sessions::Session::BfdTunnelPaths
        class BfdCircuits; //type: BfdState::Sessions::Session::BfdCircuits
        class BfdNbrs; //type: BfdState::Sessions::Session::BfdNbrs
        class BfdMhopNbrs; //type: BfdState::Sessions::Session::BfdMhopNbrs
        class BfdMhopVrfNbrs; //type: BfdState::Sessions::Session::BfdMhopVrfNbrs

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_bfd_oper::BfdState::Sessions::Session::BfdTunnelPaths> bfd_tunnel_paths;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_bfd_oper::BfdState::Sessions::Session::BfdCircuits> bfd_circuits;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_bfd_oper::BfdState::Sessions::Session::BfdNbrs> bfd_nbrs;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_bfd_oper::BfdState::Sessions::Session::BfdMhopNbrs> bfd_mhop_nbrs;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_bfd_oper::BfdState::Sessions::Session::BfdMhopVrfNbrs> bfd_mhop_vrf_nbrs;
        
}; // BfdState::Sessions::Session


class BfdState::Sessions::Session::BfdTunnelPaths : public ydk::Entity
{
    public:
        BfdTunnelPaths();
        ~BfdTunnelPaths();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class BfdTunnelPath; //type: BfdState::Sessions::Session::BfdTunnelPaths::BfdTunnelPath

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_bfd_oper::BfdState::Sessions::Session::BfdTunnelPaths::BfdTunnelPath> > bfd_tunnel_path;
        
}; // BfdState::Sessions::Session::BfdTunnelPaths


class BfdState::Sessions::Session::BfdTunnelPaths::BfdTunnelPath : public ydk::Entity
{
    public:
        BfdTunnelPath();
        ~BfdTunnelPath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface; //type: string
        ydk::YLeaf lsp_type; //type: BfdLspType
        ydk::YLeaf ld; //type: uint32
        ydk::YLeaf rd; //type: uint32
        ydk::YLeaf remote_state; //type: BfdRemoteStateType
        ydk::YLeaf state; //type: BfdStateType

}; // BfdState::Sessions::Session::BfdTunnelPaths::BfdTunnelPath


class BfdState::Sessions::Session::BfdCircuits : public ydk::Entity
{
    public:
        BfdCircuits();
        ~BfdCircuits();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class BfdCircuit; //type: BfdState::Sessions::Session::BfdCircuits::BfdCircuit

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_bfd_oper::BfdState::Sessions::Session::BfdCircuits::BfdCircuit> > bfd_circuit;
        
}; // BfdState::Sessions::Session::BfdCircuits


class BfdState::Sessions::Session::BfdCircuits::BfdCircuit : public ydk::Entity
{
    public:
        BfdCircuit();
        ~BfdCircuit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface; //type: string
        ydk::YLeaf vcid; //type: uint32
        ydk::YLeaf ld; //type: uint32
        ydk::YLeaf rd; //type: uint32
        ydk::YLeaf remote_state; //type: BfdRemoteStateType
        ydk::YLeaf state; //type: BfdStateType

}; // BfdState::Sessions::Session::BfdCircuits::BfdCircuit


class BfdState::Sessions::Session::BfdNbrs : public ydk::Entity
{
    public:
        BfdNbrs();
        ~BfdNbrs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class BfdNbr; //type: BfdState::Sessions::Session::BfdNbrs::BfdNbr

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_bfd_oper::BfdState::Sessions::Session::BfdNbrs::BfdNbr> > bfd_nbr;
        
}; // BfdState::Sessions::Session::BfdNbrs


class BfdState::Sessions::Session::BfdNbrs::BfdNbr : public ydk::Entity
{
    public:
        BfdNbr();
        ~BfdNbr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ip; //type: string
        ydk::YLeaf interface; //type: string
        ydk::YLeaf ld; //type: uint32
        ydk::YLeaf rd; //type: uint32
        ydk::YLeaf remote_state; //type: BfdRemoteStateType
        ydk::YLeaf state; //type: BfdStateType

}; // BfdState::Sessions::Session::BfdNbrs::BfdNbr


class BfdState::Sessions::Session::BfdMhopNbrs : public ydk::Entity
{
    public:
        BfdMhopNbrs();
        ~BfdMhopNbrs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class BfdMhopNbr; //type: BfdState::Sessions::Session::BfdMhopNbrs::BfdMhopNbr

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_bfd_oper::BfdState::Sessions::Session::BfdMhopNbrs::BfdMhopNbr> > bfd_mhop_nbr;
        
}; // BfdState::Sessions::Session::BfdMhopNbrs


class BfdState::Sessions::Session::BfdMhopNbrs::BfdMhopNbr : public ydk::Entity
{
    public:
        BfdMhopNbr();
        ~BfdMhopNbr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ip; //type: string
        ydk::YLeaf ld; //type: uint32
        ydk::YLeaf rd; //type: uint32
        ydk::YLeaf remote_state; //type: BfdRemoteStateType
        ydk::YLeaf state; //type: BfdStateType

}; // BfdState::Sessions::Session::BfdMhopNbrs::BfdMhopNbr


class BfdState::Sessions::Session::BfdMhopVrfNbrs : public ydk::Entity
{
    public:
        BfdMhopVrfNbrs();
        ~BfdMhopVrfNbrs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class BfdMhopVrfNbr; //type: BfdState::Sessions::Session::BfdMhopVrfNbrs::BfdMhopVrfNbr

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_bfd_oper::BfdState::Sessions::Session::BfdMhopVrfNbrs::BfdMhopVrfNbr> > bfd_mhop_vrf_nbr;
        
}; // BfdState::Sessions::Session::BfdMhopVrfNbrs


class BfdState::Sessions::Session::BfdMhopVrfNbrs::BfdMhopVrfNbr : public ydk::Entity
{
    public:
        BfdMhopVrfNbr();
        ~BfdMhopVrfNbr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ip; //type: string
        ydk::YLeaf vrf; //type: string
        ydk::YLeaf ld; //type: uint32
        ydk::YLeaf rd; //type: uint32
        ydk::YLeaf remote_state; //type: BfdRemoteStateType
        ydk::YLeaf state; //type: BfdStateType

}; // BfdState::Sessions::Session::BfdMhopVrfNbrs::BfdMhopVrfNbr

class BfdOperSessionType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ipv4;
        static const ydk::Enum::YLeaf ipv6;
        static const ydk::Enum::YLeaf vccv;
        static const ydk::Enum::YLeaf mpls_tp;
        static const ydk::Enum::YLeaf ipv4_multihop;
        static const ydk::Enum::YLeaf ipv6_multihop;

};

class BfdRemoteStateType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf up;
        static const ydk::Enum::YLeaf down;
        static const ydk::Enum::YLeaf init;
        static const ydk::Enum::YLeaf admindown;
        static const ydk::Enum::YLeaf invalid;

};

class BfdStateType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf admindown;
        static const ydk::Enum::YLeaf down;
        static const ydk::Enum::YLeaf fail;
        static const ydk::Enum::YLeaf init;
        static const ydk::Enum::YLeaf up;
        static const ydk::Enum::YLeaf invalid;

};

class BfdLspType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf working;
        static const ydk::Enum::YLeaf protect;
        static const ydk::Enum::YLeaf unknown;

};


}
}

#endif /* _CISCO_IOS_XE_BFD_OPER_ */

