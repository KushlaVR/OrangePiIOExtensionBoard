.PHONY: clean All

All:
	@echo "----------Building project:[ BoardTests - Debug ]----------"
	@cd "BoardTests" && "$(MAKE)" -f  "BoardTests.mk"
clean:
	@echo "----------Cleaning project:[ BoardTests - Debug ]----------"
	@cd "BoardTests" && "$(MAKE)" -f  "BoardTests.mk" clean
