/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <sstream>
#include <limits>

#include "ifcpp/model/IfcPPException.h"
#include "ifcpp/model/IfcPPAttributeObject.h"
#include "ifcpp/model/IfcPPGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4/include/IfcBooleanClippingResult.h"
#include "ifcpp/IFC4/include/IfcBooleanOperand.h"
#include "ifcpp/IFC4/include/IfcBooleanOperator.h"
#include "ifcpp/IFC4/include/IfcPresentationLayerAssignment.h"
#include "ifcpp/IFC4/include/IfcStyledItem.h"

// ENTITY IfcBooleanClippingResult 
IfcBooleanClippingResult::IfcBooleanClippingResult() {}
IfcBooleanClippingResult::IfcBooleanClippingResult( int id ) { m_entity_id = id; }
IfcBooleanClippingResult::~IfcBooleanClippingResult() {}
shared_ptr<IfcPPObject> IfcBooleanClippingResult::getDeepCopy( IfcPPCopyOptions& options )
{
	shared_ptr<IfcBooleanClippingResult> copy_self( new IfcBooleanClippingResult() );
	if( m_Operator ) { copy_self->m_Operator = dynamic_pointer_cast<IfcBooleanOperator>( m_Operator->getDeepCopy(options) ); }
	if( m_FirstOperand ) { copy_self->m_FirstOperand = dynamic_pointer_cast<IfcBooleanOperand>( m_FirstOperand->getDeepCopy(options) ); }
	if( m_SecondOperand ) { copy_self->m_SecondOperand = dynamic_pointer_cast<IfcBooleanOperand>( m_SecondOperand->getDeepCopy(options) ); }
	return copy_self;
}
void IfcBooleanClippingResult::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_entity_id << "= IFCBOOLEANCLIPPINGRESULT" << "(";
	if( m_Operator ) { m_Operator->getStepParameter( stream ); } else { stream << "*"; }
	stream << ",";
	if( m_FirstOperand ) { m_FirstOperand->getStepParameter( stream, true ); } else { stream << "*" ; }
	stream << ",";
	if( m_SecondOperand ) { m_SecondOperand->getStepParameter( stream, true ); } else { stream << "*" ; }
	stream << ");";
}
void IfcBooleanClippingResult::getStepParameter( std::stringstream& stream, bool ) const { stream << "#" << m_entity_id; }
const std::wstring IfcBooleanClippingResult::toString() const { return L"IfcBooleanClippingResult"; }
void IfcBooleanClippingResult::readStepArguments( const std::vector<std::wstring>& args, const std::map<int,shared_ptr<IfcPPEntity> >& map )
{
	const size_t num_args = args.size();
	if( num_args != 3 ){ std::stringstream err; err << "Wrong parameter count for entity IfcBooleanClippingResult, expecting 3, having " << num_args << ". Entity ID: " << m_entity_id << std::endl; throw IfcPPException( err.str().c_str() ); }
	m_Operator = IfcBooleanOperator::createObjectFromSTEP( args[0], map );
	m_FirstOperand = IfcBooleanOperand::createObjectFromSTEP( args[1], map );
	m_SecondOperand = IfcBooleanOperand::createObjectFromSTEP( args[2], map );
}
void IfcBooleanClippingResult::getAttributes( std::vector<std::pair<std::string, shared_ptr<IfcPPObject> > >& vec_attributes )
{
	IfcBooleanResult::getAttributes( vec_attributes );
}
void IfcBooleanClippingResult::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<IfcPPObject> > >& vec_attributes_inverse )
{
	IfcBooleanResult::getAttributesInverse( vec_attributes_inverse );
}
void IfcBooleanClippingResult::setInverseCounterparts( shared_ptr<IfcPPEntity> ptr_self_entity )
{
	IfcBooleanResult::setInverseCounterparts( ptr_self_entity );
}
void IfcBooleanClippingResult::unlinkFromInverseCounterparts()
{
	IfcBooleanResult::unlinkFromInverseCounterparts();
}