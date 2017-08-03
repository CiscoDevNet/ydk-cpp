#ifndef _CISCO_ATM_QOS_MIB_
#define _CISCO_ATM_QOS_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace cisco_ios_xe {
namespace CISCO_ATM_QOS_MIB {

class CiscoAtmQosMib : public ydk::Entity
{
    public:
        CiscoAtmQosMib();
        ~CiscoAtmQosMib();

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

        class Caqvccparamstable; //type: CiscoAtmQosMib::Caqvccparamstable
        class Caqvpcparamstable; //type: CiscoAtmQosMib::Caqvpcparamstable
        class Caqqueuingparamstable; //type: CiscoAtmQosMib::Caqqueuingparamstable
        class Caqqueuingparamsclasstable; //type: CiscoAtmQosMib::Caqqueuingparamsclasstable

        std::shared_ptr<CISCO_ATM_QOS_MIB::CiscoAtmQosMib::Caqqueuingparamsclasstable> caqqueuingparamsclasstable;
        std::shared_ptr<CISCO_ATM_QOS_MIB::CiscoAtmQosMib::Caqqueuingparamstable> caqqueuingparamstable;
        std::shared_ptr<CISCO_ATM_QOS_MIB::CiscoAtmQosMib::Caqvccparamstable> caqvccparamstable;
        std::shared_ptr<CISCO_ATM_QOS_MIB::CiscoAtmQosMib::Caqvpcparamstable> caqvpcparamstable;
        
}; // CiscoAtmQosMib


class CiscoAtmQosMib::Caqvccparamstable : public ydk::Entity
{
    public:
        Caqvccparamstable();
        ~Caqvccparamstable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Caqvccparamsentry; //type: CiscoAtmQosMib::Caqvccparamstable::Caqvccparamsentry

        std::vector<std::shared_ptr<CISCO_ATM_QOS_MIB::CiscoAtmQosMib::Caqvccparamstable::Caqvccparamsentry> > caqvccparamsentry;
        
}; // CiscoAtmQosMib::Caqvccparamstable


class CiscoAtmQosMib::Caqvccparamstable::Caqvccparamsentry : public ydk::Entity
{
    public:
        Caqvccparamsentry();
        ~Caqvccparamsentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: int32 (refers to IF_MIB::IfMib::Iftable::Ifentry::ifindex)
        ydk::YLeaf ifindex;
        //type: int32 (refers to ATM_MIB::AtmMib::Atmvcltable::Atmvclentry::atmvclvpi)
        ydk::YLeaf atmvclvpi;
        //type: int32 (refers to ATM_MIB::AtmMib::Atmvcltable::Atmvclentry::atmvclvci)
        ydk::YLeaf atmvclvci;
        ydk::YLeaf caqvccparamstype; //type: Atmservicecategory
        ydk::YLeaf caqvccparamspcrin0; //type: uint32
        ydk::YLeaf caqvccparamspcrin01; //type: uint32
        ydk::YLeaf caqvccparamspcrout0; //type: uint32
        ydk::YLeaf caqvccparamspcrout01; //type: uint32
        ydk::YLeaf caqvccparamsscrin0; //type: uint32
        ydk::YLeaf caqvccparamsscrin01; //type: uint32
        ydk::YLeaf caqvccparamsscrout0; //type: uint32
        ydk::YLeaf caqvccparamsscrout01; //type: uint32
        ydk::YLeaf caqvccparamsbcsin0; //type: uint32
        ydk::YLeaf caqvccparamsbcsin01; //type: uint32
        ydk::YLeaf caqvccparamsbcsout0; //type: uint32
        ydk::YLeaf caqvccparamsbcsout01; //type: uint32
        ydk::YLeaf caqvccparamsinheritlevel; //type: Vcparamconfiglocation
        ydk::YLeaf caqvccparamsmcrin; //type: uint32
        ydk::YLeaf caqvccparamsmcrout; //type: uint32
        ydk::YLeaf caqvccparamsinvrdf; //type: uint32
        ydk::YLeaf caqvccparamsinvrif; //type: uint32
        ydk::YLeaf caqvccparamsrfl; //type: Vcparamconfiglocation
        ydk::YLeaf caqvccparamscdv; //type: uint32
        ydk::YLeaf caqvccparamscdvt; //type: uint32
        ydk::YLeaf caqvccparamsicr; //type: uint32
        ydk::YLeaf caqvccparamstbe; //type: uint32
        ydk::YLeaf caqvccparamsfrtt; //type: uint32
        ydk::YLeaf caqvccparamsnrm; //type: uint32
        ydk::YLeaf caqvccparamsinvtrm; //type: uint32
        ydk::YLeaf caqvccparamsinvcdf; //type: uint32
        ydk::YLeaf caqvccparamsadtf; //type: uint32

}; // CiscoAtmQosMib::Caqvccparamstable::Caqvccparamsentry


class CiscoAtmQosMib::Caqvpcparamstable : public ydk::Entity
{
    public:
        Caqvpcparamstable();
        ~Caqvpcparamstable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Caqvpcparamsentry; //type: CiscoAtmQosMib::Caqvpcparamstable::Caqvpcparamsentry

