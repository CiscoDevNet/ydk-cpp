#ifndef _Q_BRIDGE_MIB_
#define _Q_BRIDGE_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace cisco_ios_xe {
namespace Q_BRIDGE_MIB {

class QBRIDGEMIB : public ydk::Entity
{
    public:
        QBRIDGEMIB();
        ~QBRIDGEMIB();

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

        class Dot1Qbase; //type: QBRIDGEMIB::Dot1Qbase
        class Dot1Qvlan; //type: QBRIDGEMIB::Dot1Qvlan
        class Dot1Qfdbtable; //type: QBRIDGEMIB::Dot1Qfdbtable
        class Dot1Qtpfdbtable; //type: QBRIDGEMIB::Dot1Qtpfdbtable
        class Dot1Qtpgrouptable; //type: QBRIDGEMIB::Dot1Qtpgrouptable
        class Dot1Qforwardalltable; //type: QBRIDGEMIB::Dot1Qforwardalltable
        class Dot1Qforwardunregisteredtable; //type: QBRIDGEMIB::Dot1Qforwardunregisteredtable
        class Dot1Qstaticunicasttable; //type: QBRIDGEMIB::Dot1Qstaticunicasttable
        class Dot1Qstaticmulticasttable; //type: QBRIDGEMIB::Dot1Qstaticmulticasttable
        class Dot1Qvlancurrenttable; //type: QBRIDGEMIB::Dot1Qvlancurrenttable
        class Dot1Qvlanstatictable; //type: QBRIDGEMIB::Dot1Qvlanstatictable
        class Dot1Qportvlanstatisticstable; //type: QBRIDGEMIB::Dot1Qportvlanstatisticstable
        class Dot1Qportvlanhcstatisticstable; //type: QBRIDGEMIB::Dot1Qportvlanhcstatisticstable
        class Dot1Qlearningconstraintstable; //type: QBRIDGEMIB::Dot1Qlearningconstraintstable
        class Dot1Vprotocolgrouptable; //type: QBRIDGEMIB::Dot1Vprotocolgrouptable
        class Dot1Vprotocolporttable; //type: QBRIDGEMIB::Dot1Vprotocolporttable

        std::shared_ptr<cisco_ios_xe::Q_BRIDGE_MIB::QBRIDGEMIB::Dot1Qbase> dot1qbase;
        std::shared_ptr<cisco_ios_xe::Q_BRIDGE_MIB::QBRIDGEMIB::Dot1Qfdbtable> dot1qfdbtable;
        std::shared_ptr<cisco_ios_xe::Q_BRIDGE_MIB::QBRIDGEMIB::Dot1Qforwardalltable> dot1qforwardalltable;
        std::shared_ptr<cisco_ios_xe::Q_BRIDGE_MIB::QBRIDGEMIB::Dot1Qforwardunregisteredtable> dot1qforwardunregisteredtable;
        std::shared_ptr<cisco_ios_xe::Q_BRIDGE_MIB::QBRIDGEMIB::Dot1Qlearningconstraintstable> dot1qlearningconstraintstable;
        std::shared_ptr<cisco_ios_xe::Q_BRIDGE_MIB::QBRIDGEMIB::Dot1Qportvlanhcstatisticstable> dot1qportvlanhcstatisticstable;
        std::shared_ptr<cisco_ios_xe::Q_BRIDGE_MIB::QBRIDGEMIB::Dot1Qportvlanstatisticstable> dot1qportvlanstatisticstable;
        std::shared_ptr<cisco_ios_xe::Q_BRIDGE_MIB::QBRIDGEMIB::Dot1Qstaticmulticasttable> dot1qstaticmulticasttable;
        std::shared_ptr<cisco_ios_xe::Q_BRIDGE_MIB::QBRIDGEMIB::Dot1Qstaticunicasttable> dot1qstaticunicasttable;
        std::shared_ptr<cisco_ios_xe::Q_BRIDGE_MIB::QBRIDGEMIB::Dot1Qtpfdbtable> dot1qtpfdbtable;
        std::shared_ptr<cisco_ios_xe::Q_BRIDGE_MIB::QBRIDGEMIB::Dot1Qtpgrouptable> dot1qtpgrouptable;
        std::shared_ptr<cisco_ios_xe::Q_BRIDGE_MIB::QBRIDGEMIB::Dot1Qvlan> dot1qvlan;
        std::shared_ptr<cisco_ios_xe::Q_BRIDGE_MIB::QBRIDGEMIB::Dot1Qvlancurrenttable> dot1qvlancurrenttable;
        std::shared_ptr<cisco_ios_xe::Q_BRIDGE_MIB::QBRIDGEMIB::Dot1Qvlanstatictable> dot1qvlanstatictable;
        std::shared_ptr<cisco_ios_xe::Q_BRIDGE_MIB::QBRIDGEMIB::Dot1Vprotocolgrouptable> dot1vprotocolgrouptable;
        std::shared_ptr<cisco_ios_xe::Q_BRIDGE_MIB::QBRIDGEMIB::Dot1Vprotocolporttable> dot1vprotocolporttable;
        
}; // QBRIDGEMIB


class QBRIDGEMIB::Dot1Qbase : public ydk::Entity
{
    public:
        Dot1Qbase();
        ~Dot1Qbase();

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

