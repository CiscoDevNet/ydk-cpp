#ifndef _Q_BRIDGE_MIB_
#define _Q_BRIDGE_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace cisco_ios_xe {
namespace Q_BRIDGE_MIB {

class QBridgeMib : public ydk::Entity
{
    public:
        QBridgeMib();
        ~QBridgeMib();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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

        class Dot1Qbase; //type: QBridgeMib::Dot1Qbase
        class Dot1Qvlan; //type: QBridgeMib::Dot1Qvlan
        class Dot1Qfdbtable; //type: QBridgeMib::Dot1Qfdbtable
        class Dot1Qtpfdbtable; //type: QBridgeMib::Dot1Qtpfdbtable
        class Dot1Qtpgrouptable; //type: QBridgeMib::Dot1Qtpgrouptable
        class Dot1Qforwardalltable; //type: QBridgeMib::Dot1Qforwardalltable
        class Dot1Qforwardunregisteredtable; //type: QBridgeMib::Dot1Qforwardunregisteredtable
        class Dot1Qstaticunicasttable; //type: QBridgeMib::Dot1Qstaticunicasttable
        class Dot1Qstaticmulticasttable; //type: QBridgeMib::Dot1Qstaticmulticasttable
        class Dot1Qvlancurrenttable; //type: QBridgeMib::Dot1Qvlancurrenttable
        class Dot1Qvlanstatictable; //type: QBridgeMib::Dot1Qvlanstatictable
        class Dot1Qportvlanstatisticstable; //type: QBridgeMib::Dot1Qportvlanstatisticstable
        class Dot1Qportvlanhcstatisticstable; //type: QBridgeMib::Dot1Qportvlanhcstatisticstable
        class Dot1Qlearningconstraintstable; //type: QBridgeMib::Dot1Qlearningconstraintstable
        class Dot1Vprotocolgrouptable; //type: QBridgeMib::Dot1Vprotocolgrouptable
        class Dot1Vprotocolporttable; //type: QBridgeMib::Dot1Vprotocolporttable

        std::shared_ptr<Q_BRIDGE_MIB::QBridgeMib::Dot1Qbase> dot1qbase;
        std::shared_ptr<Q_BRIDGE_MIB::QBridgeMib::Dot1Qfdbtable> dot1qfdbtable;
        std::shared_ptr<Q_BRIDGE_MIB::QBridgeMib::Dot1Qforwardalltable> dot1qforwardalltable;
        std::shared_ptr<Q_BRIDGE_MIB::QBridgeMib::Dot1Qforwardunregisteredtable> dot1qforwardunregisteredtable;
        std::shared_ptr<Q_BRIDGE_MIB::QBridgeMib::Dot1Qlearningconstraintstable> dot1qlearningconstraintstable;
        std::shared_ptr<Q_BRIDGE_MIB::QBridgeMib::Dot1Qportvlanhcstatisticstable> dot1qportvlanhcstatisticstable;
        std::shared_ptr<Q_BRIDGE_MIB::QBridgeMib::Dot1Qportvlanstatisticstable> dot1qportvlanstatisticstable;
        std::shared_ptr<Q_BRIDGE_MIB::QBridgeMib::Dot1Qstaticmulticasttable> dot1qstaticmulticasttable;
        std::shared_ptr<Q_BRIDGE_MIB::QBridgeMib::Dot1Qstaticunicasttable> dot1qstaticunicasttable;
        std::shared_ptr<Q_BRIDGE_MIB::QBridgeMib::Dot1Qtpfdbtable> dot1qtpfdbtable;
        std::shared_ptr<Q_BRIDGE_MIB::QBridgeMib::Dot1Qtpgrouptable> dot1qtpgrouptable;
        std::shared_ptr<Q_BRIDGE_MIB::QBridgeMib::Dot1Qvlan> dot1qvlan;
        std::shared_ptr<Q_BRIDGE_MIB::QBridgeMib::Dot1Qvlancurrenttable> dot1qvlancurrenttable;
        std::shared_ptr<Q_BRIDGE_MIB::QBridgeMib::Dot1Qvlanstatictable> dot1qvlanstatictable;
        std::shared_ptr<Q_BRIDGE_MIB::QBridgeMib::Dot1Vprotocolgrouptable> dot1vprotocolgrouptable;
        std::shared_ptr<Q_BRIDGE_MIB::QBridgeMib::Dot1Vprotocolporttable> dot1vprotocolporttable;
        
}; // QBridgeMib


class QBridgeMib::Dot1Qbase : public ydk::Entity
{
    public:
        Dot1Qbase();
        ~Dot1Qbase();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf dot1qvlanversionnumber; //type: Dot1Qvlanversionnumber
        ydk::YLeaf dot1qmaxvlanid; //type: int32
        ydk::YLeaf dot1qmaxsupportedvlans; //type: uint32
        ydk::YLeaf dot1qnumvlans; //type: uint32
        ydk::YLeaf dot1qgvrpstatus; //type: Enabledstatus
        class Dot1Qvlanversionnumber;

}; // QBridgeMib::Dot1Qbase


class QBridgeMib::Dot1Qvlan : public ydk::Entity
{
    public:
        Dot1Qvlan();
        ~Dot1Qvlan();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf dot1qvlannumdeletes; //type: uint32
        ydk::YLeaf dot1qnextfreelocalvlanindex; //type: int32
        ydk::YLeaf dot1qconstraintsetdefault; //type: int32
        ydk::YLeaf dot1qconstrainttypedefault; //type: Dot1Qconstrainttypedefault
        class Dot1Qconstrainttypedefault;

}; // QBridgeMib::Dot1Qvlan


class QBridgeMib::Dot1Qfdbtable : public ydk::Entity
{
    public:
        Dot1Qfdbtable();
        ~Dot1Qfdbtable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Dot1Qfdbentry; //type: QBridgeMib::Dot1Qfdbtable::Dot1Qfdbentry

