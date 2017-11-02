#ifndef _CISCO_IPSLA_AUTOMEASURE_MIB_
#define _CISCO_IPSLA_AUTOMEASURE_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace cisco_ios_xe {
namespace CISCO_IPSLA_AUTOMEASURE_MIB {

class CISCOIPSLAAUTOMEASUREMIB : public ydk::Entity
{
    public:
        CISCOIPSLAAUTOMEASUREMIB();
        ~CISCOIPSLAAUTOMEASUREMIB();

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

        class Cipslaautogrouptable; //type: CISCOIPSLAAUTOMEASUREMIB::Cipslaautogrouptable
        class Cipslaautogroupdesttable; //type: CISCOIPSLAAUTOMEASUREMIB::Cipslaautogroupdesttable
        class Cipslareacttable; //type: CISCOIPSLAAUTOMEASUREMIB::Cipslareacttable
        class Cipslaautogroupschedtable; //type: CISCOIPSLAAUTOMEASUREMIB::Cipslaautogroupschedtable

        std::shared_ptr<cisco_ios_xe::CISCO_IPSLA_AUTOMEASURE_MIB::CISCOIPSLAAUTOMEASUREMIB::Cipslaautogrouptable> cipslaautogrouptable;
        std::shared_ptr<cisco_ios_xe::CISCO_IPSLA_AUTOMEASURE_MIB::CISCOIPSLAAUTOMEASUREMIB::Cipslaautogroupdesttable> cipslaautogroupdesttable;
        std::shared_ptr<cisco_ios_xe::CISCO_IPSLA_AUTOMEASURE_MIB::CISCOIPSLAAUTOMEASUREMIB::Cipslareacttable> cipslareacttable;
        std::shared_ptr<cisco_ios_xe::CISCO_IPSLA_AUTOMEASURE_MIB::CISCOIPSLAAUTOMEASUREMIB::Cipslaautogroupschedtable> cipslaautogroupschedtable;
        
}; // CISCOIPSLAAUTOMEASUREMIB


class CISCOIPSLAAUTOMEASUREMIB::Cipslaautogrouptable : public ydk::Entity
{
    public:
        Cipslaautogrouptable();
        ~Cipslaautogrouptable();

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

        class Cipslaautogroupentry; //type: CISCOIPSLAAUTOMEASUREMIB::Cipslaautogrouptable::Cipslaautogroupentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_IPSLA_AUTOMEASURE_MIB::CISCOIPSLAAUTOMEASUREMIB::Cipslaautogrouptable::Cipslaautogroupentry> > cipslaautogroupentry;
        
}; // CISCOIPSLAAUTOMEASUREMIB::Cipslaautogrouptable


class CISCOIPSLAAUTOMEASUREMIB::Cipslaautogrouptable::Cipslaautogroupentry : public ydk::Entity
{
    public:
        Cipslaautogroupentry();
        ~Cipslaautogroupentry();

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

        ydk::YLeaf cipslaautogroupname; //type: string
        ydk::YLeaf cipslaautogroupdescription; //type: string
        ydk::YLeaf cipslaautogroupdestinationname; //type: string
        ydk::YLeaf cipslaautogroupaddestport; //type: uint16
        ydk::YLeaf cipslaautogroupopertemplatename; //type: string
        ydk::YLeaf cipslaautogroupschedulerid; //type: string
        ydk::YLeaf cipslaautogroupqosenable; //type: boolean
        ydk::YLeaf cipslaautogroupopertype; //type: IpSlaOperType
        ydk::YLeaf cipslaautogroupdestipadenable; //type: boolean
        ydk::YLeaf cipslaautogroupadmeasureretry; //type: uint32
        ydk::YLeaf cipslaautogroupaddestipageout; //type: uint32
        ydk::YLeaf cipslaautogroupstoragetype; //type: StorageType
        ydk::YLeaf cipslaautogrouprowstatus; //type: RowStatus

}; // CISCOIPSLAAUTOMEASUREMIB::Cipslaautogrouptable::Cipslaautogroupentry


class CISCOIPSLAAUTOMEASUREMIB::Cipslaautogroupdesttable : public ydk::Entity
{
    public:
        Cipslaautogroupdesttable();
        ~Cipslaautogroupdesttable();

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

        class Cipslaautogroupdestentry; //type: CISCOIPSLAAUTOMEASUREMIB::Cipslaautogroupdesttable::Cipslaautogroupdestentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_IPSLA_AUTOMEASURE_MIB::CISCOIPSLAAUTOMEASUREMIB::Cipslaautogroupdesttable::Cipslaautogroupdestentry> > cipslaautogroupdestentry;
        
}; // CISCOIPSLAAUTOMEASUREMIB::Cipslaautogroupdesttable


class CISCOIPSLAAUTOMEASUREMIB::Cipslaautogroupdesttable::Cipslaautogroupdestentry : public ydk::Entity
{
    public:
        Cipslaautogroupdestentry();
        ~Cipslaautogroupdestentry();

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