        ydk::YLeaf dot1qvlanversionnumber; //type: Dot1Qvlanversionnumber
        ydk::YLeaf dot1qmaxvlanid; //type: int32
        ydk::YLeaf dot1qmaxsupportedvlans; //type: uint32
        ydk::YLeaf dot1qnumvlans; //type: uint32
        ydk::YLeaf dot1qgvrpstatus; //type: EnabledStatus
        class Dot1Qvlanversionnumber;

}; // QBRIDGEMIB::Dot1Qbase


class QBRIDGEMIB::Dot1Qfdbtable : public ydk::Entity
{
    public:
        Dot1Qfdbtable();
        ~Dot1Qfdbtable();

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

        class Dot1Qfdbentry; //type: QBRIDGEMIB::Dot1Qfdbtable::Dot1Qfdbentry

        std::vector<std::shared_ptr<cisco_ios_xe::Q_BRIDGE_MIB::QBRIDGEMIB::Dot1Qfdbtable::Dot1Qfdbentry> > dot1qfdbentry;
        
}; // QBRIDGEMIB::Dot1Qfdbtable


class QBRIDGEMIB::Dot1Qfdbtable::Dot1Qfdbentry : public ydk::Entity
{
    public:
        Dot1Qfdbentry();
        ~Dot1Qfdbentry();

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

        ydk::YLeaf dot1qfdbid; //type: uint32
        ydk::YLeaf dot1qfdbdynamiccount; //type: uint32

}; // QBRIDGEMIB::Dot1Qfdbtable::Dot1Qfdbentry


class QBRIDGEMIB::Dot1Qforwardalltable : public ydk::Entity
{
    public:
        Dot1Qforwardalltable();
        ~Dot1Qforwardalltable();

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

        class Dot1Qforwardallentry; //type: QBRIDGEMIB::Dot1Qforwardalltable::Dot1Qforwardallentry

        std::vector<std::shared_ptr<cisco_ios_xe::Q_BRIDGE_MIB::QBRIDGEMIB::Dot1Qforwardalltable::Dot1Qforwardallentry> > dot1qforwardallentry;
        
}; // QBRIDGEMIB::Dot1Qforwardalltable


class QBRIDGEMIB::Dot1Qforwardalltable::Dot1Qforwardallentry : public ydk::Entity
{
    public:
        Dot1Qforwardallentry();
        ~Dot1Qforwardallentry();

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

        //type: uint32 (refers to cisco_ios_xe::Q_BRIDGE_MIB::QBRIDGEMIB::Dot1Qvlancurrenttable::Dot1Qvlancurrententry::dot1qvlanindex)
        ydk::YLeaf dot1qvlanindex;
        ydk::YLeaf dot1qforwardallports; //type: binary
        ydk::YLeaf dot1qforwardallstaticports; //type: binary
        ydk::YLeaf dot1qforwardallforbiddenports; //type: binary

}; // QBRIDGEMIB::Dot1Qforwardalltable::Dot1Qforwardallentry


class QBRIDGEMIB::Dot1Qforwardunregisteredtable : public ydk::Entity
{
    public:
        Dot1Qforwardunregisteredtable();
        ~Dot1Qforwardunregisteredtable();

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

        class Dot1Qforwardunregisteredentry; //type: QBRIDGEMIB::Dot1Qforwardunregisteredtable::Dot1Qforwardunregisteredentry

