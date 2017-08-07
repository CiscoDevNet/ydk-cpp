#ifndef _CISCO_ENHANCED_MEMPOOL_MIB_
#define _CISCO_ENHANCED_MEMPOOL_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xe {
namespace CISCO_ENHANCED_MEMPOOL_MIB {

class CiscoEnhancedMempoolMib : public ydk::Entity
{
    public:
        CiscoEnhancedMempoolMib();
        ~CiscoEnhancedMempoolMib();

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

        class Cempnotificationconfig; //type: CiscoEnhancedMempoolMib::Cempnotificationconfig
        class Cempmempooltable; //type: CiscoEnhancedMempoolMib::Cempmempooltable
        class Cempmembufferpooltable; //type: CiscoEnhancedMempoolMib::Cempmembufferpooltable
        class Cempmembuffercachepooltable; //type: CiscoEnhancedMempoolMib::Cempmembuffercachepooltable

        std::shared_ptr<CISCO_ENHANCED_MEMPOOL_MIB::CiscoEnhancedMempoolMib::Cempmembuffercachepooltable> cempmembuffercachepooltable;
        std::shared_ptr<CISCO_ENHANCED_MEMPOOL_MIB::CiscoEnhancedMempoolMib::Cempmembufferpooltable> cempmembufferpooltable;
        std::shared_ptr<CISCO_ENHANCED_MEMPOOL_MIB::CiscoEnhancedMempoolMib::Cempmempooltable> cempmempooltable;
        std::shared_ptr<CISCO_ENHANCED_MEMPOOL_MIB::CiscoEnhancedMempoolMib::Cempnotificationconfig> cempnotificationconfig;
        
}; // CiscoEnhancedMempoolMib


class CiscoEnhancedMempoolMib::Cempnotificationconfig : public ydk::Entity
{
    public:
        Cempnotificationconfig();
        ~Cempnotificationconfig();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cempmembuffernotifyenabled; //type: boolean

}; // CiscoEnhancedMempoolMib::Cempnotificationconfig


class CiscoEnhancedMempoolMib::Cempmempooltable : public ydk::Entity
{
    public:
        Cempmempooltable();
        ~Cempmempooltable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Cempmempoolentry; //type: CiscoEnhancedMempoolMib::Cempmempooltable::Cempmempoolentry

        std::vector<std::shared_ptr<CISCO_ENHANCED_MEMPOOL_MIB::CiscoEnhancedMempoolMib::Cempmempooltable::Cempmempoolentry> > cempmempoolentry;
        
}; // CiscoEnhancedMempoolMib::Cempmempooltable


class CiscoEnhancedMempoolMib::Cempmempooltable::Cempmempoolentry : public ydk::Entity
{
    public:
        Cempmempoolentry();
        ~Cempmempoolentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: int32 (refers to ENTITY_MIB::EntityMib::Entphysicaltable::Entphysicalentry::entphysicalindex)
        ydk::YLeaf entphysicalindex;
        ydk::YLeaf cempmempoolindex; //type: int32
        ydk::YLeaf cempmempooltype; //type: Cempmempooltypes
        ydk::YLeaf cempmempoolname; //type: string
        ydk::YLeaf cempmempoolplatformmemory; //type: string
        ydk::YLeaf cempmempoolalternate; //type: int32
        ydk::YLeaf cempmempoolvalid; //type: boolean
        ydk::YLeaf cempmempoolused; //type: uint32
        ydk::YLeaf cempmempoolfree; //type: uint32
        ydk::YLeaf cempmempoollargestfree; //type: uint32
        ydk::YLeaf cempmempoollowestfree; //type: uint32
        ydk::YLeaf cempmempoolusedlowwatermark; //type: uint32
        ydk::YLeaf cempmempoolallochit; //type: uint32
        ydk::YLeaf cempmempoolallocmiss; //type: uint32
        ydk::YLeaf cempmempoolfreehit; //type: uint32
        ydk::YLeaf cempmempoolfreemiss; //type: uint32
        ydk::YLeaf cempmempoolshared; //type: uint32
        ydk::YLeaf cempmempoolusedovrflw; //type: uint32
        ydk::YLeaf cempmempoolhcused; //type: uint64
        ydk::YLeaf cempmempoolfreeovrflw; //type: uint32
        ydk::YLeaf cempmempoolhcfree; //type: uint64
        ydk::YLeaf cempmempoollargestfreeovrflw; //type: uint32
        ydk::YLeaf cempmempoolhclargestfree; //type: uint64
        ydk::YLeaf cempmempoollowestfreeovrflw; //type: uint32
        ydk::YLeaf cempmempoolhclowestfree; //type: uint64
        ydk::YLeaf cempmempoolusedlowwatermarkovrflw; //type: uint32
        ydk::YLeaf cempmempoolhcusedlowwatermark; //type: uint64
        ydk::YLeaf cempmempoolsharedovrflw; //type: uint32
        ydk::YLeaf cempmempoolhcshared; //type: uint64

}; // CiscoEnhancedMempoolMib::Cempmempooltable::Cempmempoolentry


class CiscoEnhancedMempoolMib::Cempmembufferpooltable : public ydk::Entity
{
    public:
        Cempmembufferpooltable();
        ~Cempmembufferpooltable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Cempmembufferpoolentry; //type: CiscoEnhancedMempoolMib::Cempmembufferpooltable::Cempmembufferpoolentry

