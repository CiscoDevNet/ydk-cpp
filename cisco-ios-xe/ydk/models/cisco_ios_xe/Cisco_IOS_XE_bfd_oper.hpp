#ifndef _CISCO_IOS_XE_BFD_OPER_
#define _CISCO_IOS_XE_BFD_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace Cisco_IOS_XE_bfd_oper {

class BfdState : public Entity
{
    public:
        BfdState();
        ~BfdState();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;

        class Sessions; //type: BfdState::Sessions

        std::shared_ptr<Cisco_IOS_XE_bfd_oper::BfdState::Sessions> sessions;
        
}; // BfdState


class BfdState::Sessions : public Entity
{
    public:
        Sessions();
        ~Sessions();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Session; //type: BfdState::Sessions::Session

        std::vector<std::shared_ptr<Cisco_IOS_XE_bfd_oper::BfdState::Sessions::Session> > session;
        
}; // BfdState::Sessions


class BfdState::Sessions::Session : public Entity
{
    public:
        Session();
        ~Session();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf type; //type: BfdOperSessionTypeEnum
        class BfdTunnelPaths; //type: BfdState::Sessions::Session::BfdTunnelPaths
        class BfdCircuits; //type: BfdState::Sessions::Session::BfdCircuits
        class BfdNbrs; //type: BfdState::Sessions::Session::BfdNbrs
        class BfdMhopNbrs; //type: BfdState::Sessions::Session::BfdMhopNbrs
        class BfdMhopVrfNbrs; //type: BfdState::Sessions::Session::BfdMhopVrfNbrs

        std::shared_ptr<Cisco_IOS_XE_bfd_oper::BfdState::Sessions::Session::BfdCircuits> bfd_circuits;
        std::shared_ptr<Cisco_IOS_XE_bfd_oper::BfdState::Sessions::Session::BfdMhopNbrs> bfd_mhop_nbrs;
        std::shared_ptr<Cisco_IOS_XE_bfd_oper::BfdState::Sessions::Session::BfdMhopVrfNbrs> bfd_mhop_vrf_nbrs;
        std::shared_ptr<Cisco_IOS_XE_bfd_oper::BfdState::Sessions::Session::BfdNbrs> bfd_nbrs;
        std::shared_ptr<Cisco_IOS_XE_bfd_oper::BfdState::Sessions::Session::BfdTunnelPaths> bfd_tunnel_paths;
        
}; // BfdState::Sessions::Session


class BfdState::Sessions::Session::BfdTunnelPaths : public Entity
{
    public:
        BfdTunnelPaths();
        ~BfdTunnelPaths();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class BfdTunnelPath; //type: BfdState::Sessions::Session::BfdTunnelPaths::BfdTunnelPath

        std::vector<std::shared_ptr<Cisco_IOS_XE_bfd_oper::BfdState::Sessions::Session::BfdTunnelPaths::BfdTunnelPath> > bfd_tunnel_path;
        
}; // BfdState::Sessions::Session::BfdTunnelPaths


class BfdState::Sessions::Session::BfdTunnelPaths::BfdTunnelPath : public Entity
{
    public:
        BfdTunnelPath();
        ~BfdTunnelPath();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface; //type: string
        YLeaf lsp_type; //type: BfdLspTypeEnum
        YLeaf ld; //type: uint32
        YLeaf rd; //type: uint32
        YLeaf remote_state; //type: BfdRemoteStateTypeEnum
        YLeaf state; //type: BfdStateTypeEnum

}; // BfdState::Sessions::Session::BfdTunnelPaths::BfdTunnelPath


class BfdState::Sessions::Session::BfdCircuits : public Entity
{
    public:
        BfdCircuits();
        ~BfdCircuits();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class BfdCircuit; //type: BfdState::Sessions::Session::BfdCircuits::BfdCircuit

        std::vector<std::shared_ptr<Cisco_IOS_XE_bfd_oper::BfdState::Sessions::Session::BfdCircuits::BfdCircuit> > bfd_circuit;
        
}; // BfdState::Sessions::Session::BfdCircuits


class BfdState::Sessions::Session::BfdCircuits::BfdCircuit : public Entity
{
    public:
        BfdCircuit();
        ~BfdCircuit();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface; //type: string
        YLeaf vcid; //type: uint32
        YLeaf ld; //type: uint32
        YLeaf rd; //type: uint32
        YLeaf remote_state; //type: BfdRemoteStateTypeEnum
        YLeaf state; //type: BfdStateTypeEnum

}; // BfdState::Sessions::Session::BfdCircuits::BfdCircuit