        std::vector<std::shared_ptr<cisco_ios_xe::Q_BRIDGE_MIB::QBRIDGEMIB::Dot1Qforwardunregisteredtable::Dot1Qforwardunregisteredentry> > dot1qforwardunregisteredentry;
        
}; // QBRIDGEMIB::Dot1Qforwardunregisteredtable


class QBRIDGEMIB::Dot1Qforwardunregisteredtable::Dot1Qforwardunregisteredentry : public ydk::Entity
{
    public:
        Dot1Qforwardunregisteredentry();
        ~Dot1Qforwardunregisteredentry();

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

        //type: uint32 (refers to cisco_ios_xe::Q_BRIDGE_MIB::QBRIDGEMIB::Dot1Qvlancurrenttable::Dot1Qvlancurrententry::dot1qvlanindex)
        ydk::YLeaf dot1qvlanindex;
        ydk::YLeaf dot1qforwardunregisteredports; //type: binary
        ydk::YLeaf dot1qforwardunregisteredstaticports; //type: binary
        ydk::YLeaf dot1qforwardunregisteredforbiddenports; //type: binary

}; // QBRIDGEMIB::Dot1Qforwardunregisteredtable::Dot1Qforwardunregisteredentry


class QBRIDGEMIB::Dot1Qlearningconstraintstable : public ydk::Entity
{
    public:
        Dot1Qlearningconstraintstable();
        ~Dot1Qlearningconstraintstable();

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

        class Dot1Qlearningconstraintsentry; //type: QBRIDGEMIB::Dot1Qlearningconstraintstable::Dot1Qlearningconstraintsentry

        std::vector<std::shared_ptr<cisco_ios_xe::Q_BRIDGE_MIB::QBRIDGEMIB::Dot1Qlearningconstraintstable::Dot1Qlearningconstraintsentry> > dot1qlearningconstraintsentry;
        
}; // QBRIDGEMIB::Dot1Qlearningconstraintstable


class QBRIDGEMIB::Dot1Qlearningconstraintstable::Dot1Qlearningconstraintsentry : public ydk::Entity
{
    public:
        Dot1Qlearningconstraintsentry();
        ~Dot1Qlearningconstraintsentry();

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

        ydk::YLeaf dot1qconstraintvlan; //type: uint32
        ydk::YLeaf dot1qconstraintset; //type: int32
        ydk::YLeaf dot1qconstrainttype; //type: Dot1Qconstrainttype
        ydk::YLeaf dot1qconstraintstatus; //type: RowStatus
        class Dot1Qconstrainttype;

}; // QBRIDGEMIB::Dot1Qlearningconstraintstable::Dot1Qlearningconstraintsentry


class QBRIDGEMIB::Dot1Qportvlanhcstatisticstable : public ydk::Entity
{
    public:
        Dot1Qportvlanhcstatisticstable();
        ~Dot1Qportvlanhcstatisticstable();

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

        class Dot1Qportvlanhcstatisticsentry; //type: QBRIDGEMIB::Dot1Qportvlanhcstatisticstable::Dot1Qportvlanhcstatisticsentry

        std::vector<std::shared_ptr<cisco_ios_xe::Q_BRIDGE_MIB::QBRIDGEMIB::Dot1Qportvlanhcstatisticstable::Dot1Qportvlanhcstatisticsentry> > dot1qportvlanhcstatisticsentry;
        
}; // QBRIDGEMIB::Dot1Qportvlanhcstatisticstable


class QBRIDGEMIB::Dot1Qportvlanhcstatisticstable::Dot1Qportvlanhcstatisticsentry : public ydk::Entity
{
    public:
        Dot1Qportvlanhcstatisticsentry();
        ~Dot1Qportvlanhcstatisticsentry();

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

        //type: int32 (refers to cisco_ios_xe::BRIDGE_MIB::BRIDGEMIB::Dot1Dbaseporttable::Dot1Dbaseportentry::dot1dbaseport)
        ydk::YLeaf dot1dbaseport;
        //type: uint32 (refers to cisco_ios_xe::Q_BRIDGE_MIB::QBRIDGEMIB::Dot1Qvlancurrenttable::Dot1Qvlancurrententry::dot1qvlanindex)
        ydk::YLeaf dot1qvlanindex;
        ydk::YLeaf dot1qtpvlanporthcinframes; //type: uint64
        ydk::YLeaf dot1qtpvlanporthcoutframes; //type: uint64
        ydk::YLeaf dot1qtpvlanporthcindiscards; //type: uint64

}; // QBRIDGEMIB::Dot1Qportvlanhcstatisticstable::Dot1Qportvlanhcstatisticsentry


class QBRIDGEMIB::Dot1Qportvlanstatisticstable : public ydk::Entity
{
    public:
        Dot1Qportvlanstatisticstable();
        ~Dot1Qportvlanstatisticstable();

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