        std::vector<std::shared_ptr<CISCO_ENHANCED_MEMPOOL_MIB::CiscoEnhancedMempoolMib::Cempmembufferpooltable::Cempmembufferpoolentry> > cempmembufferpoolentry;
        
}; // CiscoEnhancedMempoolMib::Cempmembufferpooltable


class CiscoEnhancedMempoolMib::Cempmembufferpooltable::Cempmembufferpoolentry : public ydk::Entity
{
    public:
        Cempmembufferpoolentry();
        ~Cempmembufferpoolentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: int32 (refers to ENTITY_MIB::EntityMib::Entphysicaltable::Entphysicalentry::entphysicalindex)
        ydk::YLeaf entphysicalindex;
        ydk::YLeaf cempmembufferpoolindex; //type: uint32
        ydk::YLeaf cempmembuffermempoolindex; //type: int32
        ydk::YLeaf cempmembuffername; //type: string
        ydk::YLeaf cempmembufferdynamic; //type: boolean
        ydk::YLeaf cempmembuffersize; //type: uint32
        ydk::YLeaf cempmembuffermin; //type: uint32
        ydk::YLeaf cempmembuffermax; //type: uint32
        ydk::YLeaf cempmembufferpermanent; //type: uint32
        ydk::YLeaf cempmembuffertransient; //type: uint32
        ydk::YLeaf cempmembuffertotal; //type: uint32
        ydk::YLeaf cempmembufferfree; //type: uint32
        ydk::YLeaf cempmembufferhit; //type: uint32
        ydk::YLeaf cempmembuffermiss; //type: uint32
        ydk::YLeaf cempmembufferfreehit; //type: uint32
        ydk::YLeaf cempmembufferfreemiss; //type: uint32
        ydk::YLeaf cempmembufferpermchange; //type: int32
        ydk::YLeaf cempmembufferpeak; //type: uint32
        ydk::YLeaf cempmembufferpeaktime; //type: uint32
        ydk::YLeaf cempmembuffertrim; //type: uint32
        ydk::YLeaf cempmembuffergrow; //type: uint32
        ydk::YLeaf cempmembufferfailures; //type: uint32
        ydk::YLeaf cempmembuffernostorage; //type: uint32

}; // CiscoEnhancedMempoolMib::Cempmembufferpooltable::Cempmembufferpoolentry


class CiscoEnhancedMempoolMib::Cempmembuffercachepooltable : public ydk::Entity
{
    public:
        Cempmembuffercachepooltable();
        ~Cempmembuffercachepooltable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Cempmembuffercachepoolentry; //type: CiscoEnhancedMempoolMib::Cempmembuffercachepooltable::Cempmembuffercachepoolentry

        std::vector<std::shared_ptr<CISCO_ENHANCED_MEMPOOL_MIB::CiscoEnhancedMempoolMib::Cempmembuffercachepooltable::Cempmembuffercachepoolentry> > cempmembuffercachepoolentry;
        
}; // CiscoEnhancedMempoolMib::Cempmembuffercachepooltable


class CiscoEnhancedMempoolMib::Cempmembuffercachepooltable::Cempmembuffercachepoolentry : public ydk::Entity
{
    public:
        Cempmembuffercachepoolentry();
        ~Cempmembuffercachepoolentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: int32 (refers to ENTITY_MIB::EntityMib::Entphysicaltable::Entphysicalentry::entphysicalindex)
        ydk::YLeaf entphysicalindex;
        //type: uint32 (refers to CISCO_ENHANCED_MEMPOOL_MIB::CiscoEnhancedMempoolMib::Cempmembufferpooltable::Cempmembufferpoolentry::cempmembufferpoolindex)
        ydk::YLeaf cempmembufferpoolindex;
        ydk::YLeaf cempmembuffercachesize; //type: uint32
        ydk::YLeaf cempmembuffercachetotal; //type: uint32
        ydk::YLeaf cempmembuffercacheused; //type: uint32
        ydk::YLeaf cempmembuffercachehit; //type: uint32
        ydk::YLeaf cempmembuffercachemiss; //type: uint32
        ydk::YLeaf cempmembuffercachethreshold; //type: uint32
        ydk::YLeaf cempmembuffercachethresholdcount; //type: uint32

}; // CiscoEnhancedMempoolMib::Cempmembuffercachepooltable::Cempmembuffercachepoolentry

class Cempmempooltypes : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf other;
        static const ydk::Enum::YLeaf processorMemory;
        static const ydk::Enum::YLeaf ioMemory;
        static const ydk::Enum::YLeaf pciMemory;
        static const ydk::Enum::YLeaf fastMemory;
        static const ydk::Enum::YLeaf multibusMemory;
        static const ydk::Enum::YLeaf interruptStackMemory;
        static const ydk::Enum::YLeaf processStackMemory;
        static const ydk::Enum::YLeaf localExceptionMemory;
        static const ydk::Enum::YLeaf virtualMemory;
        static const ydk::Enum::YLeaf reservedMemory;
        static const ydk::Enum::YLeaf imageMemory;
        static const ydk::Enum::YLeaf asicMemory;
        static const ydk::Enum::YLeaf posixMemory;

};


}
}

#endif /* _CISCO_ENHANCED_MEMPOOL_MIB_ */

