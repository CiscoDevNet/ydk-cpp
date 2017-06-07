#ifndef _CISCO_IOS_XR_ASR9K_LC_FCA_OPER_
#define _CISCO_IOS_XR_ASR9K_LC_FCA_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace Cisco_IOS_XR_asr9k_lc_fca_oper {

class MpaInternal : public Entity
{
    public:
        MpaInternal();
        ~MpaInternal();

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

        class Nodes; //type: MpaInternal::Nodes

        std::shared_ptr<Cisco_IOS_XR_asr9k_lc_fca_oper::MpaInternal::Nodes> nodes;
        
}; // MpaInternal


class MpaInternal::Nodes : public Entity
{
    public:
        Nodes();
        ~Nodes();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Node; //type: MpaInternal::Nodes::Node

        std::vector<std::shared_ptr<Cisco_IOS_XR_asr9k_lc_fca_oper::MpaInternal::Nodes::Node> > node;
        
}; // MpaInternal::Nodes


class MpaInternal::Nodes::Node : public Entity
{
    public:
        Node();
        ~Node();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf node; //type: string
        class Bay; //type: MpaInternal::Nodes::Node::Bay

        std::vector<std::shared_ptr<Cisco_IOS_XR_asr9k_lc_fca_oper::MpaInternal::Nodes::Node::Bay> > bay;
        
}; // MpaInternal::Nodes::Node


class MpaInternal::Nodes::Node::Bay : public Entity
{
    public:
        Bay();
        ~Bay();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf number; //type: int32
        class Ifsubsies; //type: MpaInternal::Nodes::Node::Bay::Ifsubsies

        std::shared_ptr<Cisco_IOS_XR_asr9k_lc_fca_oper::MpaInternal::Nodes::Node::Bay::Ifsubsies> ifsubsies;
        
}; // MpaInternal::Nodes::Node::Bay


class MpaInternal::Nodes::Node::Bay::Ifsubsies : public Entity
{
    public:
        Ifsubsies();
        ~Ifsubsies();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ifsubsy; //type: MpaInternal::Nodes::Node::Bay::Ifsubsies::Ifsubsy

        std::vector<std::shared_ptr<Cisco_IOS_XR_asr9k_lc_fca_oper::MpaInternal::Nodes::Node::Bay::Ifsubsies::Ifsubsy> > ifsubsy;
        
}; // MpaInternal::Nodes::Node::Bay::Ifsubsies


class MpaInternal::Nodes::Node::Bay::Ifsubsies::Ifsubsy : public Entity
{
    public:
        Ifsubsy();
        ~Ifsubsy();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf number; //type: string
        class MpaInternalInfo; //type: MpaInternal::Nodes::Node::Bay::Ifsubsies::Ifsubsy::MpaInternalInfo

        std::shared_ptr<Cisco_IOS_XR_asr9k_lc_fca_oper::MpaInternal::Nodes::Node::Bay::Ifsubsies::Ifsubsy::MpaInternalInfo> mpa_internal_info;
        
}; // MpaInternal::Nodes::Node::Bay::Ifsubsies::Ifsubsy


class MpaInternal::Nodes::Node::Bay::Ifsubsies::Ifsubsy::MpaInternalInfo : public Entity
{
    public:
        MpaInternalInfo();
        ~MpaInternalInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf bay; //type: uint32
        YLeaf ifsubsys; //type: uint32
        YLeaf if_state; //type: uint8
        YLeaf if_event; //type: uint8
        YLeaf ep_type; //type: uint32
        YLeaf ep_state; //type: uint8
        YLeaf ep_presence; //type: uint8
        YLeaf ep_idprom_major; //type: uint8
        YLeaf ep_idprom_minor; //type: uint8
        YLeaf ep_idprom_data; //type: string

}; // MpaInternal::Nodes::Node::Bay::Ifsubsies::Ifsubsy::MpaInternalInfo

class Mpa : public Entity
{
    public:
        Mpa();
        ~Mpa();

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

        class Nodes; //type: Mpa::Nodes

        std::shared_ptr<Cisco_IOS_XR_asr9k_lc_fca_oper::Mpa::Nodes> nodes;
        
}; // Mpa