        class Dot1Qportvlanstatisticsentry; //type: QBRIDGEMIB::Dot1Qportvlanstatisticstable::Dot1Qportvlanstatisticsentry

        std::vector<std::shared_ptr<cisco_ios_xe::Q_BRIDGE_MIB::QBRIDGEMIB::Dot1Qportvlanstatisticstable::Dot1Qportvlanstatisticsentry> > dot1qportvlanstatisticsentry;
        
}; // QBRIDGEMIB::Dot1Qportvlanstatisticstable


class QBRIDGEMIB::Dot1Qportvlanstatisticstable::Dot1Qportvlanstatisticsentry : public ydk::Entity
{
    public:
        Dot1Qportvlanstatisticsentry();
        ~Dot1Qportvlanstatisticsentry();

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

        //type: int32 (refers to cisco_ios_xe::BRIDGE_MIB::BRIDGEMIB::Dot1Dbaseporttable::Dot1Dbaseportentry::dot1dbaseport)
        ydk::YLeaf dot1dbaseport;
        //type: uint32 (refers to cisco_ios_xe::Q_BRIDGE_MIB::QBRIDGEMIB::Dot1Qvlancurrenttable::Dot1Qvlancurrententry::dot1qvlanindex)
        ydk::YLeaf dot1qvlanindex;
        ydk::YLeaf dot1qtpvlanportinframes; //type: uint32
        ydk::YLeaf dot1qtpvlanportoutframes; //type: uint32
        ydk::YLeaf dot1qtpvlanportindiscards; //type: uint32
        ydk::YLeaf dot1qtpvlanportinoverflowframes; //type: uint32
        ydk::YLeaf dot1qtpvlanportoutoverflowframes; //type: uint32
        ydk::YLeaf dot1qtpvlanportinoverflowdiscards; //type: uint32

}; // QBRIDGEMIB::Dot1Qportvlanstatisticstable::Dot1Qportvlanstatisticsentry


class QBRIDGEMIB::Dot1Qstaticmulticasttable : public ydk::Entity
{
    public:
        Dot1Qstaticmulticasttable();
        ~Dot1Qstaticmulticasttable();

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

        class Dot1Qstaticmulticastentry; //type: QBRIDGEMIB::Dot1Qstaticmulticasttable::Dot1Qstaticmulticastentry

        std::vector<std::shared_ptr<cisco_ios_xe::Q_BRIDGE_MIB::QBRIDGEMIB::Dot1Qstaticmulticasttable::Dot1Qstaticmulticastentry> > dot1qstaticmulticastentry;
        
}; // QBRIDGEMIB::Dot1Qstaticmulticasttable


class QBRIDGEMIB::Dot1Qstaticmulticasttable::Dot1Qstaticmulticastentry : public ydk::Entity
{
    public:
        Dot1Qstaticmulticastentry();
        ~Dot1Qstaticmulticastentry();

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

        //type: uint32 (refers to cisco_ios_xe::Q_BRIDGE_MIB::QBRIDGEMIB::Dot1Qvlancurrenttable::Dot1Qvlancurrententry::dot1qvlanindex)
        ydk::YLeaf dot1qvlanindex;
        ydk::YLeaf dot1qstaticmulticastaddress; //type: string
        ydk::YLeaf dot1qstaticmulticastreceiveport; //type: int32
        ydk::YLeaf dot1qstaticmulticaststaticegressports; //type: binary
        ydk::YLeaf dot1qstaticmulticastforbiddenegressports; //type: binary
        ydk::YLeaf dot1qstaticmulticaststatus; //type: Dot1Qstaticmulticaststatus
        class Dot1Qstaticmulticaststatus;

}; // QBRIDGEMIB::Dot1Qstaticmulticasttable::Dot1Qstaticmulticastentry


class QBRIDGEMIB::Dot1Qstaticunicasttable : public ydk::Entity
{
    public:
        Dot1Qstaticunicasttable();
        ~Dot1Qstaticunicasttable();

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

        class Dot1Qstaticunicastentry; //type: QBRIDGEMIB::Dot1Qstaticunicasttable::Dot1Qstaticunicastentry