class BfdState::Sessions::Session::BfdNbrs : public Entity
{
    public:
        BfdNbrs();
        ~BfdNbrs();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class BfdNbr; //type: BfdState::Sessions::Session::BfdNbrs::BfdNbr

        std::vector<std::shared_ptr<Cisco_IOS_XE_bfd_oper::BfdState::Sessions::Session::BfdNbrs::BfdNbr> > bfd_nbr;
        
}; // BfdState::Sessions::Session::BfdNbrs


class BfdState::Sessions::Session::BfdNbrs::BfdNbr : public Entity
{
    public:
        BfdNbr();
        ~BfdNbr();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ip; //type: string
        YLeaf interface; //type: string
        YLeaf ld; //type: uint32
        YLeaf rd; //type: uint32
        YLeaf remote_state; //type: BfdRemoteStateTypeEnum
        YLeaf state; //type: BfdStateTypeEnum

}; // BfdState::Sessions::Session::BfdNbrs::BfdNbr


class BfdState::Sessions::Session::BfdMhopNbrs : public Entity
{
    public:
        BfdMhopNbrs();
        ~BfdMhopNbrs();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class BfdMhopNbr; //type: BfdState::Sessions::Session::BfdMhopNbrs::BfdMhopNbr

        std::vector<std::shared_ptr<Cisco_IOS_XE_bfd_oper::BfdState::Sessions::Session::BfdMhopNbrs::BfdMhopNbr> > bfd_mhop_nbr;
        
}; // BfdState::Sessions::Session::BfdMhopNbrs


class BfdState::Sessions::Session::BfdMhopNbrs::BfdMhopNbr : public Entity
{
    public:
        BfdMhopNbr();
        ~BfdMhopNbr();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ip; //type: string
        YLeaf ld; //type: uint32
        YLeaf rd; //type: uint32
        YLeaf remote_state; //type: BfdRemoteStateTypeEnum
        YLeaf state; //type: BfdStateTypeEnum

}; // BfdState::Sessions::Session::BfdMhopNbrs::BfdMhopNbr


class BfdState::Sessions::Session::BfdMhopVrfNbrs : public Entity
{
    public:
        BfdMhopVrfNbrs();
        ~BfdMhopVrfNbrs();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class BfdMhopVrfNbr; //type: BfdState::Sessions::Session::BfdMhopVrfNbrs::BfdMhopVrfNbr

        std::vector<std::shared_ptr<Cisco_IOS_XE_bfd_oper::BfdState::Sessions::Session::BfdMhopVrfNbrs::BfdMhopVrfNbr> > bfd_mhop_vrf_nbr;
        
}; // BfdState::Sessions::Session::BfdMhopVrfNbrs


class BfdState::Sessions::Session::BfdMhopVrfNbrs::BfdMhopVrfNbr : public Entity
{
    public:
        BfdMhopVrfNbr();
        ~BfdMhopVrfNbr();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ip; //type: string
        YLeaf vrf; //type: string
        YLeaf ld; //type: uint32
        YLeaf rd; //type: uint32
        YLeaf remote_state; //type: BfdRemoteStateTypeEnum
        YLeaf state; //type: BfdStateTypeEnum

}; // BfdState::Sessions::Session::BfdMhopVrfNbrs::BfdMhopVrfNbr

class BfdRemoteStateTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf up;
        static const Enum::YLeaf down;
        static const Enum::YLeaf init;
        static const Enum::YLeaf admindown;
        static const Enum::YLeaf invalid;

};

class BfdLspTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf working;
        static const Enum::YLeaf protect;
        static const Enum::YLeaf unknown;

};

class BfdOperSessionTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf ipv4;
        static const Enum::YLeaf ipv6;
        static const Enum::YLeaf vccv;
        static const Enum::YLeaf mpls_tp;
        static const Enum::YLeaf ipv4_multihop;
        static const Enum::YLeaf ipv6_multihop;

};

class BfdStateTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf admindown;
        static const Enum::YLeaf down;
        static const Enum::YLeaf fail;
        static const Enum::YLeaf init;
        static const Enum::YLeaf up;
        static const Enum::YLeaf invalid;

};


}
}

#endif /* _CISCO_IOS_XE_BFD_OPER_ */