class Mpa::Nodes : public Entity
{
    public:
        Nodes();
        ~Nodes();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Node; //type: Mpa::Nodes::Node

        std::vector<std::shared_ptr<Cisco_IOS_XR_asr9k_lc_fca_oper::Mpa::Nodes::Node> > node;
        
}; // Mpa::Nodes


class Mpa::Nodes::Node : public Entity
{
    public:
        Node();
        ~Node();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf node; //type: string
        class Bay; //type: Mpa::Nodes::Node::Bay

        std::vector<std::shared_ptr<Cisco_IOS_XR_asr9k_lc_fca_oper::Mpa::Nodes::Node::Bay> > bay;
        
}; // Mpa::Nodes::Node


class Mpa::Nodes::Node::Bay : public Entity
{
    public:
        Bay();
        ~Bay();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf number; //type: int32
        class MpaDetailTable; //type: Mpa::Nodes::Node::Bay::MpaDetailTable

        std::shared_ptr<Cisco_IOS_XR_asr9k_lc_fca_oper::Mpa::Nodes::Node::Bay::MpaDetailTable> mpa_detail_table;
        
}; // Mpa::Nodes::Node::Bay


class Mpa::Nodes::Node::Bay::MpaDetailTable : public Entity
{
    public:
        MpaDetailTable();
        ~MpaDetailTable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class MpaDetail; //type: Mpa::Nodes::Node::Bay::MpaDetailTable::MpaDetail

        std::shared_ptr<Cisco_IOS_XR_asr9k_lc_fca_oper::Mpa::Nodes::Node::Bay::MpaDetailTable::MpaDetail> mpa_detail;
        
}; // Mpa::Nodes::Node::Bay::MpaDetailTable


class Mpa::Nodes::Node::Bay::MpaDetailTable::MpaDetail : public Entity
{
    public:
        MpaDetail();
        ~MpaDetail();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf bay_number; //type: uint16
        YLeaf is_spa_inserted; //type: boolean
        YLeaf spa_type; //type: uint16
        YLeaf is_spa_admin_up; //type: boolean
        YLeaf spa_oper_state; //type: SpaOperStateEnum
        YLeaf is_spa_power_admin_up; //type: boolean
        YLeaf is_spa_powered; //type: boolean
        YLeaf is_spa_in_reset; //type: boolean
        YLeaf last_reset_reason; //type: SpaResetReasonEnum
        YLeaf last_failure_reason; //type: SpaFailureReasonEnum
        YLeaf insertion_time; //type: uint32
        YLeaf last_ready_time; //type: uint32
        YLeaf up_time; //type: uint32

}; // Mpa::Nodes::Node::Bay::MpaDetailTable::MpaDetail

class SpaResetReasonEnum : public Enum
{
    public:
        static const Enum::YLeaf spa_reset_reason_unknown;
        static const Enum::YLeaf spa_reset_reason_manual;
        static const Enum::YLeaf spa_reset_reason_fpd_upgrade;
        static const Enum::YLeaf spa_reset_reason_audit_fail;
        static const Enum::YLeaf spa_reset_reason_failure;

};

class SpaFailureReasonEnum : public Enum
{
    public:
        static const Enum::YLeaf spa_failure_reason_unknown;
        static const Enum::YLeaf spa_failure_reason_spi_failure;
        static const Enum::YLeaf spa_failure_reason_boot;
        static const Enum::YLeaf spa_failure_reason_hw_failed;
        static const Enum::YLeaf spa_failure_reason_sw_failed;
        static const Enum::YLeaf spa_failure_reason_sw_restart;
        static const Enum::YLeaf spa_failure_reason_check_fpd;
        static const Enum::YLeaf spa_failure_reason_read_type;

};

class SpaOperStateEnum : public Enum
{
    public:
        static const Enum::YLeaf spa_state_reset;
        static const Enum::YLeaf spa_state_failed;
        static const Enum::YLeaf spa_state_booting;
        static const Enum::YLeaf spa_state_ready;

};


}
}

#endif /* _CISCO_IOS_XR_ASR9K_LC_FCA_OPER_ */