        std::vector<std::shared_ptr<cisco_ios_xe::Q_BRIDGE_MIB::QBRIDGEMIB::Dot1Qstaticunicasttable::Dot1Qstaticunicastentry> > dot1qstaticunicastentry;
        
}; // QBRIDGEMIB::Dot1Qstaticunicasttable


class QBRIDGEMIB::Dot1Qstaticunicasttable::Dot1Qstaticunicastentry : public ydk::Entity
{
    public:
        Dot1Qstaticunicastentry();
        ~Dot1Qstaticunicastentry();

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

        //type: uint32 (refers to cisco_ios_xe::Q_BRIDGE_MIB::QBRIDGEMIB::Dot1Qfdbtable::Dot1Qfdbentry::dot1qfdbid)
        ydk::YLeaf dot1qfdbid;
        ydk::YLeaf dot1qstaticunicastaddress; //type: string
        ydk::YLeaf dot1qstaticunicastreceiveport; //type: int32
        ydk::YLeaf dot1qstaticunicastallowedtogoto; //type: binary
        ydk::YLeaf dot1qstaticunicaststatus; //type: Dot1Qstaticunicaststatus
        class Dot1Qstaticunicaststatus;

}; // QBRIDGEMIB::Dot1Qstaticunicasttable::Dot1Qstaticunicastentry


class QBRIDGEMIB::Dot1Qtpfdbtable : public ydk::Entity
{
    public:
        Dot1Qtpfdbtable();
        ~Dot1Qtpfdbtable();

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

        class Dot1Qtpfdbentry; //type: QBRIDGEMIB::Dot1Qtpfdbtable::Dot1Qtpfdbentry

        std::vector<std::shared_ptr<cisco_ios_xe::Q_BRIDGE_MIB::QBRIDGEMIB::Dot1Qtpfdbtable::Dot1Qtpfdbentry> > dot1qtpfdbentry;
        
}; // QBRIDGEMIB::Dot1Qtpfdbtable


class QBRIDGEMIB::Dot1Qtpfdbtable::Dot1Qtpfdbentry : public ydk::Entity
{
    public:
        Dot1Qtpfdbentry();
        ~Dot1Qtpfdbentry();

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

        //type: uint32 (refers to cisco_ios_xe::Q_BRIDGE_MIB::QBRIDGEMIB::Dot1Qfdbtable::Dot1Qfdbentry::dot1qfdbid)
        ydk::YLeaf dot1qfdbid;
        ydk::YLeaf dot1qtpfdbaddress; //type: string
        ydk::YLeaf dot1qtpfdbport; //type: int32
        ydk::YLeaf dot1qtpfdbstatus; //type: Dot1Qtpfdbstatus
        class Dot1Qtpfdbstatus;

}; // QBRIDGEMIB::Dot1Qtpfdbtable::Dot1Qtpfdbentry


class QBRIDGEMIB::Dot1Qtpgrouptable : public ydk::Entity
{
    public:
        Dot1Qtpgrouptable();
        ~Dot1Qtpgrouptable();

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

        class Dot1Qtpgroupentry; //type: QBRIDGEMIB::Dot1Qtpgrouptable::Dot1Qtpgroupentry

        std::vector<std::shared_ptr<cisco_ios_xe::Q_BRIDGE_MIB::QBRIDGEMIB::Dot1Qtpgrouptable::Dot1Qtpgroupentry> > dot1qtpgroupentry;
        
}; // QBRIDGEMIB::Dot1Qtpgrouptable


class QBRIDGEMIB::Dot1Qtpgrouptable::Dot1Qtpgroupentry : public ydk::Entity
{
    public:
        Dot1Qtpgroupentry();
        ~Dot1Qtpgroupentry();

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

        //type: uint32 (refers to cisco_ios_xe::Q_BRIDGE_MIB::QBRIDGEMIB::Dot1Qvlancurrenttable::Dot1Qvlancurrententry::dot1qvlanindex)
        ydk::YLeaf dot1qvlanindex;
        ydk::YLeaf dot1qtpgroupaddress; //type: string
        ydk::YLeaf dot1qtpgroupegressports; //type: binary
        ydk::YLeaf dot1qtpgrouplearnt; //type: binary

}; // QBRIDGEMIB::Dot1Qtpgrouptable::Dot1Qtpgroupentry


class QBRIDGEMIB::Dot1Qvlan : public ydk::Entity
{
    public:
        Dot1Qvlan();
        ~Dot1Qvlan();

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

