#ifndef _CISCO_IPSLA_AUTOMEASURE_MIB_
#define _CISCO_IPSLA_AUTOMEASURE_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace cisco_ios_xe {
namespace CISCO_IPSLA_AUTOMEASURE_MIB {

class CiscoIpslaAutomeasureMib : public ydk::Entity
{
    public:
        CiscoIpslaAutomeasureMib();
        ~CiscoIpslaAutomeasureMib();

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

        class Cipslaautogrouptable; //type: CiscoIpslaAutomeasureMib::Cipslaautogrouptable
        class Cipslaautogroupdesttable; //type: CiscoIpslaAutomeasureMib::Cipslaautogroupdesttable
        class Cipslareacttable; //type: CiscoIpslaAutomeasureMib::Cipslareacttable
        class Cipslaautogroupschedtable; //type: CiscoIpslaAutomeasureMib::Cipslaautogroupschedtable

        std::shared_ptr<CISCO_IPSLA_AUTOMEASURE_MIB::CiscoIpslaAutomeasureMib::Cipslaautogroupdesttable> cipslaautogroupdesttable;
        std::shared_ptr<CISCO_IPSLA_AUTOMEASURE_MIB::CiscoIpslaAutomeasureMib::Cipslaautogroupschedtable> cipslaautogroupschedtable;
        std::shared_ptr<CISCO_IPSLA_AUTOMEASURE_MIB::CiscoIpslaAutomeasureMib::Cipslaautogrouptable> cipslaautogrouptable;
        std::shared_ptr<CISCO_IPSLA_AUTOMEASURE_MIB::CiscoIpslaAutomeasureMib::Cipslareacttable> cipslareacttable;
        
}; // CiscoIpslaAutomeasureMib


class CiscoIpslaAutomeasureMib::Cipslaautogrouptable : public ydk::Entity
{
    public:
        Cipslaautogrouptable();
        ~Cipslaautogrouptable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Cipslaautogroupentry; //type: CiscoIpslaAutomeasureMib::Cipslaautogrouptable::Cipslaautogroupentry

        std::vector<std::shared_ptr<CISCO_IPSLA_AUTOMEASURE_MIB::CiscoIpslaAutomeasureMib::Cipslaautogrouptable::Cipslaautogroupentry> > cipslaautogroupentry;
        
}; // CiscoIpslaAutomeasureMib::Cipslaautogrouptable


class CiscoIpslaAutomeasureMib::Cipslaautogrouptable::Cipslaautogroupentry : public ydk::Entity
{
    public:
        Cipslaautogroupentry();
        ~Cipslaautogroupentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cipslaautogroupname; //type: string
        ydk::YLeaf cipslaautogroupdescription; //type: string
        ydk::YLeaf cipslaautogroupdestinationname; //type: string
        ydk::YLeaf cipslaautogroupaddestport; //type: uint16
        ydk::YLeaf cipslaautogroupopertemplatename; //type: string
        ydk::YLeaf cipslaautogroupschedulerid; //type: string
        ydk::YLeaf cipslaautogroupqosenable; //type: boolean
        ydk::YLeaf cipslaautogroupopertype; //type: Ipslaopertype
        ydk::YLeaf cipslaautogroupdestipadenable; //type: boolean
        ydk::YLeaf cipslaautogroupadmeasureretry; //type: uint32
        ydk::YLeaf cipslaautogroupaddestipageout; //type: uint32
        ydk::YLeaf cipslaautogroupstoragetype; //type: Storagetype
        ydk::YLeaf cipslaautogrouprowstatus; //type: Rowstatus

}; // CiscoIpslaAutomeasureMib::Cipslaautogrouptable::Cipslaautogroupentry


class CiscoIpslaAutomeasureMib::Cipslaautogroupdesttable : public ydk::Entity
{
    public:
        Cipslaautogroupdesttable();
        ~Cipslaautogroupdesttable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Cipslaautogroupdestentry; //type: CiscoIpslaAutomeasureMib::Cipslaautogroupdesttable::Cipslaautogroupdestentry

        std::vector<std::shared_ptr<CISCO_IPSLA_AUTOMEASURE_MIB::CiscoIpslaAutomeasureMib::Cipslaautogroupdesttable::Cipslaautogroupdestentry> > cipslaautogroupdestentry;
        
}; // CiscoIpslaAutomeasureMib::Cipslaautogroupdesttable


class CiscoIpslaAutomeasureMib::Cipslaautogroupdesttable::Cipslaautogroupdestentry : public ydk::Entity
{
    public:
        Cipslaautogroupdestentry();
        ~Cipslaautogroupdestentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cipslaautogroupdestname; //type: string
        ydk::YLeaf cipslaautogroupdestipaddrtype; //type: Inetaddresstype
        ydk::YLeaf cipslaautogroupdestipaddr; //type: binary
        ydk::YLeaf cipslaautogroupdestport; //type: uint16
        ydk::YLeaf cipslaautogroupdeststoragetype; //type: Storagetype
        ydk::YLeaf cipslaautogroupdestrowstatus; //type: Rowstatus

}; // CiscoIpslaAutomeasureMib::Cipslaautogroupdesttable::Cipslaautogroupdestentry


class CiscoIpslaAutomeasureMib::Cipslareacttable : public ydk::Entity
{
    public:
        Cipslareacttable();
        ~Cipslareacttable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Cipslareactentry; //type: CiscoIpslaAutomeasureMib::Cipslareacttable::Cipslareactentry