        std::vector<std::shared_ptr<CISCO_ATM_QOS_MIB::CiscoAtmQosMib::Caqvpcparamstable::Caqvpcparamsentry> > caqvpcparamsentry;
        
}; // CiscoAtmQosMib::Caqvpcparamstable


class CiscoAtmQosMib::Caqvpcparamstable::Caqvpcparamsentry : public ydk::Entity
{
    public:
        Caqvpcparamsentry();
        ~Caqvpcparamsentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: int32 (refers to IF_MIB::IfMib::Iftable::Ifentry::ifindex)
        ydk::YLeaf ifindex;
        //type: int32 (refers to ATM_MIB::AtmMib::Atmvpltable::Atmvplentry::atmvplvpi)
        ydk::YLeaf atmvplvpi;
        ydk::YLeaf caqvpcparamsvpstate; //type: Vpstate
        ydk::YLeaf caqvpcparamspeakrate; //type: uint32
        ydk::YLeaf caqvpcparamscesrate; //type: uint32
        ydk::YLeaf caqvpcparamsdatavccount; //type: int32
        ydk::YLeaf caqvpcparamscesvccount; //type: int32
        ydk::YLeaf caqvpcparamsvcdf4seg; //type: int32
        ydk::YLeaf caqvpcparamsvcdf4ete; //type: int32
        ydk::YLeaf caqvpcparamsscr; //type: uint32
        ydk::YLeaf caqvpcparamsmbs; //type: uint32
        ydk::YLeaf caqvpcparamsavailbw; //type: uint32

}; // CiscoAtmQosMib::Caqvpcparamstable::Caqvpcparamsentry


class CiscoAtmQosMib::Caqqueuingparamstable : public ydk::Entity
{
    public:
        Caqqueuingparamstable();
        ~Caqqueuingparamstable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Caqqueuingparamsentry; //type: CiscoAtmQosMib::Caqqueuingparamstable::Caqqueuingparamsentry

        std::vector<std::shared_ptr<CISCO_ATM_QOS_MIB::CiscoAtmQosMib::Caqqueuingparamstable::Caqqueuingparamsentry> > caqqueuingparamsentry;
        
}; // CiscoAtmQosMib::Caqqueuingparamstable


class CiscoAtmQosMib::Caqqueuingparamstable::Caqqueuingparamsentry : public ydk::Entity
{
    public:
        Caqqueuingparamsentry();
        ~Caqqueuingparamsentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: int32 (refers to IF_MIB::IfMib::Iftable::Ifentry::ifindex)
        ydk::YLeaf ifindex;
        //type: int32 (refers to ATM_MIB::AtmMib::Atmvcltable::Atmvclentry::atmvclvpi)
        ydk::YLeaf atmvclvpi;
        //type: int32 (refers to ATM_MIB::AtmMib::Atmvcltable::Atmvclentry::atmvclvci)
        ydk::YLeaf atmvclvci;
        ydk::YLeaf caqqueuingparamsmeanqdepth; //type: uint32

}; // CiscoAtmQosMib::Caqqueuingparamstable::Caqqueuingparamsentry


class CiscoAtmQosMib::Caqqueuingparamsclasstable : public ydk::Entity
{
    public:
        Caqqueuingparamsclasstable();
        ~Caqqueuingparamsclasstable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Caqqueuingparamsclassentry; //type: CiscoAtmQosMib::Caqqueuingparamsclasstable::Caqqueuingparamsclassentry

        std::vector<std::shared_ptr<CISCO_ATM_QOS_MIB::CiscoAtmQosMib::Caqqueuingparamsclasstable::Caqqueuingparamsclassentry> > caqqueuingparamsclassentry;
        
}; // CiscoAtmQosMib::Caqqueuingparamsclasstable


class CiscoAtmQosMib::Caqqueuingparamsclasstable::Caqqueuingparamsclassentry : public ydk::Entity
{
    public:
        Caqqueuingparamsclassentry();
        ~Caqqueuingparamsclassentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: int32 (refers to IF_MIB::IfMib::Iftable::Ifentry::ifindex)
        ydk::YLeaf ifindex;
        //type: int32 (refers to ATM_MIB::AtmMib::Atmvcltable::Atmvclentry::atmvclvpi)
        ydk::YLeaf atmvclvpi;
        //type: int32 (refers to ATM_MIB::AtmMib::Atmvcltable::Atmvclentry::atmvclvci)
        ydk::YLeaf atmvclvci;
        ydk::YLeaf caqqueuingparamsclassindex; //type: int32
        ydk::YLeaf caqqueuingparamsclassranddrp; //type: uint32
        ydk::YLeaf caqqueuingparamsclasstaildrp; //type: uint32
        ydk::YLeaf caqqueuingparamsclassminthre; //type: uint32
        ydk::YLeaf caqqueuingparamsclassmaxthre; //type: uint32
        ydk::YLeaf caqqueuingparamsclassmrkprob; //type: uint32

}; // CiscoAtmQosMib::Caqqueuingparamsclasstable::Caqqueuingparamsclassentry

class Vcparamconfiglocation : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf configDefault;
        static const ydk::Enum::YLeaf configVcDirect;
        static const ydk::Enum::YLeaf configVcClass;
        static const ydk::Enum::YLeaf configVcClassSubInterface;
        static const ydk::Enum::YLeaf configVcClassInterface;

};

class Vpstate : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf vpStateInactive;
        static const ydk::Enum::YLeaf vpStateActive;

};


}
}

#endif /* _CISCO_ATM_QOS_MIB_ */