        std::vector<std::shared_ptr<Q_BRIDGE_MIB::QBridgeMib::Dot1Qfdbtable::Dot1Qfdbentry> > dot1qfdbentry;
        
}; // QBridgeMib::Dot1Qfdbtable


class QBridgeMib::Dot1Qfdbtable::Dot1Qfdbentry : public ydk::Entity
{
    public:
        Dot1Qfdbentry();
        ~Dot1Qfdbentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf dot1qfdbid; //type: uint32
        ydk::YLeaf dot1qfdbdynamiccount; //type: uint32

}; // QBridgeMib::Dot1Qfdbtable::Dot1Qfdbentry


class QBridgeMib::Dot1Qtpfdbtable : public ydk::Entity
{
    public:
        Dot1Qtpfdbtable();
        ~Dot1Qtpfdbtable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Dot1Qtpfdbentry; //type: QBridgeMib::Dot1Qtpfdbtable::Dot1Qtpfdbentry

        std::vector<std::shared_ptr<Q_BRIDGE_MIB::QBridgeMib::Dot1Qtpfdbtable::Dot1Qtpfdbentry> > dot1qtpfdbentry;
        
}; // QBridgeMib::Dot1Qtpfdbtable


class QBridgeMib::Dot1Qtpfdbtable::Dot1Qtpfdbentry : public ydk::Entity
{
    public:
        Dot1Qtpfdbentry();
        ~Dot1Qtpfdbentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: uint32 (refers to Q_BRIDGE_MIB::QBridgeMib::Dot1Qfdbtable::Dot1Qfdbentry::dot1qfdbid)
        ydk::YLeaf dot1qfdbid;
        ydk::YLeaf dot1qtpfdbaddress; //type: string
        ydk::YLeaf dot1qtpfdbport; //type: int32
        ydk::YLeaf dot1qtpfdbstatus; //type: Dot1Qtpfdbstatus
        class Dot1Qtpfdbstatus;

}; // QBridgeMib::Dot1Qtpfdbtable::Dot1Qtpfdbentry


class QBridgeMib::Dot1Qtpgrouptable : public ydk::Entity
{
    public:
        Dot1Qtpgrouptable();
        ~Dot1Qtpgrouptable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Dot1Qtpgroupentry; //type: QBridgeMib::Dot1Qtpgrouptable::Dot1Qtpgroupentry