        ydk::YLeaf dot1qvlannumdeletes; //type: uint32
        ydk::YLeaf dot1qnextfreelocalvlanindex; //type: int32
        ydk::YLeaf dot1qconstraintsetdefault; //type: int32
        ydk::YLeaf dot1qconstrainttypedefault; //type: Dot1Qconstrainttypedefault
        class Dot1Qconstrainttypedefault;

}; // QBRIDGEMIB::Dot1Qvlan


class QBRIDGEMIB::Dot1Qvlancurrenttable : public ydk::Entity
{
    public:
        Dot1Qvlancurrenttable();
        ~Dot1Qvlancurrenttable();

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

        class Dot1Qvlancurrententry; //type: QBRIDGEMIB::Dot1Qvlancurrenttable::Dot1Qvlancurrententry

        std::vector<std::shared_ptr<cisco_ios_xe::Q_BRIDGE_MIB::QBRIDGEMIB::Dot1Qvlancurrenttable::Dot1Qvlancurrententry> > dot1qvlancurrententry;
        
}; // QBRIDGEMIB::Dot1Qvlancurrenttable


class QBRIDGEMIB::Dot1Qvlancurrenttable::Dot1Qvlancurrententry : public ydk::Entity
{
    public:
        Dot1Qvlancurrententry();
        ~Dot1Qvlancurrententry();

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

        ydk::YLeaf dot1qvlantimemark; //type: uint32
        ydk::YLeaf dot1qvlanindex; //type: uint32
        ydk::YLeaf dot1qvlanfdbid; //type: uint32
        ydk::YLeaf dot1qvlancurrentegressports; //type: binary
        ydk::YLeaf dot1qvlancurrentuntaggedports; //type: binary
        ydk::YLeaf dot1qvlanstatus; //type: Dot1Qvlanstatus
        ydk::YLeaf dot1qvlancreationtime; //type: uint32
        class Dot1Qvlanstatus;

}; // QBRIDGEMIB::Dot1Qvlancurrenttable::Dot1Qvlancurrententry


class QBRIDGEMIB::Dot1Qvlanstatictable : public ydk::Entity
{
    public:
        Dot1Qvlanstatictable();
        ~Dot1Qvlanstatictable();

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

        class Dot1Qvlanstaticentry; //type: QBRIDGEMIB::Dot1Qvlanstatictable::Dot1Qvlanstaticentry

        std::vector<std::shared_ptr<cisco_ios_xe::Q_BRIDGE_MIB::QBRIDGEMIB::Dot1Qvlanstatictable::Dot1Qvlanstaticentry> > dot1qvlanstaticentry;
        
}; // QBRIDGEMIB::Dot1Qvlanstatictable


class QBRIDGEMIB::Dot1Qvlanstatictable::Dot1Qvlanstaticentry : public ydk::Entity
{
    public:
        Dot1Qvlanstaticentry();
        ~Dot1Qvlanstaticentry();

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

        //type: uint32 (refers to cisco_ios_xe::Q_BRIDGE_MIB::QBRIDGEMIB::Dot1Qvlancurrenttable::Dot1Qvlancurrententry::dot1qvlanindex)
        ydk::YLeaf dot1qvlanindex;
        ydk::YLeaf dot1qvlanstaticname; //type: string
        ydk::YLeaf dot1qvlanstaticegressports; //type: binary
        ydk::YLeaf dot1qvlanforbiddenegressports; //type: binary
        ydk::YLeaf dot1qvlanstaticuntaggedports; //type: binary
        ydk::YLeaf dot1qvlanstaticrowstatus; //type: RowStatus

}; // QBRIDGEMIB::Dot1Qvlanstatictable::Dot1Qvlanstaticentry


class QBRIDGEMIB::Dot1Vprotocolgrouptable : public ydk::Entity
{
    public:
        Dot1Vprotocolgrouptable();
        ~Dot1Vprotocolgrouptable();

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

        class Dot1Vprotocolgroupentry; //type: QBRIDGEMIB::Dot1Vprotocolgrouptable::Dot1Vprotocolgroupentry

