#ifndef _CISCO_IOS_XE_NATIVE_84_
#define _CISCO_IOS_XE_NATIVE_84_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XE_native_0.hpp"
#include "Cisco_IOS_XE_native_83.hpp"

namespace ydk {
namespace Cisco_IOS_XE_native {


class Native::Mpls::TrafficEng::AutoTunnel::Backup::Srlg : public Entity
{
    public:
        Srlg();
        ~Srlg();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Exclude; //type: Native::Mpls::TrafficEng::AutoTunnel::Backup::Srlg::Exclude

        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::TrafficEng::AutoTunnel::Backup::Srlg::Exclude> exclude;
        
}; // Native::Mpls::TrafficEng::AutoTunnel::Backup::Srlg


class Native::Mpls::TrafficEng::AutoTunnel::Backup::Srlg::Exclude : public Entity
{
    public:
        Exclude();
        ~Exclude();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf force; //type: empty
        YLeaf preferred; //type: empty

}; // Native::Mpls::TrafficEng::AutoTunnel::Backup::Srlg::Exclude


class Native::Mpls::TrafficEng::AutoTunnel::Backup::Timers : public Entity
{
    public:
        Timers();
        ~Timers();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Removal; //type: Native::Mpls::TrafficEng::AutoTunnel::Backup::Timers::Removal

        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::TrafficEng::AutoTunnel::Backup::Timers::Removal> removal;
        
}; // Native::Mpls::TrafficEng::AutoTunnel::Backup::Timers


class Native::Mpls::TrafficEng::AutoTunnel::Backup::Timers::Removal : public Entity
{
    public:
        Removal();
        ~Removal();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf unused; //type: uint32

}; // Native::Mpls::TrafficEng::AutoTunnel::Backup::Timers::Removal


class Native::Mpls::TrafficEng::AutoTunnel::Backup::TunnelNum : public Entity
{
    public:
        TunnelNum();
        ~TunnelNum();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Min; //type: Native::Mpls::TrafficEng::AutoTunnel::Backup::TunnelNum::Min

        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::TrafficEng::AutoTunnel::Backup::TunnelNum::Min> min;
        
}; // Native::Mpls::TrafficEng::AutoTunnel::Backup::TunnelNum


class Native::Mpls::TrafficEng::AutoTunnel::Backup::TunnelNum::Min : public Entity
{
    public:
        Min();
        ~Min();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class TnrRange; //type: Native::Mpls::TrafficEng::AutoTunnel::Backup::TunnelNum::Min::TnrRange

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::TrafficEng::AutoTunnel::Backup::TunnelNum::Min::TnrRange> > tnr_range;
        
}; // Native::Mpls::TrafficEng::AutoTunnel::Backup::TunnelNum::Min


class Native::Mpls::TrafficEng::AutoTunnel::Backup::TunnelNum::Min::TnrRange : public Entity
{
    public:
        TnrRange();
        ~TnrRange();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf tnr_range; //type: uint16
        YLeaf max; //type: empty

}; // Native::Mpls::TrafficEng::AutoTunnel::Backup::TunnelNum::Min::TnrRange


class Native::Mpls::TrafficEng::AutoTunnel::Mesh : public Entity
{
    public:
        Mesh();
        ~Mesh();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class TunnelNum; //type: Native::Mpls::TrafficEng::AutoTunnel::Mesh::TunnelNum

        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::TrafficEng::AutoTunnel::Mesh::TunnelNum> tunnel_num;
        
}; // Native::Mpls::TrafficEng::AutoTunnel::Mesh


class Native::Mpls::TrafficEng::AutoTunnel::Mesh::TunnelNum : public Entity
{
    public:
        TunnelNum();
        ~TunnelNum();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Min; //type: Native::Mpls::TrafficEng::AutoTunnel::Mesh::TunnelNum::Min

        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::TrafficEng::AutoTunnel::Mesh::TunnelNum::Min> min;
        
}; // Native::Mpls::TrafficEng::AutoTunnel::Mesh::TunnelNum


class Native::Mpls::TrafficEng::AutoTunnel::Mesh::TunnelNum::Min : public Entity
{
    public:
        Min();
        ~Min();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class MeshRange; //type: Native::Mpls::TrafficEng::AutoTunnel::Mesh::TunnelNum::Min::MeshRange

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::TrafficEng::AutoTunnel::Mesh::TunnelNum::Min::MeshRange> > mesh_range;
        
}; // Native::Mpls::TrafficEng::AutoTunnel::Mesh::TunnelNum::Min


class Native::Mpls::TrafficEng::AutoTunnel::Mesh::TunnelNum::Min::MeshRange : public Entity
{
    public:
        MeshRange();
        ~MeshRange();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf mesh_range; //type: uint16
        YLeaf max; //type: empty

}; // Native::Mpls::TrafficEng::AutoTunnel::Mesh::TunnelNum::Min::MeshRange


class Native::Mpls::TrafficEng::AutoTunnel::Primary : public Entity
{
    public:
        Primary();
        ~Primary();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf onehop; //type: empty
        class Config; //type: Native::Mpls::TrafficEng::AutoTunnel::Primary::Config
        class Timers; //type: Native::Mpls::TrafficEng::AutoTunnel::Primary::Timers
        class TunnelNum; //type: Native::Mpls::TrafficEng::AutoTunnel::Primary::TunnelNum

        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::TrafficEng::AutoTunnel::Primary::Config> config;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::TrafficEng::AutoTunnel::Primary::Timers> timers;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::TrafficEng::AutoTunnel::Primary::TunnelNum> tunnel_num;
        
}; // Native::Mpls::TrafficEng::AutoTunnel::Primary


class Native::Mpls::TrafficEng::AutoTunnel::Primary::Config : public Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Mpls_; //type: Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::Mpls_
        class UnnumberedInterface; //type: Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::UnnumberedInterface

        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::Mpls_> mpls;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::UnnumberedInterface> unnumbered_interface;
        
}; // Native::Mpls::TrafficEng::AutoTunnel::Primary::Config


class Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::Mpls_ : public Entity
{
    public:
        Mpls_();
        ~Mpls_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ip; //type: empty

}; // Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::Mpls_


class Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::UnnumberedInterface : public Entity
{
    public:
        UnnumberedInterface();
        ~UnnumberedInterface();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface; //type: string
        YLeaf controller; //type: string
        YLeaf tunnel; //type: uint32
        YLeaf tunnel_tp; //type: uint16
        YLeaf vpn; //type: uint32
        YLeaf virtualportgroup; //type: uint8
        YLeaf vlan; //type: uint16
        YLeaf vasileft; //type: uint16
        YLeaf vasiright; //type: uint16

}; // Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::UnnumberedInterface


class Native::Mpls::TrafficEng::AutoTunnel::Primary::Timers : public Entity
{
    public:
        Timers();
        ~Timers();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Removal; //type: Native::Mpls::TrafficEng::AutoTunnel::Primary::Timers::Removal

        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::TrafficEng::AutoTunnel::Primary::Timers::Removal> removal;
        
}; // Native::Mpls::TrafficEng::AutoTunnel::Primary::Timers


class Native::Mpls::TrafficEng::AutoTunnel::Primary::Timers::Removal : public Entity
{
    public:
        Removal();
        ~Removal();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf rerouted; //type: uint32

}; // Native::Mpls::TrafficEng::AutoTunnel::Primary::Timers::Removal


class Native::Mpls::TrafficEng::AutoTunnel::Primary::TunnelNum : public Entity
{
    public:
        TunnelNum();
        ~TunnelNum();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Min; //type: Native::Mpls::TrafficEng::AutoTunnel::Primary::TunnelNum::Min

        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::TrafficEng::AutoTunnel::Primary::TunnelNum::Min> min;
        
}; // Native::Mpls::TrafficEng::AutoTunnel::Primary::TunnelNum


class Native::Mpls::TrafficEng::AutoTunnel::Primary::TunnelNum::Min : public Entity
{
    public:
        Min();
        ~Min();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class TnrRange; //type: Native::Mpls::TrafficEng::AutoTunnel::Primary::TunnelNum::Min::TnrRange

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::TrafficEng::AutoTunnel::Primary::TunnelNum::Min::TnrRange> > tnr_range;
        
}; // Native::Mpls::TrafficEng::AutoTunnel::Primary::TunnelNum::Min


class Native::Mpls::TrafficEng::AutoTunnel::Primary::TunnelNum::Min::TnrRange : public Entity
{
    public:
        TnrRange();
        ~TnrRange();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf tnr_range; //type: uint16
        YLeaf max; //type: empty

}; // Native::Mpls::TrafficEng::AutoTunnel::Primary::TunnelNum::Min::TnrRange


class Native::Mpls::TrafficEng::DsTe : public Entity
{
    public:
        DsTe();
        ~DsTe();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class BcModel; //type: Native::Mpls::TrafficEng::DsTe::BcModel
        class Mode; //type: Native::Mpls::TrafficEng::DsTe::Mode
        class TeClasses; //type: Native::Mpls::TrafficEng::DsTe::TeClasses

        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::TrafficEng::DsTe::BcModel> bc_model;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::TrafficEng::DsTe::Mode> mode;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::TrafficEng::DsTe::TeClasses> te_classes; // presence node
        
}; // Native::Mpls::TrafficEng::DsTe


class Native::Mpls::TrafficEng::DsTe::BcModel : public Entity
{
    public:
        BcModel();
        ~BcModel();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf mam; //type: empty

}; // Native::Mpls::TrafficEng::DsTe::BcModel


class Native::Mpls::TrafficEng::DsTe::Mode : public Entity
{
    public:
        Mode();
        ~Mode();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ietf; //type: empty
        YLeaf migration; //type: empty

}; // Native::Mpls::TrafficEng::DsTe::Mode


class Native::Mpls::TrafficEng::DsTe::TeClasses : public Entity
{
    public:
        TeClasses();
        ~TeClasses();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class TeMode__ConfigTeClass; //type: Native::Mpls::TrafficEng::DsTe::TeClasses::TeMode__ConfigTeClass

        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::TrafficEng::DsTe::TeClasses::TeMode__ConfigTeClass> te_mode__config_te_class;
        
}; // Native::Mpls::TrafficEng::DsTe::TeClasses


class Native::Mpls::TrafficEng::DsTe::TeClasses::TeMode__ConfigTeClass : public Entity
{
    public:
        TeMode__ConfigTeClass();
        ~TeMode__ConfigTeClass();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf list; //type: empty
        class TeClass; //type: Native::Mpls::TrafficEng::DsTe::TeClasses::TeMode__ConfigTeClass::TeClass

        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::TrafficEng::DsTe::TeClasses::TeMode__ConfigTeClass::TeClass> te_class;
        
}; // Native::Mpls::TrafficEng::DsTe::TeClasses::TeMode__ConfigTeClass


class Native::Mpls::TrafficEng::DsTe::TeClasses::TeMode__ConfigTeClass::TeClass : public Entity
{
    public:
        TeClass();
        ~TeClass();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class TeIdx; //type: Native::Mpls::TrafficEng::DsTe::TeClasses::TeMode__ConfigTeClass::TeClass::TeIdx

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::TrafficEng::DsTe::TeClasses::TeMode__ConfigTeClass::TeClass::TeIdx> > te_idx;
        
}; // Native::Mpls::TrafficEng::DsTe::TeClasses::TeMode__ConfigTeClass::TeClass


class Native::Mpls::TrafficEng::DsTe::TeClasses::TeMode__ConfigTeClass::TeClass::TeIdx : public Entity
{
    public:
        TeIdx();
        ~TeIdx();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf te_idx; //type: uint8
        YLeaf class_type; //type: uint8
        YLeaf unused; //type: empty

}; // Native::Mpls::TrafficEng::DsTe::TeClasses::TeMode__ConfigTeClass::TeClass::TeIdx


class Native::Mpls::TrafficEng::FastReroute : public Entity
{
    public:
        FastReroute();
        ~FastReroute();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class BackupProtPreempt; //type: Native::Mpls::TrafficEng::FastReroute::BackupProtPreempt
        class Timers; //type: Native::Mpls::TrafficEng::FastReroute::Timers

        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::TrafficEng::FastReroute::BackupProtPreempt> backup_prot_preempt;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::TrafficEng::FastReroute::Timers> timers;
        
}; // Native::Mpls::TrafficEng::FastReroute


class Native::Mpls::TrafficEng::FastReroute::BackupProtPreempt : public Entity
{
    public:
        BackupProtPreempt();
        ~BackupProtPreempt();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf optimize_bw; //type: empty

}; // Native::Mpls::TrafficEng::FastReroute::BackupProtPreempt


class Native::Mpls::TrafficEng::FastReroute::Timers : public Entity
{
    public:
        Timers();
        ~Timers();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf promotion; //type: uint32

}; // Native::Mpls::TrafficEng::FastReroute::Timers


class Native::Mpls::TrafficEng::LinkManagement : public Entity
{
    public:
        LinkManagement();
        ~LinkManagement();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Timers; //type: Native::Mpls::TrafficEng::LinkManagement::Timers

        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::TrafficEng::LinkManagement::Timers> timers;
        
}; // Native::Mpls::TrafficEng::LinkManagement


class Native::Mpls::TrafficEng::LinkManagement::Timers : public Entity
{
    public:
        Timers();
        ~Timers();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf bandwidth_hold; //type: uint16
        YLeaf periodic_flooding; //type: uint16

}; // Native::Mpls::TrafficEng::LinkManagement::Timers


class Native::Mpls::TrafficEng::Logging : public Entity
{
    public:
        Logging();
        ~Logging();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Lsp; //type: Native::Mpls::TrafficEng::Logging::Lsp
        class Tunnel; //type: Native::Mpls::TrafficEng::Logging::Tunnel

        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::TrafficEng::Logging::Lsp> lsp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::TrafficEng::Logging::Tunnel> tunnel;
        
}; // Native::Mpls::TrafficEng::Logging


class Native::Mpls::TrafficEng::Logging::Lsp : public Entity
{
    public:
        Lsp();
        ~Lsp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class PathErrors; //type: Native::Mpls::TrafficEng::Logging::Lsp::PathErrors
        class Preemption; //type: Native::Mpls::TrafficEng::Logging::Lsp::Preemption
        class ReservationErrors; //type: Native::Mpls::TrafficEng::Logging::Lsp::ReservationErrors
        class Setups; //type: Native::Mpls::TrafficEng::Logging::Lsp::Setups
        class Teardowns; //type: Native::Mpls::TrafficEng::Logging::Lsp::Teardowns

        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::TrafficEng::Logging::Lsp::PathErrors> path_errors; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::TrafficEng::Logging::Lsp::Preemption> preemption; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::TrafficEng::Logging::Lsp::ReservationErrors> reservation_errors; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::TrafficEng::Logging::Lsp::Setups> setups; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::TrafficEng::Logging::Lsp::Teardowns> teardowns; // presence node
        
}; // Native::Mpls::TrafficEng::Logging::Lsp


class Native::Mpls::TrafficEng::Logging::Lsp::PathErrors : public Entity
{
    public:
        PathErrors();
        ~PathErrors();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf access_list; //type: uint16

}; // Native::Mpls::TrafficEng::Logging::Lsp::PathErrors


class Native::Mpls::TrafficEng::Logging::Lsp::Preemption : public Entity
{
    public:
        Preemption();
        ~Preemption();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf access_list; //type: uint16

}; // Native::Mpls::TrafficEng::Logging::Lsp::Preemption


class Native::Mpls::TrafficEng::Logging::Lsp::ReservationErrors : public Entity
{
    public:
        ReservationErrors();
        ~ReservationErrors();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf access_list; //type: uint16

}; // Native::Mpls::TrafficEng::Logging::Lsp::ReservationErrors


class Native::Mpls::TrafficEng::Logging::Lsp::Setups : public Entity
{
    public:
        Setups();
        ~Setups();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf access_list; //type: uint16

}; // Native::Mpls::TrafficEng::Logging::Lsp::Setups


class Native::Mpls::TrafficEng::Logging::Lsp::Teardowns : public Entity
{
    public:
        Teardowns();
        ~Teardowns();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf access_list; //type: uint16

}; // Native::Mpls::TrafficEng::Logging::Lsp::Teardowns


class Native::Mpls::TrafficEng::Logging::Tunnel : public Entity
{
    public:
        Tunnel();
        ~Tunnel();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class LspSelection; //type: Native::Mpls::TrafficEng::Logging::Tunnel::LspSelection
        class Path; //type: Native::Mpls::TrafficEng::Logging::Tunnel::Path

        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::TrafficEng::Logging::Tunnel::LspSelection> lsp_selection; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::TrafficEng::Logging::Tunnel::Path> path;
        
}; // Native::Mpls::TrafficEng::Logging::Tunnel


class Native::Mpls::TrafficEng::Logging::Tunnel::LspSelection : public Entity
{
    public:
        LspSelection();
        ~LspSelection();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf access_list; //type: uint16

}; // Native::Mpls::TrafficEng::Logging::Tunnel::LspSelection


class Native::Mpls::TrafficEng::Logging::Tunnel::Path : public Entity
{
    public:
        Path();
        ~Path();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Change; //type: Native::Mpls::TrafficEng::Logging::Tunnel::Path::Change

        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::TrafficEng::Logging::Tunnel::Path::Change> change; // presence node
        
}; // Native::Mpls::TrafficEng::Logging::Tunnel::Path


class Native::Mpls::TrafficEng::Logging::Tunnel::Path::Change : public Entity
{
    public:
        Change();
        ~Change();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf access_list; //type: uint16

}; // Native::Mpls::TrafficEng::Logging::Tunnel::Path::Change


class Native::Mpls::TrafficEng::Lsp : public Entity
{
    public:
        Lsp();
        ~Lsp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Attributes; //type: Native::Mpls::TrafficEng::Lsp::Attributes

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::TrafficEng::Lsp::Attributes> > attributes;
        
}; // Native::Mpls::TrafficEng::Lsp


class Native::Mpls::TrafficEng::Lsp::Attributes : public Entity
{
    public:
        Attributes();
        ~Attributes();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf lsp_att; //type: string
        class FlagMode__ConfigLspAttr; //type: Native::Mpls::TrafficEng::Lsp::Attributes::FlagMode__ConfigLspAttr

        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::TrafficEng::Lsp::Attributes::FlagMode__ConfigLspAttr> flag_mode__config_lsp_attr;
        
}; // Native::Mpls::TrafficEng::Lsp::Attributes


class Native::Mpls::TrafficEng::Lsp::Attributes::FlagMode__ConfigLspAttr : public Entity
{
    public:
        FlagMode__ConfigLspAttr();
        ~FlagMode__ConfigLspAttr();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf list; //type: empty
        YLeaf lockdown; //type: empty
        YLeaf record_route; //type: empty
        class Affinity; //type: Native::Mpls::TrafficEng::Lsp::Attributes::FlagMode__ConfigLspAttr::Affinity
        class AutoBw; //type: Native::Mpls::TrafficEng::Lsp::Attributes::FlagMode__ConfigLspAttr::AutoBw
        class Bandwidth; //type: Native::Mpls::TrafficEng::Lsp::Attributes::FlagMode__ConfigLspAttr::Bandwidth
        class Priority; //type: Native::Mpls::TrafficEng::Lsp::Attributes::FlagMode__ConfigLspAttr::Priority
        class Protection; //type: Native::Mpls::TrafficEng::Lsp::Attributes::FlagMode__ConfigLspAttr::Protection

        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::TrafficEng::Lsp::Attributes::FlagMode__ConfigLspAttr::Affinity> affinity;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::TrafficEng::Lsp::Attributes::FlagMode__ConfigLspAttr::AutoBw> auto_bw; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::TrafficEng::Lsp::Attributes::FlagMode__ConfigLspAttr::Bandwidth> bandwidth;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::TrafficEng::Lsp::Attributes::FlagMode__ConfigLspAttr::Priority> priority;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::TrafficEng::Lsp::Attributes::FlagMode__ConfigLspAttr::Protection> protection; // presence node
        
}; // Native::Mpls::TrafficEng::Lsp::Attributes::FlagMode__ConfigLspAttr


class Native::Mpls::TrafficEng::Lsp::Attributes::FlagMode__ConfigLspAttr::Affinity : public Entity
{
    public:
        Affinity();
        ~Affinity();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class FlVal; //type: Native::Mpls::TrafficEng::Lsp::Attributes::FlagMode__ConfigLspAttr::Affinity::FlVal

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::TrafficEng::Lsp::Attributes::FlagMode__ConfigLspAttr::Affinity::FlVal> > fl_val;
        
}; // Native::Mpls::TrafficEng::Lsp::Attributes::FlagMode__ConfigLspAttr::Affinity


class Native::Mpls::TrafficEng::Lsp::Attributes::FlagMode__ConfigLspAttr::Affinity::FlVal : public Entity
{
    public:
        FlVal();
        ~FlVal();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf fl_val; //type: string
        YLeaf mask; //type: empty

}; // Native::Mpls::TrafficEng::Lsp::Attributes::FlagMode__ConfigLspAttr::Affinity::FlVal


class Native::Mpls::TrafficEng::Lsp::Attributes::FlagMode__ConfigLspAttr::AutoBw : public Entity
{
    public:
        AutoBw();
        ~AutoBw();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf adjustment_threshold; //type: uint8
        YLeaf collect_bw; //type: empty
        YLeaf frequency; //type: uint32
        YLeaf max_bw; //type: uint32
        YLeaf min_bw; //type: uint32
        YLeaf overflow_limit; //type: uint8

}; // Native::Mpls::TrafficEng::Lsp::Attributes::FlagMode__ConfigLspAttr::AutoBw


class Native::Mpls::TrafficEng::Lsp::Attributes::FlagMode__ConfigLspAttr::Bandwidth : public Entity
{
    public:
        Bandwidth();
        ~Bandwidth();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf bnd_kbp; //type: uint32
        YLeaf sub_pool; //type: uint32

}; // Native::Mpls::TrafficEng::Lsp::Attributes::FlagMode__ConfigLspAttr::Bandwidth


class Native::Mpls::TrafficEng::Lsp::Attributes::FlagMode__ConfigLspAttr::Priority : public Entity
{
    public:
        Priority();
        ~Priority();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class LssPri; //type: Native::Mpls::TrafficEng::Lsp::Attributes::FlagMode__ConfigLspAttr::Priority::LssPri

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::TrafficEng::Lsp::Attributes::FlagMode__ConfigLspAttr::Priority::LssPri> > lss_pri;
        
}; // Native::Mpls::TrafficEng::Lsp::Attributes::FlagMode__ConfigLspAttr::Priority


class Native::Mpls::TrafficEng::Lsp::Attributes::FlagMode__ConfigLspAttr::Priority::LssPri : public Entity
{
    public:
        LssPri();
        ~LssPri();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf lss_pri; //type: uint8
        YLeaf lss_pri0; //type: uint8

}; // Native::Mpls::TrafficEng::Lsp::Attributes::FlagMode__ConfigLspAttr::Priority::LssPri


class Native::Mpls::TrafficEng::Lsp::Attributes::FlagMode__ConfigLspAttr::Protection : public Entity
{
    public:
        Protection();
        ~Protection();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class FastReroute; //type: Native::Mpls::TrafficEng::Lsp::Attributes::FlagMode__ConfigLspAttr::Protection::FastReroute

        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::TrafficEng::Lsp::Attributes::FlagMode__ConfigLspAttr::Protection::FastReroute> fast_reroute; // presence node
        
}; // Native::Mpls::TrafficEng::Lsp::Attributes::FlagMode__ConfigLspAttr::Protection


class Native::Mpls::TrafficEng::Lsp::Attributes::FlagMode__ConfigLspAttr::Protection::FastReroute : public Entity
{
    public:
        FastReroute();
        ~FastReroute();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf bw_protect; //type: empty

}; // Native::Mpls::TrafficEng::Lsp::Attributes::FlagMode__ConfigLspAttr::Protection::FastReroute


class Native::Mpls::TrafficEng::PathOption : public Entity
{
    public:
        PathOption();
        ~PathOption();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class List; //type: Native::Mpls::TrafficEng::PathOption::List

        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::TrafficEng::PathOption::List> list;
        
}; // Native::Mpls::TrafficEng::PathOption


class Native::Mpls::TrafficEng::PathOption::List : public Entity
{
    public:
        List();
        ~List();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Identifier; //type: Native::Mpls::TrafficEng::PathOption::List::Identifier
        class Name; //type: Native::Mpls::TrafficEng::PathOption::List::Name

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::TrafficEng::PathOption::List::Identifier> > identifier;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::TrafficEng::PathOption::List::Name> > name;
        
}; // Native::Mpls::TrafficEng::PathOption::List


class Native::Mpls::TrafficEng::PathOption::List::Identifier : public Entity
{
    public:
        Identifier();
        ~Identifier();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf po_num; //type: uint16

}; // Native::Mpls::TrafficEng::PathOption::List::Identifier


class Native::Mpls::TrafficEng::PathOption::List::Name : public Entity
{
    public:
        Name();
        ~Name();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf spo_name; //type: string

}; // Native::Mpls::TrafficEng::PathOption::List::Name


class Native::Mpls::TrafficEng::PathSelection : public Entity
{
    public:
        PathSelection();
        ~PathSelection();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf metric; //type: MetricEnum
        class Invalidation; //type: Native::Mpls::TrafficEng::PathSelection::Invalidation
        class Overload; //type: Native::Mpls::TrafficEng::PathSelection::Overload

        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::TrafficEng::PathSelection::Invalidation> invalidation;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::TrafficEng::PathSelection::Overload> overload;
                class MetricEnum;

}; // Native::Mpls::TrafficEng::PathSelection


class Native::Mpls::TrafficEng::PathSelection::Invalidation : public Entity
{
    public:
        Invalidation();
        ~Invalidation();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf value_; //type: int32
        YLeaf drop; //type: empty

}; // Native::Mpls::TrafficEng::PathSelection::Invalidation


class Native::Mpls::TrafficEng::PathSelection::Overload : public Entity
{
    public:
        Overload();
        ~Overload();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Allow; //type: Native::Mpls::TrafficEng::PathSelection::Overload::Allow

        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::TrafficEng::PathSelection::Overload::Allow> allow;
        
}; // Native::Mpls::TrafficEng::PathSelection::Overload


class Native::Mpls::TrafficEng::PathSelection::Overload::Allow : public Entity
{
    public:
        Allow();
        ~Allow();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf head; //type: empty
        YLeaf middle; //type: empty
        YLeaf tail; //type: empty

}; // Native::Mpls::TrafficEng::PathSelection::Overload::Allow


class Native::Mpls::TrafficEng::Pcc : public Entity
{
    public:
        Pcc();
        ~Pcc();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf report_all; //type: empty
        class Peer; //type: Native::Mpls::TrafficEng::Pcc::Peer

        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::TrafficEng::Pcc::Peer> peer;
        
}; // Native::Mpls::TrafficEng::Pcc


class Native::Mpls::TrafficEng::Pcc::Peer : public Entity
{
    public:
        Peer();
        ~Peer();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ipv4; //type: Native::Mpls::TrafficEng::Pcc::Peer::Ipv4

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::TrafficEng::Pcc::Peer::Ipv4> > ipv4;
        
}; // Native::Mpls::TrafficEng::Pcc::Peer


class Native::Mpls::TrafficEng::Pcc::Peer::Ipv4 : public Entity
{
    public:
        Ipv4();
        ~Ipv4();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ipv4; //type: string
        YLeaf source; //type: string
        YLeaf precedence; //type: uint8
        YLeaf keychain; //type: string
        class Password; //type: Native::Mpls::TrafficEng::Pcc::Peer::Ipv4::Password

        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::TrafficEng::Pcc::Peer::Ipv4::Password> password;
        
}; // Native::Mpls::TrafficEng::Pcc::Peer::Ipv4


class Native::Mpls::TrafficEng::Pcc::Peer::Ipv4::Password : public Entity
{
    public:
        Password();
        ~Password();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf clear; //type: string
        YLeaf encrypted; //type: string

}; // Native::Mpls::TrafficEng::Pcc::Peer::Ipv4::Password


class Native::Mpls::TrafficEng::Reoptimize : public Entity
{
    public:
        Reoptimize();
        ~Reoptimize();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Events; //type: Native::Mpls::TrafficEng::Reoptimize::Events
        class Timers; //type: Native::Mpls::TrafficEng::Reoptimize::Timers

        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::TrafficEng::Reoptimize::Events> events;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::TrafficEng::Reoptimize::Timers> timers;
        
}; // Native::Mpls::TrafficEng::Reoptimize


class Native::Mpls::TrafficEng::Reoptimize::Events : public Entity
{
    public:
        Events();
        ~Events();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf link_up; //type: empty

}; // Native::Mpls::TrafficEng::Reoptimize::Events


class Native::Mpls::TrafficEng::Reoptimize::Timers : public Entity
{
    public:
        Timers();
        ~Timers();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf frequency; //type: uint32
        class Delay; //type: Native::Mpls::TrafficEng::Reoptimize::Timers::Delay

        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::TrafficEng::Reoptimize::Timers::Delay> delay;
        
}; // Native::Mpls::TrafficEng::Reoptimize::Timers


class Native::Mpls::TrafficEng::Reoptimize::Timers::Delay : public Entity
{
    public:
        Delay();
        ~Delay();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf cleanup; //type: uint8
        YLeaf installation; //type: uint16

}; // Native::Mpls::TrafficEng::Reoptimize::Timers::Delay


class Native::Mpls::TrafficEng::Signalling : public Entity
{
    public:
        Signalling();
        ~Signalling();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Advertise; //type: Native::Mpls::TrafficEng::Signalling::Advertise
        class Forwarding; //type: Native::Mpls::TrafficEng::Signalling::Forwarding
        class Restart; //type: Native::Mpls::TrafficEng::Signalling::Restart

        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::TrafficEng::Signalling::Advertise> advertise;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::TrafficEng::Signalling::Forwarding> forwarding;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::TrafficEng::Signalling::Restart> restart;
        
}; // Native::Mpls::TrafficEng::Signalling


class Native::Mpls::TrafficEng::Signalling::Advertise : public Entity
{
    public:
        Advertise();
        ~Advertise();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ImplicitNull; //type: Native::Mpls::TrafficEng::Signalling::Advertise::ImplicitNull

        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::TrafficEng::Signalling::Advertise::ImplicitNull> implicit_null; // presence node
        
}; // Native::Mpls::TrafficEng::Signalling::Advertise


class Native::Mpls::TrafficEng::Signalling::Advertise::ImplicitNull : public Entity
{
    public:
        ImplicitNull();
        ~ImplicitNull();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf nr; //type: uint8

}; // Native::Mpls::TrafficEng::Signalling::Advertise::ImplicitNull


class Native::Mpls::TrafficEng::Signalling::Forwarding : public Entity
{
    public:
        Forwarding();
        ~Forwarding();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf sync; //type: empty

}; // Native::Mpls::TrafficEng::Signalling::Forwarding


class Native::Mpls::TrafficEng::Signalling::Restart : public Entity
{
    public:
        Restart();
        ~Restart();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Neighbors; //type: Native::Mpls::TrafficEng::Signalling::Restart::Neighbors

        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::TrafficEng::Signalling::Restart::Neighbors> neighbors; // presence node
        
}; // Native::Mpls::TrafficEng::Signalling::Restart


class Native::Mpls::TrafficEng::Signalling::Restart::Neighbors : public Entity
{
    public:
        Neighbors();
        ~Neighbors();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf nr; //type: uint8

}; // Native::Mpls::TrafficEng::Signalling::Restart::Neighbors


class Native::Mpls::TrafficEng::Topology : public Entity
{
    public:
        Topology();
        ~Topology();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Holddown; //type: Native::Mpls::TrafficEng::Topology::Holddown

        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::TrafficEng::Topology::Holddown> holddown;
        
}; // Native::Mpls::TrafficEng::Topology


class Native::Mpls::TrafficEng::Topology::Holddown : public Entity
{
    public:
        Holddown();
        ~Holddown();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf sigerr; //type: uint16

}; // Native::Mpls::TrafficEng::Topology::Holddown


class Native::Mpls::TrafficEng::Trace : public Entity
{
    public:
        Trace();
        ~Trace();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class BufferSize; //type: Native::Mpls::TrafficEng::Trace::BufferSize

        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::TrafficEng::Trace::BufferSize> buffer_size;
        
}; // Native::Mpls::TrafficEng::Trace


class Native::Mpls::TrafficEng::Trace::BufferSize : public Entity
{
    public:
        BufferSize();
        ~BufferSize();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf error; //type: uint16
        YLeaf event; //type: uint16
        YLeaf warning; //type: uint8

}; // Native::Mpls::TrafficEng::Trace::BufferSize


class Native::Mpls::Tp : public Entity
{
    public:
        Tp();
        ~Tp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;


}; // Native::Mpls::Tp


class Native::Router : public Entity
{
    public:
        Router();
        ~Router();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Bgp; //type: Native::Router::Bgp
        class Eigrp; //type: Native::Router::Eigrp
        class Isis; //type: Native::Router::Isis
        class IsisContainer; //type: Native::Router::IsisContainer
        class Lisp; //type: Native::Router::Lisp
        class LispList; //type: Native::Router::LispList
        class Ospf; //type: Native::Router::Ospf
        class Ospfv3; //type: Native::Router::Ospfv3
        class Rip; //type: Native::Router::Rip

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp> > bgp;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Eigrp> > eigrp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Isis> isis; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer> isis_container;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp> lisp; // presence node
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList> > lisp_list;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf> > ospf;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3> > ospfv3;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Rip> rip; // presence node
        
}; // Native::Router


class Native::Router::Bgp : public Entity
{
    public:
        Bgp();
        ~Bgp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf id; //type: one of uint32, string
        YLeaf default_metric; //type: uint32
        YLeaf synchronization; //type: empty
        YLeaf auto_summary; //type: boolean
        class Bgp_; //type: Native::Router::Bgp::Bgp_
        class DefaultInformation; //type: Native::Router::Bgp::DefaultInformation
        class Distance; //type: Native::Router::Bgp::Distance
        class DistributeList; //type: Native::Router::Bgp::DistributeList
        class MaximumPaths; //type: Native::Router::Bgp::MaximumPaths
        class Neighbor; //type: Native::Router::Bgp::Neighbor
        class Network; //type: Native::Router::Bgp::Network
        class Redistribute; //type: Native::Router::Bgp::Redistribute
        class TableMap; //type: Native::Router::Bgp::TableMap
        class Snmp; //type: Native::Router::Bgp::Snmp
        class AddressFamily; //type: Native::Router::Bgp::AddressFamily
        class Template_; //type: Native::Router::Bgp::Template_
        class Timers; //type: Native::Router::Bgp::Timers

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily> address_family;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::Bgp_> bgp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::DefaultInformation> default_information;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::Distance> distance;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::DistributeList> > distribute_list;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::MaximumPaths> maximum_paths;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::Neighbor> > neighbor;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::Network> > network;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::Redistribute> redistribute;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::Snmp> snmp; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::TableMap> table_map; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::Template_> template_;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::Timers> timers;
        
}; // Native::Router::Bgp


class Native::Router::Bgp::Bgp_ : public Entity
{
    public:
        Bgp_();
        ~Bgp_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf router_id; //type: string
        YLeaf always_compare_med; //type: empty
        YLeaf aggregate_timer; //type: uint8
        YLeaf advertise_best_external; //type: empty
        YLeaf cluster_id; //type: one of uint32, string
        YLeaf deterministic_med; //type: empty
        YLeaf dmzlink_bw; //type: empty
        YLeaf enforce_first_as; //type: empty
        YLeaf enhanced_error; //type: empty
        YLeaf fast_external_fallover; //type: boolean
        YLeaf log_neighbor_changes; //type: empty
        YLeaf maxas_limit; //type: uint16
        YLeaf maxcommunity_limit; //type: uint16
        YLeaf redistribute_internal; //type: empty
        YLeaf scan_time; //type: uint8
        YLeaf soft_reconfig_backup; //type: empty
        YLeaf suppress_inactive; //type: empty
        YLeaf update_delay; //type: uint16
        class Asnotation; //type: Native::Router::Bgp::Bgp_::Asnotation
        class NopeerupDelay; //type: Native::Router::Bgp::Bgp_::NopeerupDelay
        class Recursion; //type: Native::Router::Bgp::Bgp_::Recursion
        class AdditionalPaths; //type: Native::Router::Bgp::Bgp_::AdditionalPaths
        class Bestpath; //type: Native::Router::Bgp::Bgp_::Bestpath
        class ClientToClient; //type: Native::Router::Bgp::Bgp_::ClientToClient
        class Confederation; //type: Native::Router::Bgp::Bgp_::Confederation
        class ConsistencyChecker; //type: Native::Router::Bgp::Bgp_::ConsistencyChecker
        class Dampening; //type: Native::Router::Bgp::Bgp_::Dampening
        class Default_; //type: Native::Router::Bgp::Bgp_::Default_
        class GracefulRestart; //type: Native::Router::Bgp::Bgp_::GracefulRestart
        class HaMode; //type: Native::Router::Bgp::Bgp_::HaMode
        class InjectMap; //type: Native::Router::Bgp::Bgp_::InjectMap
        class RouteMap; //type: Native::Router::Bgp::Bgp_::RouteMap
        class SlowPeer; //type: Native::Router::Bgp::Bgp_::SlowPeer
        class UpdateGroup; //type: Native::Router::Bgp::Bgp_::UpdateGroup
        class Nexthop; //type: Native::Router::Bgp::Bgp_::Nexthop
        class Regexp; //type: Native::Router::Bgp::Bgp_::Regexp
        class Transport; //type: Native::Router::Bgp::Bgp_::Transport

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::Bgp_::AdditionalPaths> additional_paths;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::Bgp_::Asnotation> asnotation;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::Bgp_::Bestpath> bestpath;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::Bgp_::ClientToClient> client_to_client;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::Bgp_::Confederation> confederation;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::Bgp_::ConsistencyChecker> consistency_checker;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::Bgp_::Dampening> dampening; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::Bgp_::Default_> default_;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::Bgp_::GracefulRestart> graceful_restart; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::Bgp_::HaMode> ha_mode;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::Bgp_::InjectMap> > inject_map;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::Bgp_::Nexthop> nexthop;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::Bgp_::NopeerupDelay> nopeerup_delay;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::Bgp_::Recursion> recursion;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::Bgp_::Regexp> regexp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::Bgp_::RouteMap> route_map;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::Bgp_::SlowPeer> slow_peer;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::Bgp_::Transport> transport;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::Bgp_::UpdateGroup> update_group;
        
}; // Native::Router::Bgp::Bgp_


class Native::Router::Bgp::Bgp_::Asnotation : public Entity
{
    public:
        Asnotation();
        ~Asnotation();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf dot; //type: empty

}; // Native::Router::Bgp::Bgp_::Asnotation


class Native::Router::Bgp::Bgp_::NopeerupDelay : public Entity
{
    public:
        NopeerupDelay();
        ~NopeerupDelay();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf cold_boot; //type: uint16
        YLeaf nsf_switchover; //type: uint16
        YLeaf post_boot; //type: uint16
        YLeaf user_initiated; //type: uint16

}; // Native::Router::Bgp::Bgp_::NopeerupDelay


class Native::Router::Bgp::Bgp_::Recursion : public Entity
{
    public:
        Recursion();
        ~Recursion();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf host; //type: empty

}; // Native::Router::Bgp::Bgp_::Recursion


class Native::Router::Bgp::Bgp_::AdditionalPaths : public Entity
{
    public:
        AdditionalPaths();
        ~AdditionalPaths();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf install; //type: empty
        YLeaf receive; //type: empty
        class Select; //type: Native::Router::Bgp::Bgp_::AdditionalPaths::Select
        class Send; //type: Native::Router::Bgp::Bgp_::AdditionalPaths::Send

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::Bgp_::AdditionalPaths::Select> select;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::Bgp_::AdditionalPaths::Send> send; // presence node
        
}; // Native::Router::Bgp::Bgp_::AdditionalPaths


class Native::Router::Bgp::Bgp_::AdditionalPaths::Select : public Entity
{
    public:
        Select();
        ~Select();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class All; //type: Native::Router::Bgp::Bgp_::AdditionalPaths::Select::All
        class Backup; //type: Native::Router::Bgp::Bgp_::AdditionalPaths::Select::Backup
        class Best; //type: Native::Router::Bgp::Bgp_::AdditionalPaths::Select::Best
        class BestExternal; //type: Native::Router::Bgp::Bgp_::AdditionalPaths::Select::BestExternal
        class GroupBest; //type: Native::Router::Bgp::Bgp_::AdditionalPaths::Select::GroupBest

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::Bgp_::AdditionalPaths::Select::All> all; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::Bgp_::AdditionalPaths::Select::Backup> backup; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::Bgp_::AdditionalPaths::Select::Best> best;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::Bgp_::AdditionalPaths::Select::BestExternal> best_external; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::Bgp_::AdditionalPaths::Select::GroupBest> group_best; // presence node
        
}; // Native::Router::Bgp::Bgp_::AdditionalPaths::Select


class Native::Router::Bgp::Bgp_::AdditionalPaths::Select::All : public Entity
{
    public:
        All();
        ~All();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Best; //type: Native::Router::Bgp::Bgp_::AdditionalPaths::Select::All::Best
        class GroupBest; //type: Native::Router::Bgp::Bgp_::AdditionalPaths::Select::All::GroupBest

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::Bgp_::AdditionalPaths::Select::All::Best> best;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::Bgp_::AdditionalPaths::Select::All::GroupBest> group_best; // presence node
        
}; // Native::Router::Bgp::Bgp_::AdditionalPaths::Select::All


class Native::Router::Bgp::Bgp_::AdditionalPaths::Select::All::Best : public Entity
{
    public:
        Best();
        ~Best();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Range; //type: Native::Router::Bgp::Bgp_::AdditionalPaths::Select::All::Best::Range

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::Bgp_::AdditionalPaths::Select::All::Best::Range> > range;
        
}; // Native::Router::Bgp::Bgp_::AdditionalPaths::Select::All::Best


class Native::Router::Bgp::Bgp_::AdditionalPaths::Select::All::Best::Range : public Entity
{
    public:
        Range();
        ~Range();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf range; //type: uint8
        YLeaf group_best; //type: empty

}; // Native::Router::Bgp::Bgp_::AdditionalPaths::Select::All::Best::Range


class Native::Router::Bgp::Bgp_::AdditionalPaths::Select::All::GroupBest : public Entity
{
    public:
        GroupBest();
        ~GroupBest();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf best; //type: uint8

}; // Native::Router::Bgp::Bgp_::AdditionalPaths::Select::All::GroupBest


class Native::Router::Bgp::Bgp_::AdditionalPaths::Select::Backup : public Entity
{
    public:
        Backup();
        ~Backup();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf best_external; //type: empty

}; // Native::Router::Bgp::Bgp_::AdditionalPaths::Select::Backup


class Native::Router::Bgp::Bgp_::AdditionalPaths::Select::Best : public Entity
{
    public:
        Best();
        ~Best();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Range; //type: Native::Router::Bgp::Bgp_::AdditionalPaths::Select::Best::Range

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::Bgp_::AdditionalPaths::Select::Best::Range> > range;
        
}; // Native::Router::Bgp::Bgp_::AdditionalPaths::Select::Best


class Native::Router::Bgp::Bgp_::AdditionalPaths::Select::Best::Range : public Entity
{
    public:
        Range();
        ~Range();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf range; //type: uint8
        YLeaf all; //type: empty
        class GroupBest; //type: Native::Router::Bgp::Bgp_::AdditionalPaths::Select::Best::Range::GroupBest

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::Bgp_::AdditionalPaths::Select::Best::Range::GroupBest> group_best; // presence node
        
}; // Native::Router::Bgp::Bgp_::AdditionalPaths::Select::Best::Range


class Native::Router::Bgp::Bgp_::AdditionalPaths::Select::Best::Range::GroupBest : public Entity
{
    public:
        GroupBest();
        ~GroupBest();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf all; //type: empty

}; // Native::Router::Bgp::Bgp_::AdditionalPaths::Select::Best::Range::GroupBest


class Native::Router::Bgp::Bgp_::AdditionalPaths::Select::BestExternal : public Entity
{
    public:
        BestExternal();
        ~BestExternal();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf backup; //type: empty

}; // Native::Router::Bgp::Bgp_::AdditionalPaths::Select::BestExternal


class Native::Router::Bgp::Bgp_::AdditionalPaths::Select::GroupBest : public Entity
{
    public:
        GroupBest();
        ~GroupBest();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf all; //type: empty
        YLeaf best; //type: uint8

}; // Native::Router::Bgp::Bgp_::AdditionalPaths::Select::GroupBest


class Native::Router::Bgp::Bgp_::AdditionalPaths::Send : public Entity
{
    public:
        Send();
        ~Send();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf receive; //type: empty

}; // Native::Router::Bgp::Bgp_::AdditionalPaths::Send


class Native::Router::Bgp::Bgp_::Bestpath : public Entity
{
    public:
        Bestpath();
        ~Bestpath();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf compare_routerid; //type: empty
        class CostCommunity; //type: Native::Router::Bgp::Bgp_::Bestpath::CostCommunity
        class IgpMetric; //type: Native::Router::Bgp::Bgp_::Bestpath::IgpMetric
        class Med; //type: Native::Router::Bgp::Bgp_::Bestpath::Med

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::Bgp_::Bestpath::CostCommunity> cost_community;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::Bgp_::Bestpath::IgpMetric> igp_metric;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::Bgp_::Bestpath::Med> med;
        
}; // Native::Router::Bgp::Bgp_::Bestpath


class Native::Router::Bgp::Bgp_::Bestpath::CostCommunity : public Entity
{
    public:
        CostCommunity();
        ~CostCommunity();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ignore; //type: empty

}; // Native::Router::Bgp::Bgp_::Bestpath::CostCommunity


class Native::Router::Bgp::Bgp_::Bestpath::IgpMetric : public Entity
{
    public:
        IgpMetric();
        ~IgpMetric();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ignore; //type: empty

}; // Native::Router::Bgp::Bgp_::Bestpath::IgpMetric


class Native::Router::Bgp::Bgp_::Bestpath::Med : public Entity
{
    public:
        Med();
        ~Med();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf missing_at_worst; //type: empty
        class Confed; //type: Native::Router::Bgp::Bgp_::Bestpath::Med::Confed

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::Bgp_::Bestpath::Med::Confed> confed; // presence node
        
}; // Native::Router::Bgp::Bgp_::Bestpath::Med


class Native::Router::Bgp::Bgp_::Bestpath::Med::Confed : public Entity
{
    public:
        Confed();
        ~Confed();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf missing_at_worst; //type: empty

}; // Native::Router::Bgp::Bgp_::Bestpath::Med::Confed


class Native::Router::Bgp::Bgp_::ClientToClient : public Entity
{
    public:
        ClientToClient();
        ~ClientToClient();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf reflection; //type: empty

}; // Native::Router::Bgp::Bgp_::ClientToClient


class Native::Router::Bgp::Bgp_::Confederation : public Entity
{
    public:
        Confederation();
        ~Confederation();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf identifier; //type: uint32
        class Peers; //type: Native::Router::Bgp::Bgp_::Confederation::Peers

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::Bgp_::Confederation::Peers> peers;
        
}; // Native::Router::Bgp::Bgp_::Confederation


class Native::Router::Bgp::Bgp_::Confederation::Peers : public Entity
{
    public:
        Peers();
        ~Peers();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeafList peers_as; //type: list of  uint32

}; // Native::Router::Bgp::Bgp_::Confederation::Peers


class Native::Router::Bgp::Bgp_::ConsistencyChecker : public Entity
{
    public:
        ConsistencyChecker();
        ~ConsistencyChecker();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class AutoRepair; //type: Native::Router::Bgp::Bgp_::ConsistencyChecker::AutoRepair
        class ErrorMessage; //type: Native::Router::Bgp::Bgp_::ConsistencyChecker::ErrorMessage

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::Bgp_::ConsistencyChecker::AutoRepair> auto_repair; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::Bgp_::ConsistencyChecker::ErrorMessage> error_message; // presence node
        
}; // Native::Router::Bgp::Bgp_::ConsistencyChecker


class Native::Router::Bgp::Bgp_::ConsistencyChecker::AutoRepair : public Entity
{
    public:
        AutoRepair();
        ~AutoRepair();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interval; //type: uint16

}; // Native::Router::Bgp::Bgp_::ConsistencyChecker::AutoRepair


class Native::Router::Bgp::Bgp_::ConsistencyChecker::ErrorMessage : public Entity
{
    public:
        ErrorMessage();
        ~ErrorMessage();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interval; //type: uint16

}; // Native::Router::Bgp::Bgp_::ConsistencyChecker::ErrorMessage


class Native::Router::Bgp::Bgp_::Dampening : public Entity
{
    public:
        Dampening();
        ~Dampening();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf route_map; //type: string
        class Dampen; //type: Native::Router::Bgp::Bgp_::Dampening::Dampen

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::Bgp_::Dampening::Dampen> dampen;
        
}; // Native::Router::Bgp::Bgp_::Dampening


class Native::Router::Bgp::Bgp_::Dampening::Dampen : public Entity
{
    public:
        Dampen();
        ~Dampen();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf half_life_time; //type: uint8
        YLeaf reuse_time; //type: uint16
        YLeaf suppress_time; //type: uint16
        YLeaf max_suppress_time; //type: uint8

}; // Native::Router::Bgp::Bgp_::Dampening::Dampen


class Native::Router::Bgp::Bgp_::Default_ : public Entity
{
    public:
        Default_();
        ~Default_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ipv4_unicast; //type: boolean
        YLeaf ipv6_nexthop; //type: empty
        YLeaf local_preference; //type: uint32
        YLeaf route_target; //type: RouteTargetEnum
        class RouteTargetEnum;

}; // Native::Router::Bgp::Bgp_::Default_


class Native::Router::Bgp::Bgp_::GracefulRestart : public Entity
{
    public:
        GracefulRestart();
        ~GracefulRestart();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf extended; //type: empty
        YLeaf restart_time; //type: uint16
        YLeaf stalepath_time; //type: uint16

}; // Native::Router::Bgp::Bgp_::GracefulRestart


class Native::Router::Bgp::Bgp_::HaMode : public Entity
{
    public:
        HaMode();
        ~HaMode();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Sso; //type: Native::Router::Bgp::Bgp_::HaMode::Sso

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::Bgp_::HaMode::Sso> sso; // presence node
        
}; // Native::Router::Bgp::Bgp_::HaMode


class Native::Router::Bgp::Bgp_::HaMode::Sso : public Entity
{
    public:
        Sso();
        ~Sso();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf prefer; //type: empty

}; // Native::Router::Bgp::Bgp_::HaMode::Sso


class Native::Router::Bgp::Bgp_::InjectMap : public Entity
{
    public:
        InjectMap();
        ~InjectMap();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        YLeaf exist_map; //type: string
        YLeaf copy_attributes; //type: empty

}; // Native::Router::Bgp::Bgp_::InjectMap


class Native::Router::Bgp::Bgp_::RouteMap : public Entity
{
    public:
        RouteMap();
        ~RouteMap();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf priority; //type: empty

}; // Native::Router::Bgp::Bgp_::RouteMap


class Native::Router::Bgp::Bgp_::SlowPeer : public Entity
{
    public:
        SlowPeer();
        ~SlowPeer();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Detection; //type: Native::Router::Bgp::Bgp_::SlowPeer::Detection
        class SplitUpdateGroup; //type: Native::Router::Bgp::Bgp_::SlowPeer::SplitUpdateGroup

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::Bgp_::SlowPeer::Detection> detection; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::Bgp_::SlowPeer::SplitUpdateGroup> split_update_group;
        
}; // Native::Router::Bgp::Bgp_::SlowPeer


class Native::Router::Bgp::Bgp_::SlowPeer::Detection : public Entity
{
    public:
        Detection();
        ~Detection();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf disable; //type: empty
        YLeaf threshold; //type: uint16

}; // Native::Router::Bgp::Bgp_::SlowPeer::Detection


class Native::Router::Bgp::Bgp_::SlowPeer::SplitUpdateGroup : public Entity
{
    public:
        SplitUpdateGroup();
        ~SplitUpdateGroup();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Dynamic; //type: Native::Router::Bgp::Bgp_::SlowPeer::SplitUpdateGroup::Dynamic

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::Bgp_::SlowPeer::SplitUpdateGroup::Dynamic> dynamic; // presence node
        
}; // Native::Router::Bgp::Bgp_::SlowPeer::SplitUpdateGroup


class Native::Router::Bgp::Bgp_::SlowPeer::SplitUpdateGroup::Dynamic : public Entity
{
    public:
        Dynamic();
        ~Dynamic();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf permanent; //type: empty

}; // Native::Router::Bgp::Bgp_::SlowPeer::SplitUpdateGroup::Dynamic


class Native::Router::Bgp::Bgp_::UpdateGroup : public Entity
{
    public:
        UpdateGroup();
        ~UpdateGroup();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Split; //type: Native::Router::Bgp::Bgp_::UpdateGroup::Split

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::Bgp_::UpdateGroup::Split> split;
        
}; // Native::Router::Bgp::Bgp_::UpdateGroup


class Native::Router::Bgp::Bgp_::UpdateGroup::Split : public Entity
{
    public:
        Split();
        ~Split();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf as_override; //type: empty

}; // Native::Router::Bgp::Bgp_::UpdateGroup::Split


class Native::Router::Bgp::Bgp_::Nexthop : public Entity
{
    public:
        Nexthop();
        ~Nexthop();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf route_map; //type: string
        class Trigger; //type: Native::Router::Bgp::Bgp_::Nexthop::Trigger

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::Bgp_::Nexthop::Trigger> trigger;
        
}; // Native::Router::Bgp::Bgp_::Nexthop


class Native::Router::Bgp::Bgp_::Nexthop::Trigger : public Entity
{
    public:
        Trigger();
        ~Trigger();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf delay; //type: uint8
        YLeaf enable; //type: boolean

}; // Native::Router::Bgp::Bgp_::Nexthop::Trigger


class Native::Router::Bgp::Bgp_::Regexp : public Entity
{
    public:
        Regexp();
        ~Regexp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf deterministic; //type: empty

}; // Native::Router::Bgp::Bgp_::Regexp


class Native::Router::Bgp::Bgp_::Transport : public Entity
{
    public:
        Transport();
        ~Transport();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf path_mtu_discovery; //type: boolean

}; // Native::Router::Bgp::Bgp_::Transport


class Native::Router::Bgp::DefaultInformation : public Entity
{
    public:
        DefaultInformation();
        ~DefaultInformation();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf originate; //type: empty

}; // Native::Router::Bgp::DefaultInformation


class Native::Router::Bgp::Distance : public Entity
{
    public:
        Distance();
        ~Distance();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Bgp_; //type: Native::Router::Bgp::Distance::Bgp_
        class AdmDistance; //type: Native::Router::Bgp::Distance::AdmDistance

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::Distance::AdmDistance> > adm_distance;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::Distance::Bgp_> bgp;
        
}; // Native::Router::Bgp::Distance


class Native::Router::Bgp::Distance::Bgp_ : public Entity
{
    public:
        Bgp_();
        ~Bgp_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf extern_as; //type: uint16
        YLeaf internal_as; //type: uint16
        YLeaf local; //type: uint16

}; // Native::Router::Bgp::Distance::Bgp_


class Native::Router::Bgp::Distance::AdmDistance : public Entity
{
    public:
        AdmDistance();
        ~AdmDistance();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf distance; //type: uint16
        YLeaf srcip; //type: string
        YLeaf wildbits; //type: string
        YLeaf acl; //type: one of uint16, string

}; // Native::Router::Bgp::Distance::AdmDistance


class Native::Router::Bgp::DistributeList : public Entity
{
    public:
        DistributeList();
        ~DistributeList();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf id; //type: one of uint16, string
        class In; //type: Native::Router::Bgp::DistributeList::In
        class Out; //type: Native::Router::Bgp::DistributeList::Out

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::DistributeList::In> in; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::DistributeList::Out> out; // presence node
        
}; // Native::Router::Bgp::DistributeList


class Native::Router::Bgp::DistributeList::In : public Entity
{
    public:
        In();
        ~In();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface; //type: string

}; // Native::Router::Bgp::DistributeList::In


class Native::Router::Bgp::DistributeList::Out : public Entity
{
    public:
        Out();
        ~Out();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface; //type: string

}; // Native::Router::Bgp::DistributeList::Out


class Native::Router::Bgp::MaximumPaths : public Entity
{
    public:
        MaximumPaths();
        ~MaximumPaths();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class MaxPath; //type: Native::Router::Bgp::MaximumPaths::MaxPath
        class ExternalRtfilter; //type: Native::Router::Bgp::MaximumPaths::ExternalRtfilter
        class Eibgp; //type: Native::Router::Bgp::MaximumPaths::Eibgp
        class Ibgp; //type: Native::Router::Bgp::MaximumPaths::Ibgp

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::MaximumPaths::Eibgp> eibgp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::MaximumPaths::ExternalRtfilter> external_rtfilter;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::MaximumPaths::Ibgp> ibgp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::MaximumPaths::MaxPath> max_path;
        
}; // Native::Router::Bgp::MaximumPaths


class Native::Router::Bgp::MaximumPaths::MaxPath : public Entity
{
    public:
        MaxPath();
        ~MaxPath();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf max; //type: uint16

}; // Native::Router::Bgp::MaximumPaths::MaxPath


class Native::Router::Bgp::MaximumPaths::ExternalRtfilter : public Entity
{
    public:
        ExternalRtfilter();
        ~ExternalRtfilter();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf max; //type: uint16

}; // Native::Router::Bgp::MaximumPaths::ExternalRtfilter


class Native::Router::Bgp::MaximumPaths::Eibgp : public Entity
{
    public:
        Eibgp();
        ~Eibgp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class MaxPath; //type: Native::Router::Bgp::MaximumPaths::Eibgp::MaxPath
        class ExternalRtfilter; //type: Native::Router::Bgp::MaximumPaths::Eibgp::ExternalRtfilter

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::MaximumPaths::Eibgp::ExternalRtfilter> external_rtfilter;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::MaximumPaths::Eibgp::MaxPath> max_path;
        
}; // Native::Router::Bgp::MaximumPaths::Eibgp


class Native::Router::Bgp::MaximumPaths::Eibgp::MaxPath : public Entity
{
    public:
        MaxPath();
        ~MaxPath();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf max; //type: uint16

}; // Native::Router::Bgp::MaximumPaths::Eibgp::MaxPath


class Native::Router::Bgp::MaximumPaths::Eibgp::ExternalRtfilter : public Entity
{
    public:
        ExternalRtfilter();
        ~ExternalRtfilter();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf max; //type: uint16

}; // Native::Router::Bgp::MaximumPaths::Eibgp::ExternalRtfilter


class Native::Router::Bgp::MaximumPaths::Ibgp : public Entity
{
    public:
        Ibgp();
        ~Ibgp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class UnequalCost; //type: Native::Router::Bgp::MaximumPaths::Ibgp::UnequalCost
        class MaxPath; //type: Native::Router::Bgp::MaximumPaths::Ibgp::MaxPath
        class ExternalRtfilter; //type: Native::Router::Bgp::MaximumPaths::Ibgp::ExternalRtfilter

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::MaximumPaths::Ibgp::ExternalRtfilter> external_rtfilter;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::MaximumPaths::Ibgp::MaxPath> max_path;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::MaximumPaths::Ibgp::UnequalCost> unequal_cost;
        
}; // Native::Router::Bgp::MaximumPaths::Ibgp


class Native::Router::Bgp::MaximumPaths::Ibgp::UnequalCost : public Entity
{
    public:
        UnequalCost();
        ~UnequalCost();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class MaxPath; //type: Native::Router::Bgp::MaximumPaths::Ibgp::UnequalCost::MaxPath
        class ExternalRtfilter; //type: Native::Router::Bgp::MaximumPaths::Ibgp::UnequalCost::ExternalRtfilter

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::MaximumPaths::Ibgp::UnequalCost::ExternalRtfilter> external_rtfilter;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::MaximumPaths::Ibgp::UnequalCost::MaxPath> max_path;
        
}; // Native::Router::Bgp::MaximumPaths::Ibgp::UnequalCost


class Native::Router::Bgp::MaximumPaths::Ibgp::UnequalCost::MaxPath : public Entity
{
    public:
        MaxPath();
        ~MaxPath();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf max; //type: uint16

}; // Native::Router::Bgp::MaximumPaths::Ibgp::UnequalCost::MaxPath


class Native::Router::Bgp::MaximumPaths::Ibgp::UnequalCost::ExternalRtfilter : public Entity
{
    public:
        ExternalRtfilter();
        ~ExternalRtfilter();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf max; //type: uint16

}; // Native::Router::Bgp::MaximumPaths::Ibgp::UnequalCost::ExternalRtfilter


class Native::Router::Bgp::MaximumPaths::Ibgp::MaxPath : public Entity
{
    public:
        MaxPath();
        ~MaxPath();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf max; //type: uint16

}; // Native::Router::Bgp::MaximumPaths::Ibgp::MaxPath


class Native::Router::Bgp::MaximumPaths::Ibgp::ExternalRtfilter : public Entity
{
    public:
        ExternalRtfilter();
        ~ExternalRtfilter();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf max; //type: uint16

}; // Native::Router::Bgp::MaximumPaths::Ibgp::ExternalRtfilter


class Native::Router::Bgp::Neighbor : public Entity
{
    public:
        Neighbor();
        ~Neighbor();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf id; //type: string
        YLeaf remote_as; //type: uint16
        YLeaf activate; //type: empty
        YLeaf allow_policy; //type: empty
        YLeaf advertisement_interval; //type: uint16
        YLeaf cluster_id; //type: one of uint32, string
        YLeaf description; //type: string
        YLeaf disable_connected_check; //type: empty
        YLeaf dmzlink_bw; //type: empty
        YLeaf next_hop_self; //type: empty
        YLeaf next_hop_unchanged; //type: empty
        YLeaf remove_private_as; //type: empty
        YLeaf route_reflector_client; //type: empty
        YLeaf route_reflector_cluster_id; //type: one of uint32, string
        YLeaf shutdown; //type: empty
        YLeaf soft_reconfiguration; //type: SoftReconfigurationEnum
        YLeaf unsuppress_map; //type: string
        YLeaf version; //type: uint16
        YLeaf weight; //type: uint16
        class PeerGroup; //type: Native::Router::Bgp::Neighbor::PeerGroup
        class LocalAs; //type: Native::Router::Bgp::Neighbor::LocalAs
        class AdditionalPaths; //type: Native::Router::Bgp::Neighbor::AdditionalPaths
        class Advertise; //type: Native::Router::Bgp::Neighbor::Advertise
        class AdvertiseMap; //type: Native::Router::Bgp::Neighbor::AdvertiseMap
        class Aigp; //type: Native::Router::Bgp::Neighbor::Aigp
        class Announce; //type: Native::Router::Bgp::Neighbor::Announce
        class AllowasIn; //type: Native::Router::Bgp::Neighbor::AllowasIn
        class AsOverride; //type: Native::Router::Bgp::Neighbor::AsOverride
        class Capability; //type: Native::Router::Bgp::Neighbor::Capability
        class DefaultOriginate; //type: Native::Router::Bgp::Neighbor::DefaultOriginate
        class DistributeList; //type: Native::Router::Bgp::Neighbor::DistributeList
        class EbgpMultihop; //type: Native::Router::Bgp::Neighbor::EbgpMultihop
        class FallOver; //type: Native::Router::Bgp::Neighbor::FallOver
        class FilterList; //type: Native::Router::Bgp::Neighbor::FilterList
        class Inherit; //type: Native::Router::Bgp::Neighbor::Inherit
        class LogNeighborChanges; //type: Native::Router::Bgp::Neighbor::LogNeighborChanges
        class MaximumPrefix; //type: Native::Router::Bgp::Neighbor::MaximumPrefix
        class Password; //type: Native::Router::Bgp::Neighbor::Password
        class PrefixList; //type: Native::Router::Bgp::Neighbor::PrefixList
        class PathAttribute; //type: Native::Router::Bgp::Neighbor::PathAttribute
        class RouteMap; //type: Native::Router::Bgp::Neighbor::RouteMap
        class SendCommunity; //type: Native::Router::Bgp::Neighbor::SendCommunity
        class SendLabel; //type: Native::Router::Bgp::Neighbor::SendLabel
        class SlowPeer; //type: Native::Router::Bgp::Neighbor::SlowPeer
        class Timers; //type: Native::Router::Bgp::Neighbor::Timers
        class TranslateUpdate; //type: Native::Router::Bgp::Neighbor::TranslateUpdate
        class Transport; //type: Native::Router::Bgp::Neighbor::Transport
        class TtlSecurity; //type: Native::Router::Bgp::Neighbor::TtlSecurity
        class UpdateSource; //type: Native::Router::Bgp::Neighbor::UpdateSource
        class HaMode; //type: Native::Router::Bgp::Neighbor::HaMode

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::Neighbor::AdditionalPaths> additional_paths;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::Neighbor::Advertise> advertise;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::Neighbor::AdvertiseMap> advertise_map;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::Neighbor::Aigp> aigp; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::Neighbor::AllowasIn> allowas_in; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::Neighbor::Announce> announce;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::Neighbor::AsOverride> as_override; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::Neighbor::Capability> capability;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::Neighbor::DefaultOriginate> default_originate; // presence node
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::Neighbor::DistributeList> > distribute_list;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::Neighbor::EbgpMultihop> ebgp_multihop; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::Neighbor::FallOver> fall_over;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::Neighbor::FilterList> > filter_list;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::Neighbor::HaMode> ha_mode;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::Neighbor::Inherit> inherit;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::Neighbor::LocalAs> local_as; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::Neighbor::LogNeighborChanges> log_neighbor_changes; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::Neighbor::MaximumPrefix> maximum_prefix;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::Neighbor::Password> password;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::Neighbor::PathAttribute> path_attribute;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::Neighbor::PeerGroup> peer_group; // presence node
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::Neighbor::PrefixList> > prefix_list;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::Neighbor::RouteMap> > route_map;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::Neighbor::SendCommunity> send_community; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::Neighbor::SendLabel> send_label;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::Neighbor::SlowPeer> slow_peer;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::Neighbor::Timers> timers;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::Neighbor::TranslateUpdate> translate_update;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::Neighbor::Transport> transport;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::Neighbor::TtlSecurity> ttl_security;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::Neighbor::UpdateSource> update_source;
                class SoftReconfigurationEnum;

}; // Native::Router::Bgp::Neighbor


class Native::Router::Bgp::Neighbor::PeerGroup : public Entity
{
    public:
        PeerGroup();
        ~PeerGroup();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf peer_group_name; //type: string

}; // Native::Router::Bgp::Neighbor::PeerGroup

class Native::Mpls::TrafficEng::PathSelection::MetricEnum : public Enum
{
    public:
        static const Enum::YLeaf igp;
        static const Enum::YLeaf te;

};

class Native::Router::Bgp::Bgp_::Default_::RouteTargetEnum : public Enum
{
    public:
        static const Enum::YLeaf filter;

};

class Native::Router::Bgp::Neighbor::SoftReconfigurationEnum : public Enum
{
    public:
        static const Enum::YLeaf inbound;

};


}
}

#endif /* _CISCO_IOS_XE_NATIVE_84_ */