        std::vector<std::shared_ptr<Q_BRIDGE_MIB::QBridgeMib::Dot1Qtpgrouptable::Dot1Qtpgroupentry> > dot1qtpgroupentry;
        
}; // QBridgeMib::Dot1Qtpgrouptable


class QBridgeMib::Dot1Qtpgrouptable::Dot1Qtpgroupentry : public ydk::Entity
{
    public:
        Dot1Qtpgroupentry();
        ~Dot1Qtpgroupentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: uint32 (refers to Q_BRIDGE_MIB::QBridgeMib::Dot1Qvlancurrenttable::Dot1Qvlancurrententry::dot1qvlanindex)
        ydk::YLeaf dot1qvlanindex;
        ydk::YLeaf dot1qtpgroupaddress; //type: string
        ydk::YLeaf dot1qtpgroupegressports; //type: binary
        ydk::YLeaf dot1qtpgrouplearnt; //type: binary

}; // QBridgeMib::Dot1Qtpgrouptable::Dot1Qtpgroupentry


class QBridgeMib::Dot1Qforwardalltable : public ydk::Entity
{
    public:
        Dot1Qforwardalltable();
        ~Dot1Qforwardalltable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Dot1Qforwardallentry; //type: QBridgeMib::Dot1Qforwardalltable::Dot1Qforwardallentry

        std::vector<std::shared_ptr<Q_BRIDGE_MIB::QBridgeMib::Dot1Qforwardalltable::Dot1Qforwardallentry> > dot1qforwardallentry;
        
}; // QBridgeMib::Dot1Qforwardalltable


class QBridgeMib::Dot1Qforwardalltable::Dot1Qforwardallentry : public ydk::Entity
{
    public:
        Dot1Qforwardallentry();
        ~Dot1Qforwardallentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: uint32 (refers to Q_BRIDGE_MIB::QBridgeMib::Dot1Qvlancurrenttable::Dot1Qvlancurrententry::dot1qvlanindex)
        ydk::YLeaf dot1qvlanindex;
        ydk::YLeaf dot1qforwardallports; //type: binary
        ydk::YLeaf dot1qforwardallstaticports; //type: binary
        ydk::YLeaf dot1qforwardallforbiddenports; //type: binary

}; // QBridgeMib::Dot1Qforwardalltable::Dot1Qforwardallentry


class QBridgeMib::Dot1Qforwardunregisteredtable : public ydk::Entity
{
    public:
        Dot1Qforwardunregisteredtable();
        ~Dot1Qforwardunregisteredtable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Dot1Qforwardunregisteredentry; //type: QBridgeMib::Dot1Qforwardunregisteredtable::Dot1Qforwardunregisteredentry

        std::vector<std::shared_ptr<Q_BRIDGE_MIB::QBridgeMib::Dot1Qforwardunregisteredtable::Dot1Qforwardunregisteredentry> > dot1qforwardunregisteredentry;
        
}; // QBridgeMib::Dot1Qforwardunregisteredtable


class QBridgeMib::Dot1Qforwardunregisteredtable::Dot1Qforwardunregisteredentry : public ydk::Entity
{
    public:
        Dot1Qforwardunregisteredentry();
        ~Dot1Qforwardunregisteredentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: uint32 (refers to Q_BRIDGE_MIB::QBridgeMib::Dot1Qvlancurrenttable::Dot1Qvlancurrententry::dot1qvlanindex)
        ydk::YLeaf dot1qvlanindex;
        ydk::YLeaf dot1qforwardunregisteredports; //type: binary
        ydk::YLeaf dot1qforwardunregisteredstaticports; //type: binary
        ydk::YLeaf dot1qforwardunregisteredforbiddenports; //type: binary

}; // QBridgeMib::Dot1Qforwardunregisteredtable::Dot1Qforwardunregisteredentry


class QBridgeMib::Dot1Qstaticunicasttable : public ydk::Entity
{
    public:
        Dot1Qstaticunicasttable();
        ~Dot1Qstaticunicasttable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Dot1Qstaticunicastentry; //type: QBridgeMib::Dot1Qstaticunicasttable::Dot1Qstaticunicastentry