        std::vector<std::shared_ptr<cisco_ios_xe::Q_BRIDGE_MIB::QBRIDGEMIB::Dot1Vprotocolgrouptable::Dot1Vprotocolgroupentry> > dot1vprotocolgroupentry;
        
}; // QBRIDGEMIB::Dot1Vprotocolgrouptable


class QBRIDGEMIB::Dot1Vprotocolgrouptable::Dot1Vprotocolgroupentry : public ydk::Entity
{
    public:
        Dot1Vprotocolgroupentry();
        ~Dot1Vprotocolgroupentry();

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

        ydk::YLeaf dot1vprotocoltemplateframetype; //type: Dot1Vprotocoltemplateframetype
        ydk::YLeaf dot1vprotocoltemplateprotocolvalue; //type: binary
        ydk::YLeaf dot1vprotocolgroupid; //type: int32
        ydk::YLeaf dot1vprotocolgrouprowstatus; //type: RowStatus
        class Dot1Vprotocoltemplateframetype;

}; // QBRIDGEMIB::Dot1Vprotocolgrouptable::Dot1Vprotocolgroupentry


class QBRIDGEMIB::Dot1Vprotocolporttable : public ydk::Entity
{
    public:
        Dot1Vprotocolporttable();
        ~Dot1Vprotocolporttable();

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

        class Dot1Vprotocolportentry; //type: QBRIDGEMIB::Dot1Vprotocolporttable::Dot1Vprotocolportentry

        std::vector<std::shared_ptr<cisco_ios_xe::Q_BRIDGE_MIB::QBRIDGEMIB::Dot1Vprotocolporttable::Dot1Vprotocolportentry> > dot1vprotocolportentry;
        
}; // QBRIDGEMIB::Dot1Vprotocolporttable


class QBRIDGEMIB::Dot1Vprotocolporttable::Dot1Vprotocolportentry : public ydk::Entity
{
    public:
        Dot1Vprotocolportentry();
        ~Dot1Vprotocolportentry();

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

        //type: int32 (refers to cisco_ios_xe::BRIDGE_MIB::BRIDGEMIB::Dot1Dbaseporttable::Dot1Dbaseportentry::dot1dbaseport)
        ydk::YLeaf dot1dbaseport;
        ydk::YLeaf dot1vprotocolportgroupid; //type: int32
        ydk::YLeaf dot1vprotocolportgroupvid; //type: int32
        ydk::YLeaf dot1vprotocolportrowstatus; //type: RowStatus

}; // QBRIDGEMIB::Dot1Vprotocolporttable::Dot1Vprotocolportentry

class QBRIDGEMIB::Dot1Qbase::Dot1Qvlanversionnumber : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf version1;

};

class QBRIDGEMIB::Dot1Qlearningconstraintstable::Dot1Qlearningconstraintsentry::Dot1Qconstrainttype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf independent;
        static const ydk::Enum::YLeaf shared;

};

class QBRIDGEMIB::Dot1Qstaticmulticasttable::Dot1Qstaticmulticastentry::Dot1Qstaticmulticaststatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf other;
        static const ydk::Enum::YLeaf invalid;
        static const ydk::Enum::YLeaf permanent;
        static const ydk::Enum::YLeaf deleteOnReset;
        static const ydk::Enum::YLeaf deleteOnTimeout;

};

class QBRIDGEMIB::Dot1Qstaticunicasttable::Dot1Qstaticunicastentry::Dot1Qstaticunicaststatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf other;
        static const ydk::Enum::YLeaf invalid;
        static const ydk::Enum::YLeaf permanent;
        static const ydk::Enum::YLeaf deleteOnReset;
        static const ydk::Enum::YLeaf deleteOnTimeout;

};

class QBRIDGEMIB::Dot1Qtpfdbtable::Dot1Qtpfdbentry::Dot1Qtpfdbstatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf other;
        static const ydk::Enum::YLeaf invalid;
        static const ydk::Enum::YLeaf learned;
        static const ydk::Enum::YLeaf self;
        static const ydk::Enum::YLeaf mgmt;

};

class QBRIDGEMIB::Dot1Qvlan::Dot1Qconstrainttypedefault : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf independent;
        static const ydk::Enum::YLeaf shared;

};

class QBRIDGEMIB::Dot1Qvlancurrenttable::Dot1Qvlancurrententry::Dot1Qvlanstatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf other;
        static const ydk::Enum::YLeaf permanent;
        static const ydk::Enum::YLeaf dynamicGvrp;

};

class QBRIDGEMIB::Dot1Vprotocolgrouptable::Dot1Vprotocolgroupentry::Dot1Vprotocoltemplateframetype : public ydk::Enum
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