        std::vector<std::shared_ptr<CISCO_IPSLA_AUTOMEASURE_MIB::CiscoIpslaAutomeasureMib::Cipslareacttable::Cipslareactentry> > cipslareactentry;
        
}; // CiscoIpslaAutomeasureMib::Cipslareacttable


class CiscoIpslaAutomeasureMib::Cipslareacttable::Cipslareactentry : public ydk::Entity
{
    public:
        Cipslareactentry();
        ~Cipslareactentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cipslaautogroupopertype; //type: Ipslaopertype
        ydk::YLeaf cipslareactconfigindex; //type: uint32
        //type: string (refers to CISCO_IPSLA_AUTOMEASURE_MIB::CiscoIpslaAutomeasureMib::Cipslaautogrouptable::Cipslaautogroupentry::cipslaautogroupopertemplatename)
        ydk::YLeaf cipslaautogroupopertemplatename;
        ydk::YLeaf cipslareactvar; //type: Ipslareactvar
        ydk::YLeaf cipslareactthresholdtype; //type: Cipslareactthresholdtype
        ydk::YLeaf cipslareactactiontype; //type: Cipslareactactiontype
        ydk::YLeaf cipslareactthresholdrising; //type: uint32
        ydk::YLeaf cipslareactthresholdfalling; //type: uint32
        ydk::YLeaf cipslareactthresholdcountx; //type: uint32
        ydk::YLeaf cipslareactthresholdcounty; //type: uint32
        ydk::YLeaf cipslareactstoragetype; //type: Storagetype
        ydk::YLeaf cipslareactrowstatus; //type: Rowstatus
        class Cipslareactthresholdtype;
        class Cipslareactactiontype;

}; // CiscoIpslaAutomeasureMib::Cipslareacttable::Cipslareactentry


class CiscoIpslaAutomeasureMib::Cipslaautogroupschedtable : public ydk::Entity
{
    public:
        Cipslaautogroupschedtable();
        ~Cipslaautogroupschedtable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Cipslaautogroupschedentry; //type: CiscoIpslaAutomeasureMib::Cipslaautogroupschedtable::Cipslaautogroupschedentry

        std::vector<std::shared_ptr<CISCO_IPSLA_AUTOMEASURE_MIB::CiscoIpslaAutomeasureMib::Cipslaautogroupschedtable::Cipslaautogroupschedentry> > cipslaautogroupschedentry;
        
}; // CiscoIpslaAutomeasureMib::Cipslaautogroupschedtable


class CiscoIpslaAutomeasureMib::Cipslaautogroupschedtable::Cipslaautogroupschedentry : public ydk::Entity
{
    public:
        Cipslaautogroupschedentry();
        ~Cipslaautogroupschedentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cipslaautogroupschedid; //type: string
        ydk::YLeaf cipslaautogroupschedperiod; //type: uint32
        ydk::YLeaf cipslaautogroupschedinterval; //type: uint32
        ydk::YLeaf cipslaautogroupschedlife; //type: uint32
        ydk::YLeaf cipslaautogroupschedageout; //type: uint32
        ydk::YLeaf cipslaautogroupschedmaxinterval; //type: uint32
        ydk::YLeaf cipslaautogroupschedmininterval; //type: uint32
        ydk::YLeaf cipslaautogroupschedstarttime; //type: uint32
        ydk::YLeaf cipslaautogroupschedstoragetype; //type: Storagetype
        ydk::YLeaf cipslaautogroupschedrowstatus; //type: Rowstatus

}; // CiscoIpslaAutomeasureMib::Cipslaautogroupschedtable::Cipslaautogroupschedentry

class CiscoIpslaAutomeasureMib::Cipslareacttable::Cipslareactentry::Cipslareactthresholdtype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf never;
        static const ydk::Enum::YLeaf immediate;
        static const ydk::Enum::YLeaf consecutive;
        static const ydk::Enum::YLeaf xOfy;
        static const ydk::Enum::YLeaf average;

};

class CiscoIpslaAutomeasureMib::Cipslareacttable::Cipslareactentry::Cipslareactactiontype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf notificationOnly;

};


}
}

#endif /* _CISCO_IPSLA_AUTOMEASURE_MIB_ */