        std::vector<std::shared_ptr<Q_BRIDGE_MIB::QBridgeMib::Dot1Qstaticunicasttable::Dot1Qstaticunicastentry> > dot1qstaticunicastentry;
        
}; // QBridgeMib::Dot1Qstaticunicasttable


class QBridgeMib::Dot1Qstaticunicasttable::Dot1Qstaticunicastentry : public ydk::Entity
{
    public:
        Dot1Qstaticunicastentry();
        ~Dot1Qstaticunicastentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: uint32 (refers to Q_BRIDGE_MIB::QBridgeMib::Dot1Qfdbtable::Dot1Qfdbentry::dot1qfdbid)
        ydk::YLeaf dot1qfdbid;
        ydk::YLeaf dot1qstaticunicastaddress; //type: string
        ydk::YLeaf dot1qstaticunicastreceiveport; //type: int32
        ydk::YLeaf dot1qstaticunicastallowedtogoto; //type: binary
        ydk::YLeaf dot1qstaticunicaststatus; //type: Dot1Qstaticunicaststatus
        class Dot1Qstaticunicaststatus;

}; // QBridgeMib::Dot1Qstaticunicasttable::Dot1Qstaticunicastentry


class QBridgeMib::Dot1Qstaticmulticasttable : public ydk::Entity
{
    public:
        Dot1Qstaticmulticasttable();
        ~Dot1Qstaticmulticasttable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Dot1Qstaticmulticastentry; //type: QBridgeMib::Dot1Qstaticmulticasttable::Dot1Qstaticmulticastentry

        std::vector<std::shared_ptr<Q_BRIDGE_MIB::QBridgeMib::Dot1Qstaticmulticasttable::Dot1Qstaticmulticastentry> > dot1qstaticmulticastentry;
        
}; // QBridgeMib::Dot1Qstaticmulticasttable


class QBridgeMib::Dot1Qstaticmulticasttable::Dot1Qstaticmulticastentry : public ydk::Entity
{
    public:
        Dot1Qstaticmulticastentry();
        ~Dot1Qstaticmulticastentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: uint32 (refers to Q_BRIDGE_MIB::QBridgeMib::Dot1Qvlancurrenttable::Dot1Qvlancurrententry::dot1qvlanindex)
        ydk::YLeaf dot1qvlanindex;
        ydk::YLeaf dot1qstaticmulticastaddress; //type: string
        ydk::YLeaf dot1qstaticmulticastreceiveport; //type: int32
        ydk::YLeaf dot1qstaticmulticaststaticegressports; //type: binary
        ydk::YLeaf dot1qstaticmulticastforbiddenegressports; //type: binary
        ydk::YLeaf dot1qstaticmulticaststatus; //type: Dot1Qstaticmulticaststatus
        class Dot1Qstaticmulticaststatus;

}; // QBridgeMib::Dot1Qstaticmulticasttable::Dot1Qstaticmulticastentry


class QBridgeMib::Dot1Qvlancurrenttable : public ydk::Entity
{
    public:
        Dot1Qvlancurrenttable();
        ~Dot1Qvlancurrenttable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Dot1Qvlancurrententry; //type: QBridgeMib::Dot1Qvlancurrenttable::Dot1Qvlancurrententry