        ydk::YLeaf cipslaautogroupdestname; //type: string
        ydk::YLeaf cipslaautogroupdestipaddrtype; //type: InetAddressType
        ydk::YLeaf cipslaautogroupdestipaddr; //type: binary
        ydk::YLeaf cipslaautogroupdestport; //type: uint16
        ydk::YLeaf cipslaautogroupdeststoragetype; //type: StorageType
        ydk::YLeaf cipslaautogroupdestrowstatus; //type: RowStatus

}; // CISCOIPSLAAUTOMEASUREMIB::Cipslaautogroupdesttable::Cipslaautogroupdestentry


class CISCOIPSLAAUTOMEASUREMIB::Cipslareacttable : public ydk::Entity
{
    public:
        Cipslareacttable();
        ~Cipslareacttable();

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

        class Cipslareactentry; //type: CISCOIPSLAAUTOMEASUREMIB::Cipslareacttable::Cipslareactentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_IPSLA_AUTOMEASURE_MIB::CISCOIPSLAAUTOMEASUREMIB::Cipslareacttable::Cipslareactentry> > cipslareactentry;
        
}; // CISCOIPSLAAUTOMEASUREMIB::Cipslareacttable


class CISCOIPSLAAUTOMEASUREMIB::Cipslareacttable::Cipslareactentry : public ydk::Entity
{
    public:
        Cipslareactentry();
        ~Cipslareactentry();

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

        ydk::YLeaf cipslaautogroupopertype; //type: IpSlaOperType
        ydk::YLeaf cipslareactconfigindex; //type: uint32
        //type: string (refers to cisco_ios_xe::CISCO_IPSLA_AUTOMEASURE_MIB::CISCOIPSLAAUTOMEASUREMIB::Cipslaautogrouptable::Cipslaautogroupentry::cipslaautogroupopertemplatename)
        ydk::YLeaf cipslaautogroupopertemplatename;
        ydk::YLeaf cipslareactvar; //type: IpSlaReactVar
        ydk::YLeaf cipslareactthresholdtype; //type: Cipslareactthresholdtype
        ydk::YLeaf cipslareactactiontype; //type: Cipslareactactiontype
        ydk::YLeaf cipslareactthresholdrising; //type: uint32
        ydk::YLeaf cipslareactthresholdfalling; //type: uint32
        ydk::YLeaf cipslareactthresholdcountx; //type: uint32
        ydk::YLeaf cipslareactthresholdcounty; //type: uint32
        ydk::YLeaf cipslareactstoragetype; //type: StorageType
        ydk::YLeaf cipslareactrowstatus; //type: RowStatus
        class Cipslareactthresholdtype;
        class Cipslareactactiontype;

}; // CISCOIPSLAAUTOMEASUREMIB::Cipslareacttable::Cipslareactentry


class CISCOIPSLAAUTOMEASUREMIB::Cipslaautogroupschedtable : public ydk::Entity
{
    public:
        Cipslaautogroupschedtable();
        ~Cipslaautogroupschedtable();

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

        class Cipslaautogroupschedentry; //type: CISCOIPSLAAUTOMEASUREMIB::Cipslaautogroupschedtable::Cipslaautogroupschedentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_IPSLA_AUTOMEASURE_MIB::CISCOIPSLAAUTOMEASUREMIB::Cipslaautogroupschedtable::Cipslaautogroupschedentry> > cipslaautogroupschedentry;
        
}; // CISCOIPSLAAUTOMEASUREMIB::Cipslaautogroupschedtable


class CISCOIPSLAAUTOMEASUREMIB::Cipslaautogroupschedtable::Cipslaautogroupschedentry : public ydk::Entity
{
    public:
        Cipslaautogroupschedentry();
        ~Cipslaautogroupschedentry();

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

        ydk::YLeaf cipslaautogroupschedid; //type: string
        ydk::YLeaf cipslaautogroupschedperiod; //type: uint32
        ydk::YLeaf cipslaautogroupschedinterval; //type: uint32
        ydk::YLeaf cipslaautogroupschedlife; //type: uint32
        ydk::YLeaf cipslaautogroupschedageout; //type: uint32
        ydk::YLeaf cipslaautogroupschedmaxinterval; //type: uint32
        ydk::YLeaf cipslaautogroupschedmininterval; //type: uint32
        ydk::YLeaf cipslaautogroupschedstarttime; //type: uint32
        ydk::YLeaf cipslaautogroupschedstoragetype; //type: StorageType
        ydk::YLeaf cipslaautogroupschedrowstatus; //type: RowStatus

}; // CISCOIPSLAAUTOMEASUREMIB::Cipslaautogroupschedtable::Cipslaautogroupschedentry

class CISCOIPSLAAUTOMEASUREMIB::Cipslareacttable::Cipslareactentry::Cipslareactthresholdtype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf never;
        static const ydk::Enum::YLeaf immediate;
        static const ydk::Enum::YLeaf consecutive;
        static const ydk::Enum::YLeaf xOfy;
        static const ydk::Enum::YLeaf average;

};

class CISCOIPSLAAUTOMEASUREMIB::Cipslareacttable::Cipslareactentry::Cipslareactactiontype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf notificationOnly;

};


}
}

#endif /* _CISCO_IPSLA_AUTOMEASURE_MIB_ */

