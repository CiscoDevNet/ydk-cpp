#ifndef _CISCO_ETHER_CFM_MIB_
#define _CISCO_ETHER_CFM_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xe {
namespace CISCO_ETHER_CFM_MIB {

class CISCOETHERCFMMIB : public ydk::Entity
{
    public:
        CISCOETHERCFMMIB();
        ~CISCOETHERCFMMIB();

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

        class Ceccfmevents; //type: CISCOETHERCFMMIB::Ceccfmevents
        class Cethercfmeventtable; //type: CISCOETHERCFMMIB::Cethercfmeventtable

        std::shared_ptr<cisco_ios_xe::CISCO_ETHER_CFM_MIB::CISCOETHERCFMMIB::Ceccfmevents> ceccfmevents;
        std::shared_ptr<cisco_ios_xe::CISCO_ETHER_CFM_MIB::CISCOETHERCFMMIB::Cethercfmeventtable> cethercfmeventtable;
        
}; // CISCOETHERCFMMIB


class CISCOETHERCFMMIB::Ceccfmevents : public ydk::Entity
{
    public:
        Ceccfmevents();
        ~Ceccfmevents();

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

        ydk::YLeaf cethercfmmaxeventindex; //type: uint32

}; // CISCOETHERCFMMIB::Ceccfmevents


class CISCOETHERCFMMIB::Cethercfmeventtable : public ydk::Entity
{
    public:
        Cethercfmeventtable();
        ~Cethercfmeventtable();

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

        class Cethercfmevententry; //type: CISCOETHERCFMMIB::Cethercfmeventtable::Cethercfmevententry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_ETHER_CFM_MIB::CISCOETHERCFMMIB::Cethercfmeventtable::Cethercfmevententry> > cethercfmevententry;
        
}; // CISCOETHERCFMMIB::Cethercfmeventtable


class CISCOETHERCFMMIB::Cethercfmeventtable::Cethercfmevententry : public ydk::Entity
{
    public:
        Cethercfmevententry();
        ~Cethercfmevententry();

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

        ydk::YLeaf cethercfmeventdomainindex; //type: uint32
        ydk::YLeaf cethercfmeventsvlan; //type: int32
        ydk::YLeaf cethercfmeventindex; //type: uint32
        ydk::YLeaf cethercfmeventdomainname; //type: string
        ydk::YLeaf cethercfmeventtype; //type: Cethercfmeventtype
        ydk::YLeaf cethercfmeventlastchange; //type: uint32
        ydk::YLeaf cethercfmeventserviceid; //type: string
        ydk::YLeaf cethercfmeventlclmepid; //type: uint32
        ydk::YLeaf cethercfmeventlclmacaddress; //type: string
        ydk::YLeaf cethercfmeventlclmepcount; //type: uint32
        ydk::YLeaf cethercfmeventlclifcount; //type: uint32
        ydk::YLeaf cethercfmeventrmtmepid; //type: uint32
        ydk::YLeaf cethercfmeventrmtmacaddress; //type: string
        ydk::YLeaf cethercfmeventrmtportstate; //type: Cethercfmeventrmtportstate
        ydk::YLeaf cethercfmeventrmtserviceid; //type: string
        ydk::YLeaf cethercfmeventcode; //type: Cethercfmeventcode
        ydk::YLeaf cethercfmeventdeleterow; //type: Cethercfmeventdeleterow
        class Cethercfmeventtype;
        class Cethercfmeventrmtportstate;
        class Cethercfmeventcode;
        class Cethercfmeventdeleterow;

}; // CISCOETHERCFMMIB::Cethercfmeventtable::Cethercfmevententry

class CISCOETHERCFMMIB::Cethercfmeventtable::Cethercfmevententry::Cethercfmeventtype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf mepUp;
        static const ydk::Enum::YLeaf mepDown;
        static const ydk::Enum::YLeaf xconnect;
        static const ydk::Enum::YLeaf loop;
        static const ydk::Enum::YLeaf config;
        static const ydk::Enum::YLeaf xcheckMissing;
        static const ydk::Enum::YLeaf xcheckUnknown;
        static const ydk::Enum::YLeaf xcheckServiceUp;

};

class CISCOETHERCFMMIB::Cethercfmeventtable::Cethercfmevententry::Cethercfmeventrmtportstate : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf up;
        static const ydk::Enum::YLeaf down;
        static const ydk::Enum::YLeaf adminDown;
        static const ydk::Enum::YLeaf test;
        static const ydk::Enum::YLeaf remoteExcessiveErrors;
        static const ydk::Enum::YLeaf localExcessiveErrors;
        static const ydk::Enum::YLeaf localNoData;

};

class CISCOETHERCFMMIB::Cethercfmeventtable::Cethercfmevententry::Cethercfmeventcode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf new_;
        static const ydk::Enum::YLeaf returning;
        static const ydk::Enum::YLeaf portState;
        static const ydk::Enum::YLeaf lastGasp;
        static const ydk::Enum::YLeaf timeout;
        static const ydk::Enum::YLeaf configClear;
        static const ydk::Enum::YLeaf loopClear;
        static const ydk::Enum::YLeaf xconnectClear;
        static const ydk::Enum::YLeaf unknownClear;

};

class CISCOETHERCFMMIB::Cethercfmeventtable::Cethercfmevententry::Cethercfmeventdeleterow : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf noop;
        static const ydk::Enum::YLeaf delete_;

};


}
}

#endif /* _CISCO_ETHER_CFM_MIB_ */