        std::vector<std::shared_ptr<Q_BRIDGE_MIB::QBridgeMib::Dot1Qvlancurrenttable::Dot1Qvlancurrententry> > dot1qvlancurrententry;
        
}; // QBridgeMib::Dot1Qvlancurrenttable


class QBridgeMib::Dot1Qvlancurrenttable::Dot1Qvlancurrententry : public ydk::Entity
{
    public:
        Dot1Qvlancurrententry();
        ~Dot1Qvlancurrententry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf dot1qvlantimemark; //type: uint32
        ydk::YLeaf dot1qvlanindex; //type: uint32
        ydk::YLeaf dot1qvlanfdbid; //type: uint32
        ydk::YLeaf dot1qvlancurrentegressports; //type: binary
        ydk::YLeaf dot1qvlancurrentuntaggedports; //type: binary
        ydk::YLeaf dot1qvlanstatus; //type: Dot1Qvlanstatus
        ydk::YLeaf dot1qvlancreationtime; //type: uint32
        class Dot1Qvlanstatus;

}; // QBridgeMib::Dot1Qvlancurrenttable::Dot1Qvlancurrententry


class QBridgeMib::Dot1Qvlanstatictable : public ydk::Entity
{
    public:
        Dot1Qvlanstatictable();
        ~Dot1Qvlanstatictable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Dot1Qvlanstaticentry; //type: QBridgeMib::Dot1Qvlanstatictable::Dot1Qvlanstaticentry

        std::vector<std::shared_ptr<Q_BRIDGE_MIB::QBridgeMib::Dot1Qvlanstatictable::Dot1Qvlanstaticentry> > dot1qvlanstaticentry;
        
}; // QBridgeMib::Dot1Qvlanstatictable


class QBridgeMib::Dot1Qvlanstatictable::Dot1Qvlanstaticentry : public ydk::Entity
{
    public:
        Dot1Qvlanstaticentry();
        ~Dot1Qvlanstaticentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: uint32 (refers to Q_BRIDGE_MIB::QBridgeMib::Dot1Qvlancurrenttable::Dot1Qvlancurrententry::dot1qvlanindex)
        ydk::YLeaf dot1qvlanindex;
        ydk::YLeaf dot1qvlanstaticname; //type: string
        ydk::YLeaf dot1qvlanstaticegressports; //type: binary
        ydk::YLeaf dot1qvlanforbiddenegressports; //type: binary
        ydk::YLeaf dot1qvlanstaticuntaggedports; //type: binary
        ydk::YLeaf dot1qvlanstaticrowstatus; //type: Rowstatus

}; // QBridgeMib::Dot1Qvlanstatictable::Dot1Qvlanstaticentry


class QBridgeMib::Dot1Qportvlanstatisticstable : public ydk::Entity
{
    public:
        Dot1Qportvlanstatisticstable();
        ~Dot1Qportvlanstatisticstable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Dot1Qportvlanstatisticsentry; //type: QBridgeMib::Dot1Qportvlanstatisticstable::Dot1Qportvlanstatisticsentry

        std::vector<std::shared_ptr<Q_BRIDGE_MIB::QBridgeMib::Dot1Qportvlanstatisticstable::Dot1Qportvlanstatisticsentry> > dot1qportvlanstatisticsentry;
        
}; // QBridgeMib::Dot1Qportvlanstatisticstable


class QBridgeMib::Dot1Qportvlanstatisticstable::Dot1Qportvlanstatisticsentry : public ydk::Entity
{
    public:
        Dot1Qportvlanstatisticsentry();
        ~Dot1Qportvlanstatisticsentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: int32 (refers to BRIDGE_MIB::BridgeMib::Dot1Dbaseporttable::Dot1Dbaseportentry::dot1dbaseport)
        ydk::YLeaf dot1dbaseport;
        //type: uint32 (refers to Q_BRIDGE_MIB::QBridgeMib::Dot1Qvlancurrenttable::Dot1Qvlancurrententry::dot1qvlanindex)
        ydk::YLeaf dot1qvlanindex;
        ydk::YLeaf dot1qtpvlanportinframes; //type: uint32
        ydk::YLeaf dot1qtpvlanportoutframes; //type: uint32
        ydk::YLeaf dot1qtpvlanportindiscards; //type: uint32
        ydk::YLeaf dot1qtpvlanportinoverflowframes; //type: uint32
        ydk::YLeaf dot1qtpvlanportoutoverflowframes; //type: uint32
        ydk::YLeaf dot1qtpvlanportinoverflowdiscards; //type: uint32

}; // QBridgeMib::Dot1Qportvlanstatisticstable::Dot1Qportvlanstatisticsentry


class QBridgeMib::Dot1Qportvlanhcstatisticstable : public ydk::Entity
{
    public:
        Dot1Qportvlanhcstatisticstable();
        ~Dot1Qportvlanhcstatisticstable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Dot1Qportvlanhcstatisticsentry; //type: QBridgeMib::Dot1Qportvlanhcstatisticstable::Dot1Qportvlanhcstatisticsentry

        std::vector<std::shared_ptr<Q_BRIDGE_MIB::QBridgeMib::Dot1Qportvlanhcstatisticstable::Dot1Qportvlanhcstatisticsentry> > dot1qportvlanhcstatisticsentry;
        
}; // QBridgeMib::Dot1Qportvlanhcstatisticstable


class QBridgeMib::Dot1Qportvlanhcstatisticstable::Dot1Qportvlanhcstatisticsentry : public ydk::Entity
{
    public:
        Dot1Qportvlanhcstatisticsentry();
        ~Dot1Qportvlanhcstatisticsentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: int32 (refers to BRIDGE_MIB::BridgeMib::Dot1Dbaseporttable::Dot1Dbaseportentry::dot1dbaseport)
        ydk::YLeaf dot1dbaseport;
        //type: uint32 (refers to Q_BRIDGE_MIB::QBridgeMib::Dot1Qvlancurrenttable::Dot1Qvlancurrententry::dot1qvlanindex)
        ydk::YLeaf dot1qvlanindex;
        ydk::YLeaf dot1qtpvlanporthcinframes; //type: uint64
        ydk::YLeaf dot1qtpvlanporthcoutframes; //type: uint64
        ydk::YLeaf dot1qtpvlanporthcindiscards; //type: uint64

}; // QBridgeMib::Dot1Qportvlanhcstatisticstable::Dot1Qportvlanhcstatisticsentry


class QBridgeMib::Dot1Qlearningconstraintstable : public ydk::Entity
{
    public:
        Dot1Qlearningconstraintstable();
        ~Dot1Qlearningconstraintstable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Dot1Qlearningconstraintsentry; //type: QBridgeMib::Dot1Qlearningconstraintstable::Dot1Qlearningconstraintsentry

        std::vector<std::shared_ptr<Q_BRIDGE_MIB::QBridgeMib::Dot1Qlearningconstraintstable::Dot1Qlearningconstraintsentry> > dot1qlearningconstraintsentry;
        
}; // QBridgeMib::Dot1Qlearningconstraintstable


class QBridgeMib::Dot1Qlearningconstraintstable::Dot1Qlearningconstraintsentry : public ydk::Entity
{
    public:
        Dot1Qlearningconstraintsentry();
        ~Dot1Qlearningconstraintsentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf dot1qconstraintvlan; //type: uint32
        ydk::YLeaf dot1qconstraintset; //type: int32
        ydk::YLeaf dot1qconstrainttype; //type: Dot1Qconstrainttype
        ydk::YLeaf dot1qconstraintstatus; //type: Rowstatus
        class Dot1Qconstrainttype;

}; // QBridgeMib::Dot1Qlearningconstraintstable::Dot1Qlearningconstraintsentry


class QBridgeMib::Dot1Vprotocolgrouptable : public ydk::Entity
{
    public:
        Dot1Vprotocolgrouptable();
        ~Dot1Vprotocolgrouptable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Dot1Vprotocolgroupentry; //type: QBridgeMib::Dot1Vprotocolgrouptable::Dot1Vprotocolgroupentry

        std::vector<std::shared_ptr<Q_BRIDGE_MIB::QBridgeMib::Dot1Vprotocolgrouptable::Dot1Vprotocolgroupentry> > dot1vprotocolgroupentry;
        
}; // QBridgeMib::Dot1Vprotocolgrouptable


class QBridgeMib::Dot1Vprotocolgrouptable::Dot1Vprotocolgroupentry : public ydk::Entity
{
    public:
        Dot1Vprotocolgroupentry();
        ~Dot1Vprotocolgroupentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf dot1vprotocoltemplateframetype; //type: Dot1Vprotocoltemplateframetype
        ydk::YLeaf dot1vprotocoltemplateprotocolvalue; //type: binary
        ydk::YLeaf dot1vprotocolgroupid; //type: int32
        ydk::YLeaf dot1vprotocolgrouprowstatus; //type: Rowstatus
        class Dot1Vprotocoltemplateframetype;

}; // QBridgeMib::Dot1Vprotocolgrouptable::Dot1Vprotocolgroupentry


class QBridgeMib::Dot1Vprotocolporttable : public ydk::Entity
{
    public:
        Dot1Vprotocolporttable();
        ~Dot1Vprotocolporttable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Dot1Vprotocolportentry; //type: QBridgeMib::Dot1Vprotocolporttable::Dot1Vprotocolportentry

        std::vector<std::shared_ptr<Q_BRIDGE_MIB::QBridgeMib::Dot1Vprotocolporttable::Dot1Vprotocolportentry> > dot1vprotocolportentry;
        
}; // QBridgeMib::Dot1Vprotocolporttable


class QBridgeMib::Dot1Vprotocolporttable::Dot1Vprotocolportentry : public ydk::Entity
{
    public:
        Dot1Vprotocolportentry();
        ~Dot1Vprotocolportentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: int32 (refers to BRIDGE_MIB::BridgeMib::Dot1Dbaseporttable::Dot1Dbaseportentry::dot1dbaseport)
        ydk::YLeaf dot1dbaseport;
        ydk::YLeaf dot1vprotocolportgroupid; //type: int32
        ydk::YLeaf dot1vprotocolportgroupvid; //type: int32
        ydk::YLeaf dot1vprotocolportrowstatus; //type: Rowstatus

}; // QBridgeMib::Dot1Vprotocolporttable::Dot1Vprotocolportentry

class QBridgeMib::Dot1Qbase::Dot1Qvlanversionnumber : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf version1;

};

class QBridgeMib::Dot1Qvlan::Dot1Qconstrainttypedefault : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf independent;
        static const ydk::Enum::YLeaf shared;

};

class QBridgeMib::Dot1Qtpfdbtable::Dot1Qtpfdbentry::Dot1Qtpfdbstatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf other;
        static const ydk::Enum::YLeaf invalid;
        static const ydk::Enum::YLeaf learned;
        static const ydk::Enum::YLeaf self;
        static const ydk::Enum::YLeaf mgmt;

};

class QBridgeMib::Dot1Qstaticunicasttable::Dot1Qstaticunicastentry::Dot1Qstaticunicaststatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf other;
        static const ydk::Enum::YLeaf invalid;
        static const ydk::Enum::YLeaf permanent;
        static const ydk::Enum::YLeaf deleteOnReset;
        static const ydk::Enum::YLeaf deleteOnTimeout;

};

class QBridgeMib::Dot1Qstaticmulticasttable::Dot1Qstaticmulticastentry::Dot1Qstaticmulticaststatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf other;
        static const ydk::Enum::YLeaf invalid;
        static const ydk::Enum::YLeaf permanent;
        static const ydk::Enum::YLeaf deleteOnReset;
        static const ydk::Enum::YLeaf deleteOnTimeout;

};

class QBridgeMib::Dot1Qvlancurrenttable::Dot1Qvlancurrententry::Dot1Qvlanstatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf other;
        static const ydk::Enum::YLeaf permanent;
        static const ydk::Enum::YLeaf dynamicGvrp;

};

class QBridgeMib::Dot1Qlearningconstraintstable::Dot1Qlearningconstraintsentry::Dot1Qconstrainttype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf independent;
        static const ydk::Enum::YLeaf shared;

};

class QBridgeMib::Dot1Vprotocolgrouptable::Dot1Vprotocolgroupentry::Dot1Vprotocoltemplateframetype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ethernet;
        static const ydk::Enum::YLeaf rfc1042;
        static const ydk::Enum::YLeaf snap8021H;
        static const ydk::Enum::YLeaf snapOther;
        static const ydk::Enum::YLeaf llcOther;

};


}
}

#endif /* _Q_BRIDGE_MIB_ */

